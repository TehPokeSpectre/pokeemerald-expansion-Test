UnovaFlats_MapScripts::
	.byte 0

UnovaFlats_EventScript_UnfezantF::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_UNFEZANT, CRY_MODE_NORMAL
	msgbox UnovaFlats_UnfezantF, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UnovaFlats_UnfezantF:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}UnfezantF: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Feeeeez!$"

UnovaFlats_EventScript_Oshawott::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_OSHAWOTT, CRY_MODE_NORMAL
	msgbox UnovaFlats_Oshawott, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UnovaFlats_Oshawott:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Oshawott: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Osha?$"

UnovaFlats_EventScript_Pignite::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIGNITE, CRY_MODE_NORMAL
	msgbox UnovaFlats_Pignite, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UnovaFlats_Pignite:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Pignite: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Pigin!$"

UnovaFlats_EventScript_Snivy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SNIVY, CRY_MODE_NORMAL
	msgbox UnovaFlats_Snivy, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UnovaFlats_Snivy:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Snivy: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Sni-Sni!$"

UnovaFlats_EventScript_Leavanny::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LEAVANNY, CRY_MODE_NORMAL
	msgbox UnovaFlats_Leavanny, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UnovaFlats_Leavanny:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Leavanny: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Vanny! Vaaaani!!!$"

UnovaFlats_EventScript_Palpitoad::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
	msgbox UnovaFlats_Palpitoad, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UnovaFlats_Palpitoad:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Palpitoad: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Palpi?$"

UnovaFlats_EventScript_Krookodile::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KROOKODILE, CRY_MODE_NORMAL
	msgbox UnovaFlats_Krookodile, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UnovaFlats_Krookodile:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Krookodile: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}DIIILEEEEE!$"


ChampionsRanch_EventScript_UnovaSign::
	msgbox ChampionsRanch_Unova, MSGBOX_SIGN
	end

ChampionsRanch_Unova:
.string "Unova Flats.$"


