using uk.vroad.api.str;
using UnityEngine;

namespace uk.vroad.ucm
{
    // Attach this component to a game object, and then write notes in the text box that appears
    // This can be helpful to explain the purpose of an object or script
    public class UComment : MonoBehaviour
    {
        [TextArea] public string notes = SC.ELLIPSIS; // Do not place comment here, write notes in Unity Inspector
    }
}
