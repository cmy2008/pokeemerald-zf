SootopolisCity_House2_MapScripts::
	.byte 0

SootopolisCity_House2_EventScript_ExpertF::
	lock
	faceplayer
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq SootopolisCity_House2_EventScript_KnowAboutOrbs
	compare VAR_RESULT, NO
	call_if_eq SootopolisCity_House2_EventScript_DontKnowAboutOrbs
	release
	end

SootopolisCity_House2_EventScript_KnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
	return

SootopolisCity_House2_EventScript_DontKnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
	return

SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs:
    .string "送神火山码头…\p在它的顶峰并列着\n两块玉石，你知道吗？$"

SootopolisCity_House2_Text_YesTwoOrbsSideBySide:
    .string "是的，并列的两块玉石…\p看着它们摆在那儿…\n心中就会充满宁静…$"

SootopolisCity_House2_Text_OughtToVisitAndSee:
    .string "是吗？\n也许你该去…$"

