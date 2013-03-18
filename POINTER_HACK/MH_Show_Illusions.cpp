//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_26D880()
{
    __asm
    {
        SUB     ESP, 0x0C
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     ESI, ECX
        CALL    DWORD PTR DS:[v_2AD5D0]
        MOV     EBP, EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x114]
        TEST    EAX, EAX
        JNZ     SHORT @L00000001
        CMP     DWORD PTR DS:[ESI+0x158], EAX
        JG      SHORT @L00000001
        XOR     EBX, EBX
        JMP     SHORT @L00000002

    @L00000001:
        MOV     EBX, 0x1

    @L00000002:
        MOV     ECX, ESI
        CALL    f_282A10                                //CALL    DWORD PTR DS:[v_282A10]
        TEST    EAX, EAX
        JE      SHORT @L00000003
        MOV     EDI, 0xFF1460FF
        JMP     SHORT @L00000009

    @L00000003:
        CMP     DWORD PTR DS:[ESI+0x158], 0x0
        JLE     SHORT @L00000004
        MOV     EDI, 0xFFC0FF80
        JMP     SHORT @L00000009

    @L00000004:
        CMP     DWORD PTR DS:[ESI+0x150], 0x0
        JE      SHORT @L00000005
        MOV     EDI, 0xFF80C0C0
        JMP     SHORT @L00000009

    @L00000005:
        CMP     DWORD PTR DS:[ESI+0x154], 0x0
        JE      SHORT @L00000006
        MOV     EDI, 0xFFA04040
        JMP     SHORT @L00000009

    @L00000006:
        MOV     EAX, DWORD PTR DS:[ESI+0x5C]
        TEST    EAX, 0x800
        JNZ     SHORT @L00000007
        TEST    EAX, 0x400
        JE      SHORT @L00000008

    @L00000007:
        OR      EDI, 0xFFFFFFFF
        JMP     SHORT @L00000009

    @L00000008:
        MOV     EDI, DWORD PTR DS:[ESI+0x2D4]

    @L00000009:
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0xF0]
        PUSH    0x1
        MOV     ECX, ESI
        MOV     DWORD PTR SS:[ESP+0x14], EDI
        CALL    NEAR EDX
        TEST    EAX, EAX
        JE      SHORT @L00000010
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_29D690]
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_266760]
        MOV     EDI, DWORD PTR DS:[EAX]
        MOV     DWORD PTR SS:[ESP+0x10], EDI

    @L00000010:
        PUSH    ECX
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], EDI
        MOV     ECX, DWORD PTR DS:[ESI+0x28]
        XOR     EDX, EDX
        CALL    DWORD PTR DS:[v_4D3220]
        TEST    EBX, EBX
        JNZ     SHORT @L00000011
        MOV     DL, BYTE PTR SS:[ESP+0x13]
        MOV     ECX, DWORD PTR DS:[ESI+0x28]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_4D3250]

    @L00000011:
        TEST    EBP, EBP
        JNZ     SHORT @L00000012
        TEST    EBX, EBX
        JNZ     SHORT @L00000012
        LEA     EDX, DWORD PTR SS:[EBP+0x1]
        JMP     SHORT @L00000013

    @L00000012:
        XOR     EDX, EDX

    @L00000013:
        MOV     ECX, DWORD PTR DS:[ESI+0x28]
        CALL    DWORD PTR DS:[v_4D3500]
        MOV     ECX, DWORD PTR DS:[ESI+0x28]
        XOR     EDX, EDX
        TEST    EBP, EBP
        SETE    DL
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x0C
        JMP     DWORD PTR DS:[v_4D3510]
        SUB     ESP, 0x0C
        PUSH    ESI
        MOV     ESI, ECX
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0xF0]
        PUSH    0x0
        CALL    NEAR EDX
        TEST    EAX, EAX
        JE      SHORT @L00000014
        MOV     EAX, DWORD PTR DS:[ESI+0x2D4]
        LEA     ECX, DWORD PTR SS:[ESP+0x8]
        PUSH    ECX
        MOV     ECX, ESI
        MOV     DWORD PTR SS:[ESP+0x8], EAX
        CALL    DWORD PTR DS:[v_29D690]
        LEA     EDX, DWORD PTR SS:[ESP+0x4]
        PUSH    EDX
        LEA     EDX, DWORD PTR SS:[ESP+0xC]
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        CALL    DWORD PTR DS:[v_266760]
        MOV     EAX, DWORD PTR DS:[EAX]
        PUSH    ECX
        MOV     ECX, ESP
        MOV     DWORD PTR DS:[ECX], EAX
        MOV     ECX, DWORD PTR DS:[ESI+0x28]
        XOR     EDX, EDX
        MOV     DWORD PTR SS:[ESP+0x8], EAX
        CALL    DWORD PTR DS:[v_4D3220]
        MOV     DL, BYTE PTR SS:[ESP+0x7]
        MOV     ECX, DWORD PTR DS:[ESI+0x28]
        PUSH    0x0
        CALL    DWORD PTR DS:[v_4D3250]

    @L00000014:
        POP     ESI
        ADD     ESP, 0x0C
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_282A10()
{
    __asm
    {
        PUSH    ESI
        MOV     ESI, ECX
        TEST    DWORD PTR DS:[ESI+0x5C], 0x40000000
        JNZ     SHORT @L00000002
        XOR     EAX, EAX
        POP     ESI
        RET

    @L00000002:
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        PUSH    EDI
        PUSH    EAX
        CALL    DWORD PTR DS:[v_3A1650]
        MOVZX   EDI, WORD PTR DS:[EAX+0x2E0]
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0xEC]
        MOV     ECX, ESI
        CALL    NEAR EDX
        MOV     ECX, EAX
        MOV     EDX, 0x1
        SHL     EDX, CL
        MOVZX   EAX, DI
        AND     EDX, EAX
        NEG     EDX
        SBB     EDX, EDX
        NEG     EDX
        POP     EDI
        MOV     EAX, EDX
        POP     ESI
    // FEAT ILLU
        CMP     BYTE PTR DS:[bILLU], 0
        JE      @L_ILLU_G
        INC     EAX                                     // Remove
    @L_ILLU_G:

        RET
    }
}
//---------------------------------------------------------------------------


