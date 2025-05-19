UltraPlant_MapScripts::
	.byte 0

UltraPlant_EventScript_Xurkitree::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_XURKITREE, CRY_MODE_NORMAL
	msgbox UltraPlant_Xurkitree, MSGBOX_DEFAULT
	waitmoncry
	release
	end

UltraPlant_Xurkitree:
.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Xurkitree: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Xurrrrkit!$"

