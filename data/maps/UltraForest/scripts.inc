UltraForest_MapScripts::
	.byte 0

UltraForest_EventScript_Kartana1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KARTANA, CRY_MODE_NORMAL
	msgbox UltraForest_Kartana1, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UltraForest_Kartana1:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Kartana: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Kaaahtn!$"


UltraForest_EventScript_Kartana2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KARTANA, CRY_MODE_NORMAL
	msgbox UltraForest_Kartana2, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UltraForest_Kartana2:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Kartana: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Aaaantah!$"

UltraForest_EventScript_Kartana3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KARTANA, CRY_MODE_NORMAL
	msgbox UltraForest_Kartana3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UltraForest_Kartana3:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Kartana: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Yah! Tahn!$"

