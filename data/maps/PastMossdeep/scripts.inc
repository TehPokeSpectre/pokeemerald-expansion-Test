PastMossdeep_MapScripts::
	.byte 0

LilycovePast_EventScript_Gouging_Fire::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GOUGING_FIRE, CRY_MODE_NORMAL
	msgbox LilycovePast_GougingFire, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycovePast_GougingFire:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Gouging Fire: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Teiii-Aragh!!$"

LilycovePast_EventScript_Brute_Bonnet::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BRUTE_BONNET, CRY_MODE_NORMAL
	msgbox LilycovePast_BruteBonnet, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycovePast_BruteBonnet:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Brute Bonnet: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Amogus-Aragh?!$"

LilycovePast_EventScript_Great_Tusk_Shiny::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GREAT_TUSK, CRY_MODE_NORMAL
	msgbox LilycovePast_GreatTuskShiny, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycovePast_GreatTuskShiny:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Great Tusk: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Poohn-Aragh?$"

LilycovePast_EventScript_Great_Tusk::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GREAT_TUSK, CRY_MODE_NORMAL
	msgbox LilycovePast_GreatTusk, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycovePast_GreatTusk:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Great Tusk: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Doohn-Aragh!$"

LilycovePast_EventScript_Scream_Tail::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SCREAM_TAIL, CRY_MODE_NORMAL
	msgbox LilycovePast_ScreamTail, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycovePast_ScreamTail:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scream Tail: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Igggly-Aragh!$"

LilycovePast_EventScript_Roaring_Moon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ROARING_MOON, CRY_MODE_NORMAL
	msgbox LilycovePast_RoaringMoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycovePast_RoaringMoon:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Roaring Moon: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Salam-Aragh!$"

