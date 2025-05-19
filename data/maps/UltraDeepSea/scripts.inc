UltraDeepSea_MapScripts::
	.byte 0


SUSCave_EventScript_Nihilego::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIHILEGO, CRY_MODE_NORMAL
	msgbox SUSCave_Nihilego, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SUSCave_Nihilego:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Nihilego: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Venomenon!!!$"

SUSCave_EventScript_Nihilego2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIHILEGO, CRY_MODE_NORMAL
	msgbox SUSCave_Nihilego2, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SUSCave_Nihilego2:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Nihilego: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Menon?$"

SUSCave_EventScript_Nihilego3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIHILEGO, CRY_MODE_NORMAL
	msgbox SUSCave_Nihilego3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SUSCave_Nihilego3:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Nihilego: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Venonoenon...$"




