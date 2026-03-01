#define MAINPREFIX z
#define PREFIX STB73

#define AUTHOR QUOTE(73rd S-4 Team)
#define MOD_NAME_BEAUTIFIED QUOTE(73rd S-4 Team)


#include "script_version.hpp"

#define VERSION MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.02
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
