#define MAINPREFIX y
#define PREFIX CC

#define AUTHOR QUOTE(CENTCOM J-4 Team)
#define MOD_NAME_BEAUTIFIED QUOTE(CENTCOM Aux Mod)


#include "script_version.hpp"

#define VERSION MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 0.5
#define REQUIRED_CBA_VERSION {3,15,6}
#define REQUIRED_ACE_VERSION {3,14,0,63}
#define REQUIRED_TFAR_VERSION {1,-1,0,328}

#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION); versionAr[] = {VERSION_AR}

#define RELEASE_BUILD

#ifdef RELEASE_BUILD
	// insert debug defines here
#endif

#ifdef COMPONENT_BEAUTIFIED
    // #define COMPONENT_NAME QUOTE(91st MRC Auxillary - COMPONENT_BEAUTIFIED)
    #define COMPONENT_NAME QUOTE(Your name - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(Your name - COMPONENT)
#endif
