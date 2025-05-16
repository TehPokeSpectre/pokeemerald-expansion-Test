SubbitHouseFloor2_MapScripts::
	.byte 0

Subbit_EventScript_Tay::
	msgbox Subbit_Tay, MSGBOX_NPC
	end

Subbit_EventScript_Torrabat::
	msgbox Subbit_Torrabat, MSGBOX_NPC
	end

Subbit_EventScript_Dex::
	msgbox Subbit_Dex, MSGBOX_NPC
	end

Subbit_EventScript_Kman::
	msgbox Subbit_Kman, MSGBOX_NPC
	end

Subbit_EventScript_Computer1::
	msgbox Subbit_Computer1, MSGBOX_NPC
	end

Subbit_EventScript_Computer2::
	msgbox Subbit_Computer2, MSGBOX_NPC
	end

Subbit_EventScript_Computer3::
	msgbox Subbit_Computer3, MSGBOX_NPC
	end

Subbit_EventScript_Computer4::
	msgbox Subbit_Computer4, MSGBOX_NPC
	end

Subbit_EventScript_Computer5::
	msgbox Subbit_Computer5, MSGBOX_NPC
	end

Subbit_EventScript_Computer6::
	msgbox Subbit_Computer6liketoreadit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Subbit_EventScript_Computer6Zangoose
	release
	end

Subbit_EventScript_Computer6Zangoose::
	msgbox Subbit_Computer6Zangoose, MSGBOX_NPC
	end

Subbit_EventScript_Creditlist1::
	msgbox Subbit_Creditlist1, MSGBOX_NPC
	end

Subbit_EventScript_Creditlist2::
	msgbox Subbit_Creditlist2, MSGBOX_NPC
	end

Subbit_EventScript_Creditlist3::
	msgbox Subbit_Creditlist3, MSGBOX_NPC
	end

Subbit_EventScript_Creditlist4::
	msgbox Subbit_Creditlist4, MSGBOX_NPC
	end

Subbit_EventScript_Creditlist5::
	msgbox Subbit_Creditlist5, MSGBOX_NPC
	end

Subbit_EventScript_LumaRand::
	msgbox Subbit_LumaRand, MSGBOX_NPC
	end

Subbit_EventScript_Genesect::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GENESECT, CRY_MODE_NORMAL
	msgbox Subbit_Genesect, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Subbit_Tay:
	.string "{COLOR RED}{SHADOW LIGHT_RED}Tay: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Do you think there are times\n"
	.string "Sonic ever wants to go slow?$"

Subbit_Torrabat:
	.string "{COLOR RED}{SHADOW LIGHT_RED}Torrabat: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My favourite past time is being\n"
	.string "a minor inconvenience!$"

Subbit_Dex:
	.string "{COLOR RED}{SHADOW LIGHT_RED}Dex: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Did you know some snake species\n"
	.string "still have remnant legs, leftover from\l"
	.string "millions of years of evolution?$"

Subbit_Kman:
	.string "{COLOR RED}{SHADOW LIGHT_RED}Kman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Wanna hear a cool bug fact?\n"
	.string "Atlas moths lack the ability to eat, and\l"
	.string "rely on energy gathered as a caterpillar.$"

Subbit_Computer1:
	.string "Ultra Subnoodles release date is...$"

Subbit_Computer2:
	.string "Top secret information for upcoming\n"
	.string "rom hacks!$"

Subbit_Computer3:
	.string "{COLOR RED}{SHADOW LIGHT_RED}SHINYLOCKE RECORD:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "GameBoyLuke: 3 wins.\p"
	.string "UnitedGamer: 1 Win.\p"
	.string "Original151: 1 Win.\p"
	.string "Patterrz: 0 wins...$"

Subbit_Computer4:
	.string "{COLOR RED}{SHADOW LIGHT_RED}TITLE PROJECT:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "Sword and Shield Shinylocke.\p"
	.string "Wonder when that's coming out...$"

Subbit_Computer5:
    .string "The Team Aqua's Hideout decomp series\n"
	.string "seems to be playing on YouTube.$"

Subbit_Computer6liketoreadit:
    .string "On the screen is a Pokemon's data.\n"
	.string "Would you like to read it?$"

Subbit_Computer6Zangoose:
    .string "Regional Zangoose: Ghost Fighting.\n"
	.string "The body is mainly black now with\l"
	.string "purple highlights and a see through\l"
	.string "stomach.\p"
	.string "The Pokedex entry reads as the following:\n"
	.string "Possessed by the spirit of its heredity\l"
	.string "it fights with no honor nor rules.\p"
	.string "All it cares for is eliminating the\n"
	.string "spirit of its long-dead rival.$"

Subbit_LumaRand:
    .string "Note's left by Luma regarding the\n"
	.string "Emerald Shinylockes randomiser!$"

Subbit_Genesect:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Genesect: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}ZTT ZTT WHRRR!$"

Subbit_EventScript_Megaring::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MEGA_RING, Subbit_MegaRingposttext
	msgbox Subbit_MegaRingbefore, MSGBOX_DEFAULT
	giveitem ITEM_MEGA_RING
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MEGA_RING
	release
	end


	Subbit_MegaRingposttext::
	msgbox Subbit_Megaringisgot, MSGBOX_DEFAULT
	release
	end

Subbit_MegaRingbefore:
	.string "Oh? A new trainer? Welcome to the\n"
	.string "Team Subbit Studios!\p"
	.string "What might your name be?\n"
	.string "Hmm, {PLAYER}, is that right?\p"
	.string "My name is Spectre! I study the\n"
	.string "odd phenomenon that is Shiny\l"
	.string "Pokemon.\p"
	.string "The team that I lead here have all\n"
	.string "contributed to the creation of this\l"
	.string "project that we are running, so please\l"
	.string "go say hi!\p"
	.string "{PLAYER}, I'd like to ask you to do something\n"
	.string "for me!\p"
	.string "Find as many Shiny Pokemon as possible!\p"
	.string "I think this here should help you! It's\n"
	.string "a special item that comes from the Kalos\l"
	.string "region. You'll need to find a rare stone\l"
	.string "to undergo what's know as {COLOR GREEN}{SHADOW LIGHT_GREEN}Mega Evolution{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"


Subbit_Megaringisgot:
.string "Good luck in your journey and happy\n"
.string "Shiny Hunting!$"


Subbit_Creditlist1:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}RH-Hideout Maintainers:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
.string "UltimaSoul.\l"
.string "ghoulslash.\l"
.string "DizzyEggg.\l"
.string "AsparagusEduardo.\l"
.string "ExpoSeed.\l"
.string "Pyredrid.\l"
.string "MandL127.$"

Subbit_Creditlist2:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Shinylocke Designers:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
.string "Spectre.\l"
.string "Nony-Sama.\l"
.string "OhLyon.\l"
.string "Torrabat.\l"
.string "JoeOwlArt.\l"
.string "Larcetae.\l"
.string "Glowgvts.\l"
.string "Mattando.\l"
.string "Dex.\l"
.string "Kman.\l"
.string "Tadashi.\l"
.string "Stuffedbraincell.$"

Subbit_Creditlist3:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Credit List 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
.string "{COLOR RED}{SHADOW LIGHT_RED}DizzyEggg:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Original repo.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}ghoulslash:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Move animations, terrains,\l"
.string "item effects, abilities, and move effects.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}UltimaSoul:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} icon sprites, new items data\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}Lunos:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Item images and data, save files.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}ShantyTown:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Move animations.$"

Subbit_Creditlist4:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Credit List 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
.string "{COLOR RED}{SHADOW LIGHT_RED}mvit:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ability pop up, Mega Evo GFX.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}Doesnt:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Berries GFX.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}Cancer Fairy:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Animations, coding.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}MrDollSteak:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Pokedex descriptions.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}Avara:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Item descriptions.$"

Subbit_Creditlist5:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Credit List 3:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
.string "{COLOR RED}{SHADOW LIGHT_RED}Kurausukun:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Testing, edits.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}TheLaw:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Move animations.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}BreadCrumbs:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Code review.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}Syreldar:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Testing.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}Pyredrid:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Code review.\l"
.string "{COLOR RED}{SHADOW LIGHT_RED}MandL27:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Code review.$"



