KalosMeadows_MapScripts::
	.byte 0

KalosMeadows_EventScript_Greninja::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GRENINJA, CRY_MODE_NORMAL
	msgbox KalosMeadows_Greninja, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KalosMeadows_Greninja:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Greninja: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Gecko!$"

KalosMeadows_EventScript_Hawlucha::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HAWLUCHA, CRY_MODE_NORMAL
	msgbox KalosMeadows_Hawlucha, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KalosMeadows_Hawlucha:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Hawlucha: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Luchcuchucha!!!!\p"
	.string "It continues to flex, showing off\n"
	.string "it's muscles.$"

KalosMeadows_EventScript_Goodra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GOODRA, CRY_MODE_NORMAL
	msgbox KalosMeadows_Goodra, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KalosMeadows_Goodra:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Goodra: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Gooooo?$"

KalosMeadows_EventScript_Noivern::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NOIVERN, CRY_MODE_NORMAL
	msgbox KalosMeadows_Noivern, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KalosMeadows_Noivern:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Noivern: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Veeeirn!$"

KalosMeadows_EventScript_Talonflame::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TALONFLAME, CRY_MODE_NORMAL
	msgbox KalosMeadows_Talonflame, MSGBOX_DEFAULT
	waitmoncry
	release
	end

KalosMeadows_Talonflame:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Talonflame: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Talon. Lon!$"

ChampionsRanch_EventScript_KalosSign::
	msgbox ChampionsRanch_Kalos, MSGBOX_SIGN
	end

ChampionsRanch_Kalos:
.string "Kalos Meadows.$"



