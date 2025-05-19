UltraRuins_MapScripts::
	.byte 0

UltraRuins_EventScript_Guzzlord::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GUZZLORD, CRY_MODE_NORMAL
	msgbox UltraRuins_Guzzlord, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UltraRuins_Guzzlord:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Guzzlord: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}GUUZZZZZZZ!!!!$"

