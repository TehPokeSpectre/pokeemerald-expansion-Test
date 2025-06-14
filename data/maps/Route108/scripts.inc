Route108_MapScripts::
	.byte 0

Route108_EventScript_Jerome::
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Matthew::
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Tara::
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Missy::
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Carolina::
	trainerbattle_single TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Cory::
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route108_EventScript_CoryRematch
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
	release
	end

Route108_EventScript_CoryRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CORY_1
	release
	end

Route108_EventScript_CoryRematch::
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Avalugg::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AVALUGG, CRY_MODE_NORMAL
	msgbox Route108_Avalugg, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route108_Avalugg:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Avalugg: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Gllaaaalugggg...$"

Route108_EventScript_Lapras::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
	msgbox Route108_Lapras, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route108_Lapras:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Lapras: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Aalaapas...$"

Route108_EventScript_Bergmite::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
	msgbox Route108_Bergmite, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route108_Bergmite:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Bergmite: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Berrrregmi!$"

