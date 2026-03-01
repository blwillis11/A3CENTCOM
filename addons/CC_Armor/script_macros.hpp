/*
  ==============================================================================
  config_macros.hpp

  This file contains all macros used in our 73_vests config. Macros reduce
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
#define P(PATH) \y\A3CENTCOM\addons\CCarmor\##PATH
    //P((Something) => "\y\A3CENTCOM\addons\CCarmor\something

// Q(INPUT) => "INPUT"
#define Q(INPUT) QUOTE(INPUT)

#define QP(PATH) #P(PATH)
  // Wraps the expanded path in quotes, e.g.:
  // QP(data\loading_bg.jpg) => "\y\A3CENTCOM\addons\CCarmor\data\loading_bg.jpg"

// GLUE(A,B) => AB (concatenates tokens)
#define GLUE(A,B) A##B

#define QUOTE(s) #s

#define INF_UNI_Disp(CAMO,PLATOON,ROLE) 

//Standard vest stuff
#define VEST_MASS 30
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
    armor=18;                    \
    passThrough=0.5;             \
  };                             \
  class Arms {                   \
    hitpointName="HitArms";      \
    armor=20;                    \
    passThrough=0.1;             \
  };                             \
  class Chest {                  \
    hitpointName="HitChest";     \
    armor=30;                    \
    passThrough=0.1;             \
  };                             \
  class Diaphragm {              \
    hitpointName="HitDiaphragm"; \
    armor=28;                    \
    passThrough=0.1;             \
  };                             \
  class Abdomen {                \
    hitpointName="HitAbdomen";   \
    armor=28;                    \
    passThrough=0.1;             \
  };                             \
  class Body {                   \
    hitpointName="HitBody";      \
    passThrough=0.1;             \
  };                             \
  class Legs {                   \
    hitpointName="HitLegs";      \
    armor=18;                    \
    passThrough=0.5;             \
  };                             \
  class Hands {                  \
    hitpointName="HitHands";     \
    armor=18;                    \
    passThrough=0.1;             \
  };                             \
  class Pelvis {                 \
    hitpointName="HitPelvis";    \
    armor=28;                    \
    passThrough=0.1;             \
  };                             \
};

#define VEST_ITEM_M43D_INFO                                        \
  class ItemInfo: VestItem {                                          \
    hiddenSelections[] =\
    { \
      "camo", \
      "camo1", \
      "camo2", \
      "camo3", \
      "decals" \
    }; \
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_3.p3d"; \
    hiddenSelectionsTextures[]=\
    { \
      "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",\
      "\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_ODST_CO.paa",\
      "\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_M43D_ODST_CO.paa",\
      "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",\
      "\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"\
    };\
    vestType="Rebreather";                                            \
    containerClass="STB73_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    VEST_HITPOINT_INFO                                                \
  };

#define VEST_ITEM_M43A_INFO                                        \
  class ItemInfo: VestItem {                                          \
    vestType="Rebreather";                                            \
    containerClass="STB73_vest_supply";                                      \
    mass=VEST_MASS;                                                   \
    uniformModel="\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_3.p3d"; \
    hiddenSelections[]={"camo","camo1","camo2","decals"}; \
    hiddenSelectionsTextures[]= {"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa","\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_Shoulders_BaseSecurity_CO.paa","\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa","\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"}; \
    VEST_HITPOINT_INFO                                                \
  };

#define UNIFORM_XtdGI(CAMO,SHIRT) 						               \
    class TCP_U_B_CBUU_##SHIRT##_Base;                           \

#define STB73_Vest_ODST(CAMO,PLATOON,DISPLAYNAME) \
    class STB73_M43D_ODST_##CAMO##_##PLATOON : TCP_V_M43D_ODST_4_Base { \
      scope=2; \
      scopeArsenal=2; \
      displayName = DISPLAYNAME; \
      model="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_4.p3d"; \
      author=AUTHOR; \
      hiddenSelections[]= { "camo","camo1","camo2","camo3","decals" }; \
      hiddenSelectionsTextures[]= { "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa", Q(STB73_TEXPATH(vest,vest_Shoulders_ODST_##CAMO##_co.paa)), Q(STB73_TEXPATH(vest,vest_M43D_ODST_##CAMO##_co.paa)), "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa", "\tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa" }; \
      class ItemInfo: VestItem { \
        hiddenSelectionsTextures[]= { "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa", Q(STB73_TEXPATH(vest,vest_Shoulders_ODST_##CAMO##_co.paa)), Q(STB73_TEXPATH(vest,vest_M43D_ODST_##CAMO##_co.paa)), "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa", "\tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa" }; \
        uniformModel="\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\M43D_ODST_4.p3d"; \
        vestType="Rebreather";                                            \
        containerClass="STB73_vest_supply";                                      \
        mass=VEST_MASS;                                                   \
        VEST_HITPOINT_INFO                                                \
      }; \
      class XtdGearInfo { \
        Model="STB73_ACE_M43D_Vest"; \
        Billet =Q(##PLATOON##); \
        Roles=Q(##CAMO##); \
        Variant="ODST"; \
      };   \
    };

#define CH252D_HELMET(TF,VISOR) \
    class CC_CH252D_##TF##_##VISOR## : CH252D_Helmet { \
      scope=2;\
      scopeArsenal=2;\
      displayName=QUOTE([CC] CH252D Helmet);\
      hiddenSelectionsTextures[]=\
      {\
          Q(CC_TEXPATH(##TF##,ODST\helmets\CC_ODST_Helmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,ODST\helmets\CC_ODST_Visor_CO.paa)),\
          "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"     \
      };\
      class ItemInfo: ItemInfo\
      {\
          uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";\
          hiddenSelections[]=\
          {\
              "Camo1",\
              "Camo2",\
              "Camo3" \
          };\
          hiddenSelectionsTextures[]=\
          {\
              Q(CC_TEXPATH(##TF##,ODST\helmets\CC_ODST_Helmet_CO.paa)),\
              Q(CC_TEXPATH(##TF##,ODST\helmets\CC_ODST_Visor_CO.paa)),\
              "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"\
          };\
      };\
    };

#define CH252D_HELMET_DP(TF,VISOR) \
    class CC_CH252D_##TF##_##VISOR##_dp : CH252D_Helmet_dp { \
      displayName=QUOTE([CC] CH252D Helmet);\
      hiddenSelectionsTextures[]=\
      {\
          Q(CC_TEXPATH(##TF##,ODST\helmets\CC_ODST_Helmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,ODST\helmets\CC_ODST_Depolarized_Visor_CA.paa)),\
          "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"     \
      };\
      class ItemInfo: ItemInfo\
      {\
          uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";\
          hiddenSelections[]=\
          {\
              "Camo1",\
              "Camo2",\
              "Camo3" \
          };\
          hiddenSelectionsTextures[]=\
          {\
              Q(CC_TEXPATH(##TF##,ODST\helmets\CC_ODST_Helmet_CO.paa)),\
              Q(CC_TEXPATH(##TF##,ODST\helmets\CC_ODST_Depolarized_Visor_CA.paa)),\
              "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"\
          };\
      };\
    };




#define ODST_BDU_WEP(CAMO) \
    class CC_ODST_##CAMO##_BDU: MA_Marine_BDU_ODST_HJ \
    { \
        author=AUTHOR; \
        displayName = QUOTE([CC] ODST BDU [CAMO]); \
        scope=2; \
        scopeArsenal=2; \
        class ItemInfo: UniformItem \
        { \
          uniformClass="CC_BDU_##CAMO##_ODST"; \
          containerClass="Supply150"; \
          mass=10; \
          uniformType="Neopren"; \
          modelSides[]={6}; \
        };\
    };

#define ODST_BDU_VEH(CAMO) \
    class CC_BDU_##CAMO##_ODST: MA_Marine_ODST_BDU_HJ \
    { \
        author=AUTHOR; \
        displayName = QUOTE([CC] ODST BDU [CAMO]); \
        scope=2; \
        scopeArsenal=2; \
        UniformClass="CC_ODST_##CAMO##_BDU"; \
        hiddenSelectionsTextures[]= \
        { \
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_UpperBDU_CO.paa)), \
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_LowerBDU_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_Collar_CO.paa)),\
            Q(CC_TEXPATH(uniform,TrooperSoftpadding_CO.paa)),\
            Q(CC_TEXPATH(uniform,TrooperArmorStraps_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_TrooperUpperArmor_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_TrooperLowerArmor_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_TrooperShoulders_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_TrooperShoulders_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_TrooperShoulders_CO.paa))\
        };\
    };

#define ODST_BDU_NC_WEP(CAMO) \
    class CC_ODST_##CAMO##_BDU_NC: MA_Marine_BDU_ODST_HJ_NC \
    { \
        author=AUTHOR; \
        displayName = QUOTE([CC] ODST BDU [CAMO]); \
        scope=2; \
        scopeArsenal=2; \
        class ItemInfo: UniformItem \
        { \
          uniformClass="CC_BDU_##CAMO##_ODST"; \
          containerClass="Supply150"; \
          mass=10; \
          uniformType="Neopren"; \
          modelSides[]={6}; \
        };\
    };

#define ODST_BDU_NC_VEH(CAMO) \
    class CC_BDU_##CAMO##_ODST_NC: MA_Marine_ODST_BDU_HJ_NC \
    { \
        author=AUTHOR; \
        displayName = QUOTE([CC] ODST BDU [CAMO]); \
        scope=2; \
        scopeArsenal=2; \
        UniformClass="CC_ODST_##CAMO##_BDU"; \
        hiddenSelectionsTextures[]= \
        { \
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_UpperBDU_CO.paa)), \
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_LowerBDU_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_Collar_CO.paa)),\
            Q(CC_TEXPATH(uniform,TrooperSoftpadding_CO.paa)),\
            Q(CC_TEXPATH(uniform,TrooperArmorStraps_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_TrooperUpperArmor_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_TrooperLowerArmor_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_TrooperShoulders_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_TrooperShoulders_CO.paa)),\
            Q(CC_TEXPATH(uniform,##CAMO##\CC_ODST_TrooperShoulders_CO.paa))\
        };\
    };

