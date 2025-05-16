NewMauville_Cave_MapScripts::
	.byte 0

MauvilleTunnel_EventScript_Geodude_Alola::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GEODUDE, CRY_MODE_NORMAL
	msgbox MauvilleTunnel_Geodude, MSGBOX_DEFAULT
	waitmoncry
	release
	end

MauvilleTunnel_Geodude:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Geodude: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Duuueduue!$"

MauvilleTunnel_EventScript_Golem_Alola::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GOLEM, CRY_MODE_NORMAL
	msgbox MauvilleTunnel_Golem, MSGBOX_DEFAULT
	waitmoncry
	release
	end

MauvilleTunnel_Golem:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Golem: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Goolueeem!$"

