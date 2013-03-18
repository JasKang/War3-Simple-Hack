//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_016B10()
{
    __asm
    {
        FLD     DWORD PTR SS:[ESP+0x4]
        PUSH    ESI
        PUSH    EDI
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        MOV     ESI, EDX
        MOV     EDI, ECX
        PUSH    ESI
        PUSH    EDI
        CALL    DWORD PTR DS:[v_01F5A0]
        MOV     ECX, EAX
        CALL    f_770A60                                //CALL    DWORD PTR DS:[v_770A60]
        CALL    DWORD PTR DS:[v_01F620]
        FLD     DWORD PTR SS:[ESP+0xC]
        MOV     EDX, DWORD PTR DS:[EAX]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    ESI
        MOV     ECX, EAX
        MOV     EAX, DWORD PTR DS:[EDX+0x20]
        PUSH    EDI
        CALL    NEAR EAX
        FLD     DWORD PTR SS:[ESP+0xC]
        PUSH    ECX
        MOV     EDX, ESI
        FSTP    DWORD PTR SS:[ESP]
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_012570]
        FLD     DWORD PTR SS:[ESP+0xC]
        PUSH    ECX
        MOV     EDX, ESI
        FSTP    DWORD PTR SS:[ESP]
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_015980]
        FLD     DWORD PTR SS:[ESP+0xC]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_00F3B0]
        FLD     DWORD PTR SS:[ESP+0xC]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_01F5A0]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_74E970]
        FLD     DWORD PTR SS:[ESP+0xC]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_00E090]
        POP     EDI
        POP     ESI
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_770A60()
{
    __asm
    {
        PUSH    ESI
        MOV     ESI, ECX
        CALL    DWORD PTR DS:[v_73A290]
        TEST    EAX, EAX
        JE      SHORT @L00000002
        PUSH    0x8000
        CALL    DWORD PTR DS:[v_741F10]
        XOR     ECX, ECX
        CALL    DWORD PTR DS:[v_73A2A0]

    @L00000002:
        CALL    DWORD PTR DS:[v_525F10]
        CMP     EAX, DWORD PTR DS:[ESI+0x960]
        JE      SHORT @L00000003
        PUSH    0x8000
        MOV     ECX, ESI
        MOV     DWORD PTR DS:[ESI+0x960], EAX
        CALL    DWORD PTR DS:[v_741F10]

    @L00000003:
        MOV     ECX, DWORD PTR DS:[ESI+0x790]
        TEST    ECX, ECX
        JE      SHORT @L00000004
        FLD     DWORD PTR SS:[ESP+0x10]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_75DA00]

    @L00000004:
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_7709E0]
        LEA     EAX, DWORD PTR DS:[ESI+0x838]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_75ABD0]
        FLD     DWORD PTR SS:[ESP+0x10]
        PUSH    ECX
        MOV     ECX, ESI
        FSTP    DWORD PTR SS:[ESP]
        CALl    f_75A310                                //CALL    DWORD PTR DS:[v_75A310]
        MOV     ECX, DWORD PTR DS:[ESI+0x78C]
        TEST    ECX, ECX
        JE      SHORT @L00000005
        TEST    DWORD PTR DS:[ESI+0x970], 0x1000
        JE      SHORT @L00000005
        CALL    DWORD PTR DS:[v_787390]

    @L00000005:
        FLD     DWORD PTR SS:[ESP+0x10]
        PUSH    EBX
        PUSH    EDI
        PUSH    ECX
        MOV     ECX, ESI
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_742220]
        FLD     DWORD PTR SS:[ESP+0x18]
        MOV     EDI, DWORD PTR SS:[ESP+0x14]
        MOV     EBX, DWORD PTR SS:[ESP+0x10]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EDI
        PUSH    EBX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_74EF00]
        FLD     DWORD PTR SS:[ESP+0x18]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EDI
        PUSH    EBX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_756400]
        MOV     ECX, DWORD PTR DS:[ESI+0x78C]
        TEST    ECX, ECX
        POP     EDI
        POP     EBX
        JE      SHORT @L00000006
        TEST    DWORD PTR DS:[ESI+0x970], 0x1000
        JE      SHORT @L00000006
        FLD     DWORD PTR SS:[ESP+0x10]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_785C60]

    @L00000006:
        POP     ESI
        RET     0x0C
    }
}
//---------------------------------------------------------------------------

FRAW void f_75A310()
{
    __asm
    {
        PUSH    ESI
        MOV     ESI, ECX
        CMP     DWORD PTR DS:[ESI+0x99C], 0x0
        PUSH    EDI
        JNZ     SHORT @L00000002
        CALL    DWORD PTR DS:[v_6C4E00]
        MOV     ECX, EAX
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_ADB4A8]
        SUB     ECX, DWORD PTR DS:[EAX]
        POP     EAX
        CMP     ECX, 0x3E8
        JBE     SHORT @L00000002
        PUSH    0x0
        MOV     ECX, ESI
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[v_ADB4A8]
        MOV     DWORD PTR DS:[ECX], EAX
        POP     ECX
        CALL    DWORD PTR DS:[v_740940]

    @L00000002:
        FLD     DWORD PTR DS:[ESI+0x9A0]
        MOV     ECX, ESI
        FADD    DWORD PTR SS:[ESP+0xC]
        FSTP    DWORD PTR DS:[ESI+0x9A0]
        CALL    f_74C720                                //CALL    DWORD PTR DS:[v_74C720]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_740990]
        XOR     EDI, EDI
        CMP     DWORD PTR DS:[ESI+0x9D0], EDI
        JBE     SHORT @L00000005
        JMP     SHORT @L00000003
        LEA     EBX, DWORD PTR DS:[EBX]

    @L00000003:
        MOV     EDX, DWORD PTR DS:[ESI+0x9D4]
        MOV     EAX, DWORD PTR DS:[EDX+EDI*0x4]
        TEST    BYTE PTR DS:[EAX+0x4E], 0x1
        JE      SHORT @L00000004
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_74F130]

    @L00000004:
        ADD     EDI, 0x1
        CMP     EDI, DWORD PTR DS:[ESI+0x9D0]
        JB      SHORT @L00000003

    @L00000005:
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_757940]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_74DE30]
        POP     EDI
        POP     ESI
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_74C720()
{
    __asm
    {
        SUB     ESP, 0x2C
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        MOV     EBP, ECX
        PUSH    EDI
        XOR     EAX, EAX
        LEA     EDI, DWORD PTR SS:[EBP+0x9CC]
        MOV     DWORD PTR DS:[EDI+0x4], EAX
        MOV     ECX, DWORD PTR SS:[EBP+0x110]
        MOV     EBX, 0x0FFFF
        XOR     EDX, EDX
        TEST    ECX, ECX
        MOV     DWORD PTR SS:[ESP+0x10], EBP
        MOV     ESI, EBX
        JBE     SHORT @L00000007
        MOV     EBP, DWORD PTR SS:[EBP+0x114]
        MOV     DWORD PTR SS:[ESP+0x14], EBP
        MOV     DWORD PTR SS:[ESP+0x18], ECX
        LEA     ESP, DWORD PTR SS:[ESP]

    @L00000002:
        MOV     ECX, DWORD PTR SS:[EBP]
        MOV     EBP, DWORD PTR DS:[ECX+0x30]
        CMP     EAX, EBP
        MOV     ECX, DWORD PTR DS:[ECX+0x34]
        JG      SHORT @L00000003
        MOV     EAX, EBP

    @L00000003:
        CMP     EDX, ECX
        JG      SHORT @L00000004
        MOV     EDX, ECX

    @L00000004:
        CMP     ESI, EBP
        JL      SHORT @L00000005
        MOV     ESI, EBP

    @L00000005:
        CMP     EBX, ECX
        JL      SHORT @L00000006
        MOV     EBX, ECX

    @L00000006:
        MOV     EBP, DWORD PTR SS:[ESP+0x14]
        ADD     EBP, 0x4
        SUB     DWORD PTR SS:[ESP+0x18], 0x1
        MOV     DWORD PTR SS:[ESP+0x14], EBP
        JNZ     SHORT @L00000002
        MOV     EBP, DWORD PTR SS:[ESP+0x10]

    @L00000007:
        MOV     ECX, DWORD PTR SS:[EBP+0xB4]
        MOV     EBP, DWORD PTR SS:[EBP+0xB8]
        SHR     EBP, 0x2
        ADD     EBP, -0x1
        SHR     ECX, 0x2
        ADD     EAX, 0x1
        MOV     DWORD PTR SS:[ESP+0x34], EBP
        LEA     EBP, DWORD PTR DS:[ECX-0x1]
        SUB     EBX, 0x1
        SUB     ESI, 0x1
        ADD     EDX, 0x1
        CMP     EAX, EBP
        MOV     DWORD PTR SS:[ESP+0x18], EAX
        JL      SHORT @L00000008
        MOV     DWORD PTR SS:[ESP+0x18], EBP

    @L00000008:
        MOV     EAX, DWORD PTR SS:[ESP+0x34]
        CMP     EDX, EAX
        JL      SHORT @L00000009
        MOV     EDX, EAX

    @L00000009:
        XOR     EAX, EAX
        TEST    ESI, ESI
        SETLE   AL
        SUB     EAX, 0x1
        AND     EAX, ESI
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        XOR     EAX, EAX
        TEST    EBX, EBX
        SETLE   AL
        SUB     EAX, 0x1
        AND     EAX, EBX
        CMP     EAX, EDX
        JG      @L00000019
        MOV     ESI, EAX
        IMUL    ESI, ECX
        MOV     EBX, ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x1C]
        IMUL    EBX, EBX, 0x94
        ADD     ESI, ECX
        IMUL    ESI, ESI, 0x94
        SUB     EDX, EAX
        ADD     EDX, 0x1
        MOV     DWORD PTR SS:[ESP+0x28], EBX
        MOV     DWORD PTR SS:[ESP+0x20], ESI
        MOV     DWORD PTR SS:[ESP+0x24], EDX

    @L00000010:
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        CMP     ECX, EAX
        JG      @L00000018
        MOV     EDX, EAX
        SUB     EDX, ECX
        ADD     EDX, 0x1
        MOV     EBX, ESI
        MOV     DWORD PTR SS:[ESP+0x14], EDX
        LEA     ESP, DWORD PTR SS:[ESP]

    @L00000011:
        MOV     ECX, DWORD PTR SS:[ESP+0x10]
        MOV     EBP, DWORD PTR DS:[ECX+0x104]
        MOV     ECX, DWORD PTR DS:[EDI+0x4]
        ADD     ECX, 0x1
        ADD     EBP, EBX
        CMP     ECX, DWORD PTR DS:[EDI]
        JBE     SHORT @L00000017
        MOV     ESI, DWORD PTR DS:[EDI+0xC]
        TEST    ESI, ESI
        JNZ     SHORT @L00000015
        CMP     ECX, 0x40
        MOV     ESI, ECX
        JNB     SHORT @L00000014
        LEA     EAX, DWORD PTR DS:[ECX-0x1]
        AND     EAX, ECX
        JE      SHORT @L00000013
        JMP     SHORT @L00000012
        LEA     ECX, DWORD PTR DS:[ECX]

    @L00000012:
        MOV     ESI, EAX
        LEA     EAX, DWORD PTR DS:[ESI-0x1]
        AND     EAX, ESI
        JNZ     SHORT @L00000012

    @L00000013:
        CMP     ESI, 0x1
        JNB     SHORT @L00000015
        MOV     ESI, 0x1
        JMP     SHORT @L00000015

    @L00000014:
        MOV     DWORD PTR DS:[EDI+0xC], 0x40
        MOV     ESI, 0x40

    @L00000015:
        XOR     EDX, EDX
        MOV     EAX, ECX
        DIV     ESI
        TEST    EDX, EDX
        JE      SHORT @L00000016
        SUB     ESI, EDX
        ADD     ESI, ECX
        MOV     ECX, ESI

    @L00000016:
        PUSH    ECX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_73D1A0]
        MOV     ESI, DWORD PTR SS:[ESP+0x20]
        MOV     EDX, DWORD PTR SS:[ESP+0x14]

    @L00000017:
        MOV     EAX, DWORD PTR DS:[EDI+0x4]
        MOV     ECX, DWORD PTR DS:[EDI+0x8]
        LEA     ECX, DWORD PTR DS:[ECX+EAX*0x4]
        ADD     EAX, 0x1
        ADD     EBX, 0x94
        SUB     EDX, 0x1
        MOV     DWORD PTR DS:[EDI+0x4], EAX
        MOV     DWORD PTR DS:[ECX], EBP
        MOV     DWORD PTR SS:[ESP+0x14], EDX
        JNZ     @L00000011
        MOV     ECX, DWORD PTR SS:[ESP+0x1C]
        MOV     EBX, DWORD PTR SS:[ESP+0x28]

    @L00000018:
        ADD     ESI, EBX
        SUB     DWORD PTR SS:[ESP+0x24], 0x1
        MOV     DWORD PTR SS:[ESP+0x20], ESI
        JNZ     @L00000010

    @L00000019:
        MOV     EBP, DWORD PTR SS:[ESP+0x10]
        MOV     EAX, DWORD PTR SS:[EBP+0x99C]
        XOR     ECX, ECX
        CMP     EAX, ECX
        JE      SHORT @L00000020
        MOVZX   EAX, WORD PTR DS:[EAX+0x3C]
        JMP     SHORT @L00000021

    @L00000020:
        XOR     EAX, EAX

    @L00000021:
        MOVZX   EDX, AX
        XOR     EAX, EAX
        CMP     DWORD PTR SS:[EBP+0x9D0], ECX
        MOV     DWORD PTR SS:[ESP+0x28], EDX
        MOV     DWORD PTR SS:[ESP+0x20], EAX
        JBE     @L00000035
        NOP

    @L00000022:
        MOV     EDX, DWORD PTR SS:[EBP+0x9D4]
        MOV     ESI, DWORD PTR DS:[EDX+EAX*0x4]
        TEST    BYTE PTR DS:[ESI+0x4C], 0x8
        MOV     DWORD PTR SS:[ESP+0x24], ESI
        JE      @L00000034
        MOV     DWORD PTR SS:[ESP+0x2C], ECX
        MOV     DWORD PTR SS:[ESP+0x30], ECX
        MOV     DWORD PTR SS:[ESP+0x34], ECX
        MOV     DWORD PTR SS:[ESP+0x38], ECX
        LEA     EAX, DWORD PTR SS:[ESP+0x34]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x30]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x40]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x3C]
        PUSH    EAX
        PUSH    ESI
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_739CD0]
        MOV     EDI, DWORD PTR SS:[EBP+0xB4]
        MOV     EBX, DWORD PTR SS:[ESP+0x2C]
        IMUL    EDI, EBX
        ADD     EDI, DWORD PTR SS:[EBP+0x9B4]
        CMP     DWORD PTR SS:[EBP+0x99C], 0x0
        JE      @L00000028
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_740930]
        TEST    EAX, EAX
        JE      @L00000028
        CMP     EBX, DWORD PTR SS:[ESP+0x34]
        JGE     @L00000033
        LEA     ESP, DWORD PTR SS:[ESP]

    @L00000023:
        MOV     ESI, DWORD PTR SS:[ESP+0x30]
        CMP     ESI, DWORD PTR SS:[ESP+0x38]
        JGE     @L00000027
        MOV     EDI, EDI

    @L00000024:
        MOV     EAX, DWORD PTR SS:[EBP+0x99C]
        MOV     ECX, DWORD PTR DS:[EAX+0x60]
        SUB     ECX, 0x1
        CMP     ECX, ESI
        JB      SHORT @L00000025
        MOV     ECX, ESI

    @L00000025:
        XOR     EDX, EDX
        TEST    ECX, ECX
        SETL    DL
        SUB     EDX, 0x1
        AND     EDX, ECX
        MOV     ECX, DWORD PTR DS:[EAX+0x6C]
        SUB     ECX, 0x1
        CMP     ECX, EBX
        MOV     EBP, EDX
        JB      SHORT @L00000026
        MOV     ECX, EBX

    @L00000026:
        XOR     EDX, EDX
        TEST    ECX, ECX
        SETL    DL
        SUB     EDX, 0x1
        AND     EDX, ECX
        MOV     ECX, DWORD PTR DS:[EAX+0x68]
        SHL     EDX, CL
        ADD     EDX, EBP
        MOV     ECX, EDX
        MOV     EDX, DWORD PTR SS:[ESP+0x28]
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[EAX+0x2C]
        MOVZX   EDX, WORD PTR DS:[EDX+ECX*0x2]
        AND     EDX, 0xFFFF0FFF
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[EAX+0x30]
        MOVZX   ECX, WORD PTR DS:[EDX+ECX*0x2]
        OR      ECX, 0x0F000
        PUSH    ECX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_00E7A0]
        PUSH    ECX
    // FEAT FMAIN
        CMP     BYTE PTR DS:[bFMAIN], 0
        JNE     @L_FMAIN_G
        MOV     ECX, DWORD PTR DS:[v_AA1E4C]
        MOV     DL, BYTE PTR DS:[EAX+ECX]
        JMP     @L_FMAIN_F
    @L_FMAIN_G:
        MOV     ECX, DWORD PTR DS:[v_AA1E50]            // MOV     DL, BYTE PTR DS:[EAX+6FAA1E4C]
        MOV     DL, BYTE PTR DS:[ECX]                   //
    @L_FMAIN_F:

        POP     ECX
        MOV     EBP, DWORD PTR SS:[ESP+0x10]
        MOV     BYTE PTR DS:[ESI+EDI], DL
        ADD     ESI, 0x1
        CMP     ESI, DWORD PTR SS:[ESP+0x38]
        JL      SHORT @L00000024

    @L00000027:
        ADD     EDI, DWORD PTR SS:[EBP+0xB4]
        ADD     EBX, 0x1
        CMP     EBX, DWORD PTR SS:[ESP+0x34]
        JL      @L00000023
        JMP     SHORT @L00000032

    @L00000028:
        MOV     EAX, DWORD PTR SS:[ESP+0x34]
        CMP     EBX, EAX
        JGE     SHORT @L00000033
        MOV     ECX, DWORD PTR SS:[ESP+0x38]
        MOV     ESI, DWORD PTR SS:[ESP+0x30]
        SUB     EAX, EBX
        MOV     EDX, EAX

    @L00000029:
        CMP     ESI, ECX
        MOV     EAX, ESI
        JGE     SHORT @L00000031
        MOV     EDI, EDI

    @L00000030:
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AA1E50]
        MOV     BL, BYTE PTR DS:[EAX]
        POP     EAX
        MOV     BYTE PTR DS:[EAX+EDI], BL
        ADD     EAX, 0x1
        CMP     EAX, ECX
        JL      SHORT @L00000030

    @L00000031:
        ADD     EDI, DWORD PTR SS:[EBP+0xB4]
        SUB     EDX, 0x1
        JNZ     SHORT @L00000029

    @L00000032:
        MOV     ESI, DWORD PTR SS:[ESP+0x24]

    @L00000033:
        AND     WORD PTR DS:[ESI+0x4C], 0x0FFF7
        MOV     EAX, DWORD PTR SS:[ESP+0x20]
        XOR     ECX, ECX

    @L00000034:
        ADD     EAX, 0x1
        CMP     EAX, DWORD PTR SS:[EBP+0x9D0]
        MOV     DWORD PTR SS:[ESP+0x20], EAX
        JB      @L00000022

    @L00000035:
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x2C
        RET
    }
}
//---------------------------------------------------------------------------


