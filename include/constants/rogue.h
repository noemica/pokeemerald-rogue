#define ROGUE_DEBUG
#define ROGUE_DEBUG_PAUSE_PANEL
//#define ROGUE_DEBUG_STEAL_TEAM

//#define ROGUE_EXPANSION

#define ROGUE_FEATURE_ENCOUNTER_PREVIEW

// It looks like file.c:line: size of array `id' is negative
#define ROGUE_STATIC_ASSERT(expr, id) typedef char id[(expr) ? 1 : -1];

#define ROGUE_ROUTE_COUNT 12
#define ROGUE_HUB_BERRY_TREE_COUNT 16

#define ROGUE_MAX_ADVPATH_ROWS 7
#define ROGUE_MAX_ADVPATH_COLUMNS 7


// Items
//
#define ROGUE_SHOP_NONE                 0
#define ROGUE_SHOP_MEDICINE             1
#define ROGUE_SHOP_BALLS                2
#define ROGUE_SHOP_TMS                  3
#define ROGUE_SHOP_BATTLE_ENHANCERS     4
#define ROGUE_SHOP_HELD_ITEMS           5
#define ROGUE_SHOP_RARE_HELD_ITEMS      6
#define ROGUE_SHOP_BERRIES              7


#define ITEM_LINK_CABLE ITEM_EXP_SHARE

#ifdef ROGUE_EXPANSION
#define ITEM_QUEST_LOG ITEM_KEY_TO_ROOM_1
#else
#define ITEM_QUEST_LOG ITEM_ROOM_1_KEY
#endif

// Trainers
//
// RogueNote: Overwrite from these trainer ranges
#define TRAINER_ROGUE_BREEDER_F             (TRAINER_JULIE + 0)
#define TRAINER_ROGUE_BREEDER_M             (TRAINER_JULIE + 1)
#define TRAINER_ROGUE_RICH_F                (TRAINER_JULIE + 2)
#define TRAINER_ROGUE_RICH_M                (TRAINER_JULIE + 4)
#define TRAINER_ROGUE_COOLTRAINER_F         (TRAINER_JULIE + 5)
#define TRAINER_ROGUE_COOLTRAINER_M         (TRAINER_JULIE + 6)
#define TRAINER_ROGUE_POKEFAN_F             (TRAINER_JULIE + 7)
#define TRAINER_ROGUE_POKEFAN_M             (TRAINER_JULIE + 8)
#define TRAINER_ROGUE_SCHOOL_KID_F          (TRAINER_JULIE + 9)
#define TRAINER_ROGUE_SCHOOL_KID_M          (TRAINER_JULIE + 10)
#define TRAINER_ROGUE_TUBER_F               (TRAINER_JULIE + 11)
#define TRAINER_ROGUE_TUBER_M               (TRAINER_JULIE + 12)
#define TRAINER_ROGUE_POSH_F                (TRAINER_JULIE + 13)
#define TRAINER_ROGUE_POSH_M                (TRAINER_JULIE + 14)
#define TRAINER_ROGUE_MAGMA_F               (TRAINER_JULIE + 15)
#define TRAINER_ROGUE_MAGMA_M               (TRAINER_JULIE + 16)
#define TRAINER_ROGUE_AQUA_F                (TRAINER_JULIE + 17)
#define TRAINER_ROGUE_AQUA_M                (TRAINER_JULIE + 18)

#define TRAINER_ROGUE_BOSS_ROXANNE           TRAINER_ROXANNE_1
#define TRAINER_ROGUE_BOSS_BRAWLY            TRAINER_BRAWLY_1
#define TRAINER_ROGUE_BOSS_WATTSON           TRAINER_WATTSON_1
#define TRAINER_ROGUE_BOSS_FLANNERY          TRAINER_FLANNERY_1
#define TRAINER_ROGUE_BOSS_NORMAN            TRAINER_NORMAN_1
#define TRAINER_ROGUE_BOSS_WINONA            TRAINER_WINONA_1
#define TRAINER_ROGUE_BOSS_TATE_AND_LIZA     TRAINER_TATE_AND_LIZA_1
#define TRAINER_ROGUE_BOSS_JUAN              TRAINER_JUAN_1

#define TRAINER_ROGUE_BOSS_SIDNEY            TRAINER_SIDNEY
#define TRAINER_ROGUE_BOSS_PHOEBE            TRAINER_PHOEBE
#define TRAINER_ROGUE_BOSS_GLACIA            TRAINER_GLACIA
#define TRAINER_ROGUE_BOSS_DRAKE             TRAINER_DRAKE

#define TRAINER_ROGUE_BOSS_WALLACE           TRAINER_WALLACE
#define TRAINER_ROGUE_BOSS_STEVEN            TRAINER_STEVEN

#include "rogue_quests.h"