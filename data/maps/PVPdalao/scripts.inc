# 1 ".\\data\\maps\\PVPdalao\\scripts.pory"
PVPdalao_MapScripts::
# 2 ".\\data\\maps\\PVPdalao\\scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, PVPdalo_Onfarme
# 3 ".\\data\\maps\\PVPdalao\\scripts.pory"
    .byte 0

PVPdalao_Main::
# 8 ".\\data\\maps\\PVPdalao\\scripts.pory"
	switch VAR_PVPDALAO
# 9 ".\\data\\maps\\PVPdalao\\scripts.pory"
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
# 31 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 7, PVPdalao_Main_9
# 34 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 8, PVPdalao_Main_10
# 36 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 9, PVPdalao_Main_11
# 39 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 10, PVPdalao_Main_12
# 41 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 11, PVPdalao_Main_13
	return

PVPdalao_Main_2:
# 10 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_0, MSGBOX_AUTOCLOSE
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
	goto Msgbox_PVPdalao
# 23 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 5
	return

PVPdalao_Main_7:
# 25 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_4, MSGBOX_AUTOCLOSE
# 26 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 9
	return

PVPdalao_Main_8:
# 28 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_5, MSGBOX_AUTOCLOSE
# 29 ".\\data\\maps\\PVPdalao\\scripts.pory"
	clearflag FLAG_HIDE_BED
# 30 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 10
	return

PVPdalao_Main_9:
# 32 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_6, MSGBOX_AUTOCLOSE
# 33 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 11
	return

PVPdalao_Main_10:
# 35 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_7
	return

PVPdalao_Main_11:
# 37 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_8
# 38 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setflag FLAG_HIDE_BED
	return

PVPdalao_Main_12:
# 40 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_9
	return

PVPdalao_Main_13:
# 42 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_10
	return


Msgbox_PVPdalao::
# 48 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_String, MSGBOX_AUTOCLOSE
# 49 ".\\data\\maps\\PVPdalao\\scripts.pory"
	delay 2
	return


PVPdalo_Onfarme::
# 53 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setflag FLAG_HIDE_BED
	return


PVPdalao_Main_Text_0:
# 10 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "你好，陌生人$"

PVPdalao_Main_Text_1:
# 13 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "GRW团队诞生了$"

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
# 32 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "又或是红石大佬$"

PVPdalao_Main_Text_7:
# 35 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "还是什么都不知道的小白$"

PVPdalao_Main_Text_8:
# 37 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "假装这是床$"

PVPdalao_Main_Text_9:
# 40 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "唐氏绝门     {UP_ARROW}$"

PVPdalao_Main_Text_10:
# 42 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "错误：在宝可梦中未找到对象\n“红石”，请联系开发者寻求帮助$"

PVPdalao_String::
# 56 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "还是PVP大佬$"
