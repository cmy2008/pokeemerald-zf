PVPdalao2_MapScripts::
# 2 ".\\PVPdalao2.pory"
	setvar VAR_PVPDALAO, 3
	return


PVPdalao_Trainer::
# 6 ".\\PVPdalao2.pory"
	trainerbattle_single TRAINER_MAY_PLACEHOLDER, PVPdalao_String, PVPdalao_String
# 7 ".\\PVPdalao2.pory"
	msgbox PVPdalao_String
	return

