//---------------------------------------------------------------------------
#pragma     hdrstop
//---------------------------------------------------------------------------
#include    "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------

extern "C" int _libmain(unsigned long reason)
{
    switch (reason)
    {
        case    DLL_PROCESS_ATTACH:
        {
            //__asm {int 3}

            HMODULE hMod    = GetModuleHandle(_T("Game.dll"));

            if (NSYS::WIN::GetDebugPriv() && hMod)
            {
                MH_Initialize((DWORD)hMod);
                return  true;
            } else {return false;}
        }

        default: {return true;}
    }
}
//---------------------------------------------------------------------------




