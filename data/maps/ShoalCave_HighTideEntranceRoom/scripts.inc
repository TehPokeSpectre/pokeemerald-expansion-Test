ShoalCave_HighTideEntranceRoom_MapScripts::
	.byte 0

ShoalcaveHigh_EventScript_Spheal::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
	msgbox ShoalcaveHigh_Spheal, MSGBOX_DEFAULT
	waitmoncry
	release
	end

ShoalcaveHigh_Spheal:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Spheal: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Phheaal!$"

ShoalcaveHigh_EventScript_Shellder::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SHELLDER, CRY_MODE_NORMAL
	msgbox ShoalcaveHigh_Shellder, MSGBOX_DEFAULT
	waitmoncry
	release
	end

ShoalcaveHigh_Shellder:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Shellder: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Shellll...$"

