#include "global.h"

// Easy Chat keyboard
const u8 gText_EasyChatKeyboard_ABCDEFothers[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 26}others");
const u8 gText_EasyChatKeyboard_GHIJKL[] = _("{CLEAR 11}G{CLEAR 6}H{CLEAR 6}I{CLEAR 26}J{CLEAR 6}K{CLEAR 6}L");
const u8 gText_EasyChatKeyboard_MNOPQRS[] = _("{CLEAR 11}M{CLEAR 6}N{CLEAR 6}O{CLEAR 26}P{CLEAR 6}Q{CLEAR 6}R{CLEAR 6}S{CLEAR 26} ");
const u8 gText_EasyChatKeyboard_TUVWXYZ[] = _("{CLEAR 11}T{CLEAR 6}U{CLEAR 6}V{CLEAR 26}W{CLEAR 6}X{CLEAR 6}Y{CLEAR 6}Z{CLEAR 26} ");

// Naming Screen keyboard                                  0           23         46         63         80         97          120         
#if PVPDALAO                                   //          12          12          6          6         6          12          12
const u8 gText_NamingScreenKeyboard_abcdef[] = _("{CLEAR 8}还{CLEAR 11}是{CLEAR 11}P{CLEAR 11}V{CLEAR 11}P{CLEAR 11}大{CLEAR 11}佬{CLEAR 12}");
const u8 gText_NamingScreenKeyboard_ghijkl[] = _("{CLEAR 8}还{CLEAR 11}是{CLEAR 11}P{CLEAR 11}V{CLEAR 11}P{CLEAR 11}大{CLEAR 11}佬{CLEAR 12}");
const u8 gText_NamingScreenKeyboard_mnopqrs[] = _("{CLEAR 8}还{CLEAR 11}是{CLEAR 11}P{CLEAR 11}V{CLEAR 11}P{CLEAR 11}大{CLEAR 11}佬{CLEAR 12}");
const u8 gText_NamingScreenKeyboard_tuvwxyz[] = _("{CLEAR 8}还{CLEAR 11}是{CLEAR 11}P{CLEAR 11}V{CLEAR 11}P{CLEAR 11}大{CLEAR 11}佬{CLEAR 12}");
const u8 gText_NamingScreenKeyboard_ABCDEF[] = _("{CLEAR 8}还{CLEAR 11}是{CLEAR 11}P{CLEAR 11}V{CLEAR 11}P{CLEAR 11}大{CLEAR 11}佬{CLEAR 12}");
const u8 gText_NamingScreenKeyboard_GHIJKL[] = _("{CLEAR 8}还{CLEAR 11}是{CLEAR 11}P{CLEAR 11}V{CLEAR 11}P{CLEAR 11}大{CLEAR 11}佬{CLEAR 12}");
const u8 gText_NamingScreenKeyboard_MNOPQRS[] = _("{CLEAR 8}还{CLEAR 11}是{CLEAR 11}P{CLEAR 11}V{CLEAR 11}P{CLEAR 11}大{CLEAR 11}佬{CLEAR 12}");
const u8 gText_NamingScreenKeyboard_TUVWXYZ[] = _("{CLEAR 8}还{CLEAR 11}是{CLEAR 11}P{CLEAR 11}V{CLEAR 11}P{CLEAR 11}大{CLEAR 11}佬{CLEAR 12}");
const u8 gText_NamingScreenKeyboard_01234[] = _("{CLEAR 11}0{CLEAR 16}1{CLEAR 16}2{CLEAR 16}3{CLEAR 16}4{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_56789[] = _("{CLEAR 11}5{CLEAR 16}6{CLEAR 16}7{CLEAR 16}8{CLEAR 16}9{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_Symbols1[] = _("{CLEAR 12}!{CLEAR 17}?{CLEAR 16}大{CLEAR 16}佬{CLEAR 16}/{CLEAR 17}-");
const u8 gText_NamingScreenKeyboard_Symbols2[] = _("{CLEAR 11}…{CLEAR 16}“{CLEAR 16}”{CLEAR 18}‘{CLEAR 19}'{CLEAR 18} ");
#else
const u8 gText_NamingScreenKeyboard_abcdef[] = _("{CLEAR 22}弓{CLEAR 22}长{CLEAR 22}巾{CLEAR 22}凡{CLEAR 22} {CLEAR 22} ");
const u8 gText_NamingScreenKeyboard_ghijkl[] = _("{CLEAR 22}弓{CLEAR 22}长{CLEAR 22}巾{CLEAR 22}凡{CLEAR 22} {CLEAR 22} ");
const u8 gText_NamingScreenKeyboard_mnopqrs[] = _("{CLEAR 22}弓{CLEAR 22}长{CLEAR 22}巾{CLEAR 22}凡{CLEAR 22} {CLEAR 22} ");
const u8 gText_NamingScreenKeyboard_tuvwxyz[] = _("{CLEAR 22}弓{CLEAR 22}长{CLEAR 22}巾{CLEAR 22}凡{CLEAR 22} {CLEAR 22} ");
const u8 gText_NamingScreenKeyboard_ABCDEF[] = _("{CLEAR 22}张{CLEAR 22}帆{CLEAR 22}张{CLEAR 22}帆{CLEAR 22} {CLEAR 22} ");
const u8 gText_NamingScreenKeyboard_GHIJKL[] = _("{CLEAR 22}张{CLEAR 22}帆{CLEAR 22}张{CLEAR 22}帆{CLEAR 22} {CLEAR 22} ");
const u8 gText_NamingScreenKeyboard_MNOPQRS[] = _("{CLEAR 22}张{CLEAR 22}帆{CLEAR 22}张{CLEAR 22}帆{CLEAR 22} {CLEAR 22} ");
const u8 gText_NamingScreenKeyboard_TUVWXYZ[] = _("{CLEAR 22}张{CLEAR 22}帆{CLEAR 22}张{CLEAR 22}帆{CLEAR 22} {CLEAR 22} ");
const u8 gText_NamingScreenKeyboard_01234[] = _("{CLEAR 11}0{CLEAR 16}1{CLEAR 16}2{CLEAR 16}3{CLEAR 16}4{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_56789[] = _("{CLEAR 11}5{CLEAR 16}6{CLEAR 16}7{CLEAR 16}8{CLEAR 16}9{CLEAR 16} ");
const u8 gText_NamingScreenKeyboard_Symbols1[] = _("{CLEAR 12}!{CLEAR 17}?{CLEAR 16}张{CLEAR 16}帆{CLEAR 16}/{CLEAR 17}-");
const u8 gText_NamingScreenKeyboard_Symbols2[] = _("{CLEAR 11}…{CLEAR 16}“{CLEAR 16}”{CLEAR 18}‘{CLEAR 19}'{CLEAR 18} ");
#endif


// Union Room Chat keyboard
const u8 gText_UnionRoomChatKeyboard_ABCDE[] = _("ABCDE");
const u8 gText_UnionRoomChatKeyboard_FGHIJ[] = _("FGHIJ");
const u8 gText_UnionRoomChatKeyboard_KLMNO[] = _("KLMNO");
const u8 gText_UnionRoomChatKeyboard_PQRST[] = _("PQRST");
const u8 gText_UnionRoomChatKeyboard_UVWXY[] = _("UVWXY");
const u8 gText_UnionRoomChatKeyboard_Z[] = _("Z    ");
const u8 gText_UnionRoomChatKeyboard_01234Upper[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_56789Upper[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_PunctuationUpper[] = _(".,!? ");
const u8 gText_UnionRoomChatKeyboard_SymbolsUpper[] = _("-/&… ");
const u8 gText_UnionRoomChatKeyboard_abcde[] = _("abcde");
const u8 gText_UnionRoomChatKeyboard_fghij[] = _("fghij");
const u8 gText_UnionRoomChatKeyboard_klmno[] = _("klmno");
const u8 gText_UnionRoomChatKeyboard_pqrst[] = _("pqrst");
const u8 gText_UnionRoomChatKeyboard_uvwxy[] = _("uvwxy");
const u8 gText_UnionRoomChatKeyboard_z[] = _("z    ");
const u8 gText_UnionRoomChatKeyboard_01234Lower[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_56789Lower[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_PunctuationLower[] = _(".,!? ");
const u8 gText_UnionRoomChatKeyboard_SymbolsLower[] = _("-/&… ");

const u8 gText_EmptyTextInput1[] = _("");
const u8 gText_EmptyTextInput2[] = _("");
const u8 gText_EmptyTextInput3[] = _("");
const u8 gText_EmptyTextInput4[] = _("");
const u8 gText_EmptyTextInput5[] = _("");
const u8 gText_EmptyTextInput6[] = _("");
const u8 gText_EmptyTextInput7[] = _("");
const u8 gText_EmptyTextInput8[] = _("");

// Union Room Chat keyboard emojis
const u8 gText_UnionRoomChatKeyboard_Emoji1[] = _("{EMOJI_MISCHIEVOUS}{EMOJI_HAPPY}{EMOJI_ANGRY}{EMOJI_SURPRISED}{EMOJI_BIGANGER}");
const u8 gText_UnionRoomChatKeyboard_Emoji2[] = _("{EMOJI_BIGSMILE}{EMOJI_EVIL}{EMOJI_NEUTRAL}{EMOJI_TIRED}{EMOJI_SHOCKED}");
const u8 gText_UnionRoomChatKeyboard_Emoji3[] = _("{EMOJI_LEAF}{EMOJI_FIRE}{EMOJI_WATER}{EMOJI_BOLT}{EMOJI_BALL}");
const u8 gText_UnionRoomChatKeyboard_Emoji4[] = _("♂♀{EMOJI_LEFT_PAREN}{EMOJI_RIGHT_PAREN}{EMOJI_TILDE}");
const u8 gText_UnionRoomChatKeyboard_Emoji5[] = _("{EMOJI_LEFT_EYE}{EMOJI_RIGHT_EYE}{EMOJI_SMALLWHEEL}{EMOJI_SPHERE}{EMOJI_IRRITATED}");
const u8 gText_UnionRoomChatKeyboard_Emoji6[] = _("{EMOJI_AT}{EMOJI_BIGWHEEL}{EMOJI_TONGUE}{EMOJI_ACUTE}{EMOJI_GRAVE}");
const u8 gText_UnionRoomChatKeyboard_Emoji7[] = _("{EMOJI_RIGHT_FIST}{EMOJI_LEFT_FIST}{EMOJI_TRIANGLE_OUTLINE}{EMOJI_UNION}{EMOJI_GREATER_THAN}");
const u8 gText_UnionRoomChatKeyboard_Emoji8[] = _("{EMOJI_CIRCLE}{EMOJI_TRIANGLE}{EMOJI_SQUARE}{EMOJI_HEART}{EMOJI_MOON}");
const u8 gText_UnionRoomChatKeyboard_Emoji9[] = _("{EMOJI_NOTE}{EMOJI_PLUS}{EMOJI_MINUS}{EMOJI_EQUALS}{EMOJI_PIPE}");
const u8 gText_UnionRoomChatKeyboard_Emoji10[] = _("{EMOJI_HIGHBAR}{EMOJI_UNDERSCORE};: ");
