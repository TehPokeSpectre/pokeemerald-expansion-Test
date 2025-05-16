Mauville_Depths_MapScripts::
	.byte 0

MauvilleDepths_EventScript_Regieleki::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIELEKI, CRY_MODE_NORMAL
	msgbox MauvilleDepths_Regieleki, MSGBOX_DEFAULT
	waitmoncry
	release
	end

MauvilleDepths_Regieleki:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Regieleki: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Biitzzzbiitek!$"

MauvilleDepths_EventScript_Golem_Alola::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GOLEM, CRY_MODE_NORMAL
	msgbox MauvilleDepths_Golem, MSGBOX_DEFAULT
	waitmoncry
	release
	end

MauvilleDepths_Golem:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Golem: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Goolueeem!$"

