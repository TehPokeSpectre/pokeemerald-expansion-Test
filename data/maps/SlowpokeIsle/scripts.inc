SlowpokeIsle_MapScripts::
	.byte 0

SlowpokeIsle_EventScript_Slowpoke1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox SlowpokeIsle_Slowpoke1, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlowpokeIsle_Slowpoke1:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slowpoke: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Slooow!$"

SlowpokeIsle_EventScript_Slowpoke2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox SlowpokeIsle_Slowpoke2, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlowpokeIsle_Slowpoke2:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slowpoke: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Slo?$"

SlowpokeIsle_EventScript_Slowpoke3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox SlowpokeIsle_Slowpoke3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlowpokeIsle_Slowpoke3:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slowpoke: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Slooowp!$"

SlowpokeIsle_EventScript_Slowpoke4::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox SlowpokeIsle_Slowpoke4, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlowpokeIsle_Slowpoke4:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slowpoke: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Poook? Slopok?$"

SlowpokeIsle_EventScript_Slowpoke5::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox SlowpokeIsle_Slowpoke5, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlowpokeIsle_Slowpoke5:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slowpoke: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Sloowoop.$"

SlowpokeIsle_EventScript_Slowbro1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox SlowpokeIsle_Slowbro1, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlowpokeIsle_Slowbro1:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slowbro: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Sowbro?$"

SlowpokeIsle_EventScript_Slowbro2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox SlowpokeIsle_Slowbro2, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlowpokeIsle_Slowbro2:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slowbro: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Broooo...$"

SlowpokeIsle_EventScript_Slowbro3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox SlowpokeIsle_Slowbro3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlowpokeIsle_Slowbro3:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slowbro: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Sloiw?$"

SlowpokeIsle_EventScript_Slowking::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	msgbox SlowpokeIsle_Slowking, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlowpokeIsle_Slowking:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slowking: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Slooowkin?$"

SlowpokeIsle_EventScript_Slowbronite::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SLOWBRONITE, SlowpokeIsle_Slowkingposttext
	msgbox SlowpokeIsle_Slowbronitebefore, MSGBOX_DEFAULT
	giveitem ITEM_SLOWBRONITE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SLOWBRONITE
	release
	end


	SlowpokeIsle_Slowkingposttext::
	msgbox SlowpokeIsle_Slowbroniteisgot, MSGBOX_DEFAULT
	release
	end

SlowpokeIsle_Slowbronitebefore:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slowking: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Greetings {PLAYER}.\p"
.string "Oh? Are you surprised that I can talk?\n"
.string "Aha! My bad! Most people are...\p"
.string "My name is Slowking because well...\n"
.string "For obvious reasons aha!\p"
.string "My psychic powers alerted me that\n"
.string "you were coming here, {PLAYER}.\p"
.string "In my life, I have witnessed many, many\n"
.string "tragedies... Too many for one life time.\p"
.string "Mankind disturbing the peace among the\n"
.string "birds of fire, ice and lightning...\p"
.string "Setting the grand fire of Fula City\n"
.string "and enraging the Thunderclap...\p"
.string "The summoning of beings not from\n"
.string "our world. The list goes on...\l"
.string "And I fear the worst is yet to\l"
.string "come and you're involved in it,\l"
.string "{PLAYER}.\p"
.string "Take this. It might aid you in your\n"
.string "journey.$"

SlowpokeIsle_Slowbroniteisgot:
.string "Where are my pants?$"

