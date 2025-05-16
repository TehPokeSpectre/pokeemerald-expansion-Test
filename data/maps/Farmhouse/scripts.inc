Farmhouse_MapScripts::
	.byte 0



RustboroFarms_EventScript_Purugly::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PURUGLY, CRY_MODE_NORMAL
	msgbox RustboroFarms_Purugly, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RustboroFarms_Purugly:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Purugly: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Raaaowwww...\p"
	.string "It hisses at you...$"

RustboroFarms_EventScript_Smeargle::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SMEARGLE, CRY_MODE_NORMAL
	msgbox RustboroFarms_Smeargle, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RustboroFarms_Smeargle:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Smeargle: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Smeeeraa!!!$"

RustboroFarms_EventScript_Man::
	msgbox RustboroFarms_Farmer, MSGBOX_NPC
	end

RustboroFarms_Farmer:
    .string "Yee Haw, I run dis here farm!\p"
	.string "My gosh darn {COLOR GREEN}{SHADOW LIGHT_GREEN}Houndour {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}outside\n"
	.string "seemed to have lost a really\l"
	.string "important stone somewhere...$"


