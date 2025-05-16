Glimburg_Thicket_MapScripts::
	.byte 0

GlimburgThicket_EventScript_Morelull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MORELULL, CRY_MODE_NORMAL
	msgbox GlimburgThicket_Morelull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GlimburgThicket_Morelull:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Morelull: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Murl-lilil.$"

GlimburgThicket_EventScript_Hoppip::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HOPPIP, CRY_MODE_NORMAL
	msgbox GlimburgThicket_Hoppip, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GlimburgThicket_Hoppip:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Hoppip: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hiipopip?$"

GlimburgThicket_EventScript_Ponyta::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HOPPIP, CRY_MODE_NORMAL
	msgbox GlimburgThicket_Ponyta, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GlimburgThicket_Ponyta:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Ponyta: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Nyyyayta!$"

GlimburgThicket_EventScript_Shiinotic::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SHIINOTIC, CRY_MODE_NORMAL
	msgbox GlimburgThicket_Shiinotic, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GlimburgThicket_Shiinotic:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Shiinotic: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Shiiiino?$"

GlimburgThicket_EventScript_Toedscool::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TOEDSCOOL, CRY_MODE_NORMAL
	msgbox GlimburgThicket_Toedscool, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GlimburgThicket_Toedscool:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Toedscool: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Toooed!$"

GlimburgThicket_EventScript_Impidimp::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IMPIDIMP, CRY_MODE_NORMAL
	msgbox GlimburgThicket_Impidimp, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GlimburgThicket_Impidimp:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Impidimp: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Impidip!!$"

GlimburgThicket_EventScript_Spewpa::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPEWPA, CRY_MODE_NORMAL
	msgbox GlimburgThicket_Spewpa, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GlimburgThicket_Spewpa:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Spewpa: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Peeewpae!$"


