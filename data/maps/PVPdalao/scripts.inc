PVPdalao_MapScripts::
# 3 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 0
	return


PVPdalao_Main::
# 8 ".\\PVPdalao.pory"
	switch VAR_PVPDALAO
# 9 ".\\PVPdalao.pory"
	case 0, PVPdalao_Main_2
# 12 ".\\PVPdalao.pory"
	case 1, PVPdalao_Main_3
# 15 ".\\PVPdalao.pory"
	case 2, PVPdalao_Main_4
# 18 ".\\PVPdalao.pory"
	case 3, PVPdalao_Main_5
# 21 ".\\PVPdalao.pory"
	case 4, PVPdalao_Main_6
	return

PVPdalao_Main_2:
# 10 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_0, MSGBOX_AUTOCLOSE
# 11 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 1
	return

PVPdalao_Main_3:
# 13 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_1, MSGBOX_AUTOCLOSE
# 14 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 2
	return

PVPdalao_Main_4:
# 16 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_2, MSGBOX_AUTOCLOSE
# 17 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 3
	return

PVPdalao_Main_5:
# 19 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_3, MSGBOX_AUTOCLOSE
# 20 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 1
	return

PVPdalao_Main_6:
# 22 ".\\PVPdalao.pory"
	msgbox PVPdalao_String, MSGBOX_AUTOCLOSE
# 23 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 5
	return


PVPdalao_Main_Text_0:
# 10 ".\\PVPdalao.pory"
	.string "你好，陌生人$"

PVPdalao_Main_Text_1:
# 13 ".\\PVPdalao.pory"
	.string "GRW团队诞生了$"

PVPdalao_Main_Text_2:
# 16 ".\\PVPdalao.pory"
	.string "无论你是跑酷大神$"

PVPdalao_Main_Text_3:
# 19 ".\\PVPdalao.pory"
	.string "生存大师$"

PVPdalao_String::
# 28 ".\\PVPdalao.pory"
	.string "还是PVP大佬$"
