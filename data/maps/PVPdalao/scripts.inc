# 1 ".\\data\\maps\\PVPdalao\\scripts.pory"
PVPdalao_MapScripts::
# 2 ".\\data\\maps\\PVPdalao\\scripts.pory"
    .byte 0

PVPdalao_Main::
# 7 ".\\data\\maps\\PVPdalao\\scripts.pory"
	switch VAR_PVPDALAO
# 8 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 0, PVPdalao_Main_2
# 11 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 1, PVPdalao_Main_3
# 14 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 2, PVPdalao_Main_4
# 17 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 3, PVPdalao_Main_5
# 20 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 4, PVPdalao_Main_6
# 23 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 5, PVPdalao_Main_7
# 26 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 6, PVPdalao_Main_8
# 30 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 7, PVPdalao_Main_9
# 33 ".\\data\\maps\\PVPdalao\\scripts.pory"
	case 8, PVPdalao_Main_10
	return

PVPdalao_Main_2:
# 9 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_0, MSGBOX_AUTOCLOSE
# 10 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 1
	return

PVPdalao_Main_3:
# 12 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_1, MSGBOX_AUTOCLOSE
# 13 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 2
	return

PVPdalao_Main_4:
# 15 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_2, MSGBOX_AUTOCLOSE
# 16 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 3
	return

PVPdalao_Main_5:
# 18 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_3, MSGBOX_AUTOCLOSE
# 19 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 4
	return

PVPdalao_Main_6:
# 21 ".\\data\\maps\\PVPdalao\\scripts.pory"
	goto Msgbox_PVPdalao
# 22 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 5
	return

PVPdalao_Main_7:
# 24 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_4, MSGBOX_AUTOCLOSE
# 25 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 6
	return

PVPdalao_Main_8:
# 27 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_5, MSGBOX_AUTOCLOSE
# 28 ".\\data\\maps\\PVPdalao\\scripts.pory"
	clearflag FLAG_HIDE_BED
# 29 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 7
	return

PVPdalao_Main_9:
# 31 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_6, MSGBOX_AUTOCLOSE
# 32 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setvar VAR_PVPDALAO, 8
	return

PVPdalao_Main_10:
# 34 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Main_Text_7
	return


Msgbox_PVPdalao::
# 40 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_String, MSGBOX_AUTOCLOSE
# 41 ".\\data\\maps\\PVPdalao\\scripts.pory"
	delay 2
	return


PVPdalao_Bed::
# 45 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox PVPdalao_Bed_Text_0
# 46 ".\\data\\maps\\PVPdalao\\scripts.pory"
	setflag FLAG_HIDE_BED
	return


Msgbox_Men::
# 50 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox Msgbox_Men_Text_0
	return


Msgbox_Redstone::
# 54 ".\\data\\maps\\PVPdalao\\scripts.pory"
	msgbox Msgbox_Redstone_Text_0
	return


PVPdalao_Main_Text_0:
# 9 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "你好，陌生人$"

PVPdalao_Main_Text_1:
# 12 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "GRW团队诞生了$"

PVPdalao_Main_Text_2:
# 15 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "无论你是跑酷大神$"

PVPdalao_Main_Text_3:
# 18 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "生存大师$"

PVPdalao_Main_Text_4:
# 24 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "又或是起床大佬$"

PVPdalao_Main_Text_5:
# 27 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "又或是建筑大佬$"

PVPdalao_Main_Text_6:
# 31 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "又或是红石大佬$"

PVPdalao_Main_Text_7:
# 34 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "还是什么都不知道的小白$"

PVPdalao_Bed_Text_0:
# 45 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "假装这是床$"

Msgbox_Men_Text_0:
# 50 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "唐氏绝门     {UP_ARROW}$"

Msgbox_Redstone_Text_0:
# 54 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "错误：在宝可梦中未找到对象\n“红石”，请联系开发者寻求帮助$"

PVPdalao_String::
# 56 ".\\data\\maps\\PVPdalao\\scripts.pory"
	.string "还是PVP大佬$"
