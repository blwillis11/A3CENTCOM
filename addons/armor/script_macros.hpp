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

#define VEST_ODST(TF,CAMO) \
    class CC_M56D_ODST_Vest_##TF##_##CAMO## : M52_ODST_Vest_Base { \
      scope=1; \
      scopeArsenal=1; \
      displayName = QUOTE([CC] M56D ODST Vest [##TF##] [##CAMO##]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ODST_Bracer_Left","ODST_Bracer_Right","ODST_Chest","ODST_Left","ODST_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR"}; \
      hiddenSelectionsTextures[]= {Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ODST_Bracer_Left","ODST_Bracer_Right","ODST_Chest","ODST_Left","ODST_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR"}; \
        hiddenSelectionsTextures[]= {Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
        uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d"; \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO                                                \
      }; \
    };
    
#define VEST_ODST_A(TF,CAMO) \
    class CC_M56D_ODST_Vest_A_##TF##_##CAMO## : CC_M56D_ODST_Vest_##TF##_##CAMO## { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M56D-A ODST Vest [##TF##] [##CAMO##]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR"}; \
        hiddenSelectionsTextures[]= {Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
        uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d"; \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_ODST_B(TF,CAMO) \
    class CC_M56D_ODST_Vest_B_##TF##_##CAMO## : CC_M56D_ODST_Vest_##TF##_##CAMO## { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M56D-B ODST Vest [##TF##] [##CAMO##]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","StomachPouch","TorsoPouch","WaistBack","WaistGRight","WaistPLeft","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchR"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","StomachPouch","TorsoPouch","WaistBack","WaistGRight","WaistPLeft","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchR"}; \
        hiddenSelectionsTextures[]= {Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
        uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d"; \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_ODST_C(TF,CAMO) \
    class CC_M56D_ODST_Vest_C_##TF##_##CAMO## : CC_M56D_ODST_Vest_##TF##_##CAMO## { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M56D-C ODST Vest [##TF##] [##CAMO##]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchR"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistRLeft","WaistRRight","WaistSRight","LegPouchR"}; \
        hiddenSelectionsTextures[]= {Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
        uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d"; \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_ODST_D(TF,CAMO) \
    class CC_M56D_ODST_Vest_D_##TF##_##CAMO## : CC_M56D_ODST_Vest_##TF##_##CAMO## { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M56D-D ODST Vest [##TF##] [##CAMO##]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","LShoulderRadio","RShoulderRadio","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistSLeft","WaistSRight"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","LShoulderRadio","RShoulderRadio", "TorsoPMLeft", "TorsoPMRight", "TorsoPouch", "WaistSLeft", "WaistSRight"}; \
        hiddenSelectionsTextures[]= {Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
        uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d"; \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_ODST_M(TF,CAMO) \
    class CC_M56D_ODST_Vest_M_##TF##_##CAMO## : CC_M56D_ODST_Vest_##TF##_##CAMO## { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M56D-M ODST Vest [##TF##] [##CAMO##]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Right","ODST_Left","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","StomachPouch","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Right","ODST_Left","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","StomachPouch","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
        hiddenSelectionsTextures[]= {Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
        uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d"; \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_ODST_CQB(TF,CAMO) \
    class CC_M56D_ODST_Vest_CQB_##TF##_##CAMO## : CC_M56D_ODST_Vest_##TF##_##CAMO## { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M56D-CQB ODST Vest [##TF##] [##CAMO##]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","LShoulderRadio","RShoulderRadio","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGRight","WaistRRight","WaistSLeft"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","LShoulderRadio","RShoulderRadio","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGRight","WaistRRight","WaistSLeft"}; \
        hiddenSelectionsTextures[]= {Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
        uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d"; \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_ODST_L(TF,CAMO) \
    class CC_M56D_ODST_Vest_L_##TF##_##CAMO## : CC_M56D_ODST_Vest_##TF##_##CAMO## { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] M56D-L ODST Vest [##TF##] [##CAMO##]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","ODST_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","ODST_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR"}; \
        hiddenSelectionsTextures[]= {Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_CQB_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Marksman_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Vest_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(##TF##,ODST\Vest\##CAMO##\CC_ODST_Shoulders_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
        uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d"; \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_MAR_Base \
    class CC_Mar_Pouches_Base : Marine_Pouches_Base { \
      scope=1; \
      scopeArsenal=1; \
      displayName = QUOTE([CC] Marine Pouches Base [##TF##] [##CAMO##]); \
      author=AUTHOR; \
      hiddenSelections[]={}; \
      hiddenSelectionsTextures[]= {Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={}; \
        hiddenSelectionsTextures[]= {Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_A_CO.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(backpack,Backpack_Radio_ODST_co.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa)),Q(CC_TEXPATH(pouches,CC_TrooperExtras_B_CO.paa))}; \
        uniformModel="MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";  \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_MAR_Var0 \
    class CC_Mar_Pouches_Var0 : CC_Mar_Pouches_Base { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] Marine Pouches [No Pouches]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","ChestPMLeft","ChestPMRight","ChestPouch","ChestRadio","LegLeft","LegRight","StomachPouch","TorsoPM","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","ChestPMLeft","ChestPMRight","ChestPouch","ChestRadio","LegLeft","LegRight","StomachPouch","TorsoPM","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
        uniformModel="MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";  \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_MAR_Var1 \
    class CC_Mar_Pouches_Var1 : CC_Mar_Pouches_Base { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] Marine Pouches [Variant 1]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","ChestPMLeft","ChestPMRight","ChestRadio","LegLeft","LegRight","StomachPouch","TorsoPM","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","ChestPMLeft","ChestPMRight","ChestRadio","LegLeft","LegRight","StomachPouch","TorsoPM","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
        uniformModel="MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";  \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_MAR_Var2 \
    class CC_Mar_Pouches_Var2 : CC_Mar_Pouches_Base { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] Marine Pouches [Variant 2]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","ChestPMLeft","ChestPMRight","ChestRadio","LegLeft","LegRight","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","ChestPMLeft","ChestPMRight","ChestRadio","LegLeft","LegRight","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
        uniformModel="MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";  \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_MAR_Var3 \
    class CC_Mar_Pouches_Var3 : CC_Mar_Pouches_Base { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] Marine Pouches [Variant 3]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","ChestPMLeft","ChestPMRight","ChestPouch","ChestRadio","LegLeft","LegRight","StomachPouch","TorsoPM","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","ChestPMLeft","ChestPMRight","ChestPouch","ChestRadio","LegLeft","LegRight","StomachPouch","TorsoPM","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
        uniformModel="MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";  \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define VEST_MAR_Var4 \
    class CC_Mar_Pouches_Var4 : CC_Mar_Pouches_Base { \
      scope=2; \
      scopeArsenal=2; \
      displayName = QUOTE([CC] Marine Pouches [Variant 4]); \
      author=AUTHOR; \
      hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","ChestPMLeft","ChestPMRight","ChestPouch","ChestRadio","LegLeft","LegRight","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
      class ItemInfo: VestItem { \
        hiddenSelections[]={"Camo1", "Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","ChestPMLeft","ChestPMRight","ChestPouch","ChestRadio","LegLeft","LegRight","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight"}; \
        uniformModel="MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";  \
        containerClass="Supply200";                                      \
        mass=20;                                                   \
        VEST_HITPOINT_INFO  \
      }; \
    };

#define CH252_HELMET(TF, CAMO) \
    class CC_CH252D_##TF##_##CAMO##: CH252_Helmet_Standard { \
      scope=2;\
      scopeArsenal=2;\
      author=AUTHOR; \
      displayName=QUOTE([CC] CH252 Helmet [##TF##] [##CAMO##]);\
      hiddenSelectionsTextures[]=\
      {\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\VacSeal_CO.paa)),     \
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\##VISOR##_FaceModule_CO.paa)), \
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\##VISOR##_FaceModule_CO.paa)) \
      };\
    };

#define CH252_HELMET_EYEPIECE(TF, CAMO) \
    class CC_CH252D_Eyepiece_##TF##_##CAMO##: CH252_Helmet_EyePiece { \
      scope=2;\
      scopeArsenal=2;\
      author=AUTHOR; \
      displayName=QUOTE([CC] CH252 Helmet [Eyepiece] [##TF##] [##CAMO##]);\
      hiddenSelectionsTextures[]=\
      {\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\VacSeal_CO.paa)),     \
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\##VISOR##_FaceModule_CO.paa)), \
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\##VISOR##_FaceModule_CO.paa)) \
      };\
    };

#define CH252_HELMET_VISORGLASSES(TF, CAMO) \
    class CC_CH252D_VisorGlasses_##TF##_##CAMO##: CH252_Helmet_VisorGlasses { \
      scope=2;\
      scopeArsenal=2;\
      author=AUTHOR; \
      displayName=QUOTE([CC] CH252 Helmet [Glasses] [##TF##] [##CAMO##]);\
      hiddenSelectionsTextures[]=\
      {\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\VacSeal_CO.paa)),     \
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\##VISOR##_FaceModule_CO.paa)), \
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\##VISOR##_FaceModule_CO.paa)) \
      };\
    };

#define ECH252_HELMET(TF, CAMO, VISOR) \
    class CC_ECH252D_##TF##_##CAMO##_##VISOR## : CH252_Helmet_Sealed { \
      scope=2;\
      scopeArsenal=2;\
      author=AUTHOR; \
      displayName=QUOTE([CC] ECH252 Helmet [##TF##] [##CAMO##] [##VISOR## Visor]);\
      hiddenSelectionsTextures[]=\
      {\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\CC_TrooperHelmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\CC_HelmetAccessories_A_CO.paa)),\
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\VacSeal_CO.paa)),     \
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\##VISOR##_FaceModule_CO.paa)), \
          Q(CC_TEXPATH(##TF##,Marines\helmets\##CAMO##\##VISOR##_FaceModule_CO.paa)) \
      };\
    };

#define CH252D_HELMET(TF,CAMO,VISOR) \
    class CC_CH252D_##TF##_##CAMO##_##VISOR## : CH252D_Helmet { \
      scope=2;\
      scopeArsenal=2;\
      author=AUTHOR; \
      displayName=QUOTE([CC] CH252D Helmet [##TF##] [##CAMO##] [##VISOR## Visor]);\
      hiddenSelectionsTextures[]=\
      {\
          Q(CC_TEXPATH(##TF##,ODST\helmets\##CAMO##\CC_ODST_Helmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,ODST\helmets\Visor\##VISOR##\CC_ODST_Visor_CO.paa)),\
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
          Q(CC_TEXPATH(##TF##,ODST\helmets\##CAMO##\CC_ODST_Helmet_CO.paa)),\
          Q(CC_TEXPATH(##TF##,ODST\helmets\Visor\##VISOR##\CC_ODST_Visor_CO.paa)),\
          "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"     \
          };\
      };\
    };

#define CH252D_HELMET_DP(TF,CAMO,VISOR) \
    class CC_CH252D_##TF##_##CAMO##_##VISOR##_dp : CH252D_Helmet_dp { \
      displayName=QUOTE([CC] CH252D Helmet [##TF##] [##CAMO##] [##VISOR## Visor]);\
      author=AUTHOR; \
      hiddenSelectionsTextures[]=\
      {\
          Q(CC_TEXPATH(##TF##,ODST\helmets\##CAMO##\CC_ODST_Helmet_CO.paa)),\
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
          uniformClass=Q(CC_BDU_##CAMO##_ODST); \
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
        UniformClass=Q(CC_ODST_##CAMO##_BDU); \
        hiddenSelectionsTextures[]= \
        { \
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_UpperBDU_CO.paa)), \
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_LowerBDU_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_Collar_CO.paa)),\
            Q(CC_TEXPATH(uniform,TrooperSoftpadding_CO.paa)),\
            Q(CC_TEXPATH(uniform,TrooperArmorStraps_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_TrooperUpperArmor_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_TrooperLowerArmor_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_TrooperShoulders_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_TrooperShoulders_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_TrooperShoulders_CO.paa))\
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
          uniformClass=Q(CC_BDU_##CAMO##_ODST_NC); \
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
        UniformClass=Q(CC_ODST_##CAMO##_BDU_NC); \
        hiddenSelectionsTextures[]= \
        { \
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_UpperBDU_CO.paa)), \
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_LowerBDU_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_Collar_CO.paa)),\
            Q(CC_TEXPATH(uniform,TrooperSoftpadding_CO.paa)),\
            Q(CC_TEXPATH(uniform,TrooperArmorStraps_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_TrooperUpperArmor_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_TrooperLowerArmor_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_TrooperShoulders_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_TrooperShoulders_CO.paa)),\
            Q(CC_TEXPATH(uniform,ODST\##CAMO##\CC_ODST_TrooperShoulders_CO.paa))\
        };\
    };

#define MAR_BDU_LIGHT_WEP(CAMO) \
    class CC_Marine_Light_##CAMO##_BDU : MA_Marine_BDU_Light \
    { \
      author=AUTHOR; \
      displayName = QUOTE([CC] Marine BDU [Light] [CAMO]); \
      scope=2; \
      scopeArsenal=2; \
      class ItemInfo: UniformItem \
      { \
        uniformClass=Q(CC_BDU_Light_##CAMO##_Marine); \
        containerClass="Supply150"; \
        mass=10; \
        uniformType="Neopren"; \
        modelSides[]={6}; \
      };\
    };

#define MAR_BDU_LIGHT_VEH(CAMO) \
    class CC_BDU_Light_##CAMO##_Marine: MA_Marine_Light_BDU \
    { \
      author=AUTHOR; \
      displayName = QUOTE([CC] Marine BDU [Light] [CAMO]); \
      scope=2; \
      scopeArsenal=2; \
      UniformClass=Q(CC_Marine_Light_##CAMO##_BDU); \
      hiddenSelectionsTextures[]= \
      { \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperUpperBDU_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperLowerBDU_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperCollar_CO.paa)), \
          Q(CC_TEXPATH(uniform,TrooperSoftpadding_CO.paa)), \
          Q(CC_TEXPATH(uniform,TrooperArmorStraps_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperUpperArmor_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperLowerArmor_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperShoulders_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperShoulders_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperShoulders_CO.paa)) \
      }; \
    }; 

#define MAR_BDU_MEDIUM_WEP(CAMO) \
    class CC_Marine_Medium_##CAMO##_BDU : MA_Marine_BDU_Medium \
    { \
      author=AUTHOR; \
      displayName = QUOTE([CC] Marine BDU [Medium] [CAMO]); \
      scope=2; \
      scopeArsenal=2; \
      class ItemInfo: UniformItem \
      { \
        uniformClass=Q(CC_BDU_Medium_##CAMO##_Marine); \
        containerClass="Supply150"; \
        mass=10; \
        uniformType="Neopren"; \
        modelSides[]={6}; \
      };\
    };

#define MAR_BDU_MEDIUM_VEH(CAMO) \
    class CC_BDU_Medium_##CAMO##_Marine: MA_Marine_Medium_BDU \
    { \
      author=AUTHOR; \
      displayName = QUOTE([CC] Marine BDU [Medium] [CAMO]); \
      scope=2; \
      scopeArsenal=2; \
      UniformClass=Q(CC_Marine_Medium_##CAMO##_BDU); \
      hiddenSelectionsTextures[]= \
      { \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperUpperBDU_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperLowerBDU_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperCollar_CO.paa)), \
          Q(CC_TEXPATH(uniform,TrooperSoftpadding_CO.paa)), \
          Q(CC_TEXPATH(uniform,TrooperArmorStraps_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperUpperArmor_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperLowerArmor_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperShoulders_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperShoulders_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperShoulders_CO.paa)) \
      }; \
    };

#define MAR_BDU_HEAVY_WEP(CAMO) \
    class CC_Marine_Heavy_##CAMO##_BDU : MA_Marine_BDU_Heavy \
    { \
      author=AUTHOR; \
      displayName = QUOTE([CC] Marine BDU [Heavy] [CAMO]); \
      scope=2; \
      scopeArsenal=2; \
      class ItemInfo: UniformItem \
      { \
        uniformClass=Q(CC_BDU_Heavy_##CAMO##_Marine); \
        containerClass="Supply150"; \
        mass=10; \
        uniformType="Neopren"; \
        modelSides[]={6}; \
      };\
    };

#define MAR_BDU_HEAVY_VEH(CAMO) \
    class CC_BDU_Heavy_##CAMO##_Marine: MA_Marine_Heavy_BDU \
    { \
      author=AUTHOR; \
      displayName = QUOTE([CC] Marine BDU [Heavy] [CAMO]); \
      scope=2; \
      scopeArsenal=2; \
      UniformClass=Q(CC_Marine_Heavy_##CAMO##_BDU); \
      hiddenSelectionsTextures[]= \
      { \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperUpperBDU_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperLowerBDU_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperCollar_CO.paa)), \
          Q(CC_TEXPATH(uniform,TrooperSoftpadding_CO.paa)), \
          Q(CC_TEXPATH(uniform,TrooperArmorStraps_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperUpperArmor_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperLowerArmor_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperShoulders_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperShoulders_CO.paa)), \
          Q(CC_TEXPATH(uniform,Marine\##CAMO##\CC_Base_TrooperShoulders_CO.paa)) \
      }; \
    };
