UltraCrater_MapScripts::
	.byte 0

UltraCrater_EventScript_Celesteela::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CELESTEELA, CRY_MODE_NORMAL
	msgbox UltraCrater_Celesteela, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UltraCrater_Celesteela:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Celesteela: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Shiningli...$"


