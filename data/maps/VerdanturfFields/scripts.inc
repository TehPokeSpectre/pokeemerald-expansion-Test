VerdanturfFields_MapScripts::
	.byte 0

Verdanturffields_EventScript_Sign::
	msgbox Verdanturffields_sign, MSGBOX_SIGN
	end

Verdanturffields_sign:
	.string "Verdanturf Fields.$"

Verdanturffields_EventScript_Bellossom1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_NORMAL
	msgbox Verdanturffields_Bellossom1, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Verdanturffields_Bellossom1:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Bellossom: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Belellle!$"

Verdanturffields_EventScript_Bellossom2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_NORMAL
	msgbox Verdanturffields_Bellossom2, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Verdanturffields_Bellossom2:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Bellossom: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Belll?$"

Verdanturffields_EventScript_Bellossom3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_NORMAL
	msgbox Verdanturffields_Bellossom3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Verdanturffields_Bellossom3:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Bellossom: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Sumsumel!$"

Verdanturffields_EventScript_Sunflora::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SUNFLORA, CRY_MODE_NORMAL
	msgbox Verdanturffields_Sunflora, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Verdanturffields_Sunflora:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Sunflora: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Flora?$"

Verdanturffields_EventScript_Shaymin::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SHAYMIN, CRY_MODE_NORMAL
	msgbox Verdanturffields_Shaymin, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Verdanturffields_Shaymin:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Shaymin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Shiayi!$"

Verdanturffields_EventScript_Ribombee::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_NORMAL
	msgbox Verdanturffields_Ribombee, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Verdanturffields_Ribombee:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Ribombee: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Riiibee.$"

Verdanturffields_EventScript_Whimsicott::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WHIMSICOTT, CRY_MODE_NORMAL
	msgbox Verdanturffields_Whimsicott, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Verdanturffields_Whimsicott:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Whimsicott: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Wiimscot!!!$"

Verdanturffields_EventScript_Lopunnite::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_LOPUNNITE_VERDANTURF_FIELDS, Verdanturffields_Lopunniteposttext
	msgbox Verdanturffields_Lopunnitebefore, MSGBOX_DEFAULT
	giveitem ITEM_LOPUNNITE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_LOPUNNITE_VERDANTURF_FIELDS
	release
	end


	Verdanturffields_Lopunniteposttext::
	msgbox Verdanturffields_Lopunniteisgot, MSGBOX_DEFAULT
	release
	end

Verdanturffields_Lopunnitebefore:
	.string "Why hello there young man! What\n"
	.string "brings you here? I dont get many\l"
	.string "young ones visiting my garden...\p"
	.string "Normally, it's just locals and\n"
	.string "during the spring, this Shaymin\l"
	.string "here.\p"
	.string "I've lived in Verdanturf for fifty\n"
	.string "years. My late husband and I tended\l"
	.string "to these fields for that entire\l"
	.string "time. But alas... As we get old\l"
	.string "things move on...\p"
	.string "My darling passed away two years\n"
	.string "now. Leaving me here to look after\l"
	.string "the gardens by myself!\p"
	.string "Hm! Thank you for listening to my\n"
	.string "my story.\p"
	.string "Here. I want you to take this stone!\n"
	.string "My husband found it for my grandson\l"
	.string "before he died but he lives in Kalos.\p"
	.string "So for making my day. Take it please!$"

Verdanturffields_Lopunniteisgot:
.string "I wonder what my darling is doing in the\n"
.string "afterlife? Probably causing trouble\l"
.string "knowing him hahah!$"

Verdanturffields_EventScript_Sprigatito::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPRIGATITO, CRY_MODE_NORMAL
	msgbox Verdanturffields_Sprigatito, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Verdanturffields_Sprigatito:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Sprigatito: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Meoowito!$"



