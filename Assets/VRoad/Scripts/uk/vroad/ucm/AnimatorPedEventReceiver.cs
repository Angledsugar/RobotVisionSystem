using UnityEngine;

namespace uk.vroad.ucm
{
    public class AnimatorPedEventReceiver: MonoBehaviour
    {
        // Receiver for onFootstep event added to StarterAssets 1.1.1
        //
        //
        // Without this you will see the error:
        // 'PT___' AnimationEvent 'OnFootstep' on animation 'Walk_N' has no receiver! Are you missing a component?
        //
        public void OnFootstep(int i)
        {
            // No operation
        }
    }
}