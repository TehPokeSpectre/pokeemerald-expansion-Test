GalarianTundra_MapScripts::
	.byte 0

GalarianTundra_EventScript_Dracovish::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DRACOVISH, CRY_MODE_NORMAL
	msgbox GalarianTundra_Dracovish, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GalarianTundra_Dracovish:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Dracovish: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Draaaacov!$"

GalarianTundra_EventScript_Gengar::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GENGAR, CRY_MODE_NORMAL
	msgbox GalarianTundra_Gengar, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GalarianTundra_Gengar:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Gengar: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Kekeke gar!$"

GalarianTundra_EventScript_Dragonite::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DRAGONITE, CRY_MODE_NORMAL
	msgbox GalarianTundra_Dragonite, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GalarianTundra_Dragonite:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Dragonite: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Niiite?$"

GalarianTundra_EventScript_Lucario::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LUCARIO, CRY_MODE_NORMAL
	msgbox GalarianTundra_Lucario, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GalarianTundra_Lucario:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Lucario: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Cario!$"

GalarianTundra_EventScript_Sirfetchd::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SIRFETCHD, CRY_MODE_NORMAL
	msgbox GalarianTundra_Sirfetchd, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GalarianTundra_Sirfetchd:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Sirfetchd: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Quack?$"

ChampionsRanch_EventScript_GalarSign::
	msgbox ChampionsRanch_Galar, MSGBOX_SIGN
	end

ChampionsRanch_Galar:
.string "Galarian Tundra.$"

