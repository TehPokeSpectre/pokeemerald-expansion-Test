OceanBridge_MapScripts::
	.byte 0

Route124Past_EventScript_SandyShock1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SANDY_SHOCKS, CRY_MODE_NORMAL
	msgbox Route124Past_SandyShock1, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route124Past_SandyShock1:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Sandy Shocks: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Magn-Aragh!$"

Route124Past_EventScript_SandyShock2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SANDY_SHOCKS, CRY_MODE_NORMAL
	msgbox Route124Past_SandyShock2, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route124Past_SandyShock2:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Sandy Shocks: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Magnet-Aragh?$"

Route124Past_EventScript_SandyShock3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SANDY_SHOCKS, CRY_MODE_NORMAL
	msgbox Route124Past_SandyShock3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route124Past_SandyShock3:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Sandy Shocks: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Tonn-Aragh.$"

Route124Past_EventScript_Raging_Bolt::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RAGING_BOLT, CRY_MODE_NORMAL
	msgbox Route124Past_RagingBolt, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route124Past_RagingBolt:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Raging Bolt: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Raiiik-Aragh!$"



