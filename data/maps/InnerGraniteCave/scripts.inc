InnerGraniteCave_MapScripts::
	.byte 0

InnerGranite_EventScript_Terapagos::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
	msgbox InnerGranite_Terapagos, MSGBOX_DEFAULT
	waitmoncry
	release
	end

InnerGranite_Script_Carbink::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CARBINK, CRY_MODE_NORMAL
	msgbox InnerGraniteCave_Carbink, MSGBOX_DEFAULT
	waitmoncry
	release
	end

InnerGranite_Terapagos:
	.string "The mysterious Pokemon looks at you\n"
	.string "with curiosity...$"

InnerGraniteCave_Carbink:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Carbink: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Biiarnk?$"

