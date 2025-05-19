FutureTent_MapScripts::
	.byte 0

FutureTent_EventScript_Mother::
	msgbox FutureTent_Mother, MSGBOX_NPC
	end


FutureTent_Mother:
	.string "My poor boy was attacked by one\n"
	.string "of those violent Pokemon...\p"
	.string "We were told this place was safe\n"
	.string "after Galar fell into ruins, finally\l"
	.string "falling after a 500 year war with the\l"
	.string "robotic Pokemon...\p"
	.string "But it's just as bad here as it was\n"
	.string "there!\p"
	.string "I'd like to be left alone please...$"

FutureTent_EventScript_Father::
	msgbox FutureTent_Father, MSGBOX_NPC
	end

FutureTent_Father:
    .string "This is all my fault...\p"
	.string "I forced my Wife and Son to flee\n"
	.string "our home in the Galar Region.\p"
	.string "And moments before we reached here\n"
	.string "we were attacked by a {COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Jugulis {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "My dear, dear boy is suffering so\n"
	.string "much right now...$"

FutureTent_EventScript_Woman::
    lock
	face_down
	msgbox FutureTent_Woman, MSGBOX_NPC
	release
	end

FutureTent_Woman:
    .string "The Womans body is cold and she is\n"
	.string "unresponsive...$"

FutureTent_EventScript_Nurse::
	msgbox FutureTent_Nurse, MSGBOX_NPC
	end

FutureTent_Nurse:
    .string "I heard that one thousand years ago\n"
	.string "nurses used now extinct Pokemon to\l"
	.string "assist them with treating patients.\p"
	.string "Man, I wish I had that kind of help\n"
	.string "but I doubt any Pokemon nowadays\l"
	.string "would help out.$"

FutureTent_EventScript_Woman2::
	msgbox FutureTent_Woman2, MSGBOX_NPC
	end

FutureTent_Woman2:
    .string "G-G-go aw-away! Can't you see\n"
	.string "I am resting here?$"

FutureTent_EventScript_Chef::
	msgbox FutureTent_Chef, MSGBOX_NPC
	end

FutureTent_Chef:
    .string "We are struggling badly.\n"
	.string "Our hunters left two days\l"
	.string "ago and have yet to return.$"

FutureTent_EventScript_Girl::
	msgbox FutureTent_Girl, MSGBOX_NPC
	end

FutureTent_Girl:
    .string "I'm going to be a future hunter!\n"
	.string "I'm not afraid to fight the robots!$"

FutureTent_EventScript_IronV::
	msgbox FutureTent_IronV, MSGBOX_NPC
	end

FutureTent_IronV:
    .string "One of the ruined houses is the home\n"
	.string "of an {COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Valiant {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and it refuses\l"
	.string "to leave. I wonder why?$"

FutureTent_EventScript_Man::
	msgbox FutureTent_Man, MSGBOX_NPC
	end

FutureTent_Man:
    .string "Hmph! Another outsider? This is your\n"
	.string "fault the world is like this!\p"
	.string "Where are you from anywho?\p"
	.string "... Huh? Hoenn? That's a name I haven't\n"
	.string "heard of in a while!\p"
	.string "You're joking right? This place hasn't\n"
	.string "been called Hoenn in just a little bit\l"
	.string "over one thousand years ago!$"





	
	