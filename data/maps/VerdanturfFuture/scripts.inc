VerdanturfFuture_MapScripts::
	.byte 0

FutureZero_EventScript_Sign1::
	msgbox OldVerdanturf_sign, MSGBOX_SIGN
	end

OldVerdanturf_sign:
	.string "It's an old wooden sign.\n"
	.string "'V__da___f _o_wn.'$"

FutureZero_EventScript_Sign2::
	msgbox OldBattleTent_sign, MSGBOX_SIGN
	end

OldBattleTent_sign:
	.string "Refuge Tent.$"

FutureZero_EventScript_Sign3::
	msgbox OldWanda_sign, MSGBOX_SIGN
	end

OldWanda_sign:
	.string "The sign is beyond readable.$"

Subbit_EventScript_IronBundle::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IRON_BUNDLE, CRY_MODE_NORMAL
	msgbox Future_IronBundle, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Future_IronBundle:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Bundle: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dellii-ZZT?$"

Subbit_EventScript_IronTreads::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IRON_TREADS, CRY_MODE_NORMAL
	msgbox Future_IronTreads, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Future_IronTreads:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Iron Treads: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dooonph-ZZT!!!$"

