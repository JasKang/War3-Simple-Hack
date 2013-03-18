//---------------------------------------------------------------------------
#ifndef     MH_Notifier_VarsH
#define     MH_Notifier_VarsH
//---------------------------------------------------------------------------
#include    "sys_useful.h"
//---------------------------------------------------------------------------
void    __stdcall   MH_Initalize_Notifiers(DWORD pGame);
//---------------------------------------------------------------------------

// ... -> IK3 source -> IK5 source -> this

extern  DWORD       pGameP;
extern  DWORD       pGameGS;
extern  DWORD       pPrintText;
extern  DWORD       pChatUI;
extern  DWORD       hStorm503;
extern  DWORD       hStorm578;
extern  DWORD       hGameAB7788;
extern  DWORD       hGame815DA6;
extern  DWORD       hGameAAE140;

extern  void*       fpSprintf;

extern  DWORD       g16FF24, g16FF68, a16FF64, a16FF5C, a16FF58,
                    a16FF20, a16F088, a2C7F10, a16F08C, a16F004,
                    a1698A0, a16F090, a16F06C, a16F070, a3000AC,
                    a3000B0;


extern  BYTE        a16F008[0x80];

extern  char        a164684[];

extern  double      a164A18, a164A10, a164A08,
                    a1649D4, a1649D0, a1649CC;

extern  DWORD       a6F37A563, a6F37A968;

extern  DWORD       pClassOffset, ColorUnit, PingMinimap, PingMinimapEx;

extern  char        sRoshan[];
extern  char        sIT[];
extern  char        sIB[];
extern  char        sHT[];
extern  char        sHB[];
extern  char        sDT[];
extern  char        sDB[];
extern  char        sRT[];
extern  char        sRB[];
extern  char        sINT[];
extern  char        sINB[];
extern  char        sMINE[];
extern  char        sSTASIS[];
extern  char        sREMOTE[];
extern  char        sOWARD[];
extern  char        sSWARD[];
extern  char        sBOWARD[];
extern  char        sBSWARD[];
extern  char        sBDUST[];
extern  char        sBGEM[];

extern  float       roshanX, roshanY, roshanDuration, runeXTop,
                    runeYTop, runeXBot, runeYBot, runeDuration,
                    minewardDuration;

extern  char        _STR_spFLOAT[];
extern  char        _STR_w3WTF1[];
extern  char        _STR_CTT[];
extern  char        _STR_speed[];
extern  char        _STR_HPMPFMT[];
extern  char        _WT_tt[];
extern  char        _WT_r[];
extern  char        _WT_u[];
extern  char        _WT_v[];
extern  char        _WT_s[];

extern  DWORD       pGame_jGetEventTargetUnit,
                    pGame_jGetTriggerUnit,
                    pGame_jCreateTextTag,
                    pGame_jSetTextTagText,
                    pGame_jSetTextTagPosUnit,
                    pGame_jSetTextTagColor,
                    pGame_jSetTextTagPermanent,
                    pGame_jSetTextTagVelocity,
                    pGame_jSetTextTagLifespan,
                    pGame_jSetTextTagFadepoint,
                    pGame_jSetTextTagVisibility,
                    pGame_jSetTextTagPos,
                    pGame_jSetTextTagSuspended,
                    pGame_jR2S,
                    pGame_p459150,
                    pGame_jIsUnitVisible,
                    pGame_jPlayer;

extern  float       float_003, float_0, float_05,
                    float_1, float_2, hUnitHP, hUnitMP;
//------------------------ HOOK FUNCTIONS -----------------------------------
void    GreyHPFunc();
void    RoshanNotifierFunc();
void    RuneNotifierFunc();
void    ColoredInviFunc();
void    MineWardNotifierFunc();

void    jGetDamageEvent();

void    f00152750();
void    f001527C0();
void    f152950();
void    f152980();
void    f00152710();
void    f001527F0();
void    f00152930();

void    HPMP_MS();
void    HPMP_AS();
void    HPMP_HP();
void    HPMP_MP();
void    HPMP_DRAW();
//---------------------------------------------------------------------------
#endif
