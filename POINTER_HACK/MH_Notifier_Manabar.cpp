//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_2F9940()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_81B060]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x18
        PUSH    EBX
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x28]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     EDI, ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x254]
        TEST    ECX, ECX
        JE      SHORT @L00000002
        CALL    DWORD PTR DS:[v_309690]

    @L00000002:
        MOV     EBX, DWORD PTR SS:[ESP+0x38]
        CMP     DWORD PTR DS:[EBX+0x10], 0x0
        MOV     ESI, DWORD PTR DS:[EDI+0x3BC]
        JE      SHORT @L00000003
        TEST    ESI, ESI
        JE      SHORT @L00000004
        MOV     ECX, ESI
        CALL    f_38E050                                //CALL    DWORD PTR DS:[v_38E050]
        MOV     DWORD PTR DS:[ESI+0x1C4], 0x1
        JMP     SHORT @L00000004

    @L00000003:
        TEST    ESI, ESI
        JE      SHORT @L00000004
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_395DC0]
        MOV     ECX, ESI
        CALL    f_38E050                                //CALL    DWORD PTR DS:[v_38E050]
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0
        MOV     ECX, ESI
        MOV     DWORD PTR DS:[ESI+0x1C0], 0x0
        CALL    DWORD PTR DS:[v_395EB0]

    @L00000004:
        CALL    DWORD PTR DS:[v_53E670]
        TEST    EAX, EAX
        JE      SHORT @L00000005
        XOR     EAX, EAX
        MOV     ECX, DWORD PTR SS:[ESP+0x28]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBX
        ADD     ESP, 0x24
        RET     0x4

    @L00000005:
        CALL    DWORD PTR DS:[v_53F160]
        TEST    EAX, EAX
        JE      SHORT @L00000008
        CMP     DWORD PTR DS:[EBX+0x10], 0x0
        JE      SHORT @L00000007
        CMP     DWORD PTR DS:[EDI+0x25C], 0x0
        JNZ     @L00000010
        CMP     DWORD PTR DS:[EDI+0x260], 0x0
        JNZ     @L00000010
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2F41E0]
        TEST    EAX, EAX
        JE      SHORT @L00000006
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_33B360]
        TEST    EAX, EAX
        JNZ     SHORT @L00000010

    @L00000006:
        CALL    DWORD PTR DS:[v_53E860]
        TEST    EAX, EAX
        JE      SHORT @L00000010
        CALL    DWORD PTR DS:[v_53E830]
        JMP     SHORT @L00000010

    @L00000007:
        CALL    DWORD PTR DS:[v_53E860]
        TEST    EAX, EAX
        JNZ     SHORT @L00000010
        CALL    DWORD PTR DS:[v_53E830]
        JMP     SHORT @L00000010

    @L00000008:
        CMP     DWORD PTR DS:[EBX+0x10], 0x0
        JE      SHORT @L00000009
        CMP     DWORD PTR DS:[EDI+0x25C], 0x0
        JNZ     SHORT @L00000010
        CMP     DWORD PTR DS:[EDI+0x260], 0x0
        JNZ     SHORT @L00000010
        PUSH    0x2
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_2F11B0]
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        MOV     DWORD PTR SS:[ESP+0x30], 0x0
        CALL    DWORD PTR DS:[v_2F7FE0]
        JMP     SHORT @L00000010

    @L00000009:
        PUSH    0x1
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_2F1160]
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        MOV     DWORD PTR SS:[ESP+0x30], 0x1
        CALL    DWORD PTR DS:[v_2F80A0]

    @L00000010:
        MOV     EAX, 0x1
        MOV     ECX, DWORD PTR SS:[ESP+0x28]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBX
        ADD     ESP, 0x24
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_38E050()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_822AE8]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x38
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x4C]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     ESI, ECX
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR DS:[EDX+0x1]
        CALL    DWORD PTR DS:[v_300710]
        MOV     EBP, EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x240]
        XOR     EDI, EDI
        CMP     EAX, EDI
        JE      SHORT @L00000004
        FLDZ
        MOV     DWORD PTR SS:[ESP+0x18], EDI
        FST     DWORD PTR SS:[ESP+0x28]
        MOV     DWORD PTR SS:[ESP+0x1C], 0x1A0066
        FST     DWORD PTR SS:[ESP+0x2C]
        MOV     DWORD PTR SS:[ESP+0x20], EDI
        FST     DWORD PTR SS:[ESP+0x30]
        MOV     ECX, DWORD PTR DS:[v_9413E8]
        MOV     DWORD PTR SS:[ESP+0x14], ECX
        FST     DWORD PTR SS:[ESP+0x34]
        FSTP    DWORD PTR SS:[ESP+0x38]
        MOV     DWORD PTR SS:[ESP+0x40], EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x244]
        MOV     ECX, EAX
        OR      EBX, 0xFFFFFFFF
        CMP     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x54], EDI
        MOV     DWORD PTR SS:[ESP+0x44], EAX
        MOV     DWORD PTR SS:[ESP+0x48], EDI
        MOV     DWORD PTR DS:[ESI+0x240], EDI
        JE      SHORT @L00000003
        ADD     DWORD PTR DS:[ECX+0x4], EBX
        JNZ     SHORT @L00000002
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000002:
        MOV     DWORD PTR DS:[ESI+0x244], EDI

    @L00000003:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EDX+0x10]
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    NEAR EDX
        MOV     DWORD PTR SS:[ESP+0x54], EBX
        MOV     ECX, DWORD PTR DS:[v_8765F8]
        MOV     DWORD PTR SS:[ESP+0x14], ECX

    @L00000004:
        MOV     ECX, 0x2
        CALL    DWORD PTR DS:[v_62B170]
        MOV     EBX, EAX
        CMP     EBX, EDI
        JNZ     SHORT @L00000005
        MOV     ECX, 0x112
        CALL    DWORD PTR DS:[v_62B170]
        TEST    EAX, EAX
        JNZ     SHORT @L00000005
        XOR     ESI, ESI
        JMP     SHORT @L00000006

    @L00000005:
        CMP     EBX, EDI
        MOV     ESI, 0x1
        JNZ     SHORT @L00000007

    @L00000006:
        MOV     ECX, 0x113
        CALL    DWORD PTR DS:[v_62B170]
        TEST    EAX, EAX
        JE      SHORT @L00000008

    @L00000007:
        MOV     EAX, 0x1

    @L00000008:
        CMP     DWORD PTR SS:[EBP+0x1D8], EDI
        JE      SHORT @L00000009
        XOR     EAX, EAX
        CMP     ESI, EDI
        SETE    AL
        MOV     ESI, EAX
        XOR     EAX, EAX
        CMP     EBX, EDI
        SETE    AL

    @L00000009:
        CMP     ESI, EDI
        JNZ     SHORT @L00000010
        CMP     EAX, EDI
        JNZ     SHORT @L00000010
        XOR     ECX, ECX
        JMP     SHORT @L00000011

    @L00000010:
        MOV     ECX, 0x1

    @L00000011:
        PUSH    EAX
        MOV     EDX, ESI
        CALL    f_381670                                //CALL    DWORD PTR DS:[v_381670]
        MOV     ECX, DWORD PTR SS:[ESP+0x4C]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x44
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_381670()
{
    __asm
    {
        MOV     EAX, DWORD PTR DS:[v_AB65F4]
        MOV     EAX, DWORD PTR DS:[EAX]
        TEST    EAX, EAX
        PUSH    EBP
        PUSH    ESI
        MOV     EBP, EDX
        MOV     ESI, ECX
        JE      SHORT @L00000005
        CMP     DWORD PTR DS:[EAX+0x3E0], 0x0
        JE      SHORT @L00000005
        CALL    DWORD PTR DS:[v_37D260]
        TEST    ESI, ESI
        JE      SHORT @L00000005
        TEST    EBP, EBP
        JNZ     SHORT @L00000002
        CMP     DWORD PTR SS:[ESP+0xC], EBP
        JE      SHORT @L00000005

    @L00000002:
        PUSH    EBX
        XOR     EDX, EDX
        PUSH    EDI
        LEA     ECX, DWORD PTR DS:[EDX+0x1]
        CALL    DWORD PTR DS:[v_300710]
        MOV     ECX, DWORD PTR DS:[EAX+0x3BC]
        CALL    DWORD PTR DS:[v_38C690]
        MOV     EDI, EAX
        MOV     EBX, DWORD PTR DS:[EDI+0x4]
        XOR     ESI, ESI
        TEST    EBX, EBX
        JBE     SHORT @L00000004
        LEA     ECX, DWORD PTR DS:[ECX]

    @L00000003:
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        MOV     ECX, DWORD PTR DS:[EDI+0x8]
        MOV     ECX, DWORD PTR DS:[ECX+ESI*0x4]
        PUSH    EAX
        MOV     EDX, EBP
        CALL    f_37D0D0                                //CALL    DWORD PTR DS:[v_37D0D0]
        ADD     ESI, 0x1
        CMP     ESI, EBX
        JB      SHORT @L00000003

    @L00000004:
        POP     EDI
        POP     EBX

    @L00000005:
        POP     ESI
        POP     EBP
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_37D0D0()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_8217F8]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x8
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     DWORD PTR SS:[ESP+0x18], EDX
        MOV     ESI, ECX
        MOV     EDI, DWORD PTR DS:[v_AB65F4]
        MOV     EDI, DWORD PTR DS:[EDI]
        TEST    EDI, EDI
        JE      @L00000005
        CMP     DWORD PTR DS:[EDI+0x3E0], 0x0
        JE      @L00000005
        MOV     EAX, DWORD PTR DS:[v_AB62D4]
        MOV     EAX, DWORD PTR DS:[EAX]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_038450]
        TEST    ESI, ESI
        MOVZX   EBP, WORD PTR DS:[EDI+0x28]
        MOV     DWORD PTR SS:[ESP+0x24], 0x0
        JE      @L00000004
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0418A0]
        TEST    EAX, EAX
        JE      @L00000004
        MOV     EAX, DWORD PTR DS:[ESI+0x280]
        TEST    EAX, 0x100
        JNZ     @L00000004
        TEST    BYTE PTR DS:[ESI+0x20], 0x2
        JE      @L00000004
        TEST    EAX, 0x400
        JNZ     @L00000004
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x13C]
        MOV     ECX, ESI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JNZ     @L00000004
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2AD5D0]
        TEST    EAX, EAX
        JNZ     @L00000004
        MOV     EDX, DWORD PTR DS:[ESI]
        PUSH    0x4
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDX+0x100]
        MOV     ECX, ESI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JE      SHORT @L00000004
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0xEC]
        MOV     ECX, ESI
        CALL    NEAR EAX
        CMP     DWORD PTR SS:[ESP+0x18], 0x0
        MOV     EBX, EAX
        JE      SHORT @L00000002
        PUSH    EBP
        PUSH    EBX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_3A3400]
        TEST    EAX, EAX
        JNZ     SHORT @L00000003
        TEST    BYTE PTR DS:[ESI+0x60], 0x1
        JNZ     SHORT @L00000003

    @L00000002:
        CMP     DWORD PTR SS:[ESP+0x2C], 0x0
        JE      SHORT @L00000004
        PUSH    EBP
        PUSH    EBX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_144B50]
        TEST    EAX, EAX
        JE      SHORT @L00000004
        TEST    BYTE PTR DS:[ESI+0x60], 0x1
        JNZ     SHORT @L00000004

    @L00000003:
        XOR     EAX, EAX
        CMP     ESI, DWORD PTR SS:[ESP+0x14]
        MOV     ECX, ESI
        SETE    AL
        PUSH    EAX
        PUSH    0x1
        CALL    f_2C7460                                //CALL    DWORD PTR DS:[v_2C7460]
        OR      DWORD PTR DS:[ESI+0x280], 0x100
        PUSH    ESI
        MOV     ECX, DWORD PTR DS:[v_AB62C4]
        CALL    DWORD PTR DS:[v_0A4730]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_02A560]

    @L00000004:
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x24], -0x1
        JE      SHORT @L00000005
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000005
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000005:
        MOV     ECX, DWORD PTR SS:[ESP+0x1C]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x14
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_2C7460()
{
    __asm
    {
        CMP     DWORD PTR SS:[ESP+0x4], 0x0
        PUSH    ESI
        MOV     ESI, ECX
        JE      SHORT @L00000003
        CMP     DWORD PTR DS:[ESI+0x50], 0x0
        JNZ     SHORT @L00000002
        CALL    DWORD PTR DS:[v_37B7C0]
        MOV     DWORD PTR DS:[ESI+0x50], EAX

    @L00000002:
        MOV     ECX, DWORD PTR DS:[ESI+0x50]
        TEST    ECX, ECX
        JE      SHORT @L00000004
        MOV     EAX, DWORD PTR SS:[ESP+0xC]
        PUSH    EAX
        PUSH    ESI
        CALL    f_379A30                                //CALL    DWORD PTR DS:[v_379A30]
        POP     ESI
        RET     0x8

    @L00000003:
        MOV     ECX, DWORD PTR DS:[ESI+0x50]
        TEST    ECX, ECX
        JE      SHORT @L00000004
        CALL    DWORD PTR DS:[v_37BA90]

    @L00000004:
        POP     ESI
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_379A30()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_821429]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x10
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x24]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     ESI, ECX
        MOV     EAX, DWORD PTR DS:[v_AB65F4]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EBX, EBX
        CMP     EAX, EBX
        JE      @L00000015
        CMP     DWORD PTR DS:[EAX+0x3E0], EBX
        JE      @L00000015
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR DS:[EBX+0x1]
        CALL    DWORD PTR DS:[v_300710]
        CMP     EAX, EBX
        JE      @L00000015
        CMP     DWORD PTR DS:[EAX+0x29C], EBX
        JE      @L00000015
        MOV     EBP, DWORD PTR SS:[ESP+0x34]
        PUSH    EBP
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        CALL    DWORD PTR DS:[v_0382B0]
        MOV     EDI, DWORD PTR SS:[ESP+0x1C]
        CMP     EDI, EBX
        MOV     DWORD PTR SS:[ESP+0x2C], EBX
        JE      @L00000013
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_0418A0]
        TEST    EAX, EAX
        JE      @L00000013
        LEA     EDI, DWORD PTR DS:[ESI+0x8]
        PUSH    EBP
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2C86C0]
        CMP     DWORD PTR DS:[ESI+0xC], EBX
        JNZ     @L00000004
        PUSH    EBX
        PUSH    0x0DD
        PUSH    DWORD PTR DS:[v_940968]
        PUSH    0x158
    // FEAT MANABAR
        CMP     BYTE PTR DS:[bMANABAR], 0
        //JNE     @L_MANABAR_G_1                        <-- FIXME
        CALL    DWORD PTR DS:[v_6EB5B2]
        JMP     @L_MANABAR_F_1
    @L_MANABAR_G_1:
        CALL    f001527C0                               //CALL    DWORD PTR DS:[v_6EB5B2]
    @L_MANABAR_F_1:

        MOV     DWORD PTR SS:[ESP+0x34], EAX
        MOV     DWORD PTR SS:[ESP+0x20], EAX
        CMP     EAX, EBX
        MOV     BYTE PTR SS:[ESP+0x2C], 0x1
        JE      SHORT @L00000002
        PUSH    0x5
        PUSH    EBX
        PUSH    EBX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_359CC0]
        JMP     SHORT @L00000003

    @L00000002:
        XOR     EAX, EAX

    @L00000003:
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_94091C]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        MOV     ECX, EAX
        FSTP    DWORD PTR SS:[ESP]
        MOV     BYTE PTR SS:[ESP+0x30], 0x0
        MOV     DWORD PTR DS:[ESI+0xC], EAX
        CALL    DWORD PTR DS:[v_605D90]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_940920]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_605DB0]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_9409E8]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        PUSH    0x1
        SUB     ESP, 0x8
        FST     DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x1
        CALL    DWORD PTR DS:[v_6061B0]
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        MOV     EAX, DWORD PTR DS:[ECX+0x84]
        ADD     EAX, 0x1
        PUSH    EAX
        CALL    DWORD PTR DS:[v_2F59B0]
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        CALL    DWORD PTR DS:[v_2F0FF0]

    @L00000004:
        CMP     DWORD PTR SS:[ESP+0x38], 0x0
        JE      SHORT @L00000005
        CMP     DWORD PTR DS:[EDI], 0x0
        JE      SHORT @L00000005
        CALL    DWORD PTR DS:[v_378C80]
        PUSH    EBP
        MOV     ECX, DWORD PTR DS:[v_AB62D4]
        MOV     EBX, EAX
        CALL    DWORD PTR DS:[v_2C86C0]

    @L00000005:
        PUSH    EBP
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_038450]
        PUSH    EBP
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        MOV     BYTE PTR SS:[ESP+0x30], 0x2
        CALL    DWORD PTR DS:[v_012CF0]
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        TEST    EAX, EAX
        MOV     BYTE PTR SS:[ESP+0x2C], 0x3
        JE      SHORT @L00000006
        MOV     ECX, DWORD PTR DS:[EAX+0x30]
        CALL    DWORD PTR DS:[v_268D90]
        FSTP    DWORD PTR SS:[ESP+0x34]
        FLD     DWORD PTR SS:[ESP+0x34]
        PUSH    ECX
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_935B48]
        FMUL    QWORD PTR DS:[EAX]
        POP     EAX
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        FSTP    DWORD PTR SS:[ESP+0x38]
        FLD     DWORD PTR SS:[ESP+0x38]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_605D90]
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR SS:[ESP+0x18]
        MOV     EAX, DWORD PTR DS:[EAX+0x78]
        PUSH    EDX
        CALL    NEAR EAX
        JMP     SHORT @L00000008

    @L00000006:
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        TEST    ECX, ECX
        JE      SHORT @L00000009
        TEST    BYTE PTR DS:[ECX+0x20], 0x8
        JE      SHORT @L00000007
        PUSH    0x1
        CALL    DWORD PTR DS:[v_26DE50]
        TEST    EAX, EAX
        JNZ     SHORT @L00000009

    @L00000007:
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     ECX, DWORD PTR DS:[ECX+0x30]
        CALL    DWORD PTR DS:[v_32D070]
        FSTP    DWORD PTR SS:[ESP+0x20]
        PUSH    0x0
        MOV     EDX, DWORD PTR DS:[v_92F150]
        MOV     ECX, DWORD PTR DS:[v_92F140]
        CALL    DWORD PTR DS:[v_009E30]
        FSTP    DWORD PTR SS:[ESP+0x34]
        FLD     DWORD PTR SS:[ESP+0x34]
        PUSH    ECX
        FMUL    DWORD PTR SS:[ESP+0x24]
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_935B48]
        FMUL    QWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP+0x38]
        FLD     DWORD PTR SS:[ESP+0x38]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_605D90]
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        MOV     EDX, DWORD PTR DS:[EDX+0x74]
        PUSH    EAX
        CALL    NEAR EDX

    @L00000008:
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        CALL    DWORD PTR DS:[v_2F1010]

    @L00000009:
        CMP     DWORD PTR SS:[ESP+0x38], 0x0
        JE      SHORT @L00000010
        TEST    EBX, EBX
        JE      SHORT @L00000010
        PUSH    EBP
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_35B970]

    @L00000010:
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        TEST    EAX, EAX
        MOV     BYTE PTR SS:[ESP+0x2C], 0x2
        JE      SHORT @L00000011
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000011
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000011:
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        TEST    EAX, EAX
        MOV     BYTE PTR SS:[ESP+0x2C], 0x0
        JE      SHORT @L00000012
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000012
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000012:
        MOV     EAX, DWORD PTR SS:[ESP+0x1C]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x2C], -0x1
        JE      SHORT @L00000015
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JMP     SHORT @L00000014

    @L00000013:
        CMP     EDI, EBX
        MOV     DWORD PTR SS:[ESP+0x2C], -0x1
        JE      SHORT @L00000015
        ADD     DWORD PTR DS:[EDI+0x4], -0x1
        CMP     DWORD PTR DS:[EDI+0x4], EBX
        LEA     EAX, DWORD PTR DS:[EDI+0x4]
        MOV     ECX, EDI

    @L00000014:
        JNZ     SHORT @L00000015
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000015:
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x1C
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_333590()
{
    __asm
    {
        JMP     f_379EA0
    }
}
//---------------------------------------------------------------------------

FRAW void f_379EA0()
{
    __asm
    {
        PUSH    ESI
        PUSH    EDI
        XOR     EDI, EDI
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AB62C8]
        CMP     DWORD PTR DS:[EAX], EDI
        POP     EAX
        JBE     SHORT @L00000004
        LEA     ESP, DWORD PTR SS:[ESP]

    @L00000002:
        MOV     EAX, DWORD PTR DS:[v_AB62CC]
        MOV     EAX, DWORD PTR DS:[EAX]
        MOV     ESI, DWORD PTR DS:[EAX+EDI*0x4]
        TEST    ESI, ESI
        JE      SHORT @L00000003
        MOV     EDX, DWORD PTR DS:[ESI+0x10]
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        CALL    DWORD PTR DS:[v_03FA30]
        TEST    EAX, EAX
        JE      SHORT @L00000003
        XOR     ECX, ECX
        CMP     DWORD PTR DS:[EAX+0xC], 0x2B61676C
        SETNE   CL
        SUB     ECX, 0x1
        AND     ECX, EAX
        MOV     EAX, ECX
        JE      SHORT @L00000003
        CMP     DWORD PTR DS:[EAX+0x20], 0x0
        JNZ     SHORT @L00000003
        MOV     ECX, ESI
    // FEAT MANABAR
        CMP     BYTE PTR DS:[bMANABAR], 0
        //JNE     @L_MANABAR_G_2                        <-- FIX ME
        CALL    DWORD PTR DS:[v_2C74B0]
        JMP     @L_MANABAR_F_2
    @L_MANABAR_G_2:
        CALL    f00152930                               //CALL    DWORD PTR DS:[v_2C74B0]
    @L_MANABAR_F_2:

    @L00000003:
        ADD     EDI, 0x1
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AB62C8]
        CMP     EDI, DWORD PTR DS:[EAX]
        POP     EAX
        JB      SHORT @L00000002

    @L00000004:
        MOV     ESI, DWORD PTR DS:[v_AB62D4]
        MOV     ESI, DWORD PTR DS:[ESI]
        TEST    ESI, ESI
        JE      SHORT @L00000005
        MOV     EDX, DWORD PTR DS:[ESI+0x10]
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        CALL    DWORD PTR DS:[v_03FA30]
        TEST    EAX, EAX
        JE      SHORT @L00000005
        XOR     EDX, EDX
        CMP     DWORD PTR DS:[EAX+0xC], 0x2B61676C
        SETNE   DL
        SUB     EDX, 0x1
        AND     EDX, EAX
        MOV     EAX, EDX
        JE      SHORT @L00000005
        CMP     DWORD PTR DS:[EAX+0x20], 0x0
        JNZ     SHORT @L00000005
        POP     EDI
        MOV     ECX, ESI
        POP     ESI
        JMP     DWORD PTR DS:[v_2C74B0]

    @L00000005:
        POP     EDI
        POP     ESI
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_2FB760()
{
    __asm
    {
        MOV     EAX, DWORD PTR SS:[ESP+0x4]
        MOVZX   EDX, BYTE PTR DS:[EAX+0x15]
        PUSH    0x0
        PUSH    0x0
        PUSH    0x1
        PUSH    EDX
        PUSH    0x1
        CALL    f_2FA7E0                                //CALL    DWORD PTR DS:[v_2FA7E0]
        MOV     EAX, 0x1
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_2FA7E0()
{
    __asm
    {
        SUB     ESP, 0x168
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x164], EAX
        PUSH    EBX
        MOV     EBX, DWORD PTR SS:[ESP+0x174]
        CMP     EBX, 0x0FF
        PUSH    EBP
        MOV     EBP, DWORD PTR DS:[v_AB65F4]
        MOV     EBP, DWORD PTR DS:[EBP]
        PUSH    ESI
        PUSH    EDI
        MOV     ESI, ECX
        MOV     DWORD PTR SS:[ESP+0x14], 0x0
        JE      @L00000007
        PUSH    EBX
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_40B1C0]
        MOV     EDI, DWORD PTR SS:[ESP+0x17C]
        XOR     ECX, ECX
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        CALL    DWORD PTR DS:[v_53ED30]
        TEST    EDI, EDI
        JE      SHORT @L00000002
        CMP     AL, 0x0FF
        JNZ     @L00000020
        XOR     EDX, EDX
        MOV     CL, BL
        CALL    DWORD PTR DS:[v_53EED0]
        TEST    EAX, EAX
        JE      @L00000020
        JMP     @L00000008

    @L00000002:
        MOVZX   EAX, AL
        CMP     EAX, 0x0FF
        JE      @L00000020
        PUSH    EAX
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_40B1C0]
        TEST    EAX, EAX
        JE      SHORT @L00000003
        CMP     DWORD PTR SS:[ESP+0x14], 0x0
        JE      @L00000020

    @L00000003:
        XOR     EAX, EAX

    @L00000004:
        CMP     DWORD PTR SS:[ESP+0x18C], 0x0
        MOV     DWORD PTR DS:[ESI+0x258], EAX
        JE      SHORT @L00000005
        MOV     DWORD PTR DS:[ESI+0x260], EDI

    @L00000005:
        TEST    EDI, EDI
        JNZ     SHORT @L00000006
        CMP     DWORD PTR DS:[ESI+0x260], EDI
        JNZ     @L00000020

    @L00000006:
        MOV     EDI, DWORD PTR DS:[ESI+0x3BC]
        TEST    EDI, EDI
        JE      SHORT @L00000010
        CMP     DWORD PTR SS:[ESP+0x17C], 0x0
        MOV     ECX, EDI
        JE      SHORT @L00000009
        CALL    f_38E050                                //CALL    DWORD PTR DS:[v_38E050]
        MOV     DWORD PTR DS:[EDI+0x1C4], 0x1
        JMP     SHORT @L00000010

    @L00000007:
        MOV     EDI, DWORD PTR SS:[ESP+0x17C]

    @L00000008:
        TEST    EDI, EDI
        JE      SHORT @L00000003
        CMP     DWORD PTR SS:[ESP+0x184], 0x0
        JE      SHORT @L00000003
        MOV     EAX, 0x1
        JMP     SHORT @L00000004

    @L00000009:
        CALL    DWORD PTR DS:[v_395DC0]
        MOV     ECX, EDI
        CALL    f_38E050                                //CALL    DWORD PTR DS:[v_38E050]
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0
        MOV     ECX, EDI
        MOV     DWORD PTR DS:[EDI+0x1C0], 0x0
        CALL    DWORD PTR DS:[v_395EB0]

    @L00000010:
        CMP     EBX, 0x0FF
        MOV     EDI, DWORD PTR SS:[ESP+0x17C]
        JE      SHORT @L00000013
        TEST    EDI, EDI
        JE      SHORT @L00000011
        XOR     EAX, EAX
        CMP     DWORD PTR SS:[ESP+0x14], EAX
        MOV     CL, BL
        SETE    AL
        XOR     EDX, EDX
        PUSH    EAX
        CALL    DWORD PTR DS:[v_53EA60]
        JMP     SHORT @L00000012

    @L00000011:
        XOR     ECX, ECX
        CALL    DWORD PTR DS:[v_53EAF0]

    @L00000012:
        TEST    EAX, EAX
        JE      @L00000020

    @L00000013:
        MOV     ECX, DWORD PTR DS:[ESI+0x228]
        TEST    ECX, ECX
        JE      SHORT @L00000014
        PUSH    EDI
        CALL    DWORD PTR DS:[v_35E670]

    @L00000014:
        CMP     EBX, 0x0FF
        MOV     BYTE PTR SS:[ESP+0x18], 0x0
        JE      SHORT @L00000015
        MOV     EDX, EBX
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        CALL    DWORD PTR DS:[v_2F8E90]
        MOV     EDX, 0x1
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_2F8F90]
        PUSH    EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        MOVZX   ECX, AL
        PUSH    ECX
        MOVZX   ECX, BYTE PTR SS:[ESP+0x1B]
        MOVZX   EDX, AH
        MOVZX   EAX, BYTE PTR SS:[ESP+0x1A]
        PUSH    EDX
        PUSH    EAX
        PUSH    ECX
        PUSH    DWORD PTR DS:[v_935D68]
        LEA     EDX, DWORD PTR SS:[ESP+0x30]
        PUSH    0x1C
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x20

    @L00000015:
        XOR     ECX, ECX
        CMP     EDI, ECX
        JE      @L00000018
        CMP     DWORD PTR SS:[ESP+0x184], ECX
        JE      @L00000016
        MOV     EAX, DWORD PTR DS:[ESI+0x3BC]
        MOV     DWORD PTR DS:[EAX+0x320], ECX
        PUSH    0x1
        MOV     ECX, EBP
        MOV     DWORD PTR DS:[EAX+0x31C], 0x1
        CALL    DWORD PTR DS:[v_3A2820]
        MOV     ECX, DWORD PTR DS:[ESI+0x420]
        CALL    DWORD PTR DS:[v_33BDB0]
        MOV     ECX, DWORD PTR DS:[ESI+0x3C8]
        PUSH    0x0
        CALL    DWORD PTR DS:[v_342190]
        MOV     ECX, DWORD PTR DS:[ESI+0x3C4]
        PUSH    0x0
        CALL    DWORD PTR DS:[v_352F00]
        MOV     ECX, DWORD PTR DS:[ESI+0x3DC]
        PUSH    0x0
        CALL    DWORD PTR DS:[v_3463A0]
        MOV     ECX, DWORD PTR DS:[ESI+0x3E0]
        PUSH    0x0
        CALL    DWORD PTR DS:[v_33ACC0]
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x10C]
        PUSH    0x0
        CALL    NEAR EDX
        MOV     ECX, DWORD PTR DS:[ESI+0x214]
        CALL    DWORD PTR DS:[v_37A3B0]
        CALL    f_333590                                //CALL    DWORD PTR DS:[v_333590]
        PUSH    0x0
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2F3220]

    @L00000016:
        CALL    DWORD PTR DS:[v_53E670]
        TEST    EAX, EAX
        JE      @L00000020
        CMP     EBX, 0x0FF
        JE      @L00000020
        CMP     DWORD PTR DS:[ESI+0x3EC], 0x0
        JE      @L00000020
        CMP     DWORD PTR SS:[ESP+0x14], 0x0
        PUSH    0x9F
        LEA     EDX, DWORD PTR SS:[ESP+0x38]
        MOV     ECX, DWORD PTR DS:[v_935FD8]
        JNZ     SHORT @L00000017
        MOV     ECX, DWORD PTR DS:[v_935FC4]

    @L00000017:
        CALL    DWORD PTR DS:[v_5C9650]
        XOR     EDX, EDX
        MOV     CL, BL
        CALL    DWORD PTR DS:[v_53EE90]
        MOV     ECX, 0x3
        SUB     ECX, EAX
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x3C]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0xE0]
        PUSH    0x9F
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5A6]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_934218]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        MOV     ECX, DWORD PTR DS:[ESI+0x3EC]
        ADD     ESP, 0x14
        PUSH    0x0
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        LEA     EAX, DWORD PTR SS:[ESP+0x18]
        PUSH    EAX
        MOV     DWORD PTR SS:[ESP+0x1C], -0x1
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EDX+0x6C]
        LEA     EAX, DWORD PTR SS:[ESP+0xE0]
        PUSH    EAX
        CALL    NEAR EDX
        JMP     @L00000020

    @L00000018:
        CMP     DWORD PTR SS:[ESP+0x184], ECX
        JE      @L00000019
        MOV     EAX, DWORD PTR DS:[ESI+0x3BC]
        MOV     EDX, DWORD PTR SS:[ESP+0x188]
        MOV     DWORD PTR DS:[ESI+0x25C], ECX
        MOV     DWORD PTR DS:[ESI+0x260], ECX
        MOV     DWORD PTR DS:[EAX+0x31C], ECX
        PUSH    ECX
        MOV     ECX, EBP
        MOV     DWORD PTR DS:[EAX+0x320], EDX
        CALL    DWORD PTR DS:[v_3A2820]
        MOV     ECX, DWORD PTR DS:[ESI+0x420]
        PUSH    0x0
        CALL    DWORD PTR DS:[v_33BD80]
        MOV     ECX, DWORD PTR DS:[ESI+0x3C8]
        PUSH    0x1
        CALL    DWORD PTR DS:[v_342190]
        MOV     ECX, DWORD PTR DS:[ESI+0x3C4]
        PUSH    0x1
        CALL    DWORD PTR DS:[v_352F00]
        MOV     ECX, DWORD PTR DS:[ESI+0x3DC]
        PUSH    0x1
        CALL    DWORD PTR DS:[v_3463A0]
        MOV     ECX, DWORD PTR DS:[ESI+0x3E0]
        PUSH    0x1
        CALL    DWORD PTR DS:[v_33ACC0]
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x10C]
        PUSH    0x1
        CALL    NEAR EDX
        PUSH    0x0
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2F3220]

    @L00000019:
        CALL    DWORD PTR DS:[v_53E670]
        TEST    EAX, EAX
        JE      SHORT @L00000020
        CMP     EBX, 0x0FF
        JE      SHORT @L00000020
        CMP     DWORD PTR DS:[ESI+0x3EC], 0x0
        JE      SHORT @L00000020
        PUSH    0x9F
        LEA     EDX, DWORD PTR SS:[ESP+0xD8]
        MOV     ECX, DWORD PTR DS:[v_935FB0]
        CALL    DWORD PTR DS:[v_5C9650]
        LEA     EAX, DWORD PTR SS:[ESP+0x18]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0xD8]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x3C]
        PUSH    0x9F
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5A6]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_934218]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        MOV     ECX, DWORD PTR DS:[ESI+0x3EC]
        ADD     ESP, 0x10
        PUSH    0x0
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        PUSH    EDX
        MOV     DWORD PTR SS:[ESP+0x1C], -0x1
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EAX+0x6C]
        LEA     EDX, DWORD PTR SS:[ESP+0x40]
        PUSH    EDX
        CALL    NEAR EAX

    @L00000020:
        MOV     ECX, DWORD PTR SS:[ESP+0x174]
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x168
        RET     0x14
    }
}
//---------------------------------------------------------------------------


