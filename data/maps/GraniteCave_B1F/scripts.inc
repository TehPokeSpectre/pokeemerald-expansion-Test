GraniteCave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
	.byte 0

GraniteCave_B1F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_GRANITE_CAVE_B2F
	end

InnerGranite_EventScript_Carbink::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CARBINK, CRY_MODE_NORMAL
	msgbox InnerGranite_Carbink, MSGBOX_DEFAULT
	waitmoncry
	release
	end

InnerGranite_Carbink:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Carbink: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Biiarnk?$"


