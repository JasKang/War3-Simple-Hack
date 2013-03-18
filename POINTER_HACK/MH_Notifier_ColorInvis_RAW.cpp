//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

// ... -> IK3 source -> IK5 source -> this

FRAW void ColoredInviFunc()
{
    __asm
    {
        PUSHAD

        MOV     EDX, pClassOffset
        MOV     EDX, DWORD PTR DS:[EDX]
        XOR     EAX, EAX
        MOV     AL, BYTE PTR DS:[EDX+0x28]
        MOV     EDX, DWORD PTR DS:[ESI]

        PUSH    0x4
        PUSH    0x0
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDX+0x0FC]
        MOV     ECX, ESI
        CALL    EAX
        CMP     EAX, 0x1
        JE      BACK

        XOR     EAX, EAX
        MOV     AL, BYTE PTR DS:[ESI+0x5F]
        CMP     AL, 0x1
        JNZ     BACK

        MOV     ECX, ESI
        PUSH    ECX
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], 0x0FFCC33CC
        MOV     ECX, DWORD PTR DS:[ECX+0x28]
        XOR     EDX, EDX
        CALL    ColorUnit

    BACK:
        POPAD

        RET
    }
}
//---------------------------------------------------------------------------
