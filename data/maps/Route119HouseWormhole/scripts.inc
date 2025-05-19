Route119HouseWormhole_MapScripts::
	.byte 0

Route119_HouseWH_EventScript_Woman::
	msgbox Route119_HouseWH_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
	end

Route119_HouseWH_EventScript_Wingull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox Route119_HouseWH_Text_Wingull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route119_HouseWH_Text_RumorAboutCaveOfOrigin:
	.string "Eek! I was with my precious baby\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Wingull {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}when this appeared!\p"
	.string "I don't know where it goes and\n"
	.string "I don't want to know!!!$"

Route119_HouseWH_Text_Wingull:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Wingull: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}: Pihyoh...$"

