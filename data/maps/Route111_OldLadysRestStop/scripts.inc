Route111_OldLadysRestStop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_OnTransition
	.byte 0

Route111_OldLadysRestStop_OnTransition:
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
	end

Route111_OldLadysRestStop_EventScript_OldLady::
	lock
	faceplayer
	msgbox Route111_OldLadysRestStop_Text_RestUpHere, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route111_OldLadysRestStop_EventScript_Rest
	compare VAR_RESULT, NO
	goto_if_eq Route111_OldLadysRestStop_EventScript_DeclineRest
	end

Route111_OldLadysRestStop_EventScript_Rest::
	msgbox Route111_OldLadysRestStop_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route111_OldLadysRestStop_EventScript_Rest
	compare VAR_RESULT, NO
	goto_if_eq Route111_OldLadysRestStop_EventScript_DeclineRest
	end

Route111_OldLadysRestStop_EventScript_DeclineRest::
	msgbox Route111_OldLadysRestStop_Text_DontNeedToBeShy, MSGBOX_DEFAULT
	release
	end

Route111_OldLadysRestStop_Text_RestUpHere:
    .string "喔，亲爱的。\n你的宝可梦太疲劳了吗？\p如果你需要，过来休息下吧。\n这是个好主意！你应该那么做。$"

Route111_OldLadysRestStop_Text_TakeYourTimeRestUp:
    .string "对了。\n不要急，稍事休息吧！$"

Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest:
    .string "喔，亲爱的。\n你的宝可梦还很累？\p那么在这里再休息下吧。\n这是个好主意！你应该那么做。$"

Route111_OldLadysRestStop_Text_DontNeedToBeShy:
    .string "足够了？\n不要害羞哟。$"

