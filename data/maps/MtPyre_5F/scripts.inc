MtPyre_5F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_4F_EventScript_Tasha::
	trainerbattle_single TRAINER_TASHA, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_4F_Text_TashaIntro:
	.string "I love all things horrifying…\n"
	.string "It's like a disease…\p"
	.string "When I'm here…\n"
	.string "I shiver with fear…$"

MtPyre_4F_Text_TashaDefeat:
	.string "Losing, I dislike…$"

MtPyre_4F_Text_TashaPostBattle:
	.string "I want to see dreadful things…\n"
	.string "I can't leave…\p"
	.string "Stay…\n"
	.string "Won't you stay with me?$"

MtPyre_5F_EventScript_Shuppet::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
	msgbox MtPyre_5F_Shuppet, MSGBOX_DEFAULT
	waitmoncry
	release
	end

MtPyre_5F_Shuppet:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Shuppet: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Shuppp!$"

