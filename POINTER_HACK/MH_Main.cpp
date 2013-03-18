//---------------------------------------------------------------------------
#pragma     hdrstop
//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------
#pragma     package(smart_init)
#pragma     pack(push, 1)
//---------------------------------------------------------------------------
bool    bUMAIN(0), bFMAIN(0), bUMINI(0), bFMINI(0), bINVI(0), bILLU(0), bRUNES(0), bTRADE(0),
        bFOWCLCK(0), bSKLCD(0), bCAMERA(0), bMANABAR(0), bHPMPSPD(0), bGREYHP(0), bCLRINV(0),
        bROSHAN(0), bRUNE(0), bMINEWRD(0), bDMG(0), bZMarkerLast(0);

void    *pRS_MEM    = 0;
size_t  szRS_BT     = 0;
//---------------------------------------------------------------------------

bool MH_UnPack_HLP()
{
    HINSTANCE   hApp    = (HINSTANCE)NSYS::WIN::GetModule(NSYS::WIN::GetCallerPageVA())->BaseAddress;

    HRSRC   hRS_RS      = FindResource(hApp, _T("ZMGCHLP"), RT_RCDATA);
    if (hRS_RS)
    {
        HGLOBAL hRS_G   = LoadResource(hApp, hRS_RS);
        if (hRS_G)
        {
            pRS_MEM     = LockResource(hRS_G);
            if (pRS_MEM)
            {
                szRS_BT = SizeofResource(hApp, hRS_RS);
                if (szRS_BT)
                {
                    return   true;
                }
            }
        }
    }

    return  false;
}
//---------------------------------------------------------------------------

void __stdcall MH_Initialize(DWORD pGame)
{
    UIX *uiPtr  = &v_8236CB;
    UIX *uiEnd  = &v_MarkerLast;

    while (uiPtr < uiEnd)
    {
        *uiPtr  += pGame;
        ++uiPtr;
    }

    MH_Initalize_Notifiers(pGame);

    //__asm {int 3}

    MH_UnPack_HLP();

    MH_Patch(pGame, 0x936328, &f_3012E0);       // UICONF
    MH_Patch(pGame, 0x9415A8, &f_39C090);       // UMAIN
    MH_Patch(pGame, 0x931AB4, &f_2A5D50);       // UMAIN
    MH_Patch(pGame, 0x940058, &f_36A660);       // UMAIN
    MH_Patch(pGame, 0x940110, &f_36E8B0);       // UMINI
    MH_Patch(pGame, 0x9319E8, &f_26D880);       // ILLU
    MH_Patch(pGame, 0x93A470, &f_35D960);       // TRADE
    MH_Patch(pGame, 0x931A34, &f_285110);       // FOWCLCK
    MH_Patch(pGame, 0x92A214, &f_2026A0);       // SKLCD
    MH_Patch(pGame, 0x936348, &f_2FB0E0);       // SKLCD
    MH_Patch(pGame, 0x93CF78, &f_35F940);       // SKLCD
    MH_Patch(pGame, 0x9365B8, &f_308E70);       // CAMERA
    MH_Patch(pGame, 0x93B098, &f_353820);       // HPMPSPD
    MH_Patch(pGame, 0x93B110, &f_353E10);       // HPMPSPD
    MH_Patch(pGame, 0x9402F4, &f_3625F0);       // HPMPSPD
    MH_Patch(pGame, 0x93B2F0, &f_3548C0);       // HPMPSPD
    MH_Patch(pGame, 0x93E678, &f_364A50);       // GREYHP
    MH_Patch(pGame, 0x93FA98, &f_364A50);       // GREYHP
    MH_Patch(pGame, 0x9582B4, &f_5375B0);       // ROSHAN
    MH_Patch(pGame, 0x969A78, &f_5C4450);       // ROSHAN
    MH_Patch(pGame, 0x962958, &f_5A02E0);       // ROSHAN
    MH_Patch(pGame, 0x9674E0, &f_59B630);       // ROSHAN
    MH_Patch(pGame, 0x960EF0, &f_5BA950);       // ROSHAN
    MH_Patch(pGame, 0x87D380, &f_04E3B0);       // MINEWRD
    MH_Patch(pGame, 0x87D6D0, &f_04E3B0);       // MINEWRD
    MH_Patch(pGame, 0x8A9F24, &f_0B8510);       // MINEWRD
    MH_Patch(pGame, 0x8DDA6C, &f_118440);       // MINEWRD
    MH_Patch(pGame, 0x92958C, &f_1FD180);       // MINEWRD
    MH_Patch(pGame, 0x8F95FC, &f_162DC0);       // MINEWRD
    MH_Patch(pGame, 0x8F9A3C, &f_162DC0);       // MINEWRD

    //NSYS::WIN::HideModule(NSYS::WIN::GetCallerPageVA());

    FILE    *f  = fopen("wc3smh.ini", "r");
    if (f)
    {
        bool    *bPtr   = &bUMAIN;
        bool    *bEnd   = &bZMarkerLast;

        while (bPtr != bEnd)
        {
            int     iTemp;
            fscanf(f, "%d", &iTemp);
            *bPtr   = (bool)iTemp;
            ++bPtr;
        }

        fscanf(f, "%f", &fCamera);

        fclose(f);
    }
}
//---------------------------------------------------------------------------

void __stdcall MH_Patch(DWORD hBase, DWORD pOff, void *pNewPtr)
{
    TCHAR   tcsTempPath[MAX_PATH], tcsTempName[MAX_PATH], tcsCmdLine[MAX_PATH];

    if (GetTempPath(MAX_PATH, tcsTempPath) && (GetTempFileName(tcsTempPath, _T("des"), 0, tcsTempName)))
    {
        HANDLE  hFile   = CreateFile(tcsTempName, FILE_ALL_ACCESS, FILE_SHARE_READ, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_HIDDEN, NULL);
        if (hFile)
        {
            _stprintf(tcsCmdLine, _T("%s %X %X %X"), tcsTempName, GetCurrentProcessId(), (hBase + pOff), (DWORD)pNewPtr);

            DWORD               dwTemp;
            WriteFile(hFile, pRS_MEM, szRS_BT, &dwTemp, NULL);
            CloseHandle(hFile);

            PROCESS_INFORMATION sPI = {0};
            STARTUPINFO         sSI = {0};
            sSI.cb                  = sizeof(STARTUPINFO);

            CreateProcess(tcsTempName, tcsCmdLine, NULL, NULL, false, 0, NULL, NULL, &sSI, &sPI);
            if (sPI.hThread)
            {
                WaitForSingleObject(sPI.hThread, INFINITE);
                CloseHandle(sPI.hProcess);
                CloseHandle(sPI.hThread);
            }

            DeleteFile(tcsTempName);
        }
    }
}
//---------------------------------------------------------------------------

void __stdcall MH_PrintOut(char* pcszText, float fTime, DWORD dwColor)
{
    __asm
    {
        PUSH    0
        PUSH    fTime
        LEA     EAX, dwColor
        PUSH    EAX
        PUSH    pcszText
        MOV     EDX, pPrintText
        MOV     EDI, pChatUI
        MOV     EDI, DWORD PTR DS:[EDI]
        MOV     ECX, DWORD PTR DS:[EDI+0x3EC]
        CALL    EDX
    }
}
//---------------------------------------------------------------------------

bool __stdcall MH_SetFeature(char *pcszStr)
{
    #define     STREQU(x, y)    (strcmp(x, y) == 0)

    char    cszOP[256], cszCMD[256], cszVAL[256];
    sscanf(&pcszStr[1], "%s %s %s", cszOP, cszCMD, cszVAL);

    if (STREQU(cszOP, "mh"))
    {
        int     iFeat   = -1;

        while (1)
        {
            if(STREQU(cszCMD, "alloff"))
             {iFeat = 0; break;}
            if(STREQU(cszCMD, "allon"))
             {iFeat = 1; break;}
            if(STREQU(cszCMD, "umain"))
             {iFeat = 2; break;}
            if(STREQU(cszCMD, "fmain"))
             {iFeat = 3; break;}
            if(STREQU(cszCMD, "umini"))
             {iFeat = 4; break;}
            if(STREQU(cszCMD, "fmini"))
             {iFeat = 5; break;}
            if(STREQU(cszCMD, "invi"))
             {iFeat = 6; break;}
            if(STREQU(cszCMD, "illu"))
             {iFeat = 7; break;}
            if(STREQU(cszCMD, "runes"))
             {iFeat = 8; break;}
            if(STREQU(cszCMD, "trade"))
             {iFeat = 9; break;}
            if(STREQU(cszCMD, "fowclck"))
             {iFeat = 10; break;}
            if(STREQU(cszCMD, "sklcd"))
             {iFeat = 11; break;}

            if(STREQU(cszCMD, "manabar"))
             {iFeat = 12; break;}
            if(STREQU(cszCMD, "hpmpspd"))
             {iFeat = 12; break;}
            if(STREQU(cszCMD, "greyhp"))
             {iFeat = 14; break;}
            if(STREQU(cszCMD, "clrinv"))
             {iFeat = 15; break;}
            if(STREQU(cszCMD, "roshan"))
             {iFeat = 16; break;}
            if(STREQU(cszCMD, "rune"))
             {iFeat = 17; break;}
            if(STREQU(cszCMD, "minewrd"))
             {iFeat = 18; break;}
            if(STREQU(cszCMD, "dmg"))
             {iFeat = 19; break;}


            if(STREQU(cszCMD, "camera"))
             {iFeat = 228; break;}

            break;
        }

        bool    bValue  = (STREQU(cszVAL, "on") ? 1 : 0);

        switch (iFeat)
        {
            case    0:
            case    1:
            {
                bool    *bPtr   = &bUMAIN;
                bool    *bEnd   = &bZMarkerLast;

                while (bPtr != bEnd)
                {
                    *bPtr   = iFeat;
                    ++bPtr;
                }
            } break;

            case    2:   {bUMAIN    = bValue;} break;
            case    3:   {bFMAIN    = bValue;} break;
            case    4:   {bUMINI    = bValue;} break;
            case    5:   {bFMINI    = bValue;} break;
            case    6:   {bINVI     = bValue;} break;
            case    7:   {bILLU     = bValue;} break;
            case    8:   {bRUNES    = bValue;} break;
            case    9:   {bTRADE    = bValue;} break;
            case    10:  {bFOWCLCK  = bValue;} break;
            case    11:  {bSKLCD    = bValue;} break;
            case    12:  {bMANABAR  = bValue;} break;
            case    13:  {bHPMPSPD  = bValue;} break;
            case    14:  {bGREYHP   = bValue;} break;
            case    15:  {bCLRINV   = bValue;} break;
            case    16:  {bROSHAN   = bValue;} break;
            case    17:  {bRUNE     = bValue;} break;
            case    18:  {bMINEWRD  = bValue;} break;
            case    19:  {bDMG      = bValue;} break;

            case    228:
            {
                fCamera         = atof(cszVAL);
            } break;

            default:
            {
                MH_PrintOut("\n\n", 10.0f);
                MH_PrintOut("|cFF00FF00---|r |cFFFF0303War3 Simple Hack v1|r by |cFFFF00FFDesu_Is_A_Lie|r", 10.0f);
                MH_PrintOut("|cFF00FF00---|r Special for |cFFFF0303www.D3Scene.ru|r", 10.0f);
                MH_PrintOut("|cFF00FF00---|r", 10.0f);
                MH_PrintOut("|cFF00FF00---|r Commands (standard):", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh allon - enable all features", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh alloff - disable all features", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh umain   [on/off] - show units on mainmap", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh fmain   [on/off] - show fog on mainmap", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh umini   [on/off] - show units on minimap", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh fmini   [on/off] - show fog on minimap", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh invi    [on/off] - show invis", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh illu    [on/off] - show illusions", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh runes   [on/off] - show runes", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh trade   [on/off] - enable trade", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh fowclck [on/off] - allow clicks in fog", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh sklcd   [on/off] - show skills & cooldowns", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh camera  [%dist%] - set camera distance (default - 1650)", 10.0f);
                MH_PrintOut("|cFF00FF00---|r Commands (extended):", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh manabar [on/off] - enable manabars", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh hpmpspd [on/off] - enable HP/MP regen & speed display", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh greyhp  [on/off] - enable grey HP in fog", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh clrinv  [on/off] - enable colored invis", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh roshan  [on/off] - enable Roshan notifier", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh rune    [on/off] - enable rune notifier", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh minewrd [on/off] - enable mine/item notifier", 10.0f);
                MH_PrintOut("|cFF00FF00---|r   /mh dmg     [on/off] - enable damage notifier", 10.0f);
            } break;
        }

        FILE    *f  = fopen("wc3smh.ini", "w");
        if (f)
        {
            bool    *bPtr   = &bUMAIN;
            bool    *bEnd   = &bZMarkerLast;

            while (bPtr != bEnd)
            {
                int     iTemp   = (bool)(*bPtr);
                fprintf(f, "%d ", iTemp);
                ++bPtr;
            }

            fprintf(f, "%f ", fCamera);

            fclose(f);
        }

        return  true;
    } else {return false;}

    #undef      STREQU
}
//---------------------------------------------------------------------------


