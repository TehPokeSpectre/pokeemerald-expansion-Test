Underwater_Route126_MapScripts::
	.byte 0

Route126_EventScript_FINIZEN::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FINIZEN, CRY_MODE_NORMAL
	msgbox Route126_FINIZEN, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route126_FINIZEN:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Finizen: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Fiiiinzi!$"

Route126_EventScript_Corsola::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CORSOLA, CRY_MODE_NORMAL
	msgbox Route126_Corsola, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route126_Corsola:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Corsola: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Cooorsol$"

Route126_EventScript_Lanturn::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LANTURN, CRY_MODE_NORMAL
	msgbox Route126_Lanturn, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route126_Lanturn:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Lanturn: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Laant!!$"

Route126_EventScript_Phione::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PHIONE, CRY_MODE_NORMAL
	msgbox Route126_Phione, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route126_Phione:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Phione: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Phoooie?$"

Route126_EventScript_Staryu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STARYU, CRY_MODE_NORMAL
	msgbox Route126_Staryu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route126_Staryu:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Staryu: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Btttzyu?$"

Route126_EventScript_Wugtrio::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WUGTRIO, CRY_MODE_NORMAL
	msgbox Route126_Wugtrio, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route126_Wugtrio:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Wugtrio: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Wugugug.$"


