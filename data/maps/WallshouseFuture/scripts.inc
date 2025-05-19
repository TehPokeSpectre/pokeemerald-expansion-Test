WallshouseFuture_MapScripts::
	.byte 0

Subbit_EventScript_IronValiant::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IRON_VALIANT, CRY_MODE_NORMAL
	msgbox Future_IronValiant, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Future_IronValiant:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Valiant: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Gaalr-ZZT!\p"
	.string "It seems this Pokemon has some relation\n"
	.string "to this place.$"

