/*
  ==============================================================================
  config_macros.hpp

  This file contains all macros used in our CC_vests config. Macros reduce
  duplication and make it easier to manage changes across multiple vests.

  Notable macros here:
    - P() and Q() to handle path building and string quoting.
    - VEST_MASS: standard ACE mass for these vests.
    - VEST_MAXLOAD: total carrying capacity for the vest container.
    - VEST_HITPOINT_INFO: sets up armor (hit) values for various body parts.
    - UNSCF_VEST_ITEM_INFO and INVIS_VEST_ITEM_INFO: define vest parameters like
      mass, containerClass, and the hitpoint info.
    - UNSCF_VEST_ALL_VARIANTS: expands into multiple definitions for each vest
      selection set (Rifleman, Breacher, Grenadier, etc.) with each
      combination of pouches.
  ==============================================================================
*/

//basic path macros
#define P(PATH) \y\A3CENTCOM\addons\armor\##PATH
    //P((Something) => "\y\A3CENTCOM\addons\CCarmor\something

#undef QUOTE
// Q(INPUT) => "INPUT"
#define Q(INPUT) QUOTE(INPUT)

#define QP(PATH) #P(PATH)
  // Wraps the expanded path in quotes, e.g.:
  // QP(data\loading_bg.jpg) => "\y\A3CENTCOM\addons\CCarmor\data\loading_bg.jpg"

// GLUE(A,B) => AB (concatenates tokens)
#define GLUE(A,B) A##B

#define QUOTE(s) #s

#define CC_WEP_NORMAL(CAMO,SHIRT,SLEEVE) CC_U_B_##SHIRT##_##SLEEVE##_##CAMO##
#define CC_VEH_NORMAL(CAMO,SHIRT,SLEEVE) CC_B_##SHIRT##_##SLEEVE##_##CAMO##
//Bloused
#define CC_WEP_BLOUSED(CAMO,SHIRT,SLEEVE)  CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO##
#define CC_VEH_BLOUSED(CAMO,SHIRT,SLEEVE) CC_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO##
//Gloves
#define CC_WEP_GLOVES(CAMO,SHIRT,SLEEVE) CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO##
#define CC_VEH_GLOVES(CAMO,SHIRT,SLEEVE) CC_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO##
//Bloused_Gloves
#define CC_WEP_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE) CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO##
#define CC_VEH_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE) CC_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO##
//Unzipped
#define CC_WEP_UNZIPPED(CAMO,SHIRT,SLEEVE) CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO##
#define CC_VEH_UNZIPPED(CAMO,SHIRT,SLEEVE) CC_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO##
//Bloused_Unzipped
#define CC_WEP_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO##
#define CC_VEH_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) CC_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO##
//Gloves_Unzipped
#define CC_WEP_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE) CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO##
#define CC_VEH_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE) CC_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO##
//GLOVES_BLOUSED_UNZIPPED
#define CC_WEP_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO##
#define CC_VEH_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) CC_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO##


//Standard vest stuff
#define VEST_MASS 80
#define HELMET_MASS 80
#define VEST_MAXLOAD 200

#define CC_TEXPATH(PIECE,FILE) P(data\##PIECE\##FILE)

hiddenSelectionsTextures[]=
        {
            CC_TEXPATH(vest,odst_Ruck_co.paa)
        };

// Macro for the hitpoint data applied to vests
#define VEST_HITPOINT_INFO       \
class HitpointsProtectionInfo {  \
  class Neck {                   \
    hitpointName="HitNeck";      \
    armor=20;                    \
    passThrough=0.3;             \
  };                             \
  class Arms {                   \
    hitpointName="HitArms";      \
    armor=25;                    \
    passThrough=0.2;             \
  };                             \
  class Chest {                  \
    hitpointName="HitChest";     \
    armor=35;                    \
    passThrough=0.1;             \
  };                             \
  class Diaphragm {              \
    hitpointName="HitDiaphragm"; \
    armor=30;                    \
    passThrough=0.2;             \
  };                             \
  class Abdomen {                \
    hitpointName="HitAbdomen";   \
    armor=30;                    \
    passThrough=0.2;             \
  };                             \
  class Body {                   \
    hitpointName="HitBody";      \
    passThrough=0.2;             \
  };                             \
  class Legs {                   \
    hitpointName="HitLegs";      \
    armor=20;                    \
    passThrough=0.4;             \
  };                             \
  class Hands {                  \
    hitpointName="HitHands";     \
    armor=20;                    \
    passThrough=0.05;             \
  };                             \
  class Pelvis {                 \
    hitpointName="HitPelvis";    \
    armor=30;                    \
    passThrough=0.2;             \
  };                             \
};


#define VEST_ITEM_M43D_ODST_INFO(TF,CAMO)  \
  class ItemInfo: VestItem {     \
    hiddenSelectionsTextures[]=\
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_4.p3d"; \
    vestType="Rebreather";                                            \
    containerClass="CC_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    VEST_HITPOINT_INFO                                                \
  };

#define VEST_ITEM_M43D_Breacher_INFO(TF,CAMO)                                        \
  class ItemInfo: VestItem {                                          \
    hiddenSelectionsTextures[]=\
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_Breacher_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Breacher_4.p3d"; \
    vestType="Rebreather";                                            \
    containerClass="CC_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    VEST_HITPOINT_INFO                                                \
  };

#define VEST_ITEM_M43D_Sharpshooter_INFO(TF,CAMO)                                        \
  class ItemInfo: VestItem {                                          \
    hiddenSelectionsTextures[]=\
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_##CONFIG##_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Sharpshooter_4.p3d"; \
    vestType="Rebreather"; \
    containerClass="CC_vest_supply"; \
    mass=VEST_MASS;  \
    VEST_HITPOINT_INFO  \
  };

#define VEST_ITEM_M43D_Light_INFO(TF,CAMO)                                        \
  class ItemInfo: VestItem {                                          \
    hiddenSelectionsTextures[]=\
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_##CONFIG##_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_Light.p3d"; \
    vestType="Rebreather";                                            \
    containerClass="CC_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    VEST_HITPOINT_INFO                                                \
  };

#define VEST_ITEM_M43A_INFO                                       \
  class ItemInfo: VestItem {                                          \
    vestType="Rebreather";                                            \
    containerClass="CC_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    hiddenSelectionsTextures[]= { \
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_##CONFIG##_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43D_ODST_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    }; \
    VEST_HITPOINT_INFO                                                \
  };

#define VEST_ITEM_M43A_BaseSec_INFO                                    \
  class ItemInfo: VestItem {                                          \
    vestType="Rebreather";                                            \
    containerClass="CC_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_3.p3d"; \
    hiddenSelections[]=\
		{\
			"camo",\
			"camo1",\
			"camo2",\
			"decals"\
		};\
    hiddenSelectionsTextures[]= { \
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_BaseSec_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    }; \
    VEST_HITPOINT_INFO                                                \
  };

#define VEST_ITEM_M43A_GungnirL_INFO                                    \
  class ItemInfo: VestItem {                                          \
    vestType="Rebreather";                                            \
    containerClass="CC_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_3.p3d"; \
    hiddenSelectionsTextures[]= { \
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_GungnirL_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    }; \
    hiddenSelections[]=\
		{\
			"camo",\
			"camo1",\
			"camo2",\
			"decals"\
		};\
    VEST_HITPOINT_INFO                                                \
  };

#define VEST_ITEM_M43A_GungnirS_INFO                                     \
  class ItemInfo: VestItem {                                          \
    vestType="Rebreather";                                            \
    containerClass="CC_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_3.p3d"; \
    hiddenSelectionsTextures[]= { \
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_GungnirS_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    }; \
    hiddenSelections[]=\
		{\
			"camo",\
			"camo1",\
			"camo2",\
			"decals"\
		};\
    VEST_HITPOINT_INFO                                                \
  };

#define VEST_ITEM_M43A_Light_INFO                                     \
  class ItemInfo: VestItem {                                          \
    vestType="Rebreather";                                            \
    containerClass="CC_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light.p3d"; \
    hiddenSelectionsTextures[]= { \
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    }; \
    hiddenSelections[]=\
		{\
			"camo",\
			"decals"\
		};\
    VEST_HITPOINT_INFO                                                \
  };



#define UNIFORM_XtdGI(CAMO,SHIRT) 						               \
    class TCP_U_B_CBUU_##SHIRT##_Base;

#define NEW_VEST_M43D_ODST(CAMO,TF) \
  class CC_M43D_ODST_##CAMO##_##TF## : TCP_V_M43D_ODST_4_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([CC] M43/D [ODST] [##TF##] [##CAMO##]); \
    author=AUTHOR; \
    hiddenSelectionsTextures[]= \
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_ODST_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="CC_ACE_M43D_Vest"; \
      TaskForce=Q(##TF##); \
      Camo=Q(##CAMO##); \
      Variant=Q(ODST);\
    }; \
    VEST_ITEM_M43D_ODST_INFO(##TF##,##CAMO##) \
  };

#define NEW_VEST_M43D_Breacher(CAMO,TF) \
  class CC_M43D_Breacher_##CAMO##_##TF## : TCP_V_M43D_Breacher_4_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([CC] M43/D [Breacher] [##TF##] [##CAMO##]); \
    author=AUTHOR; \
    hiddenSelectionsTextures[]= \
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_Breacher_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="CC_ACE_M43D_Vest"; \
      TaskForce=Q(##TF##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Breacher);\
    }; \
    VEST_ITEM_M43D_Breacher_INFO(##TF##,##CAMO##) \
  };

#define NEW_VEST_M43D_Sharpshooter(CAMO,TF) \
  class CC_M43D_Sharpshooter_##CAMO##_##TF## : TCP_V_M43D_Sharpshooter_4_Black { \
    scope=2; \
    scopeArsenal=2; \
    displayName = Q([CC] M43/D [Sharpshooter] [##TF##] [##CAMO##]); \
    author=AUTHOR; \
    hiddenSelectionsTextures[]= \
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_Sharpshooter_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43D_ODST_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    class XtdGearInfo { \
      Model="CC_ACE_M43D_Vest"; \
      TaskForce=Q(##TF##); \
      Camo=Q(##CAMO##); \
      Variant=Q(Sharpshooter);\
    }; \
    VEST_ITEM_M43D_Sharpshooter_INFO(##TF##,##CAMO##) \
  };

#define VEST_BASE_CAMOS(CAMO) \
    class TCP_V_M43A_BaseSec_3_##CAMO##; \
    class TCP_V_M43A_GungnirL_3_##CAMO##; \
    class TCP_V_M43A_GungnirS_3_##CAMO##; \
    class TCP_V_M43A_Light_##CAMO##; \

#define VEST_BASE \
  VEST_BASE_CAMOS(Black) \
  VEST_BASE_CAMOS(Brown) \
  VEST_BASE_CAMOS(Green) \
  VEST_BASE_CAMOS(Olive) \
  VEST_BASE_CAMOS(Tan) \
  VEST_BASE_CAMOS(White)


#define NEW_VEST_M43A_BaseSec(CAMO,TF)                          \
    class CC_M43A_BaseSec_##CAMO##_##TF##: TCP_V_M43A_BaseSec_3_##CAMO## {   \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M43/A CBBAS [BaseSec] [##CAMO##] [##TF##]); \
      maximumLoad = VEST_MAXLOAD; \
      hiddenSelectionsTextures[]= { \
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_BaseSec_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      }; \
      class XtdGearInfo { \
        Model="CC_ACE_M43A_Vest"; \
        TaskForce=Q(##TF##); \
        Camo=Q(##CAMO##); \
        Variant=Q(BaseSec); \
      };   \
      VEST_ITEM_M43A_BaseSec_INFO \
    };

#define NEW_VEST_M43A_GungnirL(CAMO,TF) \
    class CC_M43A_GungnirL_##CAMO##_##TF##: TCP_V_M43A_GungnirL_3_##CAMO## {   \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M43/A CBBAS [GungnirL] [##CAMO##] [##TF##]); \
      maximumLoad = VEST_MAXLOAD; \
      hiddenSelectionsTextures[]= { \
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_GungnirL_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      }; \
      class XtdGearInfo { \
        Model="CC_ACE_M43A_Vest"; \
        TaskForce=Q(##TF##); \
        Camo=Q(##CAMO##); \
        Variant=Q(GungnirL); \
      };   \
      VEST_ITEM_M43A_GungnirL_INFO \
    };

#define NEW_VEST_M43A_GungnirS(CAMO,TF) \
    class CC_M43A_GungnirS_##CAMO##_##TF##: TCP_V_M43A_GungnirS_3_##CAMO## {   \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M43/A CBBAS [GungnirS] [##CAMO##] [##TF##]); \
      maximumLoad = VEST_MAXLOAD; \
      hiddenSelectionsTextures[]= { \
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_Shoulders_GungnirS_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_02_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      }; \
      class XtdGearInfo { \
        Model="CC_ACE_M43A_Vest"; \
        TaskForce=Q(##TF##); \
        Camo=Q(##CAMO##); \
        Variant=Q(GungnirS); \
      };   \
      VEST_ITEM_M43A_GungnirS_INFO \
    };

#define NEW_VEST_M43A_Light(CAMO,TF)                          \
    class CC_M43A_Light_##CAMO##_##TF##: TCP_V_M43A_Light_##CAMO## {   \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M43/A CBBAS [Light] [##CAMO##] [##TF##]); \
      maximumLoad = VEST_MAXLOAD; \
      hiddenSelectionsTextures[]= { \
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      }; \
      class XtdGearInfo { \
        Model="CC_ACE_M43A_Vest"; \
        TaskForce=Q(##TF##); \
        Camo=Q(##CAMO##); \
        Variant=Q(Light); \
      };   \
      VEST_ITEM_M43A_Light_INFO \
    };

#define NEW_VEST_M43D_Light(CAMO,TF)                          \
    class CC_M43D_Light_##CAMO##_##TF##: TCP_V_M43D_Light_Black {   \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M43/D CBBAS [Light] [##CAMO##] [##TF##]); \
      maximumLoad = VEST_MAXLOAD; \
      hiddenSelectionsTextures[]= { \
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43A_01_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43D_ODST_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      }; \
      class XtdGearInfo { \
        Model="CC_ACE_M43D_Vest"; \
        TaskForce=Q(##TF##); \
        Camo=Q(##CAMO##); \
        Variant=Q(Light); \
      };   \
      VEST_ITEM_M43D_Light_INFO(TF,CAMO) \
    };


#define HELMET_HITPOINT_INFO       \
  class HitpointsProtectionInfo \
        { \
          class Face\
          {\
            hitpointName="HitFace"; \
            armor=12;\
            passThrough=0.5;\
          };\
          class Head\
          {\
            hitpointName="HitHead";\
            armor=18;\
            passThrough=0.5;\
          };\
        };

#define HELMET_CH43A_HITPOINT_INFO       \
  class HitpointsProtectionInfo \
        { \
          class Head\
          {\
            hitpointName="HitHead";\
            armor=18;\
            passThrough=0.5;\
          };\
        };

#define HELMET_ITEM_ECH55D_INFO                                        \
  class ItemInfo: HeadgearItem {                                          \
    hiddenSelections[] =\
    { \
      "camo", \
      "camo1", \
      "decals" \
    }; \
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\h_helmet_ECH55D_Black.p3d"; \
    hiddenSelectionsTextures[]=\
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\helmet_ECH55D_CO.paa)),\
      Q(CC_TEXPATH(Visors,##VISOR##\ECH55D_Visor_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    mass=HELMET_MASS;                                                   \
    HELMET_HITPOINT_INFO                                                \
  };

#define ECH55D_HELMET(TF,CAMO,VISOR) \
    class CC_H_ECH55D_##TF##_##CAMO##_##VISOR## : TCP_H_Helmet_ECH55D_Black_Black { \
      displayName = QUOTE([CC] ECH55D Helmet [##TF##] [##CAMO##] [##VISOR##]); \
      ace_hearing_protection = 0.80; \
      scope=2; \
      scopeArsenal=2; \
      class XtdGearInfo { \
        Model="CC_ACE_ECH55D_Helmet"; \
        TaskForce=Q(##TF##); \
        Camo=Q(##CAMO##); \
        Visor=Q(##VISOR##); \
      };   \
      hiddenSelectionsTextures[]=\
      { \
        Q(CC_TEXPATH(##TF##,##CAMO##\helmet_ECH55D_CO.paa)),\
        Q(CC_TEXPATH(Visors,##VISOR##\ECH55D_Visor_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      };\
      HELMET_ITEM_ECH55D_INFO \
    }; \
    class CC_H_ECH55D_##TF##_##CAMO##_##VISOR##_DP : TCP_H_Helmet_ECH55D_DP_Base { \
        displayName = QUOTE([CC] ECH55D Helmet [##TF##] [##CAMO##] [##VISOR##] [DP]); \
        ace_hearing_protection = 0.80; \
        scope=1; \
        scopeArsenal=1; \
        hiddenSelectionsTextures[] = {  \
          Q(CC_TEXPATH(##TF##,##CAMO##\helmet_ECH55D_CO.paa)), \
          "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_Visor_CA.paa", \
          Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa)) \
        }; \
    };

#define HELMET_ECH55D_VISORS(TF,CAMO) \
  ECH55D_HELMET(##TF##,##CAMO##,Black) \
  ECH55D_HELMET(##TF##,##CAMO##,Red) \
  ECH55D_HELMET(##TF##,##CAMO##,Gold) \
  ECH55D_HELMET(##TF##,##CAMO##,Blue) \

#define HELMET_ECH55D(TF) \
  HELMET_ECH55D_VISORS(##TF##,Black) 

#define HELMET_ITEM_CH43A_INFO                                        \
  class ItemInfo: HeadgearItem {                                          \
    hiddenSelections[] =\
    { \
      "camo", \
      "camo1", \
      "decals" \
    }; \
		uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_CH43A\h_helmet_CH43A.p3d"; \
    hiddenSelectionsTextures[]=\
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\helmet_CH43A_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    mass=HELMET_MASS;                                                   \
    HELMET_CH43A_HITPOINT_INFO                                                \
  };

#define CH43A_HELMET(TF,CAMO) \
    class CC_H_CH43A_##TF##_##CAMO## : TCP_H_Helmet_CH43A_Black { \
      displayName = QUOTE([CC] CH43A Helmet [##CAMO##]); \
      ace_hearing_protection = 0.80; \
      scope=2; \
      scopeArsenal=2; \
      class XtdGearInfo { \
        Model="CC_ACE_CH43A_Helmet"; \
        TaskForce=Q(##TF##); \
        Camo=Q(##CAMO##); \
        Enclosed=Q(No); \
        Visor=Q(N/A); \
      };   \
      hiddenSelectionsTextures[]=\
      { \
        Q(CC_TEXPATH(##TF##,##CAMO##\helmet_CH43A_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      };\
      HELMET_ITEM_CH43A_INFO \
    }; 

#define HELMET_CH43A(TF) \
  CH43A_HELMET(##TF##,Black) \
  CH43A_HELMET(##TF##,Brown) \
  CH43A_HELMET(##TF##,Green) \
  CH43A_HELMET(##TF##,Olive) \
  CH43A_HELMET(##TF##,Tan) \
  CH43A_HELMET(##TF##,White)


#define HELMET_ITEM_ECH43A_INFO                                        \
  class ItemInfo: HeadgearItem {                                          \
    hiddenSelections[] =\
    { \
      "camo", \
      "camo1", \
      "decals" \
    }; \
		uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH43A\h_helmet_ECH43A_Black.p3d"; \
    hiddenSelectionsTextures[]=\
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\helmet_ECH43A_CO.paa)),\
      Q(CC_TEXPATH(Visors,##VISOR##\helmet_ECH43A_Visor_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    mass=HELMET_MASS;                                                   \
    HELMET_HITPOINT_INFO                                                \
  };

#define HELMET_ITEM_ECH43A_INFO_DP                                        \
  class ItemInfo: HeadgearItem {                                          \
    hiddenSelections[] =\
    { \
      "camo", \
      "camo1", \
      "decals" \
    }; \
		uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH43A\h_helmet_ECH43A_Black.p3d"; \
    hiddenSelectionsTextures[]=\
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\helmet_CH43A_CO.paa)),\
      "\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH43A\data\camo\default\helmet_ECH43A_Visor_CA.paa",\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    mass=HELMET_MASS; \
    HELMET_HITPOINT_INFO  \
  };

#define ECH43A_HELMET(TF,CAMO,VISOR) \
    class CC_H_ECH43A_##TF##_##CAMO##_##VISOR## : TCP_H_Helmet_ECH43A_Black_Black { \
      displayName = QUOTE([CC] ECH43A Helmet [##TF##] [##CAMO##] [##VISOR##]); \
      ace_hearing_protection = 0.80; \
      class XtdGearInfo { \
        Model="CC_ACE_CH43A_Helmet"; \
        TaskForce=Q(##TF##); \
        Camo=Q(##CAMO##); \
        Enclosed=Q(Yes); \
        Visor=Q(##VISOR##); \
      };   \
      scope=2; \
      scopeArsenal=2; \
      hiddenSelectionsTextures[]=\
      { \
        Q(CC_TEXPATH(##TF##,##CAMO##\helmet_CH43A_CO.paa)),\
        Q(CC_TEXPATH(Visors,##VISOR##\helmet_ECH43A_Visor_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      };\
      HELMET_ITEM_ECH43A_INFO \
    }; \
    class CC_H_ECH43A_##TF##_##CAMO##_##VISOR##_DP : TCP_H_Helmet_ECH43A_Black_Black_DP { \
      displayName = QUOTE([CC] ECH43A Helmet [##TF##] [##CAMO##] [##VISOR##]); \
      ace_hearing_protection = 0.80; \
      scope=1; \
      scopeArsenal=1; \
      hiddenSelectionsTextures[]=\
      { \
        Q(CC_TEXPATH(##TF##,##CAMO##\helmet_CH43A_CO.paa)),\
        "\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH43A\data\camo\default\helmet_ECH43A_Visor_CA.paa",\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      };\
      HELMET_ITEM_ECH43A_INFO_DP \
    };

#define HELMET_ECH43A_VISORS(TF,CAMO) \
  ECH43A_HELMET(##TF##,##CAMO##,Black) \
  ECH43A_HELMET(##TF##,##CAMO##,Red) \
  ECH43A_HELMET(##TF##,##CAMO##,Gold) \
  ECH43A_HELMET(##TF##,##CAMO##,Blue) \
  ECH43A_HELMET(##TF##,##CAMO##,Silver) \
  ECH43A_HELMET(##TF##,##CAMO##,Yellow)

#define HELMET_ECH43A(TF) \
  HELMET_ECH43A_VISORS(##TF##,Black) \
  HELMET_ECH43A_VISORS(##TF##,Brown) \
  HELMET_ECH43A_VISORS(##TF##,Green) \
  HELMET_ECH43A_VISORS(##TF##,Olive) \
  HELMET_ECH43A_VISORS(##TF##,Tan) \
  HELMET_ECH43A_VISORS(##TF##,White)

#define HELMET_ITEM_ECH35J_INFO                                        \
  class ItemInfo: HeadgearItem {                                          \
    hiddenSelections[] =\
    { \
      "camo", \
      "camo1", \
      "decals" \
    }; \
		uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\h_helmet_ECH35J_Black.p3d"; \
    hiddenSelectionsTextures[]=\
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\helmet_ECH35J_CO.paa)),\
      Q(CC_TEXPATH(Visors,##VISOR##\helmet_ECH35J_CO.paa)),\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    mass=HELMET_MASS;                                                   \
    HELMET_HITPOINT_INFO                                                \
  };

#define HELMET_ITEM_ECH35J_INFO_DP                                        \
  class ItemInfo: HeadgearItem {                                          \
    hiddenSelections[] =\
    { \
      "camo", \
      "camo1", \
      "decals" \
    }; \
		uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\h_helmet_ECH35J_DP.p3d"; \
    hiddenSelectionsTextures[]=\
    { \
      Q(CC_TEXPATH(##TF##,##CAMO##\helmet_ECH35J_CO.paa)),\
      "\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\default\helmet_ECH35J_Visor_CA.paa",\
      Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
    };\
    mass=HELMET_MASS; \
    HELMET_HITPOINT_INFO  \
  };

#define ECH35J_HELMET(TF,CAMO,VISOR) \
    class CC_H_ECH35J_##TF##_##CAMO##_##VISOR## : TCP_H_Helmet_ECH35J_Black_Black { \
      displayName = QUOTE([CC] ECH35J Helmet [##TF##] [##CAMO##] [##VISOR##]); \
      ace_hearing_protection = 0.80; \
      class XtdGearInfo { \
        Model="CC_ACE_ECH35J_Helmet"; \
        TaskForce =Q(##TF##); \
        Camo=Q(##CAMO##); \
        Visor=Q(##VISOR##); \
      };   \
      scope=2; \
      scopeArsenal=2; \
      hiddenSelectionsTextures[]=\
      { \
        Q(CC_TEXPATH(##TF##,##CAMO##\helmet_ECH35J_CO.paa)),\
        Q(CC_TEXPATH(Visors,##VISOR##\helmet_ECH35J_Visor_CO.paa)),\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      };\
      HELMET_ITEM_ECH35J_INFO \
    }; \
    class CC_H_ECH35J_##TF##_##CAMO##_##VISOR##_DP : TCP_H_Helmet_ECH35J_Black_Black_DP { \
      displayName = QUOTE([CC] ECH35J Helmet [##TF##] [##CAMO##] [##VISOR##]); \
      ace_hearing_protection = 0.80; \
      scope=1; \
      scopeArsenal=1; \
      hiddenSelectionsTextures[]=\
      { \
        Q(CC_TEXPATH(##TF##,##CAMO##\helmet_ECH35J_CO.paa)),\
        "\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\default\helmet_ECH35J_Visor_CA.paa",\
        Q(CC_TEXPATH(##TF##,##CAMO##\vest_M43_DecalSheet_CA.paa))\
      };\
      HELMET_ITEM_ECH35J_INFO_DP \
    };

#define HELMET_ECH35J_VISORS(TF,CAMO) \
  ECH35J_HELMET(##TF##,##CAMO##,Black) \
  ECH35J_HELMET(##TF##,##CAMO##,Red) \
  ECH35J_HELMET(##TF##,##CAMO##,Gold) \
  ECH35J_HELMET(##TF##,##CAMO##,Blue) \
  ECH35J_HELMET(##TF##,##CAMO##,Silver) 

#define HELMET_ECH35J(TF) \
  HELMET_ECH35J_VISORS(##TF##,Black) \
  HELMET_ECH35J_VISORS(##TF##,Brown) \
  HELMET_ECH35J_VISORS(##TF##,Green) \
  HELMET_ECH35J_VISORS(##TF##,Olive) \
  HELMET_ECH35J_VISORS(##TF##,Tan) \
  HELMET_ECH35J_VISORS(##TF##,White)

#define TCP_WEP_CLASS_NORMAL(SHIRT,SLEEVE)                          \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Base;

#define TCP_WEP_CLASS_BLOUSED(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Base;                      

#define TCP_WEP_CLASS_GLOVES(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Base;                                 

#define TCP_WEP_CLASS_BLOUSED_GLOVES(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Base;                 

#define TCP_WEP_CLASS_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Base;                             

#define TCP_WEP_CLASS_BLOUSED_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Base;

#define TCP_WEP_CLASS_GLOVES_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Base;                                    

#define TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Base;

//TCP CLASS DEFINITONS VEH
#define TCP_VEH_CLASS_NORMAL(SHIRT,SLEEVE)                          \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Base;

#define TCP_VEH_CLASS_BLOUSED(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Base;                      

#define TCP_VEH_CLASS_GLOVES(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Base;                                 

#define TCP_VEH_CLASS_BLOUSED_GLOVES(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Base;                 

#define TCP_VEH_CLASS_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Base;                             

#define TCP_VEH_CLASS_BLOUSED_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Base;

#define TCP_VEH_CLASS_GLOVES_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Base;                                    

#define TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(SHIRT,SLEEVE)           \
  class TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Base; 

//CC VEH class setup
#define VEH_CLASS_NORMAL(CAMO,SHIRT,SLEEVE)                          \
  class CC_B_##SHIRT##_##SLEEVE##_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(CC_WEP_NORMAL(CAMO,SHIRT,SLEEVE));\
  };

#define WEP_CLASS_NORMAL(CAMO,SHIRT,SLEEVE) \
  class CC_U_B_##SHIRT##_##SLEEVE##_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Base{\
    scope=2;\
    scopeArsenal=2;\
    displayName = QUOTE([CC] CAMO CBUU SHIRT SLEEVE); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(CC_VEH_NORMAL(CAMO,SHIRT,SLEEVE));\
      containerClass="Supply50"; \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

#define VEH_CLASS_BLOUSED(CAMO,SHIRT,SLEEVE)                          \
  class CC_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(CC_WEP_BLOUSED(CAMO,SHIRT,SLEEVE));\
  };

#define WEP_CLASS_BLOUSED(CAMO,SHIRT,SLEEVE) \
  class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Base{\
    scope=2;\
    scopeArsenal=2;\
    displayName = QUOTE([CC] CAMO CBUU SHIRT SLEEVE Bloused); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(CC_VEH_BLOUSED(CAMO,SHIRT,SLEEVE));\
      containerClass="Supply50"; \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

//Gloves
#define VEH_CLASS_GLOVES(CAMO,SHIRT,SLEEVE)                          \
  class CC_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(CC_WEP_GLOVES(CAMO,SHIRT,SLEEVE));\
  };

#define WEP_CLASS_GLOVES(CAMO,SHIRT,SLEEVE) \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Base{\
    scope=2;\
    scopeArsenal=2;\
    displayName = QUOTE([CC] CAMO CBUU SHIRT SLEEVE Gloves); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(CC_VEH_GLOVES(CAMO,SHIRT,SLEEVE));\
      containerClass="Supply50"; \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

//Bloused Gloves
#define VEH_CLASS_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE)                          \
  class CC_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(CC_WEP_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE));\
  };

#define WEP_CLASS_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE) \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Base{\
    scope=2;\
    scopeArsenal=2;\
    displayName = QUOTE([CC] CAMO CBUU SHIRT SLEEVE Gloves Bloused); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(CC_VEH_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE));\
      containerClass="Supply50"; \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

//Unzipped
#define VEH_CLASS_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class CC_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(CC_WEP_UNZIPPED(CAMO,SHIRT,SLEEVE));\
  };

#define WEP_CLASS_UNZIPPED(CAMO,SHIRT,SLEEVE) \
  class CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    displayName = QUOTE([CC] CAMO CBUU SHIRT SLEEVE Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(CC_VEH_UNZIPPED(CAMO,SHIRT,SLEEVE));\
      containerClass="Supply50"; \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };
//BLOUSED UNZIPPED
#define VEH_CLASS_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class CC_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa)\
        };\
      uniformClass = QUOTE(CC_WEP_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE));\
  };

#define WEP_CLASS_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) \
  class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Bloused_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    displayName = QUOTE([CC] CAMO CBUU SHIRT SLEEVE Bloused Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(CC_VEH_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE));\
      containerClass="Supply50"; \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

//GLOVES_UNZIPPED
#define VEH_CLASS_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class CC_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(CC_WEP_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE));\
  };

#define WEP_CLASS_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE) \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    displayName = QUOTE([CC] CAMO CBUU SHIRT SLEEVE Gloves Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(CC_VEH_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE));\
      containerClass="Supply50"; \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

//GLOVES_BLOUSED_UNZIPPED
#define VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class CC_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## : TCP_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Base {\
      author=AUTHOR;\
      scope= 1;\
      scopeArsenal= 1;\
      scopeCurator = 1;\
      hiddenSelectionsTextures[] = {\
        QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Pants_CO.paa),\
        QP(data\uniform\##CAMO##\CBUU_Gloves_CO.paa)\
        };\
      uniformClass = QUOTE(CC_WEP_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE));\
  };

#define WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE) \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## : TCP_U_B_CBUU_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_Base{\
    scope=2;\
    scopeArsenal=2;\
    displayName = QUOTE([CC] CAMO CBUU SHIRT SLEEVE Gloves Bloused Unzipped); \
    ACE_GForceCoef=0.4;\
    class ItemInfo : UniformItem {\
      uniformClass = QUOTE(CC_VEH_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE));\
      containerClass="Supply50"; \
      mass=1;\
      uniformType = "Neopren";\
      allowedSlots[]={"701","801","901"};\
      armor=20;\
    };\
    hiddenSelectionsTextures[] = {\
      QP(data\uniform\##CAMO##\CBUU_##SHIRT##_CO.paa)\
    };\
  };

/* New uniform gear info */
#define NORMAL(CAMO,SHIRT,SLEEVE)                          \
  class CC_U_B_##SHIRT##_##SLEEVE##_##CAMO## {       \
    model="CC_new_uniforms";                          \
    camo=#CAMO;                                            \
    sleeves=#SLEEVE;                                        \
    gloves="No";                                            \
    shirt=#SHIRT;                                          \
    Pants="Loose";                                     \
    zip="Zipped";                                          \
  };

#define BLOUSED(CAMO,SHIRT,SLEEVE)           \
  class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## {   \
    model="CC_new_uniforms";                           \
    camo=#CAMO;                             \
    sleeves=#SLEEVE;                     \
    gloves="No";                     \
    shirt=#SHIRT;                    \
    Pants="Bloused";                \
    zip="Zipped";                                         \
  };                      

#define GLOVES(CAMO,SHIRT,SLEEVE)           \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## {   \
    model="CC_new_uniforms";                           \
    camo=#CAMO;                             \
    sleeves=#SLEEVE;                     \
    gloves="Yes";                     \
    shirt=#SHIRT;                    \
    Pants="Loose";                \
    zip="Zipped";                                         \
  };                                 

#define BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE)           \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## {   \
    model="CC_new_uniforms";                           \
    camo=#CAMO;                             \
    sleeves=#SLEEVE;                     \
    gloves="Yes";                     \
    shirt=#SHIRT;                    \
    Pants="Bloused";                \
    zip="Zipped";                                         \
  };                 

#define UNZIPPED(CAMO,SHIRT,SLEEVE)           \
  class CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## {   \
    model="CC_new_uniforms";                           \
    camo=#CAMO;                             \
    sleeves=#SLEEVE;                     \
    gloves="No";                     \
    shirt=#SHIRT;                    \
    Pants="Loose";                \
    zip="Unzipped";                                         \
  };                             

#define BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE)           \
  class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## {   \
    model="CC_new_uniforms";                           \
    camo=#CAMO;                             \
    sleeves=#SLEEVE;                     \
    gloves="No";                     \
    shirt=#SHIRT;                    \
    Pants="Bloused";                \
    zip="Unzipped";                                         \
  };                           

#define GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE)           \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
    model="CC_new_uniforms";                           \
    camo=#CAMO;                             \
    sleeves=#SLEEVE;                     \
    gloves="Yes";                     \
    shirt=#SHIRT;                    \
    Pants="Loose";                \
    zip="Unzipped";                                         \
  };                                    


#define GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE)           \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## {   \
    model="CC_new_uniforms";                           \
    camo=#CAMO;                                              \
    sleeves=#SLEEVE;                                         \
    gloves="Yes";                                             \
    shirt=#SHIRT;                                            \
    Pants="Bloused";                                        \
    zip="Unzipped";                                         \
  };       

  #define TCP_VEH_CLASS_DEF                                     \
  TCP_VEH_CLASS_NORMAL(TShirt,Untucked)                       \
  TCP_VEH_CLASS_NORMAL(TShirt,Tucked)                       \
  TCP_VEH_CLASS_NORMAL(FieldTop,Full)                       \
  TCP_VEH_CLASS_NORMAL(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_NORMAL(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_NORMAL(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_NORMAL(TacShirt,Full)                       \
  TCP_VEH_CLASS_NORMAL(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_NORMAL(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_NORMAL(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED(TShirt,Tucked)                       \
  TCP_VEH_CLASS_BLOUSED(TShirt,Untucked)                       \
  TCP_VEH_CLASS_BLOUSED(FieldTop,Full)                       \
  TCP_VEH_CLASS_BLOUSED(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED(TacShirt,Full)                       \
  TCP_VEH_CLASS_BLOUSED(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_GLOVES(TShirt,Tucked)                       \
  TCP_VEH_CLASS_GLOVES(TShirt,Untucked)                       \
  TCP_VEH_CLASS_GLOVES(FieldTop,Full)                       \
  TCP_VEH_CLASS_GLOVES(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_GLOVES(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_GLOVES(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_GLOVES(TacShirt,Full)                       \
  TCP_VEH_CLASS_GLOVES(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_GLOVES(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_GLOVES(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TShirt,Tucked)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TShirt,Untucked)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(FieldTop,Full)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TacShirt,Full)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED_GLOVES(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_UNZIPPED(FieldTop,Full)                       \
  TCP_VEH_CLASS_UNZIPPED(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_UNZIPPED(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_UNZIPPED(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_UNZIPPED(TacShirt,Full)                       \
  TCP_VEH_CLASS_UNZIPPED(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_UNZIPPED(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_UNZIPPED(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(FieldTop,Full)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(FieldTop,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(FieldTop,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(FieldTop,SlimSleeve)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(TacShirt,Full)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(TacShirt,HalfRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(TacShirt,QuarterRoll)                       \
  TCP_VEH_CLASS_BLOUSED_UNZIPPED(TacShirt,SlimSleeve)                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(FieldTop,Full)                                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(FieldTop,HalfRoll)                                   \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(FieldTop,QuarterRoll)                                \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(FieldTop,SlimSleeve)                                 \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(TacShirt,Full)                                       \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(TacShirt,HalfRoll)                                   \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(TacShirt,QuarterRoll)                                \
  TCP_VEH_CLASS_GLOVES_UNZIPPED(TacShirt,SlimSleeve)                                 \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,Full)                               \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,HalfRoll)                           \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,QuarterRoll)                        \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,SlimSleeve)                         \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,Full)                               \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,HalfRoll)                           \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,QuarterRoll)                        \
  TCP_VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,SlimSleeve)

  #define TCP_WEP_CLASS_DEF \
  TCP_WEP_CLASS_NORMAL(TShirt,Tucked)                       \
  TCP_WEP_CLASS_NORMAL(TShirt,Untucked)                       \
  TCP_WEP_CLASS_NORMAL(FieldTop,Full)                       \
  TCP_WEP_CLASS_NORMAL(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_NORMAL(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_NORMAL(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_NORMAL(TacShirt,Full)                       \
  TCP_WEP_CLASS_NORMAL(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_NORMAL(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_NORMAL(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED(TShirt,Tucked)                       \
  TCP_WEP_CLASS_BLOUSED(TShirt,Untucked)                       \
  TCP_WEP_CLASS_BLOUSED(FieldTop,Full)                       \
  TCP_WEP_CLASS_BLOUSED(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED(TacShirt,Full)                       \
  TCP_WEP_CLASS_BLOUSED(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_GLOVES(TShirt,Tucked)                       \
  TCP_WEP_CLASS_GLOVES(TShirt,Untucked)                       \
  TCP_WEP_CLASS_GLOVES(FieldTop,Full)                       \
  TCP_WEP_CLASS_GLOVES(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_GLOVES(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_GLOVES(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_GLOVES(TacShirt,Full)                       \
  TCP_WEP_CLASS_GLOVES(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_GLOVES(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_GLOVES(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TShirt,Tucked)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TShirt,Untucked)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(FieldTop,Full)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TacShirt,Full)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED_GLOVES(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_UNZIPPED(FieldTop,Full)                       \
  TCP_WEP_CLASS_UNZIPPED(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_UNZIPPED(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_UNZIPPED(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_UNZIPPED(TacShirt,Full)                       \
  TCP_WEP_CLASS_UNZIPPED(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_UNZIPPED(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_UNZIPPED(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(FieldTop,Full)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(FieldTop,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(FieldTop,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(FieldTop,SlimSleeve)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(TacShirt,Full)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(TacShirt,HalfRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(TacShirt,QuarterRoll)                       \
  TCP_WEP_CLASS_BLOUSED_UNZIPPED(TacShirt,SlimSleeve)                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(FieldTop,Full)                                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(FieldTop,HalfRoll)                                   \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(FieldTop,QuarterRoll)                                \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(FieldTop,SlimSleeve)                                 \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(TacShirt,Full)                                       \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(TacShirt,HalfRoll)                                   \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(TacShirt,QuarterRoll)                                \
  TCP_WEP_CLASS_GLOVES_UNZIPPED(TacShirt,SlimSleeve)                                 \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,Full)                               \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,HalfRoll)                           \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,QuarterRoll)                        \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(FieldTop,SlimSleeve)                         \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,Full)                               \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,HalfRoll)                           \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,QuarterRoll)                        \
  TCP_WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(TacShirt,SlimSleeve)                         

  #define VEH_UNI_CLASS(CAMO)                                     \
  VEH_CLASS_NORMAL(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_NORMAL(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_NORMAL(CAMO,FieldTop,Full)                       \
  VEH_CLASS_NORMAL(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_NORMAL(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_NORMAL(CAMO,FieldTop,SlimSleeve)                       \
  VEH_CLASS_NORMAL(CAMO,TacShirt,Full)                       \
  VEH_CLASS_NORMAL(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_NORMAL(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_NORMAL(CAMO,TacShirt,SlimSleeve)                       \
  VEH_CLASS_BLOUSED(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_BLOUSED(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_BLOUSED(CAMO,FieldTop,Full)                       \
  VEH_CLASS_BLOUSED(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_BLOUSED(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_BLOUSED(CAMO,FieldTop,SlimSleeve)                       \
  VEH_CLASS_BLOUSED(CAMO,TacShirt,Full)                       \
  VEH_CLASS_BLOUSED(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_BLOUSED(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_BLOUSED(CAMO,TacShirt,SlimSleeve)                       \
  VEH_CLASS_GLOVES(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_GLOVES(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_GLOVES(CAMO,FieldTop,Full)                       \
  VEH_CLASS_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_GLOVES(CAMO,FieldTop,SlimSleeve)                       \
  VEH_CLASS_GLOVES(CAMO,TacShirt,Full)                       \
  VEH_CLASS_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_GLOVES(CAMO,TacShirt,SlimSleeve)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Tucked)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Untucked)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,Full)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,SlimSleeve)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,Full)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  VEH_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,SlimSleeve)                       \
  VEH_CLASS_UNZIPPED(CAMO,FieldTop,Full)                       \
  VEH_CLASS_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  VEH_CLASS_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  VEH_CLASS_UNZIPPED(CAMO,FieldTop,SlimSleeve)\
  VEH_CLASS_UNZIPPED(CAMO,TacShirt,Full)\
  VEH_CLASS_UNZIPPED(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_UNZIPPED(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_UNZIPPED(CAMO,TacShirt,SlimSleeve)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,Full)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,SlimSleeve)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,Full)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,SlimSleeve)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,Full)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,HalfRoll)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,QuarterRoll)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,SlimSleeve)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,Full)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,SlimSleeve)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,Full)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,SlimSleeve)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,Full)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)\
  VEH_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,SlimSleeve)

//cfgWeapon
#define WEP_UNI_CLASS(CAMO) \
  WEP_CLASS_NORMAL(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_NORMAL(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_NORMAL(CAMO,FieldTop,Full)                       \
  WEP_CLASS_NORMAL(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_NORMAL(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_NORMAL(CAMO,FieldTop,SlimSleeve)                       \
  WEP_CLASS_NORMAL(CAMO,TacShirt,Full)                       \
  WEP_CLASS_NORMAL(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_NORMAL(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_NORMAL(CAMO,TacShirt,SlimSleeve)                       \
  WEP_CLASS_BLOUSED(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_BLOUSED(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_BLOUSED(CAMO,FieldTop,Full)                       \
  WEP_CLASS_BLOUSED(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_BLOUSED(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_BLOUSED(CAMO,FieldTop,SlimSleeve)                       \
  WEP_CLASS_BLOUSED(CAMO,TacShirt,Full)                       \
  WEP_CLASS_BLOUSED(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_BLOUSED(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_BLOUSED(CAMO,TacShirt,SlimSleeve)                       \
  WEP_CLASS_GLOVES(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_GLOVES(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_GLOVES(CAMO,FieldTop,Full)                       \
  WEP_CLASS_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_GLOVES(CAMO,FieldTop,SlimSleeve)                       \
  WEP_CLASS_GLOVES(CAMO,TacShirt,Full)                       \
  WEP_CLASS_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_GLOVES(CAMO,TacShirt,SlimSleeve)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Tucked)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Untucked)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,Full)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,SlimSleeve)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,Full)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,SlimSleeve)                       \
  WEP_CLASS_UNZIPPED(CAMO,FieldTop,Full)                       \
  WEP_CLASS_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_UNZIPPED(CAMO,FieldTop,SlimSleeve)                       \
  WEP_CLASS_UNZIPPED(CAMO,TacShirt,Full)                       \
  WEP_CLASS_UNZIPPED(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_UNZIPPED(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_UNZIPPED(CAMO,TacShirt,SlimSleeve)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,Full)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,SlimSleeve)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,Full)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)                       \
  WEP_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,SlimSleeve)                       \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,Full)                                       \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,HalfRoll)                                   \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,QuarterRoll)                                \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,SlimSleeve)                                 \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,Full)                                       \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,HalfRoll)                                   \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,QuarterRoll)                                \
  WEP_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,SlimSleeve)                                 \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,Full)                               \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)                           \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)                        \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,SlimSleeve)                         \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,Full)                               \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)                           \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)                        \
  WEP_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,SlimSleeve)  

  #define NEW_UNIFROM_GI(CAMO)                        \
  NORMAL(CAMO,TShirt,Tucked)                       \
  NORMAL(CAMO,TShirt,Untucked)                       \
  NORMAL(CAMO,FieldTop,Full)                       \
  NORMAL(CAMO,FieldTop,HalfRoll)                       \
  NORMAL(CAMO,FieldTop,QuarterRoll)                       \
  NORMAL(CAMO,FieldTop,SlimSleeve)                       \
  NORMAL(CAMO,TacShirt,Full)                       \
  NORMAL(CAMO,TacShirt,HalfRoll)                       \
  NORMAL(CAMO,TacShirt,QuarterRoll)                       \
  NORMAL(CAMO,TacShirt,SlimSleeve)                       \
  BLOUSED(CAMO,TShirt,Tucked)                       \
  BLOUSED(CAMO,TShirt,Untucked)                       \
  BLOUSED(CAMO,FieldTop,Full)                       \
  BLOUSED(CAMO,FieldTop,HalfRoll)                       \
  BLOUSED(CAMO,FieldTop,QuarterRoll)                       \
  BLOUSED(CAMO,FieldTop,SlimSleeve)                       \
  BLOUSED(CAMO,TacShirt,Full)                       \
  BLOUSED(CAMO,TacShirt,HalfRoll)                       \
  BLOUSED(CAMO,TacShirt,QuarterRoll)                       \
  BLOUSED(CAMO,TacShirt,SlimSleeve)                       \
  GLOVES(CAMO,TShirt,Tucked)                       \
  GLOVES(CAMO,TShirt,Untucked)                       \
  GLOVES(CAMO,FieldTop,Full)                       \
  GLOVES(CAMO,FieldTop,HalfRoll)                       \
  GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  GLOVES(CAMO,FieldTop,SlimSleeve)                       \
  GLOVES(CAMO,TacShirt,Full)                       \
  GLOVES(CAMO,TacShirt,HalfRoll)                       \
  GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  GLOVES(CAMO,TacShirt,SlimSleeve)                       \
  BLOUSED_GLOVES(CAMO,TShirt,Tucked)                       \
  BLOUSED_GLOVES(CAMO,TShirt,Untucked)                       \
  BLOUSED_GLOVES(CAMO,FieldTop,Full)                       \
  BLOUSED_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  BLOUSED_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  BLOUSED_GLOVES(CAMO,FieldTop,SlimSleeve)                       \
  BLOUSED_GLOVES(CAMO,TacShirt,Full)                       \
  BLOUSED_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  BLOUSED_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  BLOUSED_GLOVES(CAMO,TacShirt,SlimSleeve)                       \
  UNZIPPED(CAMO,FieldTop,Full)                       \
  UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  UNZIPPED(CAMO,FieldTop,SlimSleeve)                       \
  UNZIPPED(CAMO,TacShirt,Full)                       \
  UNZIPPED(CAMO,TacShirt,HalfRoll)                       \
  UNZIPPED(CAMO,TacShirt,QuarterRoll)                       \
  UNZIPPED(CAMO,TacShirt,SlimSleeve)                       \
  BLOUSED_UNZIPPED(CAMO,FieldTop,Full)                       \
  BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  BLOUSED_UNZIPPED(CAMO,FieldTop,SlimSleeve)                       \
  BLOUSED_UNZIPPED(CAMO,TacShirt,Full)                       \
  BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)                       \
  BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)                       \
  BLOUSED_UNZIPPED(CAMO,TacShirt,SlimSleeve)                       \
  GLOVES_UNZIPPED(CAMO,FieldTop,Full)                                       \
  GLOVES_UNZIPPED(CAMO,FieldTop,HalfRoll)                                   \
  GLOVES_UNZIPPED(CAMO,FieldTop,QuarterRoll)                                \
  GLOVES_UNZIPPED(CAMO,FieldTop,SlimSleeve)                                 \
  GLOVES_UNZIPPED(CAMO,TacShirt,Full)                                       \
  GLOVES_UNZIPPED(CAMO,TacShirt,HalfRoll)                                   \
  GLOVES_UNZIPPED(CAMO,TacShirt,QuarterRoll)                                \
  GLOVES_UNZIPPED(CAMO,TacShirt,SlimSleeve)                                 \
  GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,Full)                               \
  GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)                           \
  GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)                        \
  GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,SlimSleeve)                         \
  GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,Full)                               \
  GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)                           \
  GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)                        \
  GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,SlimSleeve)                         

#define CN_SOUND(base,dur) QUOTE(TRIPLES(ADDON,base,dur))

#define AceWar_UNI_CLASS(CAMO) \
  AceWar_CLASS_NORMAL(CAMO,TShirt,Tucked)                       \
  AceWar_CLASS_NORMAL(CAMO,TShirt,Untucked)                       \
  AceWar_CLASS_NORMAL(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_NORMAL(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_NORMAL(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_NORMAL(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_NORMAL(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_NORMAL(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_NORMAL(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_NORMAL(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED(CAMO,TShirt,Tucked)                       \
  AceWar_CLASS_BLOUSED(CAMO,TShirt,Untucked)                       \
  AceWar_CLASS_BLOUSED(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_BLOUSED(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_BLOUSED(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_BLOUSED(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_BLOUSED(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_GLOVES(CAMO,TShirt,Tucked)                       \
  AceWar_CLASS_GLOVES(CAMO,TShirt,Untucked)                       \
  AceWar_CLASS_GLOVES(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_GLOVES(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_GLOVES(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_GLOVES(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Tucked)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TShirt,Untucked)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED_GLOVES(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_UNZIPPED(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_UNZIPPED(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_UNZIPPED(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_UNZIPPED(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_UNZIPPED(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_UNZIPPED(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,Full)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,FieldTop,SlimSleeve)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,Full)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)                       \
  AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,TacShirt,SlimSleeve)                       \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,Full)                                       \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,HalfRoll)                                   \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,QuarterRoll)                                \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,FieldTop,SlimSleeve)                                 \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,Full)                                       \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,HalfRoll)                                   \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,QuarterRoll)                                \
  AceWar_CLASS_GLOVES_UNZIPPED(CAMO,TacShirt,SlimSleeve)                                 \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,Full)                               \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,HalfRoll)                           \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,QuarterRoll)                        \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,FieldTop,SlimSleeve)                         \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,Full)                               \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,HalfRoll)                           \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,QuarterRoll)                        \
  AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,TacShirt,SlimSleeve)

  //CC AceWar class setup
#define AceWar_CLASS_NORMAL(CAMO,SHIRT,SLEEVE)                          \
  class CC_U_B_##SHIRT##_##SLEEVE##_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Put on Gloves"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Unzip Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Put on Gloves and unzip Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Blouse Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Put on Gloves and Blouse Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Blouse Pants and Unzip Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Put on Gloves, Blouse Pants, and Unzip Shirt"; \
        }; \
      }; \
  };

//Bloused
#define AceWar_CLASS_BLOUSED(CAMO,SHIRT,SLEEVE)                          \
  class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Put on Gloves, loosens pants."; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Unzip Shirt, loosens pants, take off gloves."; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Put on Gloves, unzips Shirt, and loosen pants."; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_##CAMO## { \
          directionalActionName = "Loosen Pants, take off gloves."; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Put on Gloves."; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Unzip Shirt."; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Put on Gloves and unzip Shirt"; \
        }; \
      }; \
  };

//Gloves
#define AceWar_CLASS_GLOVES(CAMO,SHIRT,SLEEVE)                          \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class CC_U_B_##SHIRT##_##SLEEVE####CAMO## { \
          directionalActionName = "Take off Gloves"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves and Unzip Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Unzip Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Take off Gloves and Blouse Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Blouse Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves, Blouse Pants and Unzip Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Blouse Pants and Unzip Shirt"; \
        }; \
      }; \
  };
//Bloused Gloves
#define AceWar_CLASS_BLOUSED_GLOVES(CAMO,SHIRT,SLEEVE)                          \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Loosen Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves, Loosen Pants, and Unzip Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Loosen Pants and Unzip Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Take off Gloves"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_##CAMO## { \
          directionalActionName = "Take off Gloves and Loosen Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves and Unzip Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Unzip Shirt"; \
        }; \
      }; \
  };

//Unzipped
#define AceWar_CLASS_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Put on Gloves and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_##CAMO## { \
          directionalActionName = "Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Put on Gloves"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Blouse Pants and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Put on Gloves, Blouse Pants, and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Blouse Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Put on Gloves and Blouse Pants"; \
        }; \
      }; \
  };
//BLOUSED UNZIPPED
#define AceWar_CLASS_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Put on Gloves, Loosen Pants, and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Loosen Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Put on Gloves and Loosen Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Put on Gloves and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_##CAMO## { \
          directionalActionName = "Loosen Pants and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Put on Gloves"; \
        }; \
      }; \
  };

//GLOVES_UNZIPPED
#define AceWar_CLASS_GLOVES_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
  class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## : ace_wardrobe_base {\
      class modifiableTo { \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_##CAMO## {   \
          directionalActionName = "Take off Gloves and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Take off Gloves, Blouse Pants, and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Blouse Pants and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves and Blouse Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Blouse Pants"; \
        }; \
      }; \
  };

//GLOVES_BLOUSED_UNZIPPED
#define AceWar_CLASS_GLOVES_BLOUSED_UNZIPPED(CAMO,SHIRT,SLEEVE)                          \
    class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_Unzipped_##CAMO##: ace_wardrobe_base \
    { \
      class modifiableTo { \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_##CAMO## { \
          directionalActionName = "Blouse Pants and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves and Loosen Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Unzipped_##CAMO## {   \
          directionalActionName = "Loosen Pants"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_##CAMO## { \
          directionalActionName = "Take off Gloves and Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Gloves_Bloused_##CAMO## { \
          directionalActionName = "Zip up Shirt"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_Bloused_Unzipped_##CAMO## { \
          directionalActionName = "Take off Gloves"; \
        }; \
        class CC_U_B_##SHIRT##_##SLEEVE##_##CAMO## { \
          directionalActionName = "Take off Gloves, Loosen Pants, and Zip up Shirt"; \
        }; \
      }; \
  };
