PastMtPyrePeak_MapScripts::
	.byte 0

Past_EventScript_KoraidonGivesStone::
	lock
	faceplayer
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
	goto_if_set FLAG_RECEIVED_AERODACTYLITE, Past_AerodactylitePost
	msgbox Past_Aerodactylite, MSGBOX_DEFAULT
	giveitem ITEM_AERODACTYLITE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_AERODACTYLITE
	release
	end

Past_AerodactylitePost::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
	msgbox Past_AerodactyliteIsGot, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Past_Aerodactylite:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Koraidon: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}KAR-AEGGIES!\p"
	.string "The large prehistoric like {COLOR GREEN}{SHADOW LIGHT_GREEN}Cyclizar {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}looks\n"
	.string "at you with curiosity.\p"
	.string "Unlike the other Pokemon, you feel no ill\n"
	.string "intent from this Paradox Pokemon.\p"
	.string "It drops something in front of you.$"

Past_AerodactyliteIsGot:
    .string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Koraidon: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} AEEIIGGES!\p"
	.string "The Pokemon sniffs at you before\n"
	.string "returning to entertaining the crowd\l"
	.string "of Paradox Pokemon with its strength.$"

