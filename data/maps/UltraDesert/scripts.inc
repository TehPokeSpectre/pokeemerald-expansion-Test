UltraDesert_MapScripts::
	.byte 0

UltraDesert_EventScript_Pheromosa::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PHEROMOSA, CRY_MODE_NORMAL
	msgbox UltraDesert_Pheromosa, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UltraDesert_Pheromosa:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Pheromosa: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Pheroche...$"



