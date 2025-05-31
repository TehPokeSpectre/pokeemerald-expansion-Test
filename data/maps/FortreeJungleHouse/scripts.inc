FortreeJungleHouse_MapScripts::
	.byte 0

FortreeJungleHouse_EventScript_Shopkeeper::
	lock
	faceplayer
	message FortreeJungleHouse_Text_Shopkeeper
	waitmessage
	pokemart FortreeJungleHouse_TM
	msgbox FortreeJungleHouse_Text_end, MSGBOX_DEFAULT
	release
	end


	.align 2
FortreeJungleHouse_TM:
	.2byte ITEM_TM72
	.2byte ITEM_TM73
	.2byte ITEM_TM74
	.2byte ITEM_TM75
	pokemartlistend

FortreeJungleHouse_Text_Shopkeeper:
    .string "Welcome! How may I help?$"

FortreeJungleHouse_Text_end:
    .string "Come again another time!$"

