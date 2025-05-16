Underwater_Route127_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Underwater_Route127_OnResume
	.byte 0

Underwater_Route127_OnResume:
	call AbnormalWeather_Underwater_SetupEscapeWarp
	end


Route127_EventScript_FINIZEN::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FINIZEN, CRY_MODE_NORMAL
	msgbox Route127_FINIZEN, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route127_FINIZEN:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Finizen: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Fiiiinzi!$"

Route127_EventScript_Corsola::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CORSOLA, CRY_MODE_NORMAL
	msgbox Route127_Corsola, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route127_Corsola:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Corsola: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Cooorsol$"

Route127_EventScript_Lanturn::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LANTURN, CRY_MODE_NORMAL
	msgbox Route127_Lanturn, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route127_Lanturn:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Lanturn: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Laant!!$"

Route127_EventScript_Phione::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PHIONE, CRY_MODE_NORMAL
	msgbox Route127_Phione, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route127_Phione:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Phione: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Phoooie?$"

Route127_EventScript_Staryu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STARYU, CRY_MODE_NORMAL
	msgbox Route127_Staryu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route127_Staryu:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Staryu: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Btttzyu?$"

Route127_EventScript_Wugtrio::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WUGTRIO, CRY_MODE_NORMAL
	msgbox Route127_Wugtrio, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route127_Wugtrio:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Wugtrio: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Wugugug.$"

Route127_EventScript_Wishiwashi::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WISHIWASHI, CRY_MODE_NORMAL
	msgbox Route127_Wishiwashi, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route127_Wishiwashi:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Wishiwashi: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}W-W-wishi?$"

Route127_EventScript_Clawitzer::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLAWITZER, CRY_MODE_NORMAL
	msgbox Route127_Clawitzer, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route127_Clawitzer:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Clawitzer: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Clwaaitz!$"

Route127_EventScript_Mantine::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MANTINE, CRY_MODE_NORMAL
	msgbox Route127_Mantine, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route127_Mantine:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Mantine: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Tutututine!$"

Route127_EventScript_Binacle::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BINACLE, CRY_MODE_NORMAL
	msgbox Route127_Binacle, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route127_Binacle:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Binacle: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Tutututine!$"


