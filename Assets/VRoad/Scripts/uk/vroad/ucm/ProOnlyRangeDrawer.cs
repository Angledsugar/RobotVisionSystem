using uk.vroad.api.enums;
using uk.vroad.pac;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace uk.vroad.ucm
{
    public class ProOnlyRangeAttribute : PropertyAttribute
    {
        public float min;
        public float max;
        public ProOnlyRangeAttribute(float _min, float _max)
        {
            this.min = _min;
            this.max = _max;
        }
    }
#if UNITY_EDITOR
    [CustomPropertyDrawer(typeof(ProOnlyRangeAttribute))]
    public class ProOnlyRangeDrawer : PropertyDrawer
    {
        private static readonly bool gotPro = VRoad.GotPro();
        private const string LITE_PREFIX = "[Pro] ";
        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            return EditorGUI.GetPropertyHeight(property, label, true);
        }
 
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            if (gotPro)
            {
                // First get the attribute since it contains the range for the slider
                ProOnlyRangeAttribute range = attribute as ProOnlyRangeAttribute;
 
                // Now draw the property as a Slider or an IntSlider based on whether it's a float or integer.
                if (property.propertyType == SerializedPropertyType.Float)
                    EditorGUI.Slider(position, property, range.min, range.max, label);
                else if (property.propertyType == SerializedPropertyType.Integer)
                    EditorGUI.IntSlider(position, property, (int)range.min, (int)range.max, label);
                else
                    EditorGUI.LabelField(position, label.text, "Use Range with float or int.");
                //  EditorGUI.PropertyField(position, property, label, true);
            }
            else
            {
                GUI.enabled = false;
                EditorGUI.LabelField(position, new GUIContent(LITE_PREFIX +label.text, label.tooltip));
                GUI.enabled = true;
            }
            
            
        }
    }
#endif
}