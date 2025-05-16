AbandonedShip_Corridors_1F_MapScripts::
	.byte 0

AbandonedShip_Corridors_1F_EventScript_Youngster::
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
	end

AbandonedShip_Corridors_1F_EventScript_Charlie::
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Corridors_1F_Text_CharlieIntro:
	.string "What's so funny about having my inner\n"
	.string "tube aboard the ship?$"

AbandonedShip_Corridors_1F_Text_CharlieDefeat:
	.string "Whoa, you overwhelmed me!$"

AbandonedShip_Corridors_1F_Text_CharliePostBattle:
	.string "It's not easy throwing POKé BALLS\n"
	.string "while hanging on to an inner tube!$"

AbandonedShip_Corridors_1F_Text_IsntItFunHere:
	.string "Isn't it fun here?\n"
	.string "I get excited just being here!$"

AbandonedShip_EventScript_Honedge::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HONEDGE, CRY_MODE_NORMAL
	msgbox AbandonedShip_Honedge, MSGBOX_DEFAULT
	waitmoncry
	release
	end

AbandonedShip_Honedge:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Honedge: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hooownge!$"

AbandonedShip_EventScript_Inkay::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_INKAY, CRY_MODE_NORMAL
	msgbox AbandonedShip_Inkay, MSGBOX_DEFAULT
	waitmoncry
	release
	end

AbandonedShip_Inkay:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Inkay: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Inkka!$"


