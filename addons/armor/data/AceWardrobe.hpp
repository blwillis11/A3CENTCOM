class ACE_Wardrobe {

    // ----- Base Class ----- //
    class ace_wardrobe_base {
        // Possible variants this item can be turned into
        // Subclasses can contain optional directionalActionName property to use as display name for the action.
        class modifiableTo {};

        // Components the current variant contains within itself
        components[] = {};

        // CfgSound entries, to be chosen by random when the action is performed
        sound[] = {CN_SOUND(fabric,06), CN_SOUND(fabric,07), CN_SOUND(fabric,16), CN_SOUND(fabric,20), CN_SOUND(fabric,25)};
        // Defines the point in time relative to the duration when the sound is played, ranging from 0 to 1:
        //   0 at the start of the action
        //   0.5 half way during the duration of the action - always, if completed or not
        //   1 at the end, only when completed
        sound_timing = 0;

        // Gesture to be played when the action is performed
        gesture = "Gear";

        // Will be used instead of target variant picture
        alternativePicture = "";
        // Will be used instead of the target variants displayname
        alternativeActionName = "";

        // Duration of action. Minimum value of 1 - anything above will produce a progressbar
        duration = 1;

        // Fallback for components that are not present within the same mod/addon
        fallbackComponent = "";
    };

    

    // ----- Item Class ----- //
    AceWar_UNI_CLASS(urban)
    AceWar_UNI_CLASS(woodland)
    AceWar_UNI_CLASS(arctic)
    AceWar_UNI_CLASS(arid)
    AceWar_UNI_CLASS(tropic)
    AceWar_UNI_CLASS(black)
    AceWar_UNI_CLASS(grey)
    AceWar_UNI_CLASS(green)
    AceWar_UNI_CLASS(olive)
    AceWar_UNI_CLASS(tan)
    AceWar_UNI_CLASS(white)
};
