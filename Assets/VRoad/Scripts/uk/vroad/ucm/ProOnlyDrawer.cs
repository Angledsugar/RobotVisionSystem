using uk.vroad.pac;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif


// This class is not in the Editor folder (and namespace) because it is required by UaMapMesh

namespace uk.vroad.ucm
{
    /// <summary> This is used to tag a public field as being one that is modifiable only with the ProVariant </summary>
    public class ProOnlyAttribute : PropertyAttribute
    {
 
    }
#if UNITY_EDITOR
    [CustomPropertyDrawer(typeof(ProOnlyAttribute))]
    public class ProOnlyDrawer : PropertyDrawer
    {
        private static readonly bool gotPro = VRoad.GotPro();
        private const string LITE_PREFIX = "[Pro] ";
        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            return EditorGUI.GetPropertyHeight(property, label, true);
        }
 
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            GUI.enabled = gotPro;
            
            if (gotPro) EditorGUI.PropertyField(position, property, label, true);
            else        EditorGUI.LabelField(position, new GUIContent(LITE_PREFIX +label.text, label.tooltip));

            GUI.enabled = true;
        }
    }
#endif
}
