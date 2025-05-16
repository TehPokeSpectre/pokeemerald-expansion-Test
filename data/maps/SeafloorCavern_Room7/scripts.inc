SeafloorCavern_Room7_MapScripts::
	.byte 0

Seafloor_EventScript_Overqwil::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_OVERQWIL, CRY_MODE_NORMAL
	msgbox Seafloor_Overqwil, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Seafloor_Overqwil:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Overqwil: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}QQverrrrli!$"

