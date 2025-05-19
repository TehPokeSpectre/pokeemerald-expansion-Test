FutureGameCorner_MapScripts::
	.byte 0


Subbit_EventScript_IRONHANDS::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IRON_HANDS, CRY_MODE_NORMAL
	msgbox Future_IronHands, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Future_IronHands:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Hands: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Harrrii-ZZT!$"

