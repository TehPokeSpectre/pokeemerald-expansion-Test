PastMossdeepSadaRoom_MapScripts::
	.byte 0

Past_EventScript_SadaSalamencite::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SALAMENCITE, Past_Sadaposttext
	msgbox Past_SadaBefore, MSGBOX_DEFAULT
	giveitem ITEM_SALAMENCITE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SALAMENCITE
	release
	end


    Past_Sadaposttext::
	msgbox Past_Salamenciteisgot, MSGBOX_DEFAULT
	release
	end

Past_SadaBefore:
    .string "???: Ah! You must be the aid that the\n"
	.string "Devon Corp were sending for support!\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Sada {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}: My name is Sada. I'm a striving\n"
	.string "young researcher from Paldea.\p"
	.string "Ever since I was a young girl, I've had\n"
	.string "a fascination with history.\p"
	.string "After excelling in my final years exams,\n"
	.string "Devon Corp contacted me with an offer\l"
	.string "I could not refuse.\p"
	.string "Well however, I can't say I agree with\n"
	.string "everything that Devon Corp told me...\p"
	.string "I'm not allowed to bring any of the past\n"
	.string "Pokemon back with me for research...\p"
	.string "I've been told I'm only allwoed to return\n"
	.string "back old stones and plant life! Like what\l"
	.string "the heck!\p"
	.string "Speaking of stones, I managed to\n"
	.string "snatch this rock from the nest of\l"
	.string "the {COLOR GREEN}{SHADOW LIGHT_GREEN}Roaring Moon {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "Believe it is one of those Mega Stones.$"

Past_Salamenciteisgot:
    .string "I'll behave for Devon Corp for now...\p"
	.string "But just keep an eye on the news in the\n"
	.string "future!\p"
	.string "Wonder if I could build a second me\n"
	.string "for an extra pair of hands...$"

