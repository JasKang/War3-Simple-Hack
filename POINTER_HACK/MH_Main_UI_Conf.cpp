//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_3012E0()
{
    __asm
    {
        MOV     EAX, DWORD PTR SS:[ESP+0x4]
        MOV     EDX, DWORD PTR DS:[EAX+0x8]
        CMP     EDX, 0x10065
        JA      @L00000034
        CMP     EDX, 0x10064
        JNB     @L00000037
        CMP     EDX, 0x20
        JA      @L00000042

        // <HAND IMLP>

        /*                                              JMP     NEAR DWORD PTR DS:[EDX*0x4+@L00000045]

                                                        @L00000045:
                                                            DD      @L00000011  // 0
                                                            DD      @L00000012  // 1
                                                            DD      @L00000013  // 2
                                                            DD      @L00000015  // 3
                                                            DD      @L00000016  // 4
                                                            DD      @L00000017  // 5
                                                            DD      @L00000014  // 6
                                                            DD      @L00000018  // 7
                                                            DD      @L00000019  // 8
                                                            DD      @L00000020  // 9
                                                            DD      @L00000021  // 10
                                                            DD      @L00000022  // 11
                                                            DD      @L00000023  // 12
                                                            DD      @L00000024  // 13
                                                            DD      @L00000025  // 14
                                                            DD      @L00000031  // 15
                                                            DD      @L00000026  // 16
                                                            DD      @L00000027  // 17
                                                            DD      @L00000028  // 18
                                                            DD      @L00000029  // 19
                                                            DD      @L00000030  // 20
                                                            DD      @L00000007  // 21
                                                            DD      @L00000004  // 22
                                                            DD      @L00000005  // 23
                                                            DD      @L00000006  // 24
                                                            DD      @L00000008  // 25
                                                            DD      @L00000009  // 26
                                                            DD      @L00000010  // 27
                                                            DD      @L00000001  // 28
                                                            DD      @L00000002  // 29
                                                            DD      @L00000003  // 30
                                                            DD      @L00000033  // 31
                                                            DD      @L00000032  // 32
        */

        CMP     EDX, 0x0
        JNE     @L_FWD_1
        JMP     FAR @L00000011
    @L_FWD_1:
        CMP     EDX, 0x1
        JNE     @L_FWD_2
        JMP     FAR @L00000012
    @L_FWD_2:
        CMP     EDX, 0x2
        JNE     @L_FWD_3
        JMP     FAR @L00000013
    @L_FWD_3:
        CMP     EDX, 0x3
        JNE     @L_FWD_4
        JMP     FAR @L00000015
    @L_FWD_4:
        CMP     EDX, 0x4
        JNE     @L_FWD_5
        JMP     FAR @L00000016
    @L_FWD_5:
        CMP     EDX, 0x5
        JNE     @L_FWD_6
        JMP     FAR @L00000017
    @L_FWD_6:
        CMP     EDX, 0x6
        JNE     @L_FWD_7
        JMP     FAR @L00000014
    @L_FWD_7:
        CMP     EDX, 0x7
        JNE     @L_FWD_8
        JMP     FAR @L00000018
    @L_FWD_8:
        CMP     EDX, 0x8
        JNE     @L_FWD_9
        JMP     FAR @L00000019
    @L_FWD_9:
        CMP     EDX, 0x9
        JNE     @L_FWD_10
        JMP     FAR @L00000020
    @L_FWD_10:
        CMP     EDX, 0xA
        JNE     @L_FWD_11
        JMP     FAR @L00000021
    @L_FWD_11:
        CMP     EDX, 0xB
        JNE     @L_FWD_12
        JMP     FAR @L00000022
    @L_FWD_12:
        CMP     EDX, 0xC
        JNE     @L_FWD_13
        JMP     FAR @L00000023
    @L_FWD_13:
        CMP     EDX, 0xD
        JNE     @L_FWD_14
        JMP     FAR @L00000024
    @L_FWD_14:
        CMP     EDX, 0xE
        JNE     @L_FWD_15
        JMP     FAR @L00000025
    @L_FWD_15:
        CMP     EDX, 0xF
        JNE     @L_FWD_16
        JMP     FAR @L00000031
    @L_FWD_16:
        CMP     EDX, 0x10
        JNE     @L_FWD_17
        JMP     FAR @L00000026
    @L_FWD_17:
        CMP     EDX, 0x11
        JNE     @L_FWD_18
        JMP     FAR @L00000027
    @L_FWD_18:
        CMP     EDX, 0x12
        JNE     @L_FWD_19
        JMP     FAR @L00000028
    @L_FWD_19:
        CMP     EDX, 0x13
        JNE     @L_FWD_20
        JMP     FAR @L00000029
    @L_FWD_20:
        CMP     EDX, 0x14
        JNE     @L_FWD_21
        JMP     FAR @L00000030
    @L_FWD_21:
        CMP     EDX, 0x15
        JNE     @L_FWD_22
        JMP     FAR @L00000007
    @L_FWD_22:
        CMP     EDX, 0x16
        JNE     @L_FWD_23
        JMP     FAR @L00000004
    @L_FWD_23:
        CMP     EDX, 0x17
        JNE     @L_FWD_24
        JMP     FAR @L00000005
    @L_FWD_24:
        CMP     EDX, 0x18
        JNE     @L_FWD_25
        JMP     FAR @L00000006
    @L_FWD_25:
        CMP     EDX, 0x19
        JNE     @L_FWD_26
        JMP     FAR @L00000008
    @L_FWD_26:
        CMP     EDX, 0x1A
        JNE     @L_FWD_27
        JMP     FAR @L00000009
    @L_FWD_27:
        CMP     EDX, 0x1B
        JNE     @L_FWD_28
        JMP     FAR @L00000010
    @L_FWD_28:
        CMP     EDX, 0x1C
        JNE     @L_FWD_29
        JMP     FAR @L00000001
    @L_FWD_29:
        CMP     EDX, 0x1D
        JNE     @L_FWD_30
        JMP     FAR @L00000002
    @L_FWD_30:
        CMP     EDX, 0x1E
        JNE     @L_FWD_31
        JMP     FAR @L00000003
    @L_FWD_31:
        CMP     EDX, 0x1F
        JNE     @L_FWD_32
        JMP     FAR @L00000033
    @L_FWD_32:
        JMP     FAR @L00000032

        // <HAND IMLP>

    @L00000001:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F90D0]

    @L00000002:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F3FE0]

    @L00000003:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F4060]

    @L00000004:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FC490]

    @L00000005:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FC4F0]

    @L00000006:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FC530]

    @L00000007:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FC440]

    @L00000008:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F6C50]

    @L00000009:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F6E50]

    @L00000010:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FC590]

    @L00000011:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     f_2FC700                                //JMP     DWORD PTR DS:[v_2FC700]

    @L00000012:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FB690]

    @L00000013:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F6EA0]

    @L00000014:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F91A0]

    @L00000015:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     f_2FB760                                //JMP     DWORD PTR DS:[v_2FB760]

    @L00000016:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FB780]

    @L00000017:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FB7A0]

    @L00000018:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F9620]

    @L00000019:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F9690]

    @L00000020:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F96E0]

    @L00000021:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F7060]

    @L00000022:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F70C0]

    @L00000023:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FDAA0]

    @L00000024:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FCA30]

    @L00000025:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FCAE0]

    @L00000026:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_3008A0]

    @L00000027:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F4100]

    @L00000028:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FCAF0]

    @L00000029:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FCB30]

    @L00000030:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FCB40]

    @L00000031:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F7120]

    @L00000032:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FC3C0]

    @L00000033:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FC380]

    @L00000034:
        CMP     EDX, 0x1A0068
        JA      SHORT @L00000036
        JE      @L00000037
        CMP     EDX, 0x5006E
        JA      SHORT @L00000035
        JE      SHORT @L00000037
        CMP     EDX, 0x50065
        JA      @L00000042
        CMP     EDX, 0x50064
        JNB     SHORT @L00000037
        CMP     EDX, 0x30064
        JB      @L00000042
        CMP     EDX, 0x30067
        JBE     SHORT @L00000037
        MOV     EAX, 0x1
        RET     0x4

    @L00000035:
        CMP     EDX, 0x1A0065
        JA      @L00000042
        CMP     EDX, 0x1A0064
        JNB     SHORT @L00000037
        CMP     EDX, 0x0F0101
        JB      SHORT @L00000042
        CMP     EDX, 0x0F0102
        JBE     SHORT @L00000037
        MOV     EAX, 0x1
        RET     0x4

    @L00000036:
        CMP     EDX, 0x40060064
        JA      SHORT @L00000041
        JE      SHORT @L00000040
        CMP     EDX, 0x40040065
        JE      SHORT @L00000039
        CMP     EDX, 0x400500C9
        JNZ     SHORT @L00000042

    @L00000037:
        CMP     DWORD PTR DS:[ECX+0x1AC], 0x0
        JNZ     SHORT @L00000038
        XOR     EAX, EAX
        RET     0x4

    @L00000038:
        CMP     DWORD PTR DS:[ECX+0x1B4], 0x0
        JE      SHORT @L00000042
        MOV     ECX, DWORD PTR DS:[ECX+0x1B4]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        MOV     EAX, DWORD PTR DS:[EDX+0xC]
        JMP     NEAR EAX

    @L00000039:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     f_2F9940                                //JMP     DWORD PTR DS:[v_2F9940]

    @L00000040:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2FDB10]

    @L00000041:
        SUB     EDX, 0x40060066
        JE      SHORT @L00000044
        SUB     EDX, 0x1
        JE      SHORT @L00000043

    @L00000042:
        MOV     EAX, 0x1
        RET     0x4

    @L00000043:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F9730]

    @L00000044:
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        JMP     DWORD PTR DS:[v_2F4160]
        NOP
    }
}
//---------------------------------------------------------------------------

FRAW void f_2FC700()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_81B15B]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x1F8
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x1F4], EAX
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x20C]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     EBP, ECX
        MOV     ECX, DWORD PTR SS:[EBP+0x3FC]
        MOV     DWORD PTR SS:[ESP+0x14], EBP
        CALL    DWORD PTR DS:[v_341450]
        MOV     ESI, EAX
        TEST    ESI, ESI
        JE      @L00000015
        CMP     BYTE PTR DS:[ESI], 0x0
        JE      @L00000015
        CALL    DWORD PTR DS:[v_53E670]
        TEST    EAX, EAX
        JNZ     SHORT @L00000002
        LEA     EDX, DWORD PTR DS:[EAX+0x1]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_7B0FA0]
        TEST    EAX, EAX
        JNZ     @L00000015

    @L00000002:
        PUSH    ESI
        MOV     ECX, EBP
        CALL    f_2F93B0                                //CALL    DWORD PTR DS:[v_2F93B0]
        TEST    EAX, EAX
        JNZ     @L00000015
        CMP     BYTE PTR DS:[ESI], 0x2F
        JNZ     SHORT @L00000003
        CALL    DWORD PTR DS:[v_53E640]
        CMP     EAX, 0x424E4554
        JNZ     SHORT @L00000003
        CALL    DWORD PTR DS:[v_2F9020]
        TEST    EAX, EAX
        JNZ     @L00000015
        PUSH    ESI
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_2F3E60]
        JMP     @L00000015

    @L00000003:
        PUSH    0x0FF
        LEA     EAX, DWORD PTR SS:[ESP+0x10C]
        PUSH    EAX
        PUSH    ESI
        CALL    DWORD PTR DS:[v_6EB666]
        MOV     EDX, EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_5BC6A0]
        PUSH    0x20
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        CALL    DWORD PTR DS:[v_2F5C70]
        PUSH    0x80
        LEA     ECX, DWORD PTR SS:[ESP+0x10C]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x40]
        PUSH    EDX
        MOV     DWORD PTR SS:[ESP+0x220], 0x0
        CALL    DWORD PTR DS:[v_6EB5C4]
        MOV     ECX, DWORD PTR SS:[EBP+0x3FC]
        CALL    DWORD PTR DS:[v_336C90]
        MOV     EBX, EAX
        SUB     EAX, 0x0
        MOV     DWORD PTR SS:[ESP+0x18], EBX
        MOV     DWORD PTR SS:[ESP+0xB8], EBX
        JE      @L00000016
        SUB     EAX, 0x1
        JE      @L00000008
        SUB     EAX, 0x1
        JE      SHORT @L00000005
        LEA     EAX, DWORD PTR DS:[EBX-0x3]
        CMP     EAX, 0x0B
        JA      SHORT @L00000004
        MOV     CL, BL
        PUSH    0x0
        SUB     CL, 0x3
        LEA     EDX, DWORD PTR SS:[ESP+0x24]
        CALL    DWORD PTR DS:[v_2FC020]
        JMP     @L00000013

    @L00000004:
        PUSH    EBX
        PUSH    DWORD PTR DS:[v_936150]
        LEA     ECX, DWORD PTR SS:[ESP+0xD0]
        PUSH    0x40
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x10
        MOV     EDX, 0x4
        LEA     ECX, DWORD PTR SS:[ESP+0xC8]
        CALL    DWORD PTR DS:[v_4CBF60]
        JMP     @L00000013

    @L00000005:
        MOV     ESI, DWORD PTR DS:[v_AB65F4]
        MOV     ESI, DWORD PTR DS:[ESI]
        MOVZX   EDX, WORD PTR DS:[ESI+0x28]
        XOR     EDI, EDI
        MOV     DWORD PTR SS:[ESP+0x14], EDX
        XOR     EBX, EBX
        LEA     EBX, DWORD PTR DS:[EBX]

    @L00000006:
        PUSH    EBX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3A1650]
        CMP     DWORD PTR DS:[EAX+0x270], 0x0
        JE      SHORT @L00000007
        CMP     EBX, DWORD PTR SS:[ESP+0x14]
        JE      SHORT @L00000007
        LEA     ECX, DWORD PTR DS:[EAX+0xF0]
        CALL    DWORD PTR DS:[v_473170]
        TEST    EAX, EAX
        JE      SHORT @L00000007
        MOV     BYTE PTR SS:[ESP+EDI+0xBC], BL
        ADD     EDI, 0x1

    @L00000007:
        ADD     EBX, 0x1
        CMP     EBX, 0x0C
        JB      SHORT @L00000006
        TEST    EDI, EDI
        JE      @L00000012
        PUSH    0x0
        LEA     EAX, DWORD PTR SS:[ESP+0x24]
        PUSH    EAX
        MOV     EDX, EDI
        LEA     ECX, DWORD PTR SS:[ESP+0xC4]
        CALL    DWORD PTR DS:[v_2FAF90]
        JMP     SHORT @L00000012

    @L00000008:
        MOV     ESI, DWORD PTR DS:[v_AB65F4]
        MOV     ESI, DWORD PTR DS:[ESI]
        MOVZX   EBP, WORD PTR DS:[ESI+0x28]
        PUSH    EBP
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_41B420]
        XOR     EDI, EDI
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        XOR     EBX, EBX

    @L00000009:
        PUSH    EBX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     EAX, DWORD PTR DS:[EAX+0x270]
        TEST    EAX, EAX
        JE      SHORT @L00000010
        CMP     EAX, 0x2
        JE      SHORT @L00000010
        CMP     EBX, EBP
        JE      SHORT @L00000010
        MOV     ECX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_276170]
        TEST    EAX, EAX
        JE      SHORT @L00000010
        MOV     BYTE PTR SS:[ESP+EDI+0xBC], BL
        ADD     EDI, 0x1

    @L00000010:
        ADD     EBX, 0x1
        CMP     EBX, 0x0C
        JB      SHORT @L00000009
        TEST    EDI, EDI
        JE      SHORT @L00000011
        PUSH    0x0
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        PUSH    ECX
        MOV     EDX, EDI
        LEA     ECX, DWORD PTR SS:[ESP+0xC4]
        CALL    DWORD PTR DS:[v_2FAF90]

    @L00000011:
        MOV     EBP, DWORD PTR SS:[ESP+0x14]

    @L00000012:
        MOV     EBX, DWORD PTR SS:[ESP+0x18]

    @L00000013:
        XOR     ECX, ECX
        CALL    DWORD PTR DS:[v_53EDD0]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_934218]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        MOVZX   ESI, AL
        LEA     EDX, DWORD PTR SS:[ESP+0x40]
        PUSH    EDX
        PUSH    ESI
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_2FB480]
        MOV     EAX, DWORD PTR SS:[EBP+0x23C]
        TEST    EAX, EAX
        JE      SHORT @L00000014
        MOV     EAX, DWORD PTR DS:[EAX+0xC]
        TEST    EAX, EAX
        JE      SHORT @L00000014
        PUSH    EBX
        LEA     ECX, DWORD PTR SS:[ESP+0x3C]
        PUSH    ECX
        PUSH    ESI
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_34ECC0]

    @L00000014:
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        LEA     EDX, DWORD PTR SS:[ESP+0x38]
        PUSH    EDX
        PUSH    EAX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_416CA0]
        MOV     DWORD PTR SS:[ESP+0x214], -0x1
        PUSH    EAX                                     // +0x4
        MOV     EAX, DWORD PTR DS:[v_8765F8]
        MOV     DWORD PTR SS:[ESP+0x20+0x4], EAX
        POP     EAX

    @L00000015:
        MOV     ECX, DWORD PTR SS:[EBP+0x3FC]
        PUSH    0x0
        CALL    DWORD PTR DS:[v_341460]
        MOV     EAX, 0x1
        MOV     ECX, DWORD PTR SS:[ESP+0x20C]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        MOV     ECX, DWORD PTR SS:[ESP+0x1F4]
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x204
        RET     0x4

    @L00000016:
        PUSH    0x0
        LEA     EDX, DWORD PTR SS:[ESP+0x24]
        MOV     CL, 0x0FD
        CALL    DWORD PTR DS:[v_2FC020]
        JMP     @L00000013
    }
}
//---------------------------------------------------------------------------

FRAW void f_2F93B0()
{
    __asm
    {
    // FEAT UICONF
        PUSH    DWORD PTR SS:[ESP+0x4]
        CALL    MH_SetFeature
        TEST    EAX, EAX
        JZ      @LGOOD
        XOR     EAX, EAX
        INC     EAX
        RET     0x4
    @LGOOD:
        SUB     ESP, 0x14C
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x148], EAX
        PUSH    EBX
        MOV     EBX, DWORD PTR SS:[ESP+0x154]
        CMP     BYTE PTR DS:[EBX], 0x2F
        PUSH    ESI
        MOV     ESI, ECX
        JE      SHORT @L00000002
        XOR     EAX, EAX
        JMP     SHORT @L00000006

    @L00000002:
        PUSH    EBP
        PUSH    EDI
        XOR     EDI, EDI
        LEA     EBP, DWORD PTR DS:[EBX+0x1]
        NOP

    @L00000003:
        MOV     EAX, DWORD PTR DS:[v_934274]
        MOV     EAX, DWORD PTR DS:[EDI*0x8+EAX]
        MOV     ECX, DWORD PTR DS:[v_934270]
        MOV     ECX, DWORD PTR DS:[EDI*0x8+ECX]
        PUSH    EAX
        PUSH    ECX
        PUSH    EBP
        CALL    DWORD PTR DS:[v_6EB68A]
        TEST    EAX, EAX
        JE      SHORT @L00000007
        ADD     EDI, 0x1
        CMP     EDI, 0x8
        JL      SHORT @L00000003

    @L00000004:
        XOR     EAX, EAX

    @L00000005:
        POP     EDI
        POP     EBP

    @L00000006:
        MOV     ECX, DWORD PTR SS:[ESP+0x150]
        POP     ESI
        POP     EBX
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x14C
        RET     0x4

    @L00000007:
        CMP     EDI, 0x7
        JA      SHORT @L00000004

        // <HAND IMLP>

        /*
                                                        JMP     NEAR DWORD PTR DS:[EDI*0x4+@L00000018]

                                                        @L00000018:
                                                            DD      @L00000008  // 0
                                                            DD      @L00000011  // 1
                                                            DD      @L00000012  // 2
                                                            DD      @L00000011  // 3
                                                            DD      @L00000012  // 4
                                                            DD      @L00000015  // 5
                                                            DD      @L00000016  // 6
                                                            DD      @L00000017  // 7
        */

        //

        // <HAND IMLP>

        CMP     EDI, 0x0
        JNE     @L_FWD_1
        JMP     FAR @L00000008
    @L_FWD_1:
        CMP     EDI, 0x1
        JNE     @L_FWD_2
        JMP     FAR @L00000011
    @L_FWD_2:
        CMP     EDI, 0x2
        JNE     @L_FWD_3
        JMP     FAR @L00000012
    @L_FWD_3:
        CMP     EDI, 0x3
        JNE     @L_FWD_4
        JMP     FAR @L00000011
    @L_FWD_4:
        CMP     EDI, 0x4
        JNE     @L_FWD_5
        JMP     FAR @L00000012
    @L_FWD_5:
        CMP     EDI, 0x5
        JNE     @L_FWD_6
        JMP     FAR @L00000015
    @L_FWD_6:
        CMP     EDI, 0x6
        JNE     @L_FWD_7
        JMP     FAR @L00000016
    @L_FWD_7:
        JMP     FAR @L00000017

    @L00000008:
        MOV     EAX, DWORD PTR DS:[v_AB65F4]
        MOV     EAX, DWORD PTR DS:[EAX]
        TEST    EAX, EAX
        JE      SHORT @L00000009
        MOV     EAX, DWORD PTR DS:[EAX+0x30]
        TEST    EAX, EAX
        JE      SHORT @L00000009
        LEA     ECX, DWORD PTR DS:[EAX+0x4]
        CALL    DWORD PTR DS:[v_4C4630]
        TEST    EAX, EAX
        JNZ     SHORT @L00000010

    @L00000009:
        MOV     EAX, DWORD PTR DS:[v_935F9C]

    @L00000010:
        MOV     ESI, DWORD PTR DS:[ESI+0x3EC]
        PUSH    0x0
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_2F6FC0]
        MOV     EAX, 0x1
        JMP     SHORT @L00000005

    @L00000011:
        MOV     EDX, DWORD PTR DS:[v_934274]
        MOV     EDX, DWORD PTR DS:[EDI*0x8+EDX]
        LEA     ECX, DWORD PTR DS:[EDX+EBX+0x1]
        CALL    DWORD PTR DS:[v_2F92F0]
        MOV     EDI, EAX
        CMP     EDI, 0x0C
        JE      @L00000014
        PUSH    EDI
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2F40A0]
        TEST    EAX, EAX
        JNZ     @L00000014
        OR      DWORD PTR DS:[ESI+EDI*0x4+0x1E0], 0x1
        PUSH    0x9F
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        MOV     ECX, DWORD PTR DS:[v_935F84]
        CALL    DWORD PTR DS:[v_5C9650]
        MOV     EDX, 0x1
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2F8F90]
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0xC0]
        PUSH    0x9F
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5A6]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_934218]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        MOV     ECX, DWORD PTR DS:[ESI+0x3EC]
        ADD     ESP, 0x10
        PUSH    0x0
        PUSH    ECX
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EAX
        MOV     DWORD PTR SS:[ESP+0x20], -0x1
        LEA     EAX, DWORD PTR SS:[ESP+0xC4]
        JMP     @L00000013

    @L00000012:
        MOV     EDX, DWORD PTR DS:[v_934274]
        MOV     EDX, DWORD PTR DS:[EDI*0x8+EDX]
        LEA     ECX, DWORD PTR DS:[EDX+EBX+0x1]
        CALL    DWORD PTR DS:[v_2F92F0]
        MOV     EDI, EAX
        CMP     EDI, 0x0C
        JE      SHORT @L00000014
        PUSH    EDI
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2F40A0]
        TEST    EAX, EAX
        JE      SHORT @L00000014
        AND     DWORD PTR DS:[ESI+EDI*0x4+0x1E0], 0xFFFFFFFE
        PUSH    0x9F
        LEA     EDX, DWORD PTR SS:[ESP+0xBC]
        MOV     ECX, DWORD PTR DS:[v_935F6C]
        CALL    DWORD PTR DS:[v_5C9650]
        MOV     EDX, 0x1
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2F8F90]
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0xBC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        PUSH    0x9F
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5A6]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_934218]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        MOV     ECX, DWORD PTR DS:[ESI+0x3EC]
        ADD     ESP, 0x10
        PUSH    0x0
        PUSH    ECX
        LEA     EAX, DWORD PTR SS:[ESP+0x18]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EAX
        MOV     DWORD PTR SS:[ESP+0x1C], -0x1
        LEA     EAX, DWORD PTR SS:[ESP+0x24]

    @L00000013:
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EDX+0x6C]
        PUSH    EAX
        CALL    NEAR EDX

    @L00000014:
        CALL    DWORD PTR DS:[v_53E640]
        XOR     ECX, ECX
        CMP     EAX, 0x424E4554
        SETNE   CL
        MOV     EAX, ECX
        JMP     @L00000005

    @L00000015:
        CALL    DWORD PTR DS:[v_383610]
        MOV     EAX, 0x1
        JMP     @L00000005

    @L00000016:
        MOV     DWORD PTR DS:[ESI+0x1DC], 0x1
        MOV     ESI, DWORD PTR DS:[ESI+0x3EC]
        PUSH    0x0
        MOV     ECX, DWORD PTR DS:[v_935F48]
        CALL    DWORD PTR DS:[v_2F6FC0]
        MOV     EAX, 0x1
        JMP     @L00000005

    @L00000017:
        MOV     DWORD PTR DS:[ESI+0x1DC], 0x0
        MOV     ESI, DWORD PTR DS:[ESI+0x3EC]
        PUSH    0x0
        MOV     ECX, DWORD PTR DS:[v_935F28]
        CALL    DWORD PTR DS:[v_2F6FC0]
        MOV     EAX, 0x1
        JMP     @L00000005
        MOV     EDI, EDI
    }
}
//---------------------------------------------------------------------------


