GymFuture_MapScripts::
	.byte 0

Future_EventScript_MiraidonGivesStone::
	lock
	faceplayer
	playmoncry SPECIES_MIRAIDON, CRY_MODE_NORMAL
	goto_if_set FLAG_RECEIVED_GALLADITE, Future_GalladitePost
	msgbox Future_Galladite, MSGBOX_DEFAULT
	giveitem ITEM_GALLADITE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_GALLADITE
	release
	end

Future_GalladitePost::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MIRAIDON, CRY_MODE_NORMAL
	msgbox Future_GalladiteIsGot, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Future_Galladite:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Miraidon: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}AEGGIES!\p"
	.string "The large robotic like {COLOR GREEN}{SHADOW LIGHT_GREEN}Cyclizar {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}looks at\n"
	.string "you with curiosity.\p"
	.string "Unlike the other Pokemon, you feel no ill\n"
	.string "intent from this Paradox Pokemon.\p"
	.string "It drops something in front of you.$"

Future_GalladiteIsGot:
    .string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Miraidon: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} AEEIIGGES!\p"
	.string "The Pokemon sniffs at you before\n"
	.string "returning to the electric source\l"
	.string "it was feeding from.$"



