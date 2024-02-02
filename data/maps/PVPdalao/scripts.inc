# 1 ".\\PVPdalao.pory"
PVPdalao_MapScripts::
# 2 ".\\PVPdalao.pory"
    .byte 0

PVPdalao_Main::
# 7 ".\\PVPdalao.pory"
	switch VAR_PVPDALAO
# 8 ".\\PVPdalao.pory"
	case 0, PVPdalao_Main_2
# 11 ".\\PVPdalao.pory"
	case 1, PVPdalao_Main_3
# 14 ".\\PVPdalao.pory"
	case 2, PVPdalao_Main_4
# 17 ".\\PVPdalao.pory"
	case 3, PVPdalao_Main_5
# 20 ".\\PVPdalao.pory"
	case 4, PVPdalao_Main_6
# 23 ".\\PVPdalao.pory"
	case 5, PVPdalao_Main_7
# 26 ".\\PVPdalao.pory"
	case 6, PVPdalao_Main_8
# 29 ".\\PVPdalao.pory"
	case 7, PVPdalao_Main_9
# 32 ".\\PVPdalao.pory"
	case 8, PVPdalao_Main_10
	return

PVPdalao_Main_2:
# 9 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_0, MSGBOX_AUTOCLOSE
# 10 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 1
	return

PVPdalao_Main_3:
# 12 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_1, MSGBOX_AUTOCLOSE
# 13 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 2
	return

PVPdalao_Main_4:
# 15 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_2, MSGBOX_AUTOCLOSE
# 16 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 3
	return

PVPdalao_Main_5:
# 18 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_3, MSGBOX_AUTOCLOSE
# 19 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 4
	return

PVPdalao_Main_6:
# 21 ".\\PVPdalao.pory"
	goto Msgbox_PVPdalao
# 22 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 5
	return

PVPdalao_Main_7:
# 24 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_4, MSGBOX_AUTOCLOSE
# 25 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 6
	return

PVPdalao_Main_8:
# 27 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_5, MSGBOX_AUTOCLOSE
# 28 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 7
	return

PVPdalao_Main_9:
# 30 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_6, MSGBOX_AUTOCLOSE
# 31 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 8
	return

PVPdalao_Main_10:
# 33 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_7
	return


Msgbox_PVPdalao::
# 39 ".\\PVPdalao.pory"
	msgbox PVPdalao_String, MSGBOX_AUTOCLOSE
	return


PVPdalao_Main_Text_0:
# 9 ".\\PVPdalao.pory"
	.string "你好，陌生人$"

PVPdalao_Main_Text_1:
# 12 ".\\PVPdalao.pory"
	.string "GRW团队诞生了$"

PVPdalao_Main_Text_2:
# 15 ".\\PVPdalao.pory"
	.string "无论你是跑酷大神$"

PVPdalao_Main_Text_3:
# 18 ".\\PVPdalao.pory"
	.string "生存大师$"

PVPdalao_Main_Text_4:
# 24 ".\\PVPdalao.pory"
	.string "又或是起床大佬$"

PVPdalao_Main_Text_5:
# 27 ".\\PVPdalao.pory"
	.string "又或是建筑大佬$"

PVPdalao_Main_Text_6:
# 30 ".\\PVPdalao.pory"
	.string "又或是红石大佬$"

PVPdalao_Main_Text_7:
# 33 ".\\PVPdalao.pory"
	.string "还是什么都不知道的小白$"

PVPdalao_String::
# 43 ".\\PVPdalao.pory"
	.string "还是PVP大佬$"
