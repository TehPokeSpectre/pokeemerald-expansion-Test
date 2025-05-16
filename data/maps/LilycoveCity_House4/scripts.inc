LilycoveCity_House4_MapScripts::
	.byte 0

LilycoveCity_House4_EventScript_Man1::
	msgbox LilycoveCity_House4_Text_MysteriesAtBottomOfSea, MSGBOX_NPC
	end

LilycoveCity_House4_EventScript_Man2::
	msgbox LilycoveCity_House4_Text_UnderwaterTrenchMossdeepSootopolis, MSGBOX_NPC
	end

LilycoveCity_House4_Text_MysteriesAtBottomOfSea:
	.string "This planet's biggest mysteries are\n"
	.string "at the bottom of the sea.\p"
	.string "Somebody said that, but I don't know…$"

LilycoveCity_House4_Text_UnderwaterTrenchMossdeepSootopolis:
	.string "There's a deep underwater trench\n"
	.string "between MOSSDEEP and SOOTOPOLIS.\p"
	.string "That's what someone told me, anyway.$"

LilycoveCity_EventScript_Litten::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
	msgbox LilycoveCity_Litten, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycoveCity_Litten:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Litten: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Reooow!$"

