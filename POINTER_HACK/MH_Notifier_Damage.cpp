//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_3C3C40()
{
    __asm
    {
        CALL    DWORD PTR DS:[v_3C1D40]
        TEST    EAX, EAX
        JNZ     SHORT @L00000002

    @L00000001:
        XOR     EAX, EAX
        RET

    @L00000002:
        CALL    DWORD PTR DS:[v_3C1D60]
        TEST    EAX, EAX
        JE      SHORT @L00000001
    // FEAT DMG
        CMP     BYTE PTR DS:[bDMG], 0
        JE      @L_DMG_G
        CALL    jGetDamageEvent
    @L_DMG_G:

        MOV     EAX, DWORD PTR DS:[EAX+0x30]
        RET
    }
}
//---------------------------------------------------------------------------


