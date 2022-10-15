#include "constants/event_objects.h"
#include "constants/layouts.h"
#include "constants/maps.h"
#include "constants/pokemon.h"
#include "constants/weather.h"

#define ENCOUNTER_MAP(id, map) { .encounterId=id, .layout=LAYOUT_##map, .group=MAP_GROUP(map), .num=MAP_NUM(map) }

const u8 gRogueTypeWeatherTable[] = 
{
    [TYPE_NONE] = WEATHER_NONE,
    [TYPE_NORMAL] = WEATHER_NONE,
    [TYPE_FIGHTING] = WEATHER_SUNNY,
    [TYPE_FLYING] = WEATHER_NONE,
    [TYPE_POISON] = WEATHER_SHADE,
    [TYPE_GROUND] = WEATHER_SANDSTORM,
    [TYPE_ROCK] = WEATHER_SANDSTORM,
    [TYPE_BUG] = WEATHER_SHADE,
    [TYPE_GHOST] = WEATHER_VOLCANIC_ASH,
    [TYPE_STEEL] = WEATHER_SANDSTORM,
    [TYPE_MYSTERY] = WEATHER_UNDERWATER_BUBBLES,
    [TYPE_FIRE] = WEATHER_DROUGHT,
    [TYPE_WATER] = WEATHER_DOWNPOUR,
    [TYPE_GRASS] = WEATHER_LEAVES,
    [TYPE_ELECTRIC] = WEATHER_RAIN_THUNDERSTORM,
    [TYPE_PSYCHIC] = WEATHER_FOG_HORIZONTAL,
    [TYPE_ICE] = WEATHER_SNOW,
    [TYPE_DRAGON] = WEATHER_DROUGHT,
    [TYPE_DARK] = WEATHER_VOLCANIC_ASH,
#ifdef ROGUE_EXPANSION
    [TYPE_FAIRY] = WEATHER_FOG_DIAGONAL,
#endif
};

const struct RogueEncounterMap gRogueTypeToEliteRoom[] = 
{
    [TYPE_NONE] = ENCOUNTER_MAP(0, ROGUE_BOSS_11),
    [TYPE_NORMAL] = ENCOUNTER_MAP(0, ROGUE_BOSS_8),
    [TYPE_FIGHTING] = ENCOUNTER_MAP(0, ROGUE_BOSS_8),
    [TYPE_FLYING] = ENCOUNTER_MAP(0, ROGUE_BOSS_8),
    [TYPE_POISON] = ENCOUNTER_MAP(0, ROGUE_BOSS_9),
    [TYPE_GROUND] = ENCOUNTER_MAP(0, ROGUE_BOSS_11),
    [TYPE_ROCK] = ENCOUNTER_MAP(0, ROGUE_BOSS_11),
    [TYPE_BUG] = ENCOUNTER_MAP(0, ROGUE_BOSS_9),
    [TYPE_GHOST] = ENCOUNTER_MAP(0, ROGUE_BOSS_9),
    [TYPE_STEEL] = ENCOUNTER_MAP(0, ROGUE_BOSS_11),
    [TYPE_MYSTERY] = ENCOUNTER_MAP(0, ROGUE_BOSS_10),
    [TYPE_FIRE] = ENCOUNTER_MAP(0, ROGUE_BOSS_11),
    [TYPE_WATER] = ENCOUNTER_MAP(0, ROGUE_BOSS_10),
    [TYPE_GRASS] = ENCOUNTER_MAP(0, ROGUE_BOSS_8),
    [TYPE_ELECTRIC] = ENCOUNTER_MAP(0, ROGUE_BOSS_8),
    [TYPE_PSYCHIC] = ENCOUNTER_MAP(0, ROGUE_BOSS_9),
    [TYPE_ICE] = ENCOUNTER_MAP(0, ROGUE_BOSS_10),
    [TYPE_DRAGON] = ENCOUNTER_MAP(0, ROGUE_BOSS_11),
    [TYPE_DARK] = ENCOUNTER_MAP(0, ROGUE_BOSS_8),
#ifdef ROGUE_EXPANSION
    [TYPE_FAIRY] = ENCOUNTER_MAP(0, ROGUE_BOSS_10),
#endif
};

// Kinda a gross way of doing it, but was the simplest without hacking it in elsewhere
static const u16 sQuerySpecies_Kanto[] =
{
    SPECIES_BULBASAUR,
    SPECIES_CHARMANDER,
    SPECIES_SQUIRTLE,
    SPECIES_CATERPIE,
    SPECIES_WEEDLE,
    SPECIES_PIDGEY,
    SPECIES_RATTATA,
    SPECIES_SPEAROW,
    SPECIES_EKANS,
    SPECIES_PIKACHU,
    SPECIES_SANDSHREW,
    SPECIES_NIDORAN_F,
    SPECIES_NIDORAN_M,
    SPECIES_CLEFAIRY,
    SPECIES_VULPIX,
    SPECIES_JIGGLYPUFF,
    SPECIES_ZUBAT,
    SPECIES_ODDISH,
    SPECIES_PARAS,
    SPECIES_VENONAT,
    SPECIES_DIGLETT,
    SPECIES_MEOWTH,
    SPECIES_PSYDUCK,
    SPECIES_MANKEY,
    SPECIES_GROWLITHE,
    SPECIES_POLIWAG,
    SPECIES_ABRA,
    SPECIES_MACHOP,
    SPECIES_BELLSPROUT,
    SPECIES_TENTACOOL,
    SPECIES_GEODUDE,
    SPECIES_PONYTA,
    SPECIES_SLOWPOKE,
    SPECIES_MAGNEMITE,
    SPECIES_FARFETCHD,
    SPECIES_DODUO,
    SPECIES_SEEL,
    SPECIES_GRIMER,
    SPECIES_SHELLDER,
    SPECIES_GASTLY,
    SPECIES_ONIX,
    SPECIES_DROWZEE,
    SPECIES_KRABBY,
    SPECIES_VOLTORB,
    SPECIES_EXEGGCUTE,
    SPECIES_CUBONE,
    SPECIES_HITMONLEE,
    SPECIES_HITMONCHAN,
    SPECIES_LICKITUNG,
    SPECIES_KOFFING,
    SPECIES_RHYHORN,
    SPECIES_CHANSEY,
    SPECIES_TANGELA,
    SPECIES_KANGASKHAN,
    SPECIES_HORSEA,
    SPECIES_GOLDEEN,
    SPECIES_STARYU,
    SPECIES_MR_MIME,
    SPECIES_SCYTHER,
    SPECIES_JYNX,
    SPECIES_ELECTABUZZ,
    SPECIES_MAGMAR,
    SPECIES_PINSIR,
    SPECIES_TAUROS,
    SPECIES_MAGIKARP,
    SPECIES_LAPRAS,
    SPECIES_DITTO,
    SPECIES_EEVEE,
    SPECIES_PORYGON,
    SPECIES_OMANYTE,
    SPECIES_KABUTO,
    SPECIES_AERODACTYL,
    SPECIES_SNORLAX,
    SPECIES_ARTICUNO,
    SPECIES_ZAPDOS,
    SPECIES_MOLTRES,
    SPECIES_DRATINI,
    SPECIES_MEWTWO,
    SPECIES_MEW
};

static const u16 sQuerySpecies_Blue[] =
{
    SPECIES_PIKACHU,
    SPECIES_NIDORAN_M,
    SPECIES_NIDORAN_F,
    SPECIES_CLEFAIRY,
    SPECIES_VULPIX,
    SPECIES_ODDISH,
    SPECIES_GROWLITHE,
    SPECIES_POLIWAG,
    SPECIES_ABRA,
    SPECIES_MACHOP,
    SPECIES_GEODUDE,
    SPECIES_GASTLY,
    SPECIES_EXEGGCUTE,
    SPECIES_RHYHORN,
    SPECIES_HORSEA,
    SPECIES_MEWTWO,
    SPECIES_STARYU,
    SPECIES_SCYTHER,
    SPECIES_JYNX,
    SPECIES_ELECTABUZZ,
    SPECIES_MAGMAR,
    SPECIES_EEVEE,
    SPECIES_ONIX,
    SPECIES_MAGNEMITE,
    SPECIES_SLOWPOKE
};

static const struct RogueTrainerEncounter sRouteBossEncounters[] = 
{
    // Hoenn Gyms
    //
    {
        .gfxId = OBJ_EVENT_GFX_ROXANNE,
        .trainerId = TRAINER_ROGUE_BOSS_ROXANNE,
        .victorySetFlag = FLAG_BADGE01_GET,
        .incTypes = { TYPE_ROCK, TYPE_NONE, TYPE_STEEL },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_GYM,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_BRAWLY,
        .trainerId = TRAINER_ROGUE_BOSS_BRAWLY,
        .victorySetFlag = FLAG_BADGE02_GET,
        .incTypes = { TYPE_FIGHTING, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_GYM,
    },
    {
        .gfxId = OBJ_EVENT_GFX_WATTSON,
        .trainerId = TRAINER_ROGUE_BOSS_WATTSON,
        .victorySetFlag = FLAG_BADGE03_GET,
        .incTypes = { TYPE_ELECTRIC, TYPE_NONE, TYPE_ELECTRIC },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_GYM,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_FLANNERY,
        .trainerId = TRAINER_ROGUE_BOSS_FLANNERY,
        .victorySetFlag = FLAG_BADGE04_GET,
        .incTypes = { TYPE_FIRE, TYPE_NONE, TYPE_FIRE },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_GYM,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_NORMAN,
        .trainerId = TRAINER_ROGUE_BOSS_NORMAN,
        .victorySetFlag = FLAG_BADGE05_GET,
        .incTypes = { TYPE_NORMAL, TYPE_NONE, TYPE_DRAGON },
        .excTypes = { TYPE_FLYING, TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_GYM,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_WINONA,
        .trainerId = TRAINER_ROGUE_BOSS_WINONA,
        .victorySetFlag = FLAG_BADGE06_GET,
        .incTypes = { TYPE_FLYING, TYPE_NONE, TYPE_FLYING  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_GYM,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_LIZA,
        .trainerId = TRAINER_ROGUE_BOSS_TATE_AND_LIZA,
        .victorySetFlag = FLAG_BADGE07_GET,
        .incTypes = { TYPE_PSYCHIC, TYPE_NONE, TYPE_PSYCHIC  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_GYM,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_JUAN,
        .trainerId = TRAINER_ROGUE_BOSS_JUAN,
        .victorySetFlag = FLAG_BADGE08_GET,
        .incTypes = { TYPE_WATER, TYPE_NONE, TYPE_WATER  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_GYM,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
    },

    // Hoenn Elite
    {
        .gfxId = OBJ_EVENT_GFX_SIDNEY,
        .trainerId = TRAINER_ROGUE_BOSS_SIDNEY,
#ifdef ROGUE_EXPANSION
        .incTypes = { TYPE_DARK, TYPE_NONE, TYPE_FAIRY },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_ELITE,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
#else
        .incTypes = { TYPE_DARK, TYPE_NONE },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_ELITE,
#endif
    },
    {
        .gfxId = OBJ_EVENT_GFX_PHOEBE,
        .trainerId = TRAINER_ROGUE_BOSS_PHOEBE,
        .incTypes = { TYPE_GHOST, TYPE_NONE, TYPE_PSYCHIC },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_ELITE,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_GLACIA,
        .trainerId = TRAINER_ROGUE_BOSS_GLACIA,
        .incTypes = { TYPE_ICE, TYPE_NONE },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_ELITE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_DRAKE,
        .trainerId = TRAINER_ROGUE_BOSS_DRAKE,
        .incTypes = { TYPE_DRAGON, TYPE_NONE, TYPE_DRAGON },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_ELITE,
    },

    // Hoenn Champs
    {
        .gfxId = OBJ_EVENT_GFX_WALLACE,
        .trainerId = TRAINER_ROGUE_BOSS_WALLACE,
        .incTypes = { TYPE_WATER, TYPE_NONE, TYPE_WATER },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_PRE_CHAMP,
    },
    {
        .gfxId = OBJ_EVENT_GFX_STEVEN,
        .trainerId = TRAINER_ROGUE_BOSS_STEVEN,
        .incTypes = { TYPE_STEEL, TYPE_NONE, TYPE_PSYCHIC },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN | TRAINER_FLAG_FINAL_CHAMP,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
    },

    // Kanto Gyms
    //
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_BROCK,
        .trainerId = TRAINER_ROGUE_BOSS_BROCK,
        .victorySetFlag = FLAG_BADGE01_GET,
        .incTypes = { TYPE_ROCK, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_GYM,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_MISTY,
        .trainerId = TRAINER_ROGUE_BOSS_MISTY,
        .victorySetFlag = FLAG_BADGE02_GET,
        .incTypes = { TYPE_WATER, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_GYM,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_LTSURGE,
        .trainerId = TRAINER_ROGUE_BOSS_LTSURGE,
        .victorySetFlag = FLAG_BADGE03_GET,
        .incTypes = { TYPE_ELECTRIC, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_GYM,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_ERIKA,
        .trainerId = TRAINER_ROGUE_BOSS_ERIKA,
        .victorySetFlag = FLAG_BADGE04_GET,
        .incTypes = { TYPE_GRASS, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_GYM,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_KOGA,
        .trainerId = TRAINER_ROGUE_BOSS_KOGA,
        .victorySetFlag = FLAG_BADGE05_GET,
        .incTypes = { TYPE_POISON, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_GYM,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_SABRINA,
        .trainerId = TRAINER_ROGUE_BOSS_SABRINA,
        .victorySetFlag = FLAG_BADGE06_GET,
        .incTypes = { TYPE_PSYCHIC, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_GYM,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_BLAINE,
        .trainerId = TRAINER_ROGUE_BOSS_BLAINE,
        .victorySetFlag = FLAG_BADGE07_GET,
        .incTypes = { TYPE_FIRE, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_GYM,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_GIOVANNI,
        .trainerId = TRAINER_ROGUE_BOSS_GIOVANNI,
        .victorySetFlag = FLAG_BADGE08_GET,
        .incTypes = { TYPE_GROUND, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_GYM,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },

    // Kanto Elite 4
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_LORELEI,
        .trainerId = TRAINER_ROGUE_BOSS_LORELEI,
        .incTypes = { TYPE_ICE, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_ELITE,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_BRUNO,
        .trainerId = TRAINER_ROGUE_BOSS_BRUNO,
        .incTypes = { TYPE_FIGHTING, TYPE_GROUND, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_ELITE,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_AGATHA,
        .trainerId = TRAINER_ROGUE_BOSS_AGATHA,
        .incTypes = { TYPE_GHOST, TYPE_POISON, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_ELITE,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_LANCE,
        .trainerId = TRAINER_ROGUE_BOSS_LANCE,
        .incTypes = { TYPE_DRAGON, TYPE_FLYING, TYPE_NONE  },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_ELITE,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },

    // Kanto Champs
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_BLUE,
        .trainerId = TRAINER_ROGUE_BOSS_BLUE,
        .incTypes = { TYPE_NONE },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_PRE_CHAMP,
        .querySpecies = sQuerySpecies_Blue,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Blue),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY | PARTY_FLAG_STRONG_PRESETS_IGNORE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_KANTO_PROFOAK,
        .trainerId = TRAINER_ROGUE_BOSS_PROFOAK,
        .incTypes = { TYPE_NONE },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_KANTO | TRAINER_FLAG_FINAL_CHAMP,
        .querySpecies = sQuerySpecies_Kanto,
        .querySpeciesCount = ARRAY_COUNT(sQuerySpecies_Kanto),
        .partyFlags = PARTY_FLAG_CUSTOM_QUERY,
    },

    // Placeholder Rainbow mode bosses for missing types
    {
        .gfxId = OBJ_EVENT_GFX_LUCY,
        .trainerId = TRAINER_ROGUE_BOSS_LUCY,
        .incTypes = { TYPE_POISON, TYPE_NONE },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_NONE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_BRANDON,
        .trainerId = TRAINER_ROGUE_BOSS_BRANDON,
        .incTypes = { TYPE_GROUND, TYPE_NONE, TYPE_GROUND },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_NONE,
        .partyFlags = PARTY_FLAG_THIRDSLOT_ACE_TYPE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_TUCKER,
        .trainerId = TRAINER_ROGUE_BOSS_TUCKER,
        .incTypes = { TYPE_BUG, TYPE_NONE },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_NONE,
    },
    {
        .gfxId = OBJ_EVENT_GFX_SPENSER,
        .trainerId = TRAINER_ROGUE_BOSS_SPENSER,
        .incTypes = { TYPE_GRASS, TYPE_NONE },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_NONE,
    },
#ifdef ROGUE_EXPANSION
    {
        .gfxId = OBJ_EVENT_GFX_ANABEL,
        .trainerId = TRAINER_ROGUE_BOSS_ANABEL,
        .incTypes = { TYPE_FAIRY, TYPE_NONE },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_NONE,
    },
#endif
};

const struct RogueTrainerData gRogueBossEncounters = 
{
    .count = ARRAY_COUNT(sRouteBossEncounters),
    .trainers = sRouteBossEncounters
};

static const struct RogueTrainerEncounter sRouteMiniBossEncounters[] = 
{
    {
        .gfxId = OBJ_EVENT_GFX_MAXIE,
        .trainerId = TRAINER_ROGUE_MINI_BOSS_MAXIE,
        .incTypes = { TYPE_FIRE, TYPE_DARK, TYPE_NONE },
        .excTypes = { TYPE_WATER, TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN,
    },
    {
        .gfxId = OBJ_EVENT_GFX_ARCHIE,
        .trainerId = TRAINER_ROGUE_MINI_BOSS_ARCHIE,
        .incTypes = { TYPE_WATER, TYPE_DARK, TYPE_NONE },
        .excTypes = { TYPE_FIRE, TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN,
    },
    {
        .gfxId = OBJ_EVENT_GFX_WALLY,
        .trainerId = TRAINER_ROGUE_MINI_BOSS_WALLY,
#ifdef ROGUE_EXPANSION
        .incTypes = { TYPE_PSYCHIC, TYPE_FAIRY, TYPE_NONE },
#else
        .incTypes = { TYPE_PSYCHIC, TYPE_GRASS, TYPE_NONE },
#endif
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN,
    },
    {
        .gfxId = OBJ_EVENT_GFX_BRENDAN_NORMAL,
        .trainerId = TRAINER_ROGUE_MINI_BOSS_MIRROR,
        .incTypes = { TYPE_MYSTERY, TYPE_NONE },
        .excTypes = { TYPE_NONE },
        .trainerFlags = TRAINER_FLAG_HOENN,
    },
};

const struct RogueTrainerData gRogueMiniBossEncounters = 
{
    .count = ARRAY_COUNT(sRouteMiniBossEncounters),
    .trainers = sRouteMiniBossEncounters
};

#undef ENCOUNTER_MAP