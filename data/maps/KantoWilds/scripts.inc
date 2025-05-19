KantoWilds_MapScripts::
	.byte 0

KantoWilds_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox KantoWilds_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Pikachu:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Pikachu: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Pika Pi!$"

KantoWilds_EventScript_Pidgeot::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	msgbox KantoWilds_Pidgeot, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Pidgeot:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Pidgeot: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Piiiiid!!!$"

KantoWilds_EventScript_Bulbasaur::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
	msgbox KantoWilds_Bulbasaur, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Bulbasaur:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Bulbasaur: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Bulba?$"

KantoWilds_EventScript_Charizard::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHARIZARD, CRY_MODE_NORMAL
	msgbox KantoWilds_Charizard, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Charizard:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Charizard: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Zard!$"

KantoWilds_EventScript_Kingler::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KINGLER, CRY_MODE_NORMAL
	msgbox KantoWilds_Kingler, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Kingler:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Kingler: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Ler ler ler.$"

KantoWilds_EventScript_Muk::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MUK, CRY_MODE_NORMAL
	msgbox KantoWilds_Muk, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Muk:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Muk: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Muuuuk...$"

KantoWilds_EventScript_Squirtle::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
	msgbox KantoWilds_Squirtle, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Squirtle:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Squirtle: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Squirtle!$"

KantoWilds_EventScript_Butterfree::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUTTERFREE, CRY_MODE_NORMAL
	msgbox KantoWilds_Butterfree, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Butterfree:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Butterfree: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Freeeee!$"

KantoWilds_EventScript_Lapras::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
	msgbox KantoWilds_Lapras, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Lapras:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Lapras: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Priiius?$"

KantoWilds_EventScript_Raticate::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RATICATE, CRY_MODE_NORMAL
	msgbox KantoWilds_Raticate, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Raticate:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Raticate: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Caatte?$"

KantoWilds_EventScript_Haunter::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HAUNTER, CRY_MODE_NORMAL
	msgbox KantoWilds_Haunter, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Haunter:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Haunter: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hauuun...$"

KantoWilds_EventScript_Seaking::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SEAKING, CRY_MODE_NORMAL
	msgbox KantoWilds_Seaking, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Seaking:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Seaking: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Seeki!$"

KantoWilds_EventScript_Mr_Mime::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MR_MIME, CRY_MODE_NORMAL
	msgbox KantoWilds_Mr_Mime, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Mr_Mime:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Mr Mime: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Mim Mime Mime!$"

KantoWilds_EventScript_Snorlax::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SNORLAX, CRY_MODE_NORMAL
	msgbox KantoWilds_Snorlax, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KantoWilds_Snorlax:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Snorlax: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Laaax...\p"
	.string "The {COLOR GREEN}{SHADOW LIGHT_GREEN}Snorlax {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} fell asleep...$"

ChampionsRanch_EventScript_KantoSign::
	msgbox ChampionsRanch_Kanto, MSGBOX_SIGN
	end

ChampionsRanch_Kanto:
.string "Kanto Wilds.$"



