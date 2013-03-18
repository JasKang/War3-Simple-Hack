//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_308E70()
{
    __asm
    {
        SUB     ESP, 0x10
        PUSH    ESI
        MOV     ESI, ECX
        CMP     DWORD PTR DS:[ESI+0x2C], 0x0
        JE      SHORT @L00000001
        XOR     EAX, EAX
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000001:
        PUSH    EBX
        PUSH    EBP
        XOR     EDX, EDX
        PUSH    EDI
        LEA     ECX, DWORD PTR DS:[EDX+0x1]
        CALL    DWORD PTR DS:[v_300710]
        MOV     EDI, DWORD PTR DS:[EAX+0x1B4]
        TEST    EDI, EDI
        MOV     DWORD PTR SS:[ESP+0x10], EAX
        JE      SHORT @L00000002
        MOV     EAX, DWORD PTR DS:[EDI]
        MOV     EDX, DWORD PTR DS:[EAX+0x18]
        MOV     ECX, EDI
        CALL    NEAR EDX
        MOV     EBP, EAX
        MOV     EAX, DWORD PTR DS:[EDI]
        MOV     EDX, DWORD PTR DS:[EAX+0x20]
        MOV     ECX, EDI
        CALL    NEAR EDX
        MOV     EBX, EAX
        JMP     SHORT @L00000003

    @L00000002:
        XOR     EBP, EBP
        XOR     EBX, EBX

    @L00000003:
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     EDI, DWORD PTR DS:[ECX+0x8]
        CMP     EDI, 0x20
        JA      @L00000007
        JE      @L00000006
        LEA     EAX, DWORD PTR DS:[EDI-0x1]
        CMP     EAX, 0x9
        JA      @L00000009

        // <HAND IMPL>

        /*
                                                        MOVZX   EAX, BYTE PTR DS:[EAX+@L00000039]
                                                        JMP     NEAR DWORD PTR DS:[EAX*0x4+@L00000038]

                                                        @L00000039:
                                                            DB      0x00
                                                            DB      0x00
                                                            DB      0x01        // 2
                                                            DB      0x00
                                                            DB      0x00
                                                            DB      0x00
                                                            DB      0x01        // 6
                                                            DB      0x00
                                                            DB      0x00
                                                            DB      0x00
                                                            MOV     EDI, EDI

                                                        @L00000038:
                                                            DD      @L00000004
                                                            DD      @L00000009
        */

        CMP     EAX, 0x2
        JE      @L_HI_SW_1_G
        CMP     EAX, 0x6
        JE      @L_HI_SW_1_G
        JMP     @L00000004
    @L_HI_SW_1_G:
        JMP     @L00000009

        // <HAND IMPL>

    @L00000004:
        MOV     EDI, DWORD PTR DS:[ECX+0x10]
        TEST    EDI, EDI
        JE      SHORT @L00000005
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3056C0]
        TEST    EAX, EAX
        JNZ     @L00000009
        CMP     DWORD PTR DS:[ESI+0x30], EAX
        JNZ     @L00000009
        MOV     ECX, DWORD PTR SS:[ESP+0x10]
        CMP     DWORD PTR DS:[ECX+0x1AC], EAX
        JE      @L00000009
        TEST    EBP, EBP
        JNZ     @L00000009
        TEST    EDI, EDI
        JE      SHORT @L00000005
        MOV     EDX, ECX
        MOV     EAX, DWORD PTR DS:[EDX+0x24C]
        CMP     DWORD PTR DS:[EAX+0xA0], EBP
        JNZ     @L00000037
        TEST    EDI, EDI
        JE      SHORT @L00000005
        MOV     ECX, DWORD PTR DS:[ECX+0x250]
        CALL    DWORD PTR DS:[v_3783E0]
        TEST    EAX, EAX
        JNZ     @L00000037

    @L00000005:
        MOV     EAX, DWORD PTR SS:[ESP+0x24]
        FLD     DWORD PTR DS:[ESI+0x4FC]
        MOV     EDX, DWORD PTR DS:[EAX+0x10]
        MOV     EAX, DWORD PTR DS:[EAX+0x8]
        PUSH    0x1
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EDX
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_305580]
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000006:
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_305960]
        POP     EDI
        POP     EBP
        POP     EBX
        XOR     EAX, EAX
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000007:
        CMP     EDI, 0x400500CD
        JA      @L00000011
        JE      SHORT @L00000008
        CMP     EDI, 0x22
        JNZ     SHORT @L00000009
        PUSH    0x1
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_306980]
        LEA     EAX, DWORD PTR DS:[EDI-0x21]
        POP     EDI
        POP     EBP
        POP     EBX
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000008:
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3056C0]
        TEST    EAX, EAX
        JNZ     SHORT @L00000009
        MOV     ECX, DWORD PTR SS:[ESP+0x10]
        CMP     DWORD PTR DS:[ECX+0x1AC], EAX
        JE      SHORT @L00000009
        CMP     DWORD PTR DS:[ESI+0x5C], EAX
        JNZ     SHORT @L00000009
        MOV     EDX, DWORD PTR SS:[ESP+0x24]
        MOV     ECX, DWORD PTR DS:[EDX+0x2C]
        MOV     EAX, 0x88888889
        IMUL    ECX
        ADD     EDX, ECX
        SAR     EDX, 0x6
        MOV     EAX, EDX
        SHR     EAX, 0x1F
        ADD     EAX, EDX
        JNS     SHORT @L00000010
        MOV     ECX, DWORD PTR DS:[ESI+0x20]
        TEST    ECX, ECX
        JBE     SHORT @L00000010
        ADD     ECX, -0x1
        PUSH    ECX
        MOV     ECX, ESI
        CALL    f_308C60                                //CALL    DWORD PTR DS:[v_308C60]

    @L00000009:
        POP     EDI
        POP     EBP
        POP     EBX
        XOR     EAX, EAX
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000010:
        TEST    EAX, EAX
        JLE     SHORT @L00000009
        MOV     EAX, DWORD PTR DS:[ESI+0x20]
        ADD     EAX, 0x1
        PUSH    EAX
        MOV     ECX, ESI
        CALL    f_308C60                                //CALL    DWORD PTR DS:[v_308C60]
        POP     EDI
        POP     EBP
        POP     EBX
        XOR     EAX, EAX
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000011:
        CMP     EDI, 0x40060064
        JB      SHORT @L00000009
        CMP     EDI, 0x40060066
        JA      SHORT @L00000009
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3056C0]
        TEST    EAX, EAX
        JNZ     SHORT @L00000009
        MOV     EBP, DWORD PTR SS:[ESP+0x10]
        CMP     DWORD PTR SS:[EBP+0x1AC], EAX
        JE      SHORT @L00000009
        TEST    EBX, EBX
        JNZ     SHORT @L00000009
        CMP     EDI, 0x40060064
        SETE    BL
        XOR     ECX, ECX
        CMP     EDI, 0x40060066
        SETE    CL
        MOV     EDI, ECX
        LEA     ECX, DWORD PTR DS:[EAX+0x2]
        CALL    DWORD PTR DS:[v_62B170]
        MOV     ECX, 0x1
        MOV     DWORD PTR SS:[ESP+0x10], EAX
        CALL    DWORD PTR DS:[v_62B170]
        TEST    EBX, EBX
        JE      SHORT @L00000012
        MOV     EDX, DWORD PTR SS:[EBP+0x24C]
        CMP     DWORD PTR DS:[EDX+0xA0], 0x0
        JE      SHORT @L00000013
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000012:
        TEST    EDI, EDI
        JE      SHORT @L00000016

    @L00000013:
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     ECX, DWORD PTR DS:[ECX+0x10]
        CMP     ECX, 0x204
        JG      SHORT @L00000015
        JE      SHORT @L00000014
        SUB     ECX, 0x103
        CMP     ECX, 0x6
        JA      SHORT @L00000016

        // <HAND IMPL>

        /*
                                                        MOVZX   EDX, BYTE PTR DS:[ECX+@L00000041]
                                                        JMP     NEAR DWORD PTR DS:[EDX*0x4+@L00000040]

                                                        @L00000040:
                                                            DD      @L00000009
                                                            DD      @L00000016

                                                        @L00000041:
                                                            DB      0x00
                                                            DB      0x01        // 1
                                                            DB      0x00
                                                            DB      0x01        // 3
                                                            DB      0x00
                                                            DB      0x01        // 5
                                                            DB      0x00
        */

        CMP     ECX, 0x1
        JE      @L_HI_SW_2_G
        CMP     ECX, 0x3
        JE      @L_HI_SW_2_G
        CMP     ECX, 0x5
        JE      @L_HI_SW_2_G
        JMP     @L00000009
    @L_HI_SW_2_G:
        JMP     @L00000016

        // <HAND IMPL>

    @L00000014:
        FLD     DWORD PTR DS:[ESI+0x500]
        PUSH    0x0
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        PUSH    0x4
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_305580]
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000015:
        SUB     ECX, 0x205
        JE      @L00000036
        SUB     ECX, 0x1
        JE      @L00000035
        SUB     ECX, 0x1
        JE      @L00000034

    @L00000016:
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     ECX, DWORD PTR DS:[ECX+0x10]
        CMP     ECX, 0x208
        JG      @L00000024
        JE      @L00000022
        CMP     ECX, 0x10F
        JG      SHORT @L00000020
        JE      SHORT @L00000019
        CMP     ECX, 0x20
        JE      SHORT @L00000017
        CMP     ECX, 0x101
        JNZ     @L00000025
        TEST    EDI, EDI
        JE      @L00000009
        CMP     DWORD PTR DS:[ESI+0x24], 0x1
        JNZ     @L00000009
        JMP     @L00000032

    @L00000017:
        TEST    EBX, EBX
        JE      SHORT @L00000018
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_303290]

    @L00000018:
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000019:
        TEST    EDI, EDI
        JE      @L00000009
        CMP     DWORD PTR DS:[ESI+0x24], 0x2
        JNZ     @L00000009
        JMP     @L00000032

    @L00000020:
        CMP     ECX, 0x202
        JNZ     @L00000025
        TEST    EBX, EBX
        JE      SHORT @L00000021
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_308CD0]

    @L00000021:
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000022:
        CMP     DWORD PTR DS:[ESI+0x5C], 0x0
        JNZ     @L00000009
        TEST    EBX, EBX
        JE      SHORT @L00000023
        CMP     DWORD PTR DS:[ESI+0x24], 0x0
        JNZ     SHORT @L00000023
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_9361D0]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x1
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_308CA0]
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000023:
        TEST    EDI, EDI
        JE      @L00000033
        CMP     DWORD PTR DS:[ESI+0x24], 0x1
        JNZ     @L00000033
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_9361D0]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x0
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_308CA0]
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000024:
        MOV     EDX, ECX
        SUB     EDX, 0x209
        JE      @L00000030
        SUB     EDX, 0x3
        JE      @L00000029
        SUB     EDX, 0x1
        JE      SHORT @L00000028

    @L00000025:
        TEST    EBX, EBX
        JE      @L00000009
        CMP     ECX, DWORD PTR DS:[ESI+0x484]
        JNZ     @L00000009
        CMP     DWORD PTR SS:[ESP+0x10], 0x0
        JNZ     SHORT @L00000026
        TEST    EAX, EAX
        JE      @L00000009

    @L00000026:
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ECX, DWORD PTR DS:[EAX+0x34]
        CALL    DWORD PTR DS:[v_421E50]
        TEST    EAX, EAX
        JE      SHORT @L00000027
        PUSH    0x0
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        PUSH    EDX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_2781F0]
        FLD     DWORD PTR SS:[ESP+0x18]
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        FLD     DWORD PTR SS:[ESP+0x1C]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_3078B0]

    @L00000027:
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000028:
        TEST    EDI, EDI
        JNZ     @L00000009
        CMP     DWORD PTR DS:[ESI+0x5C], EDI
        JNZ     @L00000009
        MOV     EAX, DWORD PTR DS:[ESI+0x20]
        TEST    EAX, EAX
        JBE     @L00000033
        ADD     EAX, -0x1
        PUSH    EAX
        MOV     ECX, ESI
        CALL    f_308C60                                //CALL    DWORD PTR DS:[v_308C60]
        LEA     EAX, DWORD PTR DS:[EDI+0x1]
        POP     EDI
        POP     EBP
        POP     EBX
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000029:
        TEST    EDI, EDI
        JNZ     @L00000009
        CMP     DWORD PTR DS:[ESI+0x5C], EDI
        JNZ     @L00000009
        MOV     EAX, DWORD PTR DS:[ESI+0x20]
        ADD     EAX, 0x1
        PUSH    EAX
        MOV     ECX, ESI
        CALL    f_308C60                                //CALL    DWORD PTR DS:[v_308C60]
        LEA     EAX, DWORD PTR DS:[EDI+0x1]
        POP     EDI
        POP     EBP
        POP     EBX
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000030:
        CMP     DWORD PTR DS:[ESI+0x5C], 0x0
        JNZ     @L00000009
        TEST    EBX, EBX
        JE      SHORT @L00000031
        CMP     DWORD PTR DS:[ESI+0x24], 0x0
        JNZ     SHORT @L00000031
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_9361D0]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x2
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_308CA0]
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000031:
        TEST    EDI, EDI
        JE      SHORT @L00000033
        CMP     DWORD PTR DS:[ESI+0x24], 0x2
        JNZ     SHORT @L00000033

    @L00000032:
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_9361D0]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x0
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_308CA0]

    @L00000033:
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000034:
        FLD     DWORD PTR DS:[ESI+0x500]
        PUSH    0x0
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        PUSH    0x2
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_305580]
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000035:
        FLD     DWORD PTR DS:[ESI+0x500]
        PUSH    0x0
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        PUSH    0x8
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_305580]
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4

    @L00000036:
        FLD     DWORD PTR DS:[ESI+0x500]
        PUSH    0x0
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        PUSH    0x1
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_305580]

    @L00000037:
        POP     EDI
        POP     EBP
        POP     EBX
        MOV     EAX, 0x1
        POP     ESI
        ADD     ESP, 0x10
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_308C60()
{
    __asm
    {
        XOR     EAX, EAX
        PUSH    ESI
        MOV     ESI, ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x8]
        CMP     EAX, ECX
        SBB     EAX, EAX
        AND     EAX, ECX
        CMP     EAX, 0x5
        JB      SHORT @L00000002
        MOV     EAX, 0x5

    @L00000002:
        CMP     EAX, DWORD PTR DS:[ESI+0x20]
        JE      SHORT @L00000003
        FLD1
        PUSH    0x0
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        MOV     ECX, ESI
        MOV     DWORD PTR DS:[ESI+0x20], EAX
        CALL    f_306B80                                //CALL    DWORD PTR DS:[v_306B80]
        MOV     ECX, DWORD PTR DS:[ESI+0x20]
        CALL    DWORD PTR DS:[v_30A860]

    @L00000003:
        POP     ESI
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_306B80()
{
    __asm
    {
        SUB     ESP, 0x8
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        PUSH    ESI
        PUSH    EDI
        PUSH    EAX
        MOV     ESI, ECX
        CALL    DWORD PTR DS:[v_306B00]
        MOV     EDI, DWORD PTR DS:[ESI+0x20]
        MOV     ECX, EDI
        CALL    f_3019A0                                //CALL    DWORD PTR DS:[v_3019A0]
        FSTP    DWORD PTR SS:[ESP+0x18]
        MOV     EAX, DWORD PTR DS:[ESI+0x24]
        LEA     ECX, DWORD PTR DS:[EAX+EAX*0x2]
        LEA     ECX, DWORD PTR DS:[EDI+ECX*0x2]
        CALL    DWORD PTR DS:[v_301920]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_876608]
        FMUL    QWORD PTR DS:[EAX]
        POP     EAX
        MOV     ECX, EDI
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92EF60]
        FDIV    QWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP+0xC]
        CALL    DWORD PTR DS:[v_3018B0]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_876608]
        FMUL    QWORD PTR DS:[EAX]
        POP     EAX
        PUSH    0x0
        SUB     ESP, 0x8
        MOV     ECX, ESI
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92EF60]
        FDIV    QWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP+0x14]
        FLD     DWORD PTR SS:[ESP+0x20]
        FSTP    DWORD PTR SS:[ESP+0x4]
        FLD     DWORD PTR SS:[ESP+0x24]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x0
        CALL    DWORD PTR DS:[v_305A60]
        FLD     DWORD PTR SS:[ESP+0x14]
        PUSH    0x0
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_936460]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x1
        CALL    DWORD PTR DS:[v_305A60]
        FLD     DWORD PTR SS:[ESP+0x14]
        PUSH    0x0
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        FLD     DWORD PTR SS:[ESP+0x14]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x2
        CALL    DWORD PTR DS:[v_305A60]
        FLD     DWORD PTR SS:[ESP+0x14]
        PUSH    0x0
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_9364DC]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x3
        CALL    DWORD PTR DS:[v_305A60]
        FLD     DWORD PTR SS:[ESP+0x14]
        PUSH    0x0
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        FLDZ
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_876608]
        FMUL    QWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR DS:[v_92EF60]
        FDIV    QWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP+0x24]
        FLD     DWORD PTR SS:[ESP+0x24]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x4
        CALL    DWORD PTR DS:[v_305A60]
        FLD     DWORD PTR SS:[ESP+0x14]
        PUSH    0x0
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        FLD     DWORD PTR SS:[ESP+0x18]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x5
        CALL    DWORD PTR DS:[v_305A60]
        PUSH    0x0
        FLD     DWORD PTR SS:[ESP+0x18]
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        FLDZ
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x6
        CALL    DWORD PTR DS:[v_305A60]
        MOV     EAX, DWORD PTR DS:[ESI+0x20]
        PUSH    EAX
        MOV     EDX, DWORD PTR DS:[v_936490]
        MOV     ECX, DWORD PTR DS:[v_936464]
        CALL    DWORD PTR DS:[v_009E30]
        FSTP    DWORD PTR SS:[ESP+0x18]
        FLDZ
        FLD     DWORD PTR SS:[ESP+0x18]
        FUCOM   ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x44
        JPE     SHORT @L00000002
        PUSH    0x0
        FSTP    ST(0x0)
        MOV     EDX, DWORD PTR DS:[v_936490]
        MOV     ECX, DWORD PTR DS:[v_936464]
        CALL    DWORD PTR DS:[v_009E30]

    @L00000002:
        MOV     EAX, DWORD PTR DS:[ESI+0x20]
        FSTP    DWORD PTR SS:[ESP+0x8]
        PUSH    EAX
        MOV     EDX, DWORD PTR DS:[v_9364A4]
        MOV     ECX, DWORD PTR DS:[v_936464]
        CALL    DWORD PTR DS:[v_009E30]
        FSTP    DWORD PTR SS:[ESP+0x18]
        FLDZ
        FLD     DWORD PTR SS:[ESP+0x18]
        FUCOM   ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x44
        JPE     SHORT @L00000003
        PUSH    0x0
        FSTP    ST(0x0)
        MOV     EDX, DWORD PTR DS:[v_9364A4]
        MOV     ECX, DWORD PTR DS:[v_936464]
        CALL    DWORD PTR DS:[v_009E30]

    @L00000003:
        FSTP    DWORD PTR SS:[ESP+0x18]
        PUSH    0x0
        FLD     DWORD PTR SS:[ESP+0x18]
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        FLD     DWORD PTR SS:[ESP+0x14]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x8
        CALL    DWORD PTR DS:[v_305A60]
        FLD     DWORD PTR SS:[ESP+0x14]
        PUSH    0x1
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        FLD     DWORD PTR SS:[ESP+0x24]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x9
        CALL    DWORD PTR DS:[v_305A60]
        POP     EDI
        POP     ESI
        ADD     ESP, 0x8
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_3019A0()
{
    __asm
    {
        SUB     ESP, 0x18
        CMP     ECX, 0x6
    // FEAT CAMERA
        FLD     DWORD PTR DS:[fCamera]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_936458]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP+0x4]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_936454]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP+0x8]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_936450]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP+0xC]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93644C]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP+0x10]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_936448]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP+0x14]
        JB      SHORT @L00000002
        XOR     EAX, EAX
        FLD     DWORD PTR SS:[ESP+EAX*0x4]
        ADD     ESP, 0x18
        RET

    @L00000002:
        FLD     DWORD PTR SS:[ESP+ECX*0x4]
        ADD     ESP, 0x18
        RET
    }
}
//---------------------------------------------------------------------------


