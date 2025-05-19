SafeRoom_MapScripts::
	.byte 0


Saferoom_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

Saferoom_EventScript_Scientist1::
	msgbox Saferoom_Scientist1, MSGBOX_NPC
	end

Saferoom_Scientist1:
    .string "You must be the one Devon sent\n"
	.string "from the past, right?\p"
	.string "Be careful out there. We don't\n"
	.string "need no lawsuits from worried\l"
	.string "parents about the disappearance\l"
	.string "of their child!$"


Saferoom_EventScript_Scientist2::
	msgbox Saferoom_Scientist2, MSGBOX_NPC
	end

Saferoom_Scientist2:
    .string "We are 1500 years into the future\n"
	.string "from present day Hoenn.\p"
	.string "In the year 2125, Pokemon we are\n"
	.string "familar with started to go extinct\l"
	.string "due to climate change and other\l"
	.string "factors.\p"
	.string "By 2219, 35 percent of Pokemon\n"
	.string "from our age were extinct sadly...\p"
	.string "Scientists made a risky and bold\n"
	.string "idea of trying to perserve species\l"
	.string "and prevent further extinctions.\p"
	.string "After eighty one years of hard work\n"
	.string "the first batch of genetically enhanced\l"
	.string "Pokemon were created.\p"
	.string "These new Pokemon were officially called\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Paradox Pokemon {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}...\p"
	.string "Since then, they have overthrown the\n"
	.string "world and left it in ruin, war after war.\p"
	.string "Humans are now the ones facing\n"
	.string "extinction...$"

Saferoom_EventScript_Scientist3::
	msgbox Saferoom_Scientist3, MSGBOX_NPC
	end

Saferoom_Scientist3:

    .string "We are yet to be detected here in what\n"
	.string "was once Rusturf Tunnel and we must keep\l"
	.string "it that way.$"

Saferoom_EventScript_Portalman::
	msgbox Saferoom_Portalman, MSGBOX_NPC
	end

Saferoom_Portalman:

    .string "Return back through here to return to\n"
	.string "the present! Be safe out there!$"


