AlolanDowns_MapScripts::
	.byte 0

AlolanDowns_EventScript_Rowlet::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ROWLET, CRY_MODE_NORMAL
	msgbox AlolanDowns_Rowlet, MSGBOX_DEFAULT
	waitmoncry
	release
	end

AlolanDowns_Rowlet:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Rowlet: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Wooo...\p"
	.string "The {COLOR GREEN}{SHADOW LIGHT_GREEN}Rowlet {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}fell asleep.$"

AlolanDowns_EventScript_Incineroar::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_INCINEROAR, CRY_MODE_NORMAL
	msgbox AlolanDowns_Incineroar, MSGBOX_DEFAULT
	waitmoncry
	release
	end

AlolanDowns_Incineroar:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Incineroar: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}RAAAWWWR!$"

AlolanDowns_EventScript_Naganadel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NAGANADEL, CRY_MODE_NORMAL
	msgbox AlolanDowns_Naganadel, MSGBOX_DEFAULT
	waitmoncry
	release
	end

AlolanDowns_Naganadel:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Naganadel: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Nagaadel?$"

AlolanDowns_EventScript_Melmetal::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MELMETAL, CRY_MODE_NORMAL
	msgbox AlolanDowns_Melmetal, MSGBOX_DEFAULT
	waitmoncry
	release
	end

AlolanDowns_Melmetal:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Melmetal: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Meltel!$"

AlolanDowns_EventScript_LycanrokDusk::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LYCANROC_DUSK, CRY_MODE_NORMAL
	msgbox AlolanDowns_LycanrokDusk, MSGBOX_DEFAULT
	waitmoncry
	release
	end

AlolanDowns_LycanrokDusk:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Lycanroc: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Rooook.$"

ChampionsRanch_EventScript_AlolaSign::
	msgbox ChampionsRanch_Alola, MSGBOX_SIGN
	end

ChampionsRanch_Alola:
.string "Alolan Downs.$"




