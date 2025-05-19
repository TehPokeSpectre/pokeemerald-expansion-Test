JohtoGrove_MapScripts::
	.byte 0

JohtoGrove_EventScript_Totodile::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
	msgbox JohtoGrove_Totodile, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JohtoGrove_Totodile:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Totodile: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Totoo! Totototo!!!$"

JohtoGrove_EventScript_Heracross::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HERACROSS, CRY_MODE_NORMAL
	msgbox JohtoGrove_Heracross, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JohtoGrove_Heracross:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Heracross: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Herriac!$"

JohtoGrove_EventScript_Donphan::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DONPHAN, CRY_MODE_NORMAL
	msgbox JohtoGrove_Donphan, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JohtoGrove_Donphan:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Donphan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Phaan!$"

JohtoGrove_EventScript_Quilava::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_QUILAVA, CRY_MODE_NORMAL
	msgbox JohtoGrove_Quilava, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JohtoGrove_Quilava:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Quilava: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Quilllav?$"

JohtoGrove_EventScript_Bayleef::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
	msgbox JohtoGrove_Bayleef, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JohtoGrove_Bayleef:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Bayleef: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Leeeef <3.$"

ChampionsRanch_EventScript_JohtoSign::
	msgbox ChampionsRanch_Johto, MSGBOX_SIGN
	end

ChampionsRanch_Johto:
.string "Johto Grove.$"

