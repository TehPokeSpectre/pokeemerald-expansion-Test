HoennPlains_MapScripts::
	.byte 0

HoennPlains_EventScript_Sceptile::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SCEPTILE, CRY_MODE_NORMAL
	msgbox HoennPlains_Sceptile, MSGBOX_DEFAULT
	waitmoncry
	release
	end

HoennPlains_Sceptile:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Sceptile: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Tille!\p"
	.string "It slashes at any tree in the area.$"

HoennPlains_EventScript_Corphish::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
	msgbox HoennPlains_Corphish, MSGBOX_DEFAULT
	waitmoncry
	release
	end

HoennPlains_Corphish:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Corphish: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Coooooorphish!$"

HoennPlains_EventScript_Swellow::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SWELLOW, CRY_MODE_NORMAL
	msgbox HoennPlains_Swellow, MSGBOX_DEFAULT
	waitmoncry
	release
	end

HoennPlains_Swellow:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Swellow: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Swellololo?$"


ChampionsRanch_EventScript_HoennSign::
	msgbox ChampionsRanch_Hoenn, MSGBOX_SIGN
	end

ChampionsRanch_Hoenn:
.string "Hoenn Plains.$"

