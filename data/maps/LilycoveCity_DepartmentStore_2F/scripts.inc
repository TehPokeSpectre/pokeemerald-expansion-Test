LilycoveCity_DepartmentStore_2F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_2F_EventScript_Cook::
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_2F_Pokemart1:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_FLUFFY_TAIL
	pokemartlistend

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_2F_Pokemart2:
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_WAVE_MAIL
	.2byte ITEM_MECH_MAIL
	pokemartlistend

LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
	.string "Learn to use items properly.\n"
	.string "That's basic, really.$"

LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
	.string "My husband is waiting at home.\n"
	.string "What would make a good gift for him?$"

LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
	.string "I'm leaving on a long journey soon.\n"
	.string "I need to stock up on items.$"

LilycoveDept2_EventScript_Scizor::
    lock
	faceplayer
	waitse
	playmoncry SPECIES_SCIZOR, CRY_MODE_NORMAL
	msgbox LilycoveDept2_ScizorHand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LilycoveDept2_EventScript_GivesStone
	waitmoncry
	release
	end

LilycoveDept2_EventScript_GivesStone::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SCIZORITE, LilycoveDept2_ScizoritePost
	msgbox LilycoveDept2_Scizorite, MSGBOX_DEFAULT
	giveitem ITEM_SCIZORITE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SCIZORITE
	release
	end

LilycoveDept2_ScizoritePost::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SCIZOR, CRY_MODE_NORMAL
	msgbox LilycoveDept2_ScizoriteIsGot, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycoveDept2_ScizorHand:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scizor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Scziza!\p"
	.string "The Scizor has something in it's hand\n."
	.string "Do you want to take it?$"

LilycoveDept2_Scizorite:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scizor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Zizza! Sizor!$"

LilycoveDept2_ScizoriteIsGot:
    .string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scizor: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Scciza!!!\p"
	.string "Scizor is no longer holding anything.$"

