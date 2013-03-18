//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_285110()
{
    __asm
    {
        PUSH    ECX
        PUSH    ESI
        MOV     ESI, DWORD PTR DS:[v_AB65F4]
        MOV     ESI, DWORD PTR DS:[ESI]
        TEST    ESI, ESI
        MOV     DWORD PTR SS:[ESP+0x4], ECX
        JE      @L00000007
        CMP     DWORD PTR DS:[ESI+0x3E0], 0x0
        JE      @L00000007
        MOVZX   EAX, WORD PTR DS:[ESI+0x28]
        PUSH    EBX
        PUSH    EBP
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3A1650]
        MOVZX   EBX, WORD PTR DS:[ESI+0x28]
        MOV     ECX, 0x0D
        MOV     EBP, EAX
        CALL    DWORD PTR DS:[v_4C34D0]
        MOV     EAX, DWORD PTR DS:[EAX+0x10]
        MOV     EAX, DWORD PTR DS:[EAX]
        TEST    EAX, EAX
        JE      SHORT @L00000001
        TEST    DWORD PTR DS:[EAX+0x4], 0x200
        JE      SHORT @L00000001
        MOV     EAX, 0x1
        JMP     SHORT @L00000002

    @L00000001:
        XOR     EAX, EAX

    @L00000002:
        XOR     ECX, ECX
        TEST    EAX, EAX
        SETNE   CL
        PUSH    EDI
        MOV     EDI, DWORD PTR SS:[ESP+0x18]
        OR      EDI, ECX
        CALL    DWORD PTR DS:[v_53F160]
        TEST    EAX, EAX
        JE      SHORT @L00000003
        MOV     EDX, DWORD PTR DS:[ESI+0x34]
        TEST    BYTE PTR DS:[EDX+0x24], 0x1
        JE      SHORT @L00000003
        OR      EDI, 0x1

    @L00000003:
        LEA     ECX, DWORD PTR SS:[EBP+0xF0]
        CALL    DWORD PTR DS:[v_473170]
        TEST    EAX, EAX
        PUSH    0x0
    // FEAT FOWCLCK
        PUSHFD
        CMP     BYTE PTR DS:[bFOWCLCK], 0
        JNE     @L_FOWCLCK_G_1
        POPFD
        JE      SHORT @L00000005                        //JE      SHORT @L00000005
        JMP     @L_FOWCLCK_F_1
    @L_FOWCLCK_G_1:
        POPFD
    @L_FOWCLCK_F_1:

        MOV     EAX, DWORD PTR SS:[ESP+0x20]
        PUSH    EAX
        PUSH    EDI
        MOV     EDI, DWORD PTR SS:[ESP+0x1C]
        PUSH    EDI
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3A3830]

    @L00000004:
    // FEAT FOWCLCK
        CMP     BYTE PTR DS:[bFOWCLCK], 0
        JE      @L_FOWCLCK_G_2
        JMP     SHORT @L00000006                        //TEST    EAX, EAX
    @L_FOWCLCK_G_2:
        TEST    EAX, EAX

        JNZ     SHORT @L00000006
        PUSH    EBX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_26F9E0]
        TEST    EAX, EAX
        JNZ     SHORT @L00000006
        POP     EDI
        POP     EBP
        POP     EBX
        POP     ESI
        POP     ECX
        RET     0x8

    @L00000005:
        MOV     ECX, DWORD PTR SS:[ESP+0x20]
        PUSH    ECX
        PUSH    EDI
        MOV     EDI, DWORD PTR SS:[ESP+0x1C]
        PUSH    EDI
        PUSH    EBX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3A38F0]
        JMP     SHORT @L00000004

    @L00000006:
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        POP     ECX
        RET     0x8

    @L00000007:
        XOR     EAX, EAX
        POP     ESI
        POP     ECX
        RET     0x8
    }
}
//---------------------------------------------------------------------------


