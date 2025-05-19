PastLilycove_MapScripts::
	.byte 0

LilycovePast_EventScript_Slither_Wing::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLITHER_WING, CRY_MODE_NORMAL
	msgbox LilycovePast_SlitherWing, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycovePast_SlitherWing:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Slither Wing: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Volcr-Aragh!!$"

LilycovePast_EventScript_Flutter_Mane::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FLUTTER_MANE, CRY_MODE_NORMAL
	msgbox LilycovePast_FlutterMane, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycovePast_FlutterMane:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Flutter Mane: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Misvius-Aragh?$"

LilycovePast_EventScript_Walking_Wake::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
	msgbox LilycovePast_WalkingWake, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycovePast_WalkingWake:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Walking Wake: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Suiii-Aragh!$"

