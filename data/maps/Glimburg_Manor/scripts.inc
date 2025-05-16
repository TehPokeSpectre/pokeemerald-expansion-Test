Glimburg_Manor_MapScripts::
	.byte 0


GlimburgManor_EventScript_Gardevoirite::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GARDEVOIRITE, GlimburgManor_PostText
	msgbox GlimburgManor_GardevoiriteBefore, MSGBOX_DEFAULT
	giveitem ITEM_GARDEVOIRITE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_GARDEVOIRITE
	release
	end


    GlimburgManor_PostText::
	msgbox GlimburgManor_Gardevoiriteisgot, MSGBOX_DEFAULT
	release
	end

GlimburgManor_GardevoiriteBefore:

.string "???: ... ... ...\n"
.string "???: Greetings, trainer.\p"
.string "???: Please do not be startled but\n"
.string "my name is {COLOR GREEN}{SHADOW LIGHT_GREEN}Calyrex {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Calyrex {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}: I am using this lost\n"
.string "traveller to communicate with\l"
.string "you telepathically.\p"
.string "I was once the king of this\n"
.string "forest in ancient times prior\l"
.string "to human occupation.\p"
.string "However, my rule has long since\n"
.string "ended thus I have retired to this\l"
.string "abandoned Manor.\p"
.string "My precious steads, {COLOR GREEN}{SHADOW LIGHT_GREEN}Glastrier {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}and\n"
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Spectrier {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}have long since left me...\p"
.string "But one subject I was fond of in\n"
.string "recent years was a {COLOR GREEN}{SHADOW LIGHT_GREEN}Gardevoir {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
.string "But she has since left on a quest\n"
.string "looking for her lost child who went\l"
.string "missing around {COLOR GREEN}{SHADOW LIGHT_GREEN}Petalburg City {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
.string "If you ever run into her, please give\n"
.string "this as token to help her.$"

GlimburgManor_Gardevoiriteisgot:

.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Calyrex {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}: In ancient times, I was\n"
.string "called a tyrant and a cruel ruler.\p"
.string "But I did what was best to protect\n"
.string "my kingdom.\p"
.string "Maybe that's why my steads left me?\p"
.string "Please make sure you deliver that\n"
.string "Mega stone.$"

GlimburgManor_Calyrex::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CALYREX, CRY_MODE_NORMAL
	msgbox GlimburgManortext_Calyrex, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GlimburgManortext_Calyrex:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Caaal...\p"
	.string "The mysterious Pokemon points at\n"
	.string "the man next to it.$"




