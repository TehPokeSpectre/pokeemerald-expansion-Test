SinnohUplands_MapScripts::
	.byte 0

SinnohUplands_EventScript_Infernape::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_INFERNAPE, CRY_MODE_NORMAL
	msgbox SinnohUplands_Infernape, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SinnohUplands_Infernape:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Infernape: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}NAAAPE!!$"

SinnohUplands_EventScript_Staraptor::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STARAPTOR, CRY_MODE_NORMAL
	msgbox SinnohUplands_Staraptor, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SinnohUplands_Staraptor:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Staraptor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Raptoooor!!$"

SinnohUplands_EventScript_Buizel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUIZEL, CRY_MODE_NORMAL
	msgbox SinnohUplands_Buizel, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SinnohUplands_Buizel:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Buizel: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Bui bui bui!$"

SinnohUplands_EventScript_Gible::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GIBLE, CRY_MODE_NORMAL
	msgbox SinnohUplands_Gible, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SinnohUplands_Gible:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Gible: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Giiib?$"

SinnohUplands_EventScript_Torterra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TORTERRA, CRY_MODE_NORMAL
	msgbox SinnohUplands_Torterra, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SinnohUplands_Torterra:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Torterra: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}REERAAA!$"

SinnohUplands_EventScript_Ambipom::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AMBIPOM, CRY_MODE_NORMAL
	msgbox SinnohUplands_Ambipom, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SinnohUplands_Ambipom:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Ambipom: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Pompom?$"

SinnohUplands_EventScript_Gliscor::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GLISCOR, CRY_MODE_NORMAL
	msgbox SinnohUplands_Gliscor, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SinnohUplands_Gliscor:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Gliscor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Glisss...$"

ChampionsRanch_EventScript_SinnohSign::
	msgbox ChampionsRanch_Sinnoh, MSGBOX_SIGN
	end

ChampionsRanch_Sinnoh:
.string "Sinnoh Uplands.$"


