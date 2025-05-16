Deptstore_Basement_MapScripts::
	.byte 0

LilycoveBasement_EventScript_Ghostgirl::
	lock
	faceplayer
	message Basement_Text_Ghostgirl
	waitmessage
	pokemart Basement_Pokemart_EnergyGuru
	msgbox Ghostgirl_Text_end, MSGBOX_DEFAULT
	release
	end

	.align 2
Basement_Pokemart_EnergyGuru:
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_BERSERK_GENE
	.2byte ITEM_BANETTITE
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_SPOOKY_PLATE
	pokemartlistend

Basement_Text_Ghostgirl:
	.string "...Tee Hee. Can I help you mister?\n"
	.string "Are you lost? Let me help you...$"

Ghostgirl_Text_end:
	.string "Goodbye Mister. Don't stay too long\n"
	.string "though! The ghosts are getting\l"
	.string "restless, tee hee...$"

Basement_EventScript_Banette::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BANETTE, CRY_MODE_NORMAL
	msgbox BasementDept_Banette, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BasementDept_Banette:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Banette: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Nettt...$"

