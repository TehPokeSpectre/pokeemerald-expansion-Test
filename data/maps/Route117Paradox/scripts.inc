Route117Paradox_MapScripts::
	.byte 0

Subbit_EventScript_IronThorns::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IRON_THORNS, CRY_MODE_NORMAL
	msgbox Future_IronThorns, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Future_IronThorns:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Thorns: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Tttarrr-ZZT!$"

Subbit_EventScript_IronJugulis::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IRON_JUGULIS, CRY_MODE_NORMAL
	msgbox Future_IronJugulis, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Future_IronJugulis:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Jugulis: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hydrrra-ZZT!$"


FutureZerograveyard_EventScript_Sign1::
	msgbox Graveyard_signold, MSGBOX_SIGN
	end

Graveyard_signold:
	.string "It's an old gravestone that's\n"
	.string "unreadable...$"


Subbit_EventScript_IronCrown::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IRON_CROWN, CRY_MODE_NORMAL
	msgbox Future_IronCrown, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Future_IronCrown:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Crown: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Colllib-ZZT!$"

Future_EventScript_Ttarnite::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TYRANITARITE, Future_Ttarposttext
	msgbox Future_Ttarbefore, MSGBOX_DEFAULT
	giveitem ITEM_TYRANITARITE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TYRANITARITE
	release
	end


	Future_Ttarposttext::
	msgbox Future_Ttariteisgot, MSGBOX_DEFAULT
	release
	end

Future_Ttarbefore:
    .string "Go away. Let me mourn in peace.\n"
	.string "I watched my grandbabies get ripped\l"
	.string "apart in the cruel wilderness...\p"
	.string "When will this madness end...\n"
	.string "With human extinction?\p"
	.string "Every day I wake up in fear but\n"
	.string "at least I'm not in the ground yet!\p"
	.string "You seem like a hunter. Have this.\n"
	.string "It's no use to me but I saw a\l"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Thorns {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} getting frustrated at it\l"
	.string "and dropped it.$"


Future_Ttariteisgot:
    .string "That {COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Crown {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} has been eyeing us\n"
	.string "up for a while now.\p"
	.string "You should leave before it kills us both.$"


Future_Skittytext::
	msgbox Future_Skitty, MSGBOX_SIGN
	end

Future_Skitty:
    .string "My beloved Skitty.\n"
	.string "2587 - 2592.$"

Future_Mylovetext::
	msgbox Future_Mylove, MSGBOX_SIGN
	end

Future_Mylove:
    .string "My love, till death and beyond.\n"
    .string "2809 - 2826.$"

Future_Ragnaroktext::
	msgbox Future_Ragnarok, MSGBOX_SIGN
	end

Future_Ragnarok:
    .string "Pokemon Sword: Ragnarok.\n"
    .string "2019 - 2021.$"

Future_Stonetext::
	msgbox Future_Stone, MSGBOX_SIGN
	end

Future_Stone:
    .string "Reginald Colin Stone: 2274 - 2311.\n"
	.string "Lead scientist on the Paradox Project.$"

Future_USNtext::
	msgbox Future_USN, MSGBOX_SIGN
	end

Future_USN:
    .string "Seems something climbed out of the\n"
	.string "grave recently...\p"
	.string "The text on the grave stone is faded:\p"
	.string "-l-r- -u-n--dl- -e-s---$"

Future_Grandkidtext::
	msgbox Future_grandkid, MSGBOX_SIGN
	end

Future_grandkid:
    .string "Twins Arthur and Lori.\n"
	.string "Born 3518, died 3525. Aged 7.$"

Future_Huntertext::
	msgbox Future_Hunter, MSGBOX_SIGN
	end

Future_Hunter:
    .string "The unknown Hunter.\n"
	.string "Perished 3489.$"








