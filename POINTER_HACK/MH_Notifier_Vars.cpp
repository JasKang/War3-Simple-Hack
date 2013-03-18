//---------------------------------------------------------------------------
#pragma     hdrstop
//---------------------------------------------------------------------------
#include    "MH_Notifier_Vars.h"
//---------------------------------------------------------------------------
#pragma     package(smart_init)
//---------------------------------------------------------------------------

// ... -> IK3 source -> IK5 source -> this

DWORD   pGameP;
DWORD   pGameGS(0xDE5U);
DWORD   pPrintText(0x15);
DWORD   pChatUI(0xA);
DWORD   hStorm503(0x11E);
DWORD   hStorm578;
DWORD   hGameAB7788;
DWORD   hGame815DA6;
DWORD   hGameAAE140;

void*   fpSprintf       = sprintf;

DWORD   g16FF24(0), g16FF68(0), a16FF64(0), a16FF5C(0), a16FF58(0),
        a16FF20(0), a16F088(0), a2C7F10(0), a16F08C(0), a16F004(0),
        a1698A0(0), a16F090(0), a16F06C(0), a16F070(0), a3000AC(0),
        a3000B0(0);

BYTE    a16F008[0x80]   = {0};

char    a164684[]       = "scaleFactor";

double  a164A18(72.0), a164A10(0.0005000000237487257), a164A08(0.006000000052154064),
        a1649D4(0.03000000), a1649D0(0.004000000), a1649CC(0.3000000);

DWORD   a6F37A563(0), a6F37A968(0);

DWORD   pClassOffset(0), ColorUnit(0), PingMinimap(0), PingMinimapEx(0);

char    sRoshan[]       = "|cffffcc00[W3SHv1]|r: Roshan respawned!";
char    sIT[]           = "|cffffcc00[W3SHv1]|r: |cFFFFFC01Illusion|r rune spawned at the |cFFCC99FFtop|r spot.";
char    sIB[]           = "|cffffcc00[W3SHv1]|r: |cFFFFFC01Illusion|r rune spawned at the |cFFFFFFCCbot|r spot.";
char    sHT[]           = "|cffffcc00[W3SHv1]|r: |cFFFF0303Haste|r rune spawned at the |cFFCC99FFtop|r spot.";
char    sHB[]           = "|cffffcc00[W3SHv1]|r: |cFFFF0303Haste|r rune spawned at the |cFFFFFFCCbot|r spot.";
char    sDT[]           = "|cffffcc00[W3SHv1]|r: |cFF0042FFDouble Damage|r rune spawned at the |cFFCC99FFtop|r spot.";
char    sDB[]           = "|cffffcc00[W3SHv1]|r: |cFF0042FFDouble Damage|r rune spawned at the |cFFFFFFCCbot|r spot.";
char    sRT[]           = "|cffffcc00[W3SHv1]|r: |cFF00FF00Regeneration|r rune spawned at the |cFFCC99FFtop|r spot.";
char    sRB[]           = "|cffffcc00[W3SHv1]|r: |cFF00FF00Regeneration|r rune spawned at the |cFFFFFFCCbot|r spot.";
char    sINT[]          = "|cffffcc00[W3SHv1]|r: |cFF99CCFFInvisibility|r rune spawned at the |cFFCC99FFtop|r spot.";
char    sINB[]          = "|cffffcc00[W3SHv1]|r: |cFF99CCFFInvisibility|r rune spawned at the |cFFFFFFCCbot|r spot.";
char    sMINE[]         = "|cffffcc00[W3SHv1]|r: |cFFFF0303Land Mine|r planted!";
char    sSTASIS[]       = "|cffffcc00[W3SHv1]|r: |cFFFF0303Statis Trap|r planted!";
char    sREMOTE[]       = "|cffffcc00[W3SHv1]|r: |cFFFF0303Remote Mine|r planted!";
char    sOWARD[]        = "|cffffcc00[W3SHv1]|r: |cFFFFFC01Observer Ward|r planted!";
char    sSWARD[]        = "|cffffcc00[W3SHv1]|r: |cFF0042FFSentry Ward|r planted!";
char    sBOWARD[]       = "|cffffcc00[W3SHv1]|r: |cFFFFFC01Observer Wards|r has been bought!";
char    sBSWARD[]       = "|cffffcc00[W3SHv1]|r: |cFF0042FFSentry Wards|r has been bought!";
char    sBDUST[]        = "|cffffcc00[W3SHv1]|r: |cFFFFFC01Dust of Appearance|r has been bought!";
char    sBGEM[]         = "|cffffcc00[W3SHv1]|r: |cFF00FF00Gem of True Sight|r has been bought!";

float   roshanX(2450.0), roshanY(-730.0), roshanDuration(5.0), runeXTop(-2400.0),
        runeYTop(1600.0), runeXBot(2970.0), runeYBot(-2850.0), runeDuration(5.0),
        minewardDuration(5.0);

char    _STR_spFLOAT[]  = "%.2f";
char    _STR_w3WTF1[]   = "?AUString2HandleReg@@";
char    _STR_CTT[]      = "CreateTextTag";
char    _STR_speed[]    = "%0.02f";
char    _STR_HPMPFMT[]  = "%s\n   |cffffcc00HP/MP Regen:|r\n      |cff00ff00%0.02f|r/|cff1122ff%0.02f|r";
char    _WT_tt[]        = ")Htexttag;";
char    _WT_r[]         = ")R";
char    _WT_u[]         = ")Hunit;";
char    _WT_v[]         = ")V";
char    _WT_s[]         = ")S";

DWORD   pGame_jGetEventTargetUnit(0x03C3D00),
        pGame_jGetTriggerUnit(0x03BB240),
        pGame_jCreateTextTag(0x03BC580),
        pGame_jSetTextTagText(0x03BC5D0),
        pGame_jSetTextTagPosUnit(0x03CB890),
        pGame_jSetTextTagColor(0x03BC6A0),
        pGame_jSetTextTagPermanent(0x03BC7C0),
        pGame_jSetTextTagVelocity(0x03BC700),
        pGame_jSetTextTagLifespan(0x03BC820),
        pGame_jSetTextTagFadepoint(0x03BC850),
        pGame_jSetTextTagVisibility(0x03BC760),
        pGame_jSetTextTagPos(0x03BC610),
        pGame_jSetTextTagSuspended(0x03BC790),
        pGame_jR2S(0x03BAAF0),
        pGame_p459150(0x0459150),
        pGame_jIsUnitVisible(0x03C7AF0),
        pGame_jPlayer(0x03BBB30);

float   float_003(0.03), float_0(0.0), float_05(0.05),
        float_1(1.0), float_2(2.0), hUnitHP(0.0), hUnitMP(0.0);
//---------------------------------------------------------------------------

void __stdcall MH_Initalize_Notifiers(DWORD pGame)
{
    pGameP                      = pGame;
    pGameGS                     = pGame + 0xAB5738;
    pPrintText                  = pGame + 0x6049B0;
    pChatUI                     = pGame + 0xACE66C;

    pClassOffset                = pGame + 0x0AB65F4;
    ColorUnit                   = pGame + 0x4D3220;
    PingMinimap                 = pGame + 0x3B4650;
    PingMinimapEx               = pGame + 0x3B8660;
    pGame_jIsUnitVisible        = pGame + 0x03C7AF0;
    pGame_jPlayer               = pGame + 0x03BBB30;
    hStorm503                   = pGame + 0x06EB5BE;
    hStorm578                   = pGame + 0x06EB5A6;
    hGameAB7788                 = pGame + 0x0AB7788;
    hGame815DA6                 = pGame + 0x0815DA6;
    hGameAAE140                 = pGame + 0x0AAE140;

    a3000AC                     = 1;
    a16F088                     = (DWORD)GetProcAddress(GetModuleHandleA("storm.dll"), (char*)0x191);
    a1698A0                     = pGame;
    g16FF24                     = pGame + 0x27AE90;
    g16FF68                     = pGame + 0x334180;
    a16FF64                     = pGame + 0x6061B0;
    a16FF5C                     = pGame + 0x605CC0;
    a16FF58                     = pGame + 0x359CC0;
    a16FF20                     = pGame + 0x32C880;
    a2C7F10                     = pGame + 0x2C74B0;

    pGame_jGetEventTargetUnit   += pGame;
    pGame_jGetTriggerUnit       += pGame;
    pGame_jCreateTextTag        += pGame;
    pGame_jSetTextTagText       += pGame;
    pGame_jSetTextTagPosUnit    += pGame;
    pGame_jSetTextTagColor      += pGame;
    pGame_jSetTextTagPermanent  += pGame;
    pGame_jSetTextTagVelocity   += pGame;
    pGame_jSetTextTagLifespan   += pGame;
    pGame_jSetTextTagFadepoint  += pGame;
    pGame_jSetTextTagVisibility += pGame;
    pGame_jSetTextTagPos        += pGame;
    pGame_jSetTextTagSuspended  += pGame;
    pGame_jR2S                  += pGame;
    pGame_p459150               += pGame;
}
//---------------------------------------------------------------------------


