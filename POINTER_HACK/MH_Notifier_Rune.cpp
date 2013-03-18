//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_3BB9A0()
{
    __asm
    {
        MOV     EAX, DWORD PTR SS:[ESP+0xC]
        MOV     EDX, DWORD PTR SS:[ESP+0x8]
        MOV     ECX, DWORD PTR SS:[ESP+0x4]
    // FEAT RUNE
        CMP     BYTE PTR DS:[bRUNE], 0
        JE      @L_RUNE_G
        CALL    RuneNotifierFunc
    @L_RUNE_G:

        PUSH    ESI
        PUSH    EAX
        CALL    DWORD PTR DS:[v_2B9940]
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOV     ESI, EAX
        CALL    DWORD PTR DS:[v_3A8060]
        PUSH    0x0
        PUSH    ESI
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_430C80]
        POP     ESI
        RET
    }
}
//---------------------------------------------------------------------------


