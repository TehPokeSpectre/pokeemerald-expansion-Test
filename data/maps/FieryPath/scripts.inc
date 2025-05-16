FieryPath_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
	.byte 0

FieryPath_OnTransition:
	call_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_EventScript_MoveScottToFallarbor
	setflag FLAG_LANDMARK_FIERY_PATH
	end

FieryPath_EventScript_MoveScottToFallarbor::
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
	return

Fierypath_EventScript_Torkoal::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TORKOAL, CRY_MODE_NORMAL
	msgbox Fierypath_Torkoal, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fierypath_EventScript_Koffing::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KOFFING, CRY_MODE_NORMAL
	msgbox Fierypath_Koffing, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fierypath_EventScript_Carkol::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CARKOL, CRY_MODE_NORMAL
	msgbox Fierypath_Carkol, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fierypath_Torkoal:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Torkoal: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Koaal?$"

Fierypath_Koffing:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Koffing: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Koff...$"

Fierypath_Carkol:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Carkol: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Nyooom!$"

