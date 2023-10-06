using uk.vroad.api;
using uk.vroad.api.etc;
using uk.vroad.api.input;
using uk.vroad.api.str;
using uk.vroad.apk;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Controls;
using UnityEngine.InputSystem.Layouts;


namespace uk.vroad.ucm
{
    /// <summary> A helper class to enable the use of an XBox/Playstation style GamePad </summary>
    
    public abstract class UaGamePad : MonoBehaviour
    {
        public bool showInputs;
        
        protected abstract App App();


        private KHash<AppButton, ButtonControl> gpButtonToUnityButton = new KHash<AppButton, ButtonControl>();
        private KHash<AppAxis, StickAxis> gpAxisToUnityAxis = new KHash<AppAxis, StickAxis>();
        private KHash<AppAxis, ButtonControl[]> gpAxisToUnityButtonPair = new KHash<AppAxis, ButtonControl[]>();

        private int gamepadInUseID = -1;

        void Update()
        {
            int highestID = -1;
            Gamepad gamepadNow = null;
            
            foreach (Gamepad gp in Gamepad.all)
            {
                if (gp.deviceId > highestID)
                {
                    highestID = gp.deviceId;
                    gamepadNow = gp;
                }
            }
            
            if (gamepadInUseID >= 0 && (gamepadNow == null || highestID != gamepadInUseID)) // previously had a gamepad
            {
                App().Aih().FireDigitalEvent(AppDigitalFn.Pause, true);

                gpButtonToUnityButton.Clear();
                gpAxisToUnityAxis.Clear();
                gpAxisToUnityButtonPair.Clear();
                
                SU.Report(SU.PAD_01, gamepadInUseID);

                gamepadInUseID = -1;

                App().Aih().FireDigitalEvent(AppDigitalFn.Pause, true);
            }
           
            if (gamepadNow != null)
            {
                if (gamepadInUseID < 0)
                {
                    SetupGamepad(gamepadNow);
                }

                foreach (AppButton gpButton in gamePadButtons)
                {
                    ButtonControl bc = gpButtonToUnityButton.Get(gpButton);
                    if (bc == null) continue;

                    // Standard buttons do not have auto-repeat, but if axes are used as buttons,
                    // then we need to use was..thisFrame otherwise stick will fight with button
                    // button will report press, stick will report release, and you will end up getting
                    // multiple presses
                    if (bc.wasPressedThisFrame) App().Aih().SetDigitalState(gpButton, true);
                    if (bc.wasReleasedThisFrame) App().Aih().SetDigitalState(gpButton, false);

                    
                    if (showInputs && bc.wasPressedThisFrame)
                    {
                        Reporter.Report("AppButton %s pressed", gpButton);
                    }

                    
                    //game.Aih().SetDigitalState(gpButton, bc.isPressed);
                }

                foreach (AppAxis gpAxis in gamePlayAxes)
                {
                    StickAxis sa = gpAxisToUnityAxis.Get(gpAxis);
                    if (sa != null)
                    {
                        Vector2 valuesXY = sa.stickControl.ReadValue();
                        double value = sa.isHorizontal ? valuesXY.x : valuesXY.y;

                        if (showInputs && value != 0)
                        {
                            Reporter.Report("AppAxis %s value %.3f values X %.3f Y %.3f",
                                gpAxis, value, valuesXY.x, valuesXY.y);
                        }

                        App().Aih().SetAnalogValue(gpAxis, value);
                    }
                    else
                    {
                        ButtonControl[] ba = gpAxisToUnityButtonPair.Get(gpAxis);
                        if (ba != null && ba.Length == 2)
                        {
                            float neg = ba[0].ReadValue();
                            float pos = ba[1].ReadValue();
                            // If both buttons are pressed, choose the larger
                            if /**/ (pos > neg) App().Aih().SetAnalogValue(gpAxis, pos);
                            else if (neg > pos) App().Aih().SetAnalogValue(gpAxis, -neg);
                            else App().Aih().SetAnalogValue(gpAxis, 0);
                            
                            
                            if (showInputs && (pos > 0 || neg > 0))
                            {
                                Reporter.Report("AppAxis [BUTTON]  %s value %.3f ",
                                    gpAxis, pos > neg? pos: -neg);
                            }
                        }
                        
                       

                    }
                }
            }

        }

        private void SetupGamepad(Gamepad gp)
        {
            if (gp == null) return;

            gamepadInUseID = gp.deviceId;

            InputDeviceDescription desc = gp.description;
            SU.Report(SU.PAD_02, gp.GetType().Name, desc.serial, gp.displayName, gp.deviceId);

            gpButtonToUnityButton.Put(GamePadButtons.DPad_Up, gp.dpad.up);
            gpButtonToUnityButton.Put(GamePadButtons.DPad_Down, gp.dpad.down);
            gpButtonToUnityButton.Put(GamePadButtons.DPad_Left, gp.dpad.left);
            gpButtonToUnityButton.Put(GamePadButtons.DPad_Right, gp.dpad.right);

            gpButtonToUnityButton.Put(GamePadButtons.LStick_Up, gp.leftStick.up);
            gpButtonToUnityButton.Put(GamePadButtons.LStick_Down, gp.leftStick.down);
            gpButtonToUnityButton.Put(GamePadButtons.LStick_Left, gp.leftStick.left);
            gpButtonToUnityButton.Put(GamePadButtons.LStick_Right, gp.leftStick.right);

            gpButtonToUnityButton.Put(GamePadButtons.RStick_Up, gp.rightStick.up);
            gpButtonToUnityButton.Put(GamePadButtons.RStick_Down, gp.rightStick.down);
            gpButtonToUnityButton.Put(GamePadButtons.RStick_Left, gp.rightStick.left);
            gpButtonToUnityButton.Put(GamePadButtons.RStick_Right, gp.rightStick.right);

            gpButtonToUnityButton.Put(GamePadButtons.Yellow_Y_Triangle_Up, gp.buttonNorth); // also gp.yButton
            gpButtonToUnityButton.Put(GamePadButtons.Green_A_Cross_Down, gp.buttonSouth); // also gp.aButton
            gpButtonToUnityButton.Put(GamePadButtons.Blue_X_Square_Left, gp.buttonWest);
            gpButtonToUnityButton.Put(GamePadButtons.Red_B_Circle_Right, gp.buttonEast);

            gpButtonToUnityButton.Put(GamePadButtons.Back_Select, gp.selectButton);
            gpButtonToUnityButton.Put(GamePadButtons.Options_Start, gp.startButton);

            gpButtonToUnityButton.Put(GamePadButtons.JoyL, gp.leftStickButton);
            gpButtonToUnityButton.Put(GamePadButtons.JoyR, gp.rightStickButton);

            gpButtonToUnityButton.Put(GamePadButtons.ShoulderL, gp.leftShoulder);
            gpButtonToUnityButton.Put(GamePadButtons.ShoulderR, gp.rightShoulder);

            gpButtonToUnityButton.Put(GamePadButtons.TriggerL, gp.leftTrigger);
            gpButtonToUnityButton.Put(GamePadButtons.TriggerR, gp.rightTrigger);

            gpAxisToUnityAxis.Put(GamePadAxes.LeftH, new StickAxis(gp.leftStick, true));
            gpAxisToUnityAxis.Put(GamePadAxes.LeftV, new StickAxis(gp.leftStick, false));

            gpAxisToUnityAxis.Put(GamePadAxes.RightH, new StickAxis(gp.rightStick, true));
            gpAxisToUnityAxis.Put(GamePadAxes.RightV, new StickAxis(gp.rightStick, false));

            gpAxisToUnityButtonPair.Put(GamePadAxes.TriggerAxis, new[] {gp.leftTrigger, gp.rightTrigger,});

            // There is a playStationButton for PS4 (and PS3) but no XBox button for XInput
            //if (gp is DualShock4GamepadHID)
            //    gpButtonToUnityButton.Put(GamePadButtons.Overlay, ((DualShock4GamepadHID)gp).playStationButton);

        }


        private static AppButton[] gamePadButtons =
        {
            GamePadButtons.DPad_Up,
            GamePadButtons.DPad_Down,
            GamePadButtons.DPad_Left,
            GamePadButtons.DPad_Right,
            GamePadButtons.Yellow_Y_Triangle_Up,
            GamePadButtons.Green_A_Cross_Down,
            GamePadButtons.Blue_X_Square_Left,
            GamePadButtons.Red_B_Circle_Right,
            GamePadButtons.Back_Select,
            GamePadButtons.Options_Start,
            GamePadButtons.JoyL,
            GamePadButtons.JoyR,
            GamePadButtons.ShoulderL,
            GamePadButtons.ShoulderR,
            GamePadButtons.LStick_Up,
            GamePadButtons.LStick_Down,
            GamePadButtons.LStick_Left,
            GamePadButtons.LStick_Right,
            GamePadButtons.RStick_Up,
            GamePadButtons.RStick_Down,
            GamePadButtons.RStick_Left,
            GamePadButtons.RStick_Right,
            GamePadButtons.TriggerL,
            GamePadButtons.TriggerR,
        };

        private static AppAxis[] gamePlayAxes =
        {
            GamePadAxes.LeftH,
            GamePadAxes.LeftV,
            GamePadAxes.RightH,
            GamePadAxes.RightV,
            GamePadAxes.TriggerAxis,
        };


        public class StickAxis
        {
            public readonly StickControl stickControl;
            public readonly bool isHorizontal;

            public StickAxis(StickControl stcl, bool horizontal)
            {
                stickControl = stcl;
                isHorizontal = horizontal;
            }
        }
        
        
        
        public void ButtonOptionUp()
        {
            App().Aih().FireDigitalEvent(GamePadButtons.DPad_Up, true);
        }
        
        public void ButtonOptionLeft()
        {
            App().Aih().FireDigitalEvent(GamePadButtons.DPad_Left, true);
        }
        public void ButtonOptionRight()
        {
            App().Aih().FireDigitalEvent(GamePadButtons.DPad_Right, true);
        }
        public void ButtonOptionDown()
        {
            App().Aih().FireDigitalEvent(GamePadButtons.DPad_Down, true);
        }
        public void Pause()
        {
            App().Aih().FireDigitalEvent(AppDigitalFn.Pause, true);
        }

    }
}