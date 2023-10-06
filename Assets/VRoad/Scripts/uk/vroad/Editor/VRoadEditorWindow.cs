using System;
using uk.vroad.api.etc;
using uk.vroad.api.str;
using uk.vroad.apk;
using uk.vroad.ucm;
using UnityEditor;
using UnityEngine;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;

namespace uk.vroad.Editor
{
    /// <summary> Abstract base class for Editor Windows in Unity Projects using VRoad Assets </summary>
    public abstract class VRoadEditorWindow : EditorWindow
    {
        public abstract bool IsWindowActiveInCurrentScene();

        protected const int helpBoxHeight = 32;
        protected const float marginX = 8;
        protected const float lineY = 16;

        protected static string currentScene = SC.N;
        protected static bool hasSceneChanged;
        protected static bool trySwitchScene;
        
        protected string missingReferences = SC.N;

        /// <summary> Listener fired when the scene is changed in the Editor </summary>
        protected static void OnSceneChanged(Scene oldScene, Scene newScene)
        {
            currentScene = newScene == null ? SC.N : newScene.name;
            hasSceneChanged = true;
        }

        /// <summary> Call this to switch to a new scene, as if the scene had been double-clicked in the Project View </summary>
        protected void SwitchSceneTo(string expectedSceneName, string relScenePath)
        {
            Scene activeScene = EditorSceneManager.GetActiveScene();
            if (activeScene.isDirty)
            {
                Debug.LogWarning(KFormat.Sprintf(EDSC.SCENE_NOT_CHANGED, expectedSceneName));
                trySwitchScene = false; // set to false even if not changed
            }
            else if (EditorApplication.isPlaying) { EditorApplication.isPlaying = false; }
            else
            {
                string sceneDir = MeshTools.VRoadRoot() + SC.FS + relScenePath;
                EditorSceneManager.OpenScene(sceneDir + expectedSceneName + EDSF.SCENE_SUFFIX);

                hasSceneChanged = true;
                trySwitchScene = false;
                
                // currentScene will be set in OnSceneChanged
            }
        }

        /// <summary> Utility to display a label that looks like a blank uneditable text field </summary>
        public static void NoEditTextField(string label, string value, float columnWidth)
        {
            NoEditTextField(label, null, value, columnWidth / 2, columnWidth);
        }

        /// <summary> Utility to display a label that looks like an uneditable text field </summary>
        public static void NoEditTextField(GUIContent content, string value, float labelWidth, float columnWidth)
        {
            GUILayout.BeginHorizontal();
            {
                EditorGUILayout.LabelField(content, GUILayout.MaxWidth(labelWidth - 1));

                NoEditTextField(value, columnWidth - labelWidth);
            }
            GUILayout.EndHorizontal();
        }

        /// <summary> Utility to display a label that looks like an uneditable text field </summary>
        public static void NoEditTextField(string label, string tooltip, string value, float labelWidth,
            float columnWidth)
        {
            GUILayout.BeginHorizontal();
            {
                var content = label == null ? null :
                    tooltip == null ? new GUIContent(label) : new GUIContent(label, tooltip);
                if (content != null) EditorGUILayout.LabelField(content, GUILayout.MaxWidth(labelWidth - 1));

                NoEditTextField(value, columnWidth - labelWidth);
            }
            GUILayout.EndHorizontal();
        }

        /// <summary> Utility to display a label that looks like an unlabelled uneditable text field </summary>
        public static void NoEditTextField(string value, float width)
        {
            Color std = GUI.contentColor;
            GUI.contentColor = new Color(.3f, .7f, 1f);
            GUILayout.Label(value, EDSF.STYLE_TEXTFIELD, GUILayout.MaxWidth(width));
            GUI.contentColor = std;
        }

        /// <summary> </summary>
        protected void DisplayFileParts(string[] ccsa, float columnWidth)
        {
            if (ccsa == null || ccsa.Length != 4) ccsa = new string[] {SC.N, SC.N, SC.N, SC.N,};

            float labelWidth = 60;
            NoEditTextField(EDSC.MAP_SUBURB, null, ccsa[2], labelWidth, columnWidth);
            NoEditTextField(EDSC.MAP_CITY, null, ccsa[1], labelWidth, columnWidth);
            NoEditTextField(EDSC.MAP_COUNTRY, null, ccsa[0], labelWidth, columnWidth);
            NoEditTextField(EDSC.MAP_AREA, null, ccsa[3], labelWidth, columnWidth);
        }


        private bool setupStyles;
        protected GUIStyle linkStyle;
        protected GUIStyle footerStyle;
        protected Color footerColour;

        /// <summary> Set up some text and link styles to be used in a common footer for Editor windows</summary>
        private void SetupStyles()
        {
            setupStyles = true;

            linkStyle = new GUIStyle(GUI.skin.label);

            linkStyle.normal.textColor = new Color(0.07f, 0.57f, 0.92f);
            linkStyle.hover.textColor = new Color(0.92f, 0.79f, 0.11f);
            linkStyle.imagePosition = ImagePosition.ImageLeft;

            footerStyle = new GUIStyle(GUI.skin.label);

            float gr = 0.6f;
            footerColour = new Color(gr, gr, gr);

            footerStyle.normal.textColor = footerColour;
            footerStyle.fontSize = 12;
            //footerStyle.fontStyle = FontStyle.Bold;
        }

        public static void DrawUILine(Color color, int thickness = 2, int padding = 10)
        {
            Rect r = EditorGUILayout.GetControlRect(GUILayout.Height(padding + thickness));
            r.height = thickness;
            r.y += padding / 2;
            r.x -= 2;
            r.width += 6;
            EditorGUI.DrawRect(r, color);
        }

        protected void HelpURL(string tooltip, string url)
        {
            string caption = "\u24d8 " + SA.HELP + " \u2197";
            GUIContent content = new GUIContent(caption, tooltip);
            bool clicked = GUILayout.Button(content, linkStyle);
            var rect = GUILayoutUtility.GetLastRect();
            rect.width = linkStyle.CalcSize(content).x;
            EditorGUIUtility.AddCursorRect(rect, MouseCursor.Link);

            if (clicked) Application.OpenURL(url);
        }

        protected void Footer(string footerStrap, string helpTooltip, string helpURL)
        {
            if (!setupStyles) SetupStyles();

            GUI.enabled = true;
            GUILayout.FlexibleSpace();
            DrawUILine(footerColour);
            GUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(footerStrap, footerStyle);
            GUILayout.FlexibleSpace();
            HelpURL(helpTooltip, helpURL);
            GUILayout.EndHorizontal();
        }

        /// <summary> A standardized rectangle for layout in VRoad Editor Windows </summary>
        protected static Rect AreaRect(float line, float nl, float columnWidth)
        {
            return new Rect(marginX, lineY * line, columnWidth, lineY * (line + nl));
        }

        /// <summary> A standardised text format for a hint on a button in the Editor Window </summary>
        public static string HintFormat(string hint) { return KFormat.Sprintf(EDSC.HINT_FORMAT, hint); }

        private void OnEnable()
        {
            minSize = new Vector2(320, 320);
        }

        /// <summary> Add a set of one or more new layers to Unity's layer model.
        /// The array of indices must be the same length as the number of names</summary>
        public static void SetupLayers(int[] indices, string[] names)
        {
            if (indices == null || names == null || indices.Length != names.Length) return;
            
            try
            {
                UnityEngine.Object[] asset = AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/TagManager.asset");

                if (asset != null && asset.Length > 0)
                {
                    SerializedObject serializedObject = new SerializedObject(asset[0]);
                    SerializedProperty layers = serializedObject.FindProperty("layers");

                    for (int li = 0; li < indices.Length; li++)
                    {
                        AddLayerAt(layers, indices[li], names[li]);
                    }
                   
                    serializedObject.ApplyModifiedProperties();
                    serializedObject.Update();
                }
            }
            catch (Exception x)
            {
                Debug.LogWarning("Exception setting layers: "+x);
            }
        }
        
        /// <summary> Add a single layer to Unity's layer model with given index and name </summary>
        private static void AddLayerAt(SerializedProperty layers, int index, string layerName)
        {
            if (layerName == null) return;
            
            if (index >= layers.arraySize) layers.arraySize = index + 1;

            // set layer name at index
            SerializedProperty element = layers.GetArrayElementAtIndex(index);
            String existingLayerName = element.stringValue;
            
            if (string.IsNullOrEmpty(existingLayerName))
            {
                element.stringValue = layerName;
                Debug.Log("Added layer '" + layerName + "' at index " + index + ".");
            }
            else if (layerName.Equals(existingLayerName))
            {
                // OK, do nothing
            }
            else
            {
                Debug.LogWarning("Could not add layer '"+layerName+"' at index " + index + 
                                 " because it is already named '" + element.stringValue + "'.");

                // If you see this warning, it is because there is a clash between our layers and yours
                // Please renumber our layers by changing the const definitions LAYER_* 
                //
                // You will also need to change the culling mask in the camera in each affected scene
            }
        }
    }
}