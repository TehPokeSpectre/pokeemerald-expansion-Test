UltraJungle_MapScripts::
	.byte 0

UltraJungle_EventScript_Buzzwole::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUZZWOLE, CRY_MODE_NORMAL
	msgbox UltraJungle_Buzzwole, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UltraJungle_Buzzwole:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Buzzwole: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hyraahhh!\p"
	.string "It proceeded to flex it's muscles...$"

