UltraWilds_MapScripts::
	.byte 0

UltraWilds_EventScript_Stakataka::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STAKATAKA, CRY_MODE_NORMAL
	msgbox UltraWilds_Stakataka, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UltraWilds_Stakataka:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Stakataka: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Taka-Taka-Taka.$"

UltraWilds_EventScript_Blacephalon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BLACEPHALON, CRY_MODE_NORMAL
	msgbox UltraWilds_Blacephalon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UltraWilds_Blacephalon:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Blacephalon: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Phaaahueuhue!$"

