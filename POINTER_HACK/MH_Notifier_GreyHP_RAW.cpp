//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

// ... -> IK3 source -> IK5 source -> this

FRAW void GreyHPFunc()
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
        JE      @LVisible

        POPAD

        MOV     EAX, DWORD PTR SS:[ESP+0x4]
        OR      DWORD PTR DS:[EAX], 0x0DD00FF
        MOV     DL, BYTE PTR DS:[EAX+0x3]
        MOV     BYTE PTR DS:[ECX+0x68], DL
        MOV     DL, BYTE PTR DS:[EAX]
        MOV     BYTE PTR DS:[ECX+0x69], DL
        MOV     DL, BYTE PTR DS:[EAX+0x1]
        MOV     BYTE PTR DS:[ECX+0x6A], DL
        MOV     DL, BYTE PTR DS:[EAX+0x2]
        MOV     BYTE PTR DS:[ECX+0x6B], DL

        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x24]
        CALL    EAX
        RET     0x4

    @LVisible:
        POPAD

        MOV     EAX, DWORD PTR SS:[ESP+0x4]
        MOV     DL, BYTE PTR DS:[EAX+0x3]
        MOV     BYTE PTR DS:[ECX+0x68], DL
        MOV     DL, BYTE PTR DS:[EAX]
        MOV     BYTE PTR DS:[ECX+0x69], DL
        MOV     DL, BYTE PTR DS:[EAX+1H]
        MOV     BYTE PTR DS:[ECX+0x6A], DL
        MOV     DL, BYTE PTR DS:[EAX+2H]
        MOV     BYTE PTR DS:[ECX+0x6B], DL

        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x24]
        CALL    EAX
        RET     0x4
    }
}
//---------------------------------------------------------------------------
