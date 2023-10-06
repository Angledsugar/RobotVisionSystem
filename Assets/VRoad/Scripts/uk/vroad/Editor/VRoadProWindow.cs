using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;

namespace uk.vroad.Editor
{
    /// <summary> An abstract base class for Editor Windows in the Pro Variant of Global Roads &amp; Traffic   </summary>
    public abstract class VRoadProWindow: VRoadEditorWindow
    {
        protected const string GRAT_PRO = "Global Roads and Traffic Pro";
        protected const string GRAT_PRO_SUBTITLE = "Global Roads and Traffic [Pro]";

        protected static void InitScenes()
        {
            EditorSceneManager.activeSceneChangedInEditMode += OnSceneChanged;
            SceneManager.activeSceneChanged += OnSceneChanged;

            int sc = SceneManager.loadedSceneCount;
            if (sc > 0) currentScene = EditorSceneManager.GetSceneAt(0).name;
        }

        [UnityEditor.Callbacks.DidReloadScripts]
        private static void OnScriptsReloaded()
        {
            InitScenes();
        }



    }
}