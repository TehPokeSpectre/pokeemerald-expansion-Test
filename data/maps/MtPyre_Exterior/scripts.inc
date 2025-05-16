MtPyre_Exterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Exterior_OnTransition
	.byte 0

MtPyre_Exterior_OnTransition:
	call MtPyre_Exterior_EventScript_CheckEnterFromSummit
	end

MtPyre_Exterior_EventScript_CheckEnterFromSummit::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_lt VAR_TEMP_1, 12, MtPyre_Exterior_EventScript_EnterFromSummit
	return

MtPyre_Exterior_EventScript_EnterFromSummit::
	setweather WEATHER_FOG_HORIZONTAL
	return

MtPyre_Exterior_EventScript_FogTrigger::
	setweather WEATHER_FOG_HORIZONTAL
	doweather
	end

MtPyre_Exterior_EventScript_SunTrigger::
	setweather WEATHER_SUNNY
	doweather
	end

MtPyre_Exterior_EventScript_Runerigus::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RUNERIGUS, CRY_MODE_NORMAL
	msgbox MtPyre_Exterior_Runerigus, MSGBOX_DEFAULT
	waitmoncry
	release
	end

MtPyre_Exterior_Runerigus:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Runerigus: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Rigirigruus!$"

MtPyre_Exterior_EventScript_Annihilape::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ANNIHILAPE, CRY_MODE_NORMAL
	msgbox MtPyre_Exterior_Annihilape, MSGBOX_DEFAULT
	waitmoncry
	release
	end

MtPyre_Exterior_Annihilape:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Annihilape: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Arguuuahil...$"



