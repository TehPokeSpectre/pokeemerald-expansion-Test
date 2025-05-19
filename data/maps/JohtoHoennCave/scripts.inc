JohtoHoennCave_MapScripts::
	.byte 0

JohtoHoennCave_EventScript_Larvitar::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LARVITAR, CRY_MODE_NORMAL
	msgbox JohtoHoennCave_Larvitar, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JohtoHoennCave_Larvitar:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Larvitar: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Tar?$"

JohtoHoennCave_EventScript_Glalie::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GLALIE, CRY_MODE_NORMAL
	msgbox JohtoHoennCave_Glalie, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JohtoHoennCave_Glalie:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Glalie: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Laaaaieee...$"



