//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_395CF0()
{
    __asm
    {
        PUSH    ECX
        MOV     ECX, EDX
        CALL    f_392A10                                //CALL    DWORD PTR DS:[v_392A10]
        MOV     EAX, 0x1
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_392A10()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_822DF8]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x20
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x2C]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     ESI, ECX
        MOV     EDI, DWORD PTR SS:[ESP+0x3C]
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_26BA80]
        TEST    EAX, EAX
        JE      @L00000006
        MOV     EDX, DWORD PTR DS:[EDI+0x78]
        MOV     EAX, DWORD PTR DS:[EDI+0x7C]
        LEA     ECX, DWORD PTR DS:[EDI+0x78]
        AND     EAX, EDX
        CMP     EAX, -0x1
        JNZ     SHORT @L00000002
        XOR     EAX, EAX
        JMP     SHORT @L00000003

    @L00000002:
        CALL    DWORD PTR DS:[v_4786B0]

    @L00000003:
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_0382B0]
        MOV     ECX, DWORD PTR SS:[ESP+0x10]
        TEST    ECX, ECX
        MOV     DWORD PTR SS:[ESP+0x34], 0x0
        JE      @L00000006
        MOV     EDX, DWORD PTR DS:[ECX]
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDX+0xB8]
        CALL    NEAR EAX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_4743A0]
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     EDX, DWORD PTR SS:[ESP+0x18]
        MOV     EAX, DWORD PTR SS:[ESP+0x1C]
        MOV     DWORD PTR SS:[ESP+0x20], ECX
        LEA     ECX, DWORD PTR DS:[ESI+0x1F8]
        PUSH    ECX
        MOV     DWORD PTR SS:[ESP+0x28], EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x40]
        MOV     DWORD PTR SS:[ESP+0x2C], EAX
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x178]
        CALL    f_3A1460                                //CALL    DWORD PTR DS:[v_3A1460]
        MOV     EAX, DWORD PTR DS:[ESI+0x328]
        MOV     EDX, EAX
        NEG     EDX
        SBB     EDX, EDX
        AND     EDX, 0xFFFF0001
        ADD     EDX, 0x0FFFF
        OR      WORD PTR SS:[ESP+0xC], DX
        TEST    EAX, EAX
        JE      SHORT @L00000004
        MOVZX   EAX, WORD PTR SS:[ESP+0x3C]
        JMP     SHORT @L00000005

    @L00000004:
        XOR     EAX, EAX

    @L00000005:
        AND     DWORD PTR SS:[ESP+0x3C], EAX
        MOVZX   EAX, WORD PTR DS:[ESI+0x1F4]
        MOV     ECX, DWORD PTR SS:[ESP+0xC]
        PUSH    EAX
        PUSH    ECX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2A9AF0]
        MOVZX   EDX, WORD PTR DS:[ESI+0x1F4]
        MOV     EAX, DWORD PTR SS:[ESP+0x3C]
        PUSH    EDX
        PUSH    EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2A85C0]
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x34], -0x1
        JE      SHORT @L00000006
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000006
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000006:
        MOV     EAX, 0x1
        MOV     ECX, DWORD PTR SS:[ESP+0x2C]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        ADD     ESP, 0x2C
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_39B230()
{
    __asm
    {
        PUSH    ECX
        MOV     ECX, EDX
        CALL    f_39A090                                //CALL    DWORD PTR DS:[v_39A090]
        MOV     EAX, 0x1
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_39A090()
{
    __asm
    {
        SUB     ESP, 0x1C
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x2C]
        PUSH    EDI
        MOV     EDI, ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_26BA80]
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EBP, EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDX+0xB8]
        MOV     ECX, ESI
        CALL    NEAR EAX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_4743A0]
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     EDX, DWORD PTR SS:[ESP+0x18]
        MOV     EAX, DWORD PTR SS:[ESP+0x1C]
        MOV     DWORD PTR SS:[ESP+0x20], ECX
        LEA     ECX, DWORD PTR DS:[EDI+0x1F8]
        PUSH    ECX
        MOV     DWORD PTR SS:[ESP+0x28], EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR SS:[ESP+0x2C], EAX
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x38]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x178]
        CALL    f_3A1460                                //CALL    DWORD PTR DS:[v_3A1460]
        MOVZX   EDX, WORD PTR DS:[EDI+0x1F4]
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        PUSH    EDX
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2AB710]
        MOV     EBX, DWORD PTR DS:[ESI+0x20]
        MOV     EAX, DWORD PTR DS:[EDI+0x328]
        SHR     EBX, 0x1
        XOR     ECX, ECX
        AND     EBX, 0x1
        TEST    EBP, EBP
        SETNE   CL
        AND     EBX, ECX
        TEST    EAX, EAX
        JE      SHORT @L00000002
        MOV     DX, WORD PTR DS:[EDI+0x1F4]
        AND     DX, WORD PTR SS:[ESP+0x30]
        NEG     DX
        SBB     EDX, EDX
        NEG     EDX
        AND     EBX, EDX

    @L00000002:
        TEST    EBP, EBP
        JE      SHORT @L00000003
        TEST    EAX, EAX
        JNZ     SHORT @L00000003
        MOV     EAX, 0x1
        JMP     SHORT @L00000004

    @L00000003:
        XOR     EAX, EAX

    @L00000004:
        XOR     ECX, ECX
        TEST    EAX, EAX
        SETNE   CL
        OR      EBX, ECX
        PUSH    EBX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2B5D00]
        TEST    EBX, EBX
        JE      SHORT @L00000005
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2B6C20]
        FLD     DWORD PTR DS:[EDI+0x238]
        MOV     EDX, DWORD PTR DS:[EDI+0x140]
        PUSH    ESI
        PUSH    0x0
        PUSH    EDX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x16C]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBP
        CALL    DWORD PTR DS:[v_60FCE0]
        TEST    EAX, EAX
        JE      SHORT @L00000005
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x1A8]
        MOV     ECX, ESI
        CALL    NEAR EDX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2B5D20]
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x1A0]
        MOV     ECX, ESI
        CALL    NEAR EDX
        PUSH    ESI
        LEA     ECX, DWORD PTR DS:[EDI+0x640]
        CALL    DWORD PTR DS:[v_28E580]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_029770]
        PUSH    ESI
        LEA     ECX, DWORD PTR DS:[EDI+0x630]
        CALL    DWORD PTR DS:[v_37CB20]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_2C86C0]

    @L00000005:
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x1C
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_38E880()
{
    __asm
    {
        SUB     ESP, 0x14
        PUSH    EBX
        PUSH    ESI
        PUSH    EDI
        PUSH    0x0
        LEA     EAX, DWORD PTR SS:[ESP+0x18]
        PUSH    EAX
        MOV     ESI, EDX
        MOV     EDI, ECX
        CALL    DWORD PTR DS:[v_024680]
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_26BA80]
        MOV     EBX, EAX
        TEST    EBX, EBX
        JE      SHORT @L00000003
        LEA     ECX, DWORD PTR DS:[ESI+0x1F8]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x14]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x178]
        CALL    f_3A1460                                //CALL    DWORD PTR DS:[v_3A1460]
        CMP     DWORD PTR DS:[ESI+0x328], 0x0
        JE      SHORT @L00000002
        MOV     DX, WORD PTR SS:[ESP+0xC]
        TEST    WORD PTR DS:[ESI+0x1F4], DX
        JE      SHORT @L00000003

    @L00000002:
        MOV     EAX, DWORD PTR DS:[ESI+0x140]
        FLD     DWORD PTR DS:[ESI+0x238]
        PUSH    EDI
        PUSH    0x0
        PUSH    EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x16C]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_60FCE0]

    @L00000003:
        POP     EDI
        POP     ESI
        MOV     EAX, 0x1
        POP     EBX
        ADD     ESP, 0x14
        RET
    }
}
//---------------------------------------------------------------------------


