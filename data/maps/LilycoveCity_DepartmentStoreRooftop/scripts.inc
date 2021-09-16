LilycoveCity_DepartmentStoreRooftop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStoreRooftop_OnTransition
	.byte 0

LilycoveCity_DepartmentStoreRooftop_OnTransition:
	getpricereduction POKENEWS_LILYCOVE
	compare VAR_RESULT, TRUE
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman
	compare VAR_RESULT, FALSE
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman::
	clearflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman::
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemartdecoration LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale:
	.2byte DECOR_MUD_BALL
	.2byte DECOR_FENCE_LENGTH
	.2byte DECOR_FENCE_WIDTH
	.2byte DECOR_TIRE
	.2byte DECOR_BREAKABLE_DOOR
	.2byte DECOR_SOLID_BOARD
	.2byte DECOR_SAND_ORNAMENT
	.2byte DECOR_STAND
	.2byte DECOR_SLIDE
	.2byte DECOR_TV
	.2byte DECOR_ROUND_TV
	.2byte DECOR_CUTE_TV
	.2byte DECOR_WAILMER_DOLL
	.2byte DECOR_RHYDON_DOLL
	.2byte 0
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Man::
	lock
	faceplayer
	getpricereduction POKENEWS_LILYCOVE
	compare VAR_RESULT, TRUE
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale::
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan::
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty, MSGBOX_NPC
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine::
	lockall
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
	waitmessage
	showmoneybox 0, 0, 0
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink::
	multichoice 16, 0, MULTI_VENDING_MACHINE, FALSE
	copyvar VAR_TEMP_1, VAR_RESULT
	switch VAR_TEMP_1
	case 0, LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater
	case 1, LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop
	case 2, LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater::
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop::
	setvar VAR_TEMP_0, ITEM_SODA_POP
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade::
	setvar VAR_TEMP_0, ITEM_LEMONADE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater::
	checkmoney 200, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop::
	checkmoney 300, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade::
	checkmoney 350, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater::
	removemoney 200, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop::
	removemoney 300, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade::
	removemoney 350, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink::
	compare VAR_TEMP_1, 0
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater
	compare VAR_TEMP_1, 1
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop
	compare VAR_TEMP_1, 2
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink
	checkitemspace VAR_TEMP_0, 1
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	compare VAR_TEMP_1, 0
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater
	compare VAR_TEMP_1, 1
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop
	compare VAR_TEMP_1, 2
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade
	updatemoneybox 0, 0
	bufferitemname 0, VAR_TEMP_0
	playse SE_VEND
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname 1, VAR_TEMP_0
	bufferstdstring 2, STDSTRING_ITEMS
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	random 64  @ 1/64 chance of an additional drink dropping
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	checkitemspace VAR_TEMP_0, 1
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	playse SE_VEND
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname 1, VAR_TEMP_0
	bufferstdstring 2, STDSTRING_ITEMS
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	random 64  @ 1/64 * the prev 1/64 chance of a third additional drink dropping, ~ 0.02% chance
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	checkitemspace VAR_TEMP_0, 1
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	playse SE_VEND
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname 1, VAR_TEMP_0
	bufferstdstring 2, STDSTRING_ITEMS
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink::
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
	waitmessage
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink::
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink::
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine::
	hidemoneybox
	releaseall
	end

LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales:
    .string "他们从不清仓甩卖\n什么的吗？\p我看电视的时候\n从没看到过商业广告。$"

LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale:
    .string "呀！这次清仓我已经\n等了很久了。\p有些东西只有在这儿才能买到，\n我要大堆大堆地买回去！$"

LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty:
    .string "啊…我快渴死了！$"

LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike:
    .string "一台贩卖机。\n想买些什么饮料？$"

LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown:
    .string "当啷！\p一罐{STR_VAR_1}掉出来了。$"

LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown:
    .string "当啷！\p万岁！一罐大{STR_VAR_1}\n掉出来了！$"

LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney:
    .string "钱不够…$"

LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink:
    .string "不买饮料了。$"
