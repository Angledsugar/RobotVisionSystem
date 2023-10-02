using uk.vroad.api;
using uk.vroad.api.events;
using uk.vroad.api.input;
using uk.vroad.api.str;

using UnityEngine;
using UnityEngine.UI;

namespace uk.vroad.ucm
{
    public abstract class UaMenu : MonoBehaviour, LAppState, LAppInput
    {
        protected abstract App App();
        protected abstract GameObject CentralPanel();
        
        public GameObject helpPanel;
        public GameObject menuButtonPrefab;

        private static bool helpPanelForceVisible;
        
        protected static readonly Button[] NO_BUTTONS = new Button[0];
        protected static readonly Image[] NO_IMAGES = new Image[0];

        private AppInputHandler aih;
        private Button[] menuButtons = NO_BUTTONS;
        private Image[] menuImages = NO_IMAGES;
        protected int rebuildMenuInTicks;


        /// <summary> The state the game must be in to use this menu </summary>
        protected abstract AppState MenuState();

        protected virtual void Awake()
        {
            aih = App().Aih();
            App().AddEventConsumer(this);
            
        }

        protected virtual void Start()
        {
           
            RebuildMenuLater();
        }

        

        protected virtual void Update()
        {
          
            if (--rebuildMenuInTicks == 0) RebuildMenu();

            int nb = menuButtons.Length;
            if (nb > 0)
            {
                AppPauseMenu menu = aih.CurrentMenu();
                AppDigitalFn[] fna  = menu.Functions();
                int currentlySelected = aih.CurrentMenuPosition();

                int nf = fna.Length;
                if (nf < nb) nb = nf;
                
                for (int bi = 0; bi < nb; bi++)
                {
                    bool isSel = bi == currentlySelected;
                    menuImages[bi].fillCenter = isSel;

                    AppDigitalFn fn = fna[bi];
                    
                   
                    UpdateMenuFunction(fn, isSel);
                }
            }
        }
        
        
        protected virtual void UpdateMenuFunction(AppDigitalFn fn, bool isSel)
        {
            
        }

        public bool DeregisterFireMapChange()  { return true; }
       
        public void AppStateChanged(AppStateTransition ast)
        {
            RebuildMenuLater();
        }

        private void RebuildMenuLater()
        {
            rebuildMenuInTicks = 2;
        }

        public static void HelpPanelForceVisible(bool v) {  helpPanelForceVisible = v; }
        
        protected virtual void RebuildMenu()
        {
            foreach (Button mb in menuButtons) Destroy(mb.gameObject);
            menuButtons = NO_BUTTONS;
            menuImages = NO_IMAGES;

            AppPauseMenu menu = aih.CurrentMenu();
            AppDigitalFn[] fna  = menu.Functions();
            int nf = fna.Length;
            if (nf == 0)  helpPanel.SetActive(helpPanelForceVisible); // No menu buttons. Perhaps progress bar wants help panel
            
            bool menuActive = App().Asm().CurrentState() == MenuState();
            
            if (!menuActive || nf == 0) return;

            helpPanel.SetActive(true); // 
           
            float scw = Screen.width;
            float sch = Screen.height;
            float mx = 0.02f * scw; // margin
            float my = 0.04f * sch;
            float buttonW = 0.10f * scw;
            float buttonH = 0.06f * sch;
            float buttonWS = 0.02f * scw;
            float buttonHS = 0.01f * sch;
            float x = mx + (0.5f * buttonW); 
            float y = (sch - my) - (0.5f * buttonH);

            RectTransform hcrt = CentralPanel().GetComponentInChildren<RectTransform>();
            hcrt.anchoredPosition = new Vector2(0.5f * (buttonW + buttonWS), -buttonH);
            float size = (scw - (mx + buttonW + buttonWS + mx)) / 1200f;
            hcrt.localScale = new Vector3(size, size, 1);
           
            menuButtons = new Button[nf];
            menuImages = new Image[nf];

            for (int fi = 0; fi < nf; fi++)
            {
                AppDigitalFn fn = fna[fi];
                string translatedLabel = Babyl.Translation(fn.ToString());
                
                Vector3 position = new Vector3(x, y, 0);
                GameObject buttonGO = Instantiate(menuButtonPrefab, position, Quaternion.identity, helpPanel.transform);
                
                RectTransform rt = buttonGO.GetComponentInChildren<RectTransform>();
                rt.sizeDelta = new Vector2(buttonW, buttonH);
                Text buttonLabel = buttonGO.GetComponentInChildren<Text>();
                buttonLabel.text = translatedLabel;
                int index = fi; // cannot use loop variable, this is equivalent of 'final int'
                Button button = buttonGO.GetComponent<Button>();
                button.onClick.AddListener(delegate
                {
                    aih.SelectCurrentMenuElement(index);
                });
                
                menuButtons[fi] = button;
                menuImages[fi] = buttonGO.GetComponent<Image>();

                float lx = x + buttonW + buttonWS;
                
                BuildSubMenu(fn, lx, y, buttonWS, buttonW, buttonH);
                
               
                y -= (buttonH + buttonHS);
            }
        }

        // When a menu button is built on the main vertical menu, this call allows a secondary
        // horizontal menu to be created
       
        protected virtual void BuildSubMenu(AppDigitalFn fn, float lx, float y, float buttonWS, float buttonW,
            float buttonH)
        {
           

        }
       
        public bool AppInputAnalogEvent(AppAnalogFn afn, double value) { return false; }

        public bool AppInputDigitalEvent(AppDigitalFn fn, bool isPressed)
        {
            if (!isPressed) return false;

            AppState a = App().Asm().CurrentState();
            AppState b = MenuState();
            
            if (App().Asm().CurrentState() != MenuState()) return false;

            // Resume is handled according to which menu is active
            // For MenuMap it is handled in LevelManager, for Trip and Play in GameSimControl.Resume()
            // which calls through to GameStateMachine.Resume
            
            // Mission, Controls and Graphics are 'passive' - see Fixed Update
            bool menuLeft = fn == AppDigitalFn.MenuLeft;
            bool menuRight = fn == AppDigitalFn.MenuRight;
            if (menuLeft || menuRight)
            {
                AppPauseMenu menu = aih.CurrentMenu();
                AppDigitalFn[] fna = menu.Functions();
                int selFnI = aih.CurrentMenuPosition();
                if (selFnI >= 0 && selFnI < fna.Length)
                {
                    return HandleMenuLeftRight(fna[selFnI], menuRight);
                }
            }

            // The menu select action will come through to here, but it is handled in GamePlay
            // GamePlay will push through the action for the currently selected button immediately afterwards
            if (fn == AppDigitalFn.MenuSelect) return true;
            
           
            return MenuItemPressed(fn);
        }



        protected virtual bool MenuItemPressed(AppDigitalFn fn)
        {
            if (fn == AppDigitalFn.MenuExit)
            {
                UExitHandler.AppExitStatic(App());
                
                // In some modes, we need to resume the simulation engine for a single
                // step so that it can kill all the simulation workers and the master thread cleanly
                //
                // otherwise UExitHandler.FixedUpdate will stick waiting for simulation threads to die
                //
                // This is almost the same as pressing the resume button after the exit button
                App().Ew().FireAppDigitalEvent(AppDigitalFn.MenuResume, true);

                return true;
            }

            return false;
        }

        protected virtual bool HandleMenuLeftRight(AppDigitalFn selFn, bool menuRight)
        {
            
            return false;
        }

        public void Pause()
        {
            aih.FireDigitalEvent(AppDigitalFn.Pause, true);
        }

    }
}
