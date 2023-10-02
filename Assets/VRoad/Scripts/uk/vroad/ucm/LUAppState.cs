using uk.vroad.api;

namespace uk.vroad.ucm
{
    public interface LUAppState
    {
        /// <summary> This fires in the main Unity thread, so Unity GameObjects can implement this interface and
        /// register as listeners with GameStateHandler, to received forwarded state changes in the
        /// main Unity thread - some operations must be executed in that thread. </summary>
        void UAppStateChanged(AppStateTransition transition);
    }
}
