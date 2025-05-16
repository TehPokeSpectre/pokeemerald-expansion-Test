GraniteCave_B2F_MapScripts::
	.byte 0

Granite_EventScript_Carbink::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CARBINK, CRY_MODE_NORMAL
	msgbox Granite_Carbink, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Granite_EventScript_Sableye::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SABLEYE, CRY_MODE_NORMAL
	msgbox Granite_Sableye, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Granite_Carbink:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Carbink: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Carbb.$"

Granite_Sableye:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Sableye: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Bley?$"

