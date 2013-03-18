//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_364A50()
{
    __asm
    {
        SUB     ESP, 0x14
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x1C]
        TEST    ESI, ESI
        PUSH    EDI
        MOV     EDI, ECX
        JE      @L00000014
        MOV     EDX, DWORD PTR DS:[ESI+0x10]
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        CALL    DWORD PTR DS:[v_03FA30]
        TEST    EAX, EAX
        JE      @L00000014
        XOR     ECX, ECX
        CMP     DWORD PTR DS:[EAX+0xC], 0x2B61676C
        SETNE   CL
        SUB     ECX, 0x1
        AND     ECX, EAX
        MOV     EAX, ECX
        JE      @L00000014
        CMP     DWORD PTR DS:[EAX+0x20], 0x0
        JNZ     @L00000014
        PUSH    EBX
        PUSH    ESI
        LEA     ECX, DWORD PTR DS:[EDI+0x154]
        CALL    DWORD PTR DS:[v_029770]
        FLDZ
        MOV     EAX, DWORD PTR DS:[EDI+0x138]
        FSTP    DWORD PTR SS:[ESP+0xC]
        CMP     EAX, 0x5
        JA      @L00000012

        // <HAND IMLP>

        /*
                                                        JMP     NEAR DWORD PTR DS:[EAX*0x4+@L00000018]

                                                        @L00000018:
                                                            DD      @L00000001
                                                            DD      @L00000002
                                                            DD      @L00000008
                                                            DD      @L00000002
                                                            DD      @L00000001
                                                            DD      @L00000002

        */

        CMP     EAX, 0x0
        JNE     @L_FWD_1
        JMP     FAR @L00000001
    @L_FWD_1:
        CMP     EAX, 0x1
        JNE     @L_FWD_2
        JMP     FAR @L00000002
    @L_FWD_2:
        CMP     EAX, 0x2
        JNE     @L_FWD_3
        JMP     FAR @L00000008
    @L_FWD_3:
        CMP     EAX, 0x3
        JNE     @L_FWD_4
        JMP     FAR @L00000002
    @L_FWD_4:
        CMP     EAX, 0x4
        JNE     @L_FWD_5
        JMP     FAR @L00000001
    @L_FWD_5:
        JMP     FAR @L00000002

        // <HAND IMLP>

    @L00000001:
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        PUSH    EDX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_117320]
        FLD     DWORD PTR DS:[EAX]
        FSTP    DWORD PTR SS:[ESP+0xC]
        JMP     @L00000012

    @L00000002:
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_020640]
        FLD     DWORD PTR DS:[EAX]
        FSTP    DWORD PTR SS:[ESP+0xC]
        MOV     CL, 0x0FF
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93D84C]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        MOV     DWORD PTR SS:[ESP+0x10], 0x0
        FLD     DWORD PTR SS:[ESP+0xC]
        MOV     BYTE PTR SS:[ESP+0x13], CL
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000003
        FSTP    ST(0x1)
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875120]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        FSUBR   ST(0x0), ST(0x1)
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92F8A0]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        FSTCW   WORD PTR SS:[ESP+0x24]
        MOVZX   EAX, WORD PTR SS:[ESP+0x24]
        FMUL    ST(0x1), ST(0x0)
        FXCH    ST(0x1)
        OR      EAX, 0x0C00
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        FADD    ST(0x0), ST(0x0)
        FSUBP   ST(0x1), ST(0x0)
        FLDCW   WORD PTR SS:[ESP+0x14]
        FISTP   DWORD PTR SS:[ESP+0x14]
        MOV     DL, BYTE PTR SS:[ESP+0x14]
        MOV     BYTE PTR SS:[ESP+0x12], DL
        FLDCW   WORD PTR SS:[ESP+0x24]
        JMP     @L00000006

    @L00000003:
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_939F94]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FCOMP   ST(0x1)
        FSTSW   AX
        TEST    AH, 0x5
        JPE     SHORT @L00000004
        FCOM    ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x41
        JPE     SHORT @L00000005
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93C218]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        MOV     BYTE PTR SS:[ESP+0x12], CL
        FDIVR   ST(0x0), ST(0x1)
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92F8A0]
        FMUL    QWORD PTR DS:[EAX]
        POP     EAX
        FSTCW   WORD PTR SS:[ESP+0x24]
        MOVZX   EAX, WORD PTR SS:[ESP+0x24]
        OR      EAX, 0x0C00
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        FLDCW   WORD PTR SS:[ESP+0x14]
        FISTP   DWORD PTR SS:[ESP+0x14]
        MOV     AL, BYTE PTR SS:[ESP+0x14]
        MOV     BYTE PTR SS:[ESP+0x11], AL
        FLDCW   WORD PTR SS:[ESP+0x24]
        JMP     SHORT @L00000007

    @L00000004:
        FSTP    ST(0x1)

    @L00000005:
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_8768B0]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        MOV     BYTE PTR SS:[ESP+0x12], CL
        FDIVR   ST(0x0), ST(0x1)
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92F8A0]
        FMUL    QWORD PTR DS:[EAX]
        POP     EAX
        FSTCW   WORD PTR SS:[ESP+0x24]
        MOVZX   EAX, WORD PTR SS:[ESP+0x24]
        OR      EAX, 0x0C00
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        FLDCW   WORD PTR SS:[ESP+0x14]
        FISTP   DWORD PTR SS:[ESP+0x14]
        MOV     CL, BYTE PTR SS:[ESP+0x14]
        FLDCW   WORD PTR SS:[ESP+0x24]

    @L00000006:
        MOV     BYTE PTR SS:[ESP+0x11], CL

    @L00000007:
        MOV     ECX, DWORD PTR DS:[EDI+0x134]
        TEST    ECX, ECX
        JE      @L00000013
        LEA     EDX, DWORD PTR SS:[ESP+0x10]
        FSTP    ST(0x0)
        PUSH    EDX
    // FEAT GREYHP
        CMP     BYTE PTR DS:[bGREYHP], 0
        JNE     @L_GREYHP_G
        CALL    DWORD PTR DS:[v_60E740]
        JMP     @L_GREYHP_F
    @L_GREYHP_G:
        CALL    GreyHPFunc                              //CALL    DWORD PTR DS:[v_60E740]
    @L_GREYHP_F:

        JMP     @L00000012

    @L00000008:
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2A0210]
        MOV     ECX, ESI
        MOV     EBX, EAX
        CALL    DWORD PTR DS:[v_26EB30]
        MOV     DWORD PTR SS:[ESP+0x24], EAX
        FILD    DWORD PTR SS:[ESP+0x24]
        PUSH    EBX
        MOV     ECX, ESI
        FSTP    DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_26EB50]
        CMP     EBX, 0x1
        MOV     DWORD PTR SS:[ESP+0x24], EAX
        FILD    DWORD PTR SS:[ESP+0x24]
        FSTP    DWORD PTR SS:[ESP+0x24]
        JNZ     SHORT @L00000009
        FLD     DWORD PTR SS:[ESP+0x10]
        FDIV    DWORD PTR SS:[ESP+0x24]
        FSTP    DWORD PTR SS:[ESP+0xC]
        JMP     SHORT @L00000012

    @L00000009:
        ADD     EBX, -0x1
        PUSH    EBX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_26EB50]
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        FILD    DWORD PTR SS:[ESP+0x14]
        FSTP    DWORD PTR SS:[ESP+0x14]
        FLD     DWORD PTR SS:[ESP+0x24]
        FLD     DWORD PTR SS:[ESP+0x14]
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x5
        JPE     SHORT @L00000010
        FLD     DWORD PTR SS:[ESP+0x10]
        FSUB    ST(0x0), ST(0x1)
        FXCH    ST(0x2)
        FSUBRP  ST(0x1), ST(0x0)
        FDIVP   ST(0x1), ST(0x0)
        JMP     SHORT @L00000011

    @L00000010:
        FSTP    ST(0x0)
        FSTP    ST(0x0)
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB0]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX

    @L00000011:
        FSTP    DWORD PTR SS:[ESP+0xC]

    @L00000012:
        FLD     DWORD PTR SS:[ESP+0xC]

    @L00000013:
        MOV     EAX, DWORD PTR DS:[EDI]
        MOV     EDX, DWORD PTR DS:[EAX+0x6C]
        PUSH    ECX
        MOV     ECX, EDI
        FSTP    DWORD PTR SS:[ESP]
        CALL    NEAR EDX
        CMP     DWORD PTR DS:[EDI+0x13C], 0x0
        POP     EBX
        JE      SHORT @L00000017
        PUSH    0x0
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_35A0C0]
        POP     EDI
        POP     ESI
        ADD     ESP, 0x14
        RET     0x4

    @L00000014:
        MOV     ECX, DWORD PTR DS:[EDI+0x154]
        TEST    ECX, ECX
        JE      SHORT @L00000016
        ADD     DWORD PTR DS:[ECX+0x4], -0x1
        JNZ     SHORT @L00000015
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000015:
        MOV     DWORD PTR DS:[EDI+0x154], 0x0

    @L00000016:
        MOV     EAX, DWORD PTR DS:[EDI]
        FLDZ
        MOV     EDX, DWORD PTR DS:[EAX+0x6C]
        PUSH    ECX
        MOV     ECX, EDI
        FSTP    DWORD PTR SS:[ESP]
        CALL    NEAR EDX

    @L00000017:
        POP     EDI
        POP     ESI
        ADD     ESP, 0x14
        RET     0x4
        MOV     EDI, EDI
    }
}
//---------------------------------------------------------------------------


