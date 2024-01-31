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
	return

PVPdalao_Main_2:
# 10 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_0
# 11 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 1
	return

PVPdalao_Main_3:
# 13 ".\\PVPdalao.pory"
	msgbox PVPdalao_Main_Text_1
# 14 ".\\PVPdalao.pory"
	setvar VAR_PVPDALAO, 2
	return


PVPdalao_Main_Text_0:
# 10 ".\\PVPdalao.pory"
	.string "你好，陌生人$"

PVPdalao_Main_Text_1:
# 13 ".\\PVPdalao.pory"
	.string "GRW团队诞生了$"
