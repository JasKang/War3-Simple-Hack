//---------------------------------------------------------------------------
#ifndef     MH_MainH
#define     MH_MainH
//---------------------------------------------------------------------------
#pragma     warn    -8058

#include    "MH_Main_Vars.h"
#include    "MH_Notifier_Vars.h"
//---------------------------------------------------------------------------
extern  bool        bUMAIN, bFMAIN, bUMINI, bFMINI, bINVI, bILLU, bRUNES, bTRADE,
                    bFOWCLCK, bSKLCD, bCAMERA, bMANABAR, bHPMPSPD, bGREYHP, bCLRINV,
                    bROSHAN, bRUNE, bMINEWRD, bDMG, bZMarkerLast;
//---------------------------------------------------------------------------
void    __stdcall   MH_Initialize(DWORD pGame);
void    __stdcall   MH_Patch(DWORD hBase, DWORD pOff, void *pNewPtr);
void    __stdcall   MH_PrintOut(char* pcszText, float fTime, DWORD dwColor = 0xFFFFFFFF);
bool    __stdcall   MH_SetFeature(char *pcszStr);
//---------------------------------------------------------------------------
#endif
