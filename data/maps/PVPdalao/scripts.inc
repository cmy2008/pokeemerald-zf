# 1 ".\\data\\maps\\PVPdalao\\scripts.pory"
PVPdalao_MapScripts::
# 2 ".\\data\\maps\\PVPdalao\\scripts.pory"
    .byte 0

PVPdalao_Main::
# 7 ".\\data\\maps\\PVPdalao\\scripts.pory"
	switch VAR_PVPDALAO
# 8 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 0, PVPdalao_Main_2
# 12 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 1, PVPdalao_Main_3
# 15 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 2, PVPdalao_Main_4
# 18 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 3, PVPdalao_Main_5
# 21 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 4, PVPdalao_Main_6
# 24 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 5, PVPdalao_Main_7
# 27 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 6, PVPdalao_Main_8
# 32 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 7, PVPdalao_Main_9
# 35 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 8, PVPdalao_Main_10
# 38 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 9, PVPdalao_Main_11
	return

PVPdalao_Main_2:
# 9 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_0, MSGBOX_AUTOCLOSE
# 10 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_TEMP_0, 0
# 11 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 1
	return

PVPdalao_Main_3:
# 13 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_1, MSGBOX_AUTOCLOSE
# 14 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 2
	return

PVPdalao_Main_4:
# 16 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_2, MSGBOX_AUTOCLOSE
# 17 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 3
	return

PVPdalao_Main_5:
# 19 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_3, MSGBOX_AUTOCLOSE
# 20 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 4
	return

PVPdalao_Main_6:
# 22 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 5
# 23 ".\\data\\maps\\PVPdalao\\scripts.pory"
	goto Msgbox_PVPdalao
	return

PVPdalao_Main_7:
# 25 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_4, MSGBOX_AUTOCLOSE
# 26 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 6
	return

PVPdalao_Main_8:
# 28 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_5, MSGBOX_AUTOCLOSE
# 29 ".\\data\\maps\\PVPdalao\\scripts.pory"
	clearflag FLAG_HIDE_MEN
# 30 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 7
# 31 ".\\data\\maps\\PVPdalao\\scripts.pory"
	warp MAP_PVPDALAO, 10, 19
	return

PVPdalao_Main_9:
# 33 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_6, MSGBOX_AUTOCLOSE
# 34 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 8
	return

PVPdalao_Main_10:
# 36 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_7, MSGBOX_AUTOCLOSE
# 37 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 9
	return

PVPdalao_Main_11:
# 39 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_String
# 40 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 10
	return


Msgbox_PVPdalao::
# 46 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_String, MSGBOX_AUTOCLOSE
# 47 ".\\data\\maps\\PVPdalao\\scripts.pory"
	delay 2
	return


PVPdalao_Bed::
# 51 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Bed_Text_0, MSGBOX_AUTOCLOSE
# 52 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setflag FLAG_HIDE_BED
# 53 ".\\data\\maps\\PVPdalao\\scripts.pory"
	warp MAP_PVPDALAO2, 4, 2
	return


Msgbox_Men::
# 57 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox Msgbox_Men_Text_0, MSGBOX_AUTOCLOSE
	return


Msgbox_ArmorStand::
# 61 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox Msgbox_ArmorStand_Text_0, MSGBOX_AUTOCLOSE
	return


Msgbox_Redstone::
# 65 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox Msgbox_Redstone_Text_0
	return


PVPdalao_EventScript_Pokemon::
# 72 ".\\data\\maps\\PVPdalao\\scripts.pory"
	givemon SPECIES_DIAMOND_PICKAXE, 1, ITEM_NONE
# 73 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_EventScript_Pokemon_Text_0, MSGBOX_AUTOCLOSE
# 74 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setflag FLAG_ITEM_PVPDALAO_POTION2
	end


PVPdalao_Main_Text_0:
# 9 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "你好，陌生人$"

PVPdalao_Main_Text_1:
# 13 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "GRW团队招生了$"

PVPdalao_Main_Text_2:
# 16 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "无论你是跑酷大神$"

PVPdalao_Main_Text_3:
# 19 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "生存大师$"

PVPdalao_Main_Text_4:
# 25 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "又或是起床大佬$"

PVPdalao_Main_Text_5:
# 28 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "又或是建筑大佬$"

PVPdalao_Main_Text_6:
# 33 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "又或是红石大佬$"

PVPdalao_Main_Text_7:
# 36 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "还是什么都不知道的小白$"

PVPdalao_Bed_Text_0:
# 51 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "假装这是床$"

Msgbox_Men_Text_0:
# 57 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "绝世唐门                       {UP_ARROW}$"

Msgbox_ArmorStand_Text_0:
# 61 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "我是盔甲架(确信$"

Msgbox_Redstone_Text_0:
# 65 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "错误：在宝可梦中未找到对象“红石”，\n请联系开发者寻求帮助$"

PVPdalao_EventScript_Pokemon_Text_0:
# 73 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "{PLAYER}获得了钻石镐！$"

PVPdalao_String::
# 67 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "还是PVP大佬$"
