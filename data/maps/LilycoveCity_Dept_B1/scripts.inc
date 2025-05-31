LilycoveCity_Dept_B1_MapScripts::
	.byte 0


LilycoveCity_DepartmentStore_B2_girlBattleItems1::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Dept_Pokemart_B2_girlBattleItems1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Dept_Pokemart_B2_girlBattleItems1:
.2byte ITEM_RED_CARD
.2byte ITEM_TOXIC_ORB
.2byte ITEM_FLAME_ORB
.2byte ITEM_AIR_BALLOON
.2byte ITEM_LEFTOVERS
.2byte ITEM_HEAVY_DUTY_BOOTS
.2byte ITEM_EXPERT_BELT
.2byte ITEM_POWER_HERB
.2byte ITEM_WEAKNESS_POLICY
.2byte ITEM_ROCKY_HELMET
.2byte ITEM_ASSAULT_VEST
.2byte ITEM_CHOICE_BAND
.2byte ITEM_CHOICE_SPECS
.2byte ITEM_CHOICE_SCARF
	pokemartlistend


LilycoveCity_DepartmentStore_B2_girlBattleItems2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Dept_Pokemart_B2_girlBattleItems2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Dept_Pokemart_B2_girlBattleItems2:
.2byte ITEM_BOOSTER_ENERGY
.2byte ITEM_LIGHT_CLAY
.2byte ITEM_THROAT_SPRAY
.2byte ITEM_ELECTRIC_SEED
.2byte ITEM_GRASSY_SEED
.2byte ITEM_MISTY_SEED
.2byte ITEM_PSYCHIC_SEED
.2byte ITEM_LOADED_DICE
.2byte ITEM_COVERT_CLOAK
	pokemartlistend

Dept_PokemartB2__EventScript_Bunnelby::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUNNELBY, CRY_MODE_NORMAL
	msgbox Dept_Pokemart_Bunnelby, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Dept_Pokemart_Bunnelby:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Bunnelby: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Bunel?$"

Dept_PokemartB2__EventScript_Slurpuff::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLURPUFF, CRY_MODE_NORMAL
	msgbox Dept_Pokemart_Slurpuff, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Dept_Pokemart_Slurpuff:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slurpuff: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Slurp!$"

LilycoveCity_DepartmentStore_B2_GuyTMs::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Dept_Pokemart_B2_GuyTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Dept_Pokemart_B2_GuyTMs:
    .2byte ITEM_TM56
	.2byte ITEM_TM60
	.2byte ITEM_TM83
	.2byte ITEM_TM84
	.2byte ITEM_TM92
	.2byte ITEM_TM96
	pokemartlistend

