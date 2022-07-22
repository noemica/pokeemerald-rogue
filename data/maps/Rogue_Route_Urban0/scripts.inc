Rogue_Route_Urban0_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Rogue_Route_Urban0_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Route_Urban0_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Route_Urban0_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, Rogue_Common_TurnPlayerNorth
	.2byte 0

Rogue_Route_Urban0_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_1, 0, Rogue_Route_Urban0_OnFrame0
	.2byte 0


Rogue_Route_Urban0_OnFrame0::
	goto_if_set FLAG_ROGUE_SPECIAL_ENCOUNTER_ACTIVE, Rogue_Route_Urban0_OnFrame0_2
Rogue_Route_Urban0_OnFrame0_1:
	setvar VAR_TEMP_1, 1
	end

Rogue_Route_Urban0_OnFrame0_2:
	lockall
	special DoSealedChamberShakingEffect_Short
	waitstate
	playse SE_DOOR
	delay 10
	random 2
	switch VAR_RESULT
	case 0, Rogue_Route_Urban0_OnFrame0_6
	case 1, Rogue_Route_Urban0_OnFrame0_7
Rogue_Route_Urban0_OnFrame0_4:
	releaseall
	goto Rogue_Route_Urban0_OnFrame0_1

Rogue_Route_Urban0_OnFrame0_6:
	setmetatile 26, 87, METATILE_Mauville_DoorTop_CyclingRoad, TRUE
	setmetatile 26, 88, METATILE_Mauville_Door_CyclingRoad, TRUE
	goto Rogue_Route_Urban0_OnFrame0_4

Rogue_Route_Urban0_OnFrame0_7:
	setmetatile 22, 15, METATILE_Mauville_DoorTop_CyclingRoad, TRUE
	setmetatile 22, 16, METATILE_Mauville_Door_CyclingRoad, TRUE
	goto Rogue_Route_Urban0_OnFrame0_4
