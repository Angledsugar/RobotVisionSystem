using uk.vroad.api;
using uk.vroad.api.input;

using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Controls;

namespace uk.vroad.ucm
{
    public abstract class UaMouse: MonoBehaviour
    {
        public static UaMouse MostRecentInstance { get; private set;  }

        protected const float SCALE_MOUSE_DRAG = 0.1f;
        private const float SCALE_MOUSE_SCROLL = 0.005f;
        private const int COUNT_SCROLL = 20;

        protected Vector2 prevPosMouse;
        protected bool wasDraggingMouse;

        private int scrollCountDown;
        
 
        protected abstract App App();
        protected virtual void Awake()
        {
            MostRecentInstance = this;
        }

        protected virtual void Update()
        {
            if (Application.isFocused)
            {
                Mouse mouse = Mouse.current;
                Keyboard kb = Keyboard.current;
                if (mouse != null) HandleMouse(mouse, kb);
            }
        }

        protected virtual ButtonControl RotateButton(Mouse mouse)
        {
            return mouse.rightButton;
        }
        protected virtual void HandleMouse(Mouse mouse, Keyboard kb)
        {
            AppInputHandler aih = App().Aih();

            ButtonControl mouseButtonRotate = RotateButton(mouse);
            
            if (mouseButtonRotate.wasPressedThisFrame)
            {
                prevPosMouse = mouse.position.ReadValue();
            }
            
            else if (mouseButtonRotate.isPressed)
            {
                Vector2 currentPos =  mouse.position.ReadValue();
                float rotateX = SCALE_MOUSE_DRAG * (currentPos.x - prevPosMouse.x);
                aih.FireAnalogEvent(AppAnalogFn.Rotate, rotateX);

                prevPosMouse = currentPos;
                wasDraggingMouse = true;
            }
            
            else if (wasDraggingMouse)
            {
                bool alt = kb != null && kb.altKey.isPressed;
                if (!alt) aih.FireAnalogEvent(AppAnalogFn.Rotate, 0);
                if (!alt) aih.FireAnalogEvent(AppAnalogFn.Zoom, 0);
                // hold alt down and release mouse while still moving to 'throw'
                // i.e. keep tilting (or rotating) at constant rate after mouse is released

                wasDraggingMouse = false;
            }

            float scroll = mouse.scroll.ReadValue().y;

            if (scroll != 0)
            {
                float zoomScroll = scroll * SCALE_MOUSE_SCROLL;
                aih.FireAnalogEvent(AppAnalogFn.Zoom, zoomScroll);
                scrollCountDown = COUNT_SCROLL;
            }
            else if (scrollCountDown > 1) scrollCountDown--;
            else if (scrollCountDown == 1)
            {
                scrollCountDown = 0;
                aih.FireAnalogEvent(AppAnalogFn.Zoom, 0);
            }
        }


    }
}