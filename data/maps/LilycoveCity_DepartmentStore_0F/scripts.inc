LilycoveCity_DepartmentStore_0F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_B1_FatMan::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Dept_Pokemart_FatmanB1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Dept_Pokemart_FatmanB1:
    .2byte ITEM_PREMIER_BALL
    .2byte ITEM_POKE_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_SPORT_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_BEAST_BALL
	pokemartlistend

LilycoveCity_DepartmentStore_B1_girlPlates::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Dept_Pokemart_girlB1Plates
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Dept_Pokemart_girlB1Plates:
    .2byte ITEM_DRACO_PLATE
    .2byte ITEM_DREAD_PLATE
	.2byte ITEM_EARTH_PLATE
	.2byte ITEM_FIST_PLATE
	.2byte ITEM_FLAME_PLATE
	.2byte ITEM_ICICLE_PLATE
	.2byte ITEM_INSECT_PLATE
	.2byte ITEM_IRON_PLATE
	.2byte ITEM_MEADOW_PLATE
	.2byte ITEM_MIND_PLATE
	.2byte ITEM_PIXIE_PLATE
	.2byte ITEM_SKY_PLATE
	.2byte ITEM_SPLASH_PLATE
	.2byte ITEM_SPOOKY_PLATE
	.2byte ITEM_STONE_PLATE
	.2byte ITEM_TOXIC_PLATE
	.2byte ITEM_ZAP_PLATE
	pokemartlistend

LilycoveCity_DepartmentStore_B1_girlMemory::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Dept_Pokemart_girlB1Memory
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Dept_Pokemart_girlB1Memory:
    .2byte ITEM_BUG_MEMORY
    .2byte ITEM_DARK_MEMORY
	.2byte ITEM_DRAGON_MEMORY
	.2byte ITEM_ELECTRIC_MEMORY
	.2byte ITEM_FAIRY_MEMORY
	.2byte ITEM_FIGHTING_MEMORY
	.2byte ITEM_FIRE_MEMORY
	.2byte ITEM_FLYING_MEMORY
	.2byte ITEM_GHOST_MEMORY
	.2byte ITEM_GRASS_MEMORY
	.2byte ITEM_GROUND_MEMORY
	.2byte ITEM_ICE_MEMORY
	.2byte ITEM_POISON_MEMORY
	.2byte ITEM_PSYCHIC_MEMORY
	.2byte ITEM_ROCK_MEMORY
	.2byte ITEM_STEEL_MEMORY
	.2byte ITEM_WATER_MEMORY
	pokemartlistend

LilycoveCity_DepartmentStore_B1_FatManFormItems::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Dept_Pokemart_FatmanB1FormItems
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Dept_Pokemart_FatmanB1FormItems:
.2byte ITEM_RED_NECTAR
.2byte ITEM_YELLOW_NECTAR
.2byte ITEM_PINK_NECTAR
.2byte ITEM_PURPLE_NECTAR
.2byte ITEM_GRACIDEA
.2byte ITEM_REVEAL_GLASS
.2byte ITEM_DOUSE_DRIVE
.2byte ITEM_SHOCK_DRIVE
.2byte ITEM_BURN_DRIVE
.2byte ITEM_CHILL_DRIVE
.2byte ITEM_PRISON_BOTTLE
.2byte ITEM_CORNERSTONE_MASK
.2byte ITEM_WELLSPRING_MASK
.2byte ITEM_HEARTHFLAME_MASK
.2byte ITEM_ADAMANT_CRYSTAL
.2byte ITEM_LUSTROUS_GLOBE
.2byte ITEM_GRISEOUS_CORE
.2byte ITEM_DNA_SPLICERS
.2byte ITEM_N_SOLARIZER
.2byte ITEM_N_LUNARIZER
.2byte ITEM_RUSTED_SWORD
.2byte ITEM_RUSTED_SHIELD
.2byte ITEM_REINS_OF_UNITY
	pokemartlistend

Dept_Pokemart__EventScript_Dedenne::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DEDENNE, CRY_MODE_NORMAL
	msgbox Dept_Pokemart_Dedenne, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Dept_Pokemart_Dedenne:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Dedenne: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Ded ded nneee!$"

