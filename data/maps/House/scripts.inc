House_MapScripts::
	.byte 0

Subbit_EventScript_IronMoth::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IRON_MOTH, CRY_MODE_NORMAL
	msgbox Future_IronMoth, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Future_IronMoth:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Moth: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Vollc-ZZT...$"

