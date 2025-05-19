MauvilleCenterParadox_MapScripts::
	.byte 0

Subbit_EventScript_IronBoulder::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IRON_BOULDER, CRY_MODE_NORMAL
	msgbox Future_IronBoulder, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Future_IronBoulder:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Boulder: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Teerak-ZZT!$"

Subbit_EventScript_IronLeaves::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IRON_LEAVES, CRY_MODE_NORMAL
	msgbox Future_IronLeaves, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Future_IronLeaves:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Leaves: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Viiirz-ZZT!$"


