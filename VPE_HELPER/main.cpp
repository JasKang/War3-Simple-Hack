//---------------------------------------------------------------------------
#include    <tchar.h>
#include    <stdio.h>

#include    "sys_useful.h"
//---------------------------------------------------------------------------

WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
    if (NSYS::WIN::GetDebugPriv())
    {
        DWORD   dwPID, dwPtr, dwNewPtr, dwTemp;
        if (_stscanf(lpCmdLine, _T("%X %X %X"), &dwPID, &dwPtr, &dwNewPtr) == 3)
        {
            HANDLE  hProc   = OpenProcess(PROCESS_ALL_ACCESS, false, dwPID);
            if (hProc)
            {
                VirtualProtectEx(hProc, (void*)dwPtr, 4, PAGE_EXECUTE_READWRITE, &dwTemp);
                WriteProcessMemory(hProc, (void*)dwPtr, &dwNewPtr, 4, &dwPID);
                VirtualProtectEx(hProc, (void*)dwPtr, 4, dwTemp, &dwTemp);
                
                CloseHandle(hProc);
            }
        }
    }

    return  EXIT_SUCCESS;
}
//---------------------------------------------------------------------------


