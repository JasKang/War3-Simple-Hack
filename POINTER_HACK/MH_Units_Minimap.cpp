//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

void    *fpc_f_3625B0   = &f_3625B0;

FRAW void f_36E8B0()
{
    __asm
    {
        PUSH    EBP
        LEA     EBP, DWORD PTR SS:[ESP-0x78]
        SUB     ESP, 0x78
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_820B62]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x160
        PUSH    EBX
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, EBP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[EBP-0xC]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     EBX, ECX
        MOV     DWORD PTR SS:[EBP-0x28], EBX
        LEA     ESI, DWORD PTR DS:[EBX+0xB4]
        PUSH    0x1
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_605CC0]
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR DS:[EDX+0x1]
        CALL    DWORD PTR DS:[v_300710]
        MOV     EDI, DWORD PTR DS:[EAX+0x3BC]
        MOV     ECX, EAX
        MOV     DWORD PTR SS:[EBP+0x30], EDI
        CALL    DWORD PTR DS:[v_2F5ED0]
        PUSH    ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x1C]
        MOV     DWORD PTR SS:[EBP+0x68], EAX
        MOV     DWORD PTR SS:[ESP], 0x0
        CALL    DWORD PTR DS:[v_00CB10]
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x10]
        LEA     ECX, DWORD PTR SS:[EBP+0x1C]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    NEAR EDX
        MOV     EAX, DWORD PTR SS:[EBP+0x1C]
        MOV     ECX, DWORD PTR SS:[EBP+0x20]
        MOV     EDX, DWORD PTR SS:[EBP+0x24]
        LEA     ESI, DWORD PTR DS:[EBX+0x644]
        MOV     DWORD PTR DS:[ESI], EAX
        MOV     EAX, DWORD PTR SS:[EBP+0x28]
        MOV     DWORD PTR DS:[ESI+0x4], ECX
        SUB     ESP, 0x8
        MOV     DWORD PTR DS:[ESI+0x8], EDX
        MOV     DWORD PTR SS:[ESP+0x4], 0x3B03126F
        MOV     ECX, ESI
        MOV     DWORD PTR DS:[ESI+0xC], EAX
        MOV     DWORD PTR SS:[ESP], 0x3B03126F
        CALL    DWORD PTR DS:[v_309B40]
        FLD     DWORD PTR SS:[EBP+0x1C]
        FCHS
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        FLD     DWORD PTR SS:[EBP+0x20]
        FCHS
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_334930]
        LEA     ECX, DWORD PTR SS:[EBP+0x1C]
        CALL    DWORD PTR DS:[v_309B80]
        FSTP    DWORD PTR SS:[EBP+0x6C]
        LEA     ECX, DWORD PTR SS:[EBP+0x1C]
        CALL    DWORD PTR DS:[v_309B90]
        FSTP    DWORD PTR SS:[EBP+0x10]
        PUSH    ECX
        LEA     ECX, DWORD PTR SS:[EBP-0x90]
        MOV     DWORD PTR SS:[ESP], 0x0
        CALL    DWORD PTR DS:[v_00CB10]
        MOV     EDX, DWORD PTR DS:[EDI+0xB4]
        MOV     EDX, DWORD PTR DS:[EDX+0x10]
        LEA     ECX, DWORD PTR DS:[EDI+0xB4]
        LEA     EAX, DWORD PTR SS:[EBP-0x90]
        PUSH    EAX
        MOV     DWORD PTR SS:[EBP-0x34], ECX
        CALL    NEAR EDX
        LEA     ECX, DWORD PTR SS:[EBP-0x80]
        CALL    DWORD PTR DS:[v_00F530]
        LEA     ECX, DWORD PTR SS:[EBP-0x80]
        CALL    DWORD PTR DS:[v_309B80]
        FSTP    DWORD PTR SS:[EBP+0x44]
        LEA     ECX, DWORD PTR SS:[EBP-0x80]
        CALL    DWORD PTR DS:[v_309B90]
        FSTP    DWORD PTR SS:[EBP+0x64]
        PUSH    ECX
        LEA     ECX, DWORD PTR SS:[EBP-0x30]
        MOV     DWORD PTR SS:[ESP], 0x0
        CALL    DWORD PTR DS:[v_00C460]
        PUSH    ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x14]
        MOV     DWORD PTR SS:[ESP], 0x0
        CALL    DWORD PTR DS:[v_00C460]
        PUSH    ECX
        MOV     DWORD PTR SS:[ESP], 0x0
        LEA     ECX, DWORD PTR SS:[EBP-0x24]
        CALL    DWORD PTR DS:[v_00C460]
        PUSH    ECX
        LEA     ECX, DWORD PTR SS:[EBP-0x1C]
        MOV     DWORD PTR SS:[ESP], 0x0
        CALL    DWORD PTR DS:[v_00C460]
        LEA     EAX, DWORD PTR SS:[EBP-0x1C]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[EBP-0x24]
        PUSH    ECX
        MOV     ECX, DWORD PTR SS:[EBP+0x68]
        LEA     EDX, DWORD PTR SS:[EBP+0x14]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[EBP-0x30]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_302400]
        MOV     ECX, DWORD PTR SS:[EBP-0x2C]
        MOV     EDX, DWORD PTR SS:[EBP-0x30]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x3F800000
        MOV     DWORD PTR SS:[ESP+0x4], ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x38]
        MOV     DWORD PTR SS:[ESP], EDX
        CALL    DWORD PTR DS:[v_009A70]
        MOV     EAX, DWORD PTR SS:[EBP-0x20]
        MOV     ECX, DWORD PTR SS:[EBP-0x24]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x3F800000
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        MOV     DWORD PTR SS:[ESP], ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x58]
        CALL    DWORD PTR DS:[v_009A70]
        MOV     EDX, DWORD PTR SS:[EBP+0x18]
        MOV     EAX, DWORD PTR SS:[EBP+0x14]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x3F800000
        MOV     DWORD PTR SS:[ESP+0x4], EDX
        LEA     ECX, DWORD PTR SS:[EBP-0x70]
        MOV     DWORD PTR SS:[ESP], EAX
        CALL    DWORD PTR DS:[v_009A70]
        MOV     ECX, DWORD PTR SS:[EBP-0x18]
        MOV     EDX, DWORD PTR SS:[EBP-0x1C]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x3F800000
        MOV     DWORD PTR SS:[ESP+0x4], ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x4C]
        MOV     DWORD PTR SS:[ESP], EDX
        CALL    DWORD PTR DS:[v_009A70]
        FLD     DWORD PTR SS:[EBP+0x3C]
        FLD     DWORD PTR SS:[EBP-0x6C]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        MOV     EAX, DWORD PTR SS:[EBP+0x3C]
        JE      SHORT @L00000001
        MOV     EAX, DWORD PTR SS:[EBP-0x6C]

    @L00000001:
        FLD     DWORD PTR SS:[EBP+0x38]
        LEA     ESI, DWORD PTR DS:[EBX+0x168]
        FLD     DWORD PTR SS:[EBP+0x58]
        MOV     DWORD PTR DS:[ESI], EAX
        FCOMPP
        MOV     DWORD PTR SS:[EBP+0x68], ESI
        FSTSW   AX
        TEST    AH, 0x41
        MOV     EAX, DWORD PTR SS:[EBP+0x38]
        JE      SHORT @L00000002
        MOV     EAX, DWORD PTR SS:[EBP+0x58]

    @L00000002:
        FLD     DWORD PTR SS:[EBP+0x5C]
        MOV     DWORD PTR DS:[EBX+0x16C], EAX
        FLD     DWORD PTR SS:[EBP+0x50]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        MOV     EAX, DWORD PTR SS:[EBP+0x5C]
        JPO     SHORT @L00000003
        MOV     EAX, DWORD PTR SS:[EBP+0x50]

    @L00000003:
        FLD     DWORD PTR SS:[EBP-0x70]
        MOV     DWORD PTR DS:[EBX+0x170], EAX
        FLD     DWORD PTR SS:[EBP+0x4C]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        MOV     EAX, DWORD PTR SS:[EBP-0x70]
        JPO     SHORT @L00000004
        MOV     EAX, DWORD PTR SS:[EBP+0x4C]

    @L00000004:
        MOV     DWORD PTR DS:[EBX+0x174], EAX
        MOV     EAX, DWORD PTR DS:[v_AB65F4]
        MOV     EAX, DWORD PTR DS:[EAX]
        MOV     EDI, DWORD PTR DS:[EAX+0x34]
        MOV     ECX, DWORD PTR DS:[v_ADB3E8]
        CALL    DWORD PTR DS:[v_00C0E0]
        FSTP    DWORD PTR SS:[EBP+0x70]
        PUSH    0x0
        MOV     EDX, DWORD PTR DS:[v_932A70]
        MOV     ECX, DWORD PTR DS:[v_93B808]
        CALL    DWORD PTR DS:[v_009F90]
        FLD     DWORD PTR DS:[EBX+0x16C]
        MOV     DWORD PTR SS:[EBP+0x74], EAX
        FILD    DWORD PTR SS:[EBP+0x74]
        PUSH    0x0
        MOV     EDX, DWORD PTR DS:[v_932A2C]
        FMUL    DWORD PTR SS:[EBP+0x70]
        MOV     ECX, DWORD PTR DS:[v_93B808]
        FSUBP   ST(0x1), ST(0x0)
        FSTP    DWORD PTR DS:[EBX+0x16C]
        CALL    DWORD PTR DS:[v_009F90]
        MOV     DWORD PTR SS:[EBP+0x74], EAX
        FILD    DWORD PTR SS:[EBP+0x74]
        PUSH    0x0
        MOV     EDX, DWORD PTR DS:[v_93B81C]
        FMUL    DWORD PTR SS:[EBP+0x70]
        MOV     ECX, DWORD PTR DS:[v_93B808]
        FADD    DWORD PTR DS:[EBX+0x174]
        FSTP    DWORD PTR DS:[EBX+0x174]
        CALL    DWORD PTR DS:[v_009F90]
        FLD     DWORD PTR DS:[ESI]
        MOV     DWORD PTR SS:[EBP+0x74], EAX
        FILD    DWORD PTR SS:[EBP+0x74]
        PUSH    0x0
        MOV     EDX, DWORD PTR DS:[v_93B818]
        MOV     ECX, DWORD PTR DS:[v_93B808]
        FMUL    DWORD PTR SS:[EBP+0x70]
        FSUBP   ST(0x1), ST(0x0)
        FSTP    DWORD PTR DS:[ESI]
        CALL    DWORD PTR DS:[v_009F90]
        MOV     DWORD PTR SS:[EBP+0x74], EAX
        FILD    DWORD PTR SS:[EBP+0x74]
        LEA     EAX, DWORD PTR DS:[EBX+0x22C]
        LEA     ECX, DWORD PTR DS:[EBX+0x228]
        FMUL    DWORD PTR SS:[EBP+0x70]
        PUSH    EAX
        PUSH    ECX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI]
        FADD    DWORD PTR DS:[EBX+0x170]
        MOV     DWORD PTR SS:[ESP], ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x34]
        FSTP    DWORD PTR DS:[EBX+0x170]
        CALL    DWORD PTR DS:[v_00C0D0]
        MOV     EDX, DWORD PTR DS:[EBX+0x16C]
        PUSH    EAX
        PUSH    ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x60]
        MOV     DWORD PTR SS:[ESP], EDX
        CALL    DWORD PTR DS:[v_00C0D0]
        PUSH    EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_192620]
        LEA     EAX, DWORD PTR DS:[EBX+0x230]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EBX+0x170]
        LEA     ECX, DWORD PTR DS:[EBX+0x224]
        PUSH    ECX
        PUSH    ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x34]
        MOV     DWORD PTR SS:[ESP], EAX
        CALL    DWORD PTR DS:[v_00C0D0]
        PUSH    EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EBX+0x174]
        MOV     DWORD PTR SS:[ESP], ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x60]
        CALL    DWORD PTR DS:[v_00C0D0]
        PUSH    EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_192620]
        MOV     EDX, DWORD PTR DS:[EBX+0x230]
        MOV     EAX, DWORD PTR DS:[EBX+0x224]
        SUB     EDX, DWORD PTR DS:[EBX+0x22C]
        SUB     EAX, DWORD PTR DS:[EBX+0x228]
        MOV     ECX, ESI
        MOV     DWORD PTR DS:[EBX+0x234], EDX
        MOV     DWORD PTR DS:[EBX+0x238], EAX
        CALL    DWORD PTR DS:[v_309B80]
        FSTP    DWORD PTR SS:[EBP+0x70]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_309B90]
        FSTP    DWORD PTR SS:[EBP+0x74]
        FLD     DWORD PTR SS:[EBP+0x74]
        MOV     ECX, DWORD PTR SS:[EBP+0x74]
        FLD     DWORD PTR SS:[EBP+0x70]
        MOV     DWORD PTR SS:[EBP+0x74], ECX
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x5
        MOV     EAX, DWORD PTR SS:[EBP+0x70]
        JPO     SHORT @L00000005
        MOV     DWORD PTR SS:[EBP+0x74], EAX

    @L00000005:
        FLD     DWORD PTR SS:[EBP+0x74]
        MOV     DWORD PTR DS:[EBX+0x6E4], EAX
        FLD     ST(0x0)
        XOR     EAX, EAX
        FDIVP   ST(0x2), ST(0x0)
        MOV     DWORD PTR DS:[EBX+0x6E8], EAX
        MOV     DWORD PTR DS:[EBX+0x6F0], EAX
        MOV     EAX, DWORD PTR DS:[EBX+0x16C]
        MOV     DWORD PTR DS:[EBX+0x6F4], ECX
        MOV     DWORD PTR DS:[EBX+0x6FC], EAX
        MOV     ECX, ESI
        LEA     EAX, DWORD PTR SS:[EBP-0xFC]
        PUSH    EAX
        FXCH    ST(0x1)
        FSTP    DWORD PTR SS:[EBP+0x74]
        MOV     EDX, DWORD PTR SS:[EBP+0x74]
        MOV     DWORD PTR DS:[EBX+0x20C], EDX
        FDIVP   ST(0x1), ST(0x0)
        FSTP    DWORD PTR SS:[EBP+0x70]
        FLD     DWORD PTR SS:[EBP+0x74]
        FLD     ST(0x0)
        MOV     EDX, DWORD PTR SS:[EBP+0x70]
        FLD1
        MOV     DWORD PTR DS:[EBX+0x210], EDX
        MOV     EDX, DWORD PTR SS:[EBP+0x20]
        FLD     ST(0x0)
        MOV     DWORD PTR DS:[EBX+0x66C], EDX
        FSUBRP  ST(0x2), ST(0x0)
        MOV     EDX, DWORD PTR SS:[EBP+0x1C]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875120]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        MOV     DWORD PTR DS:[EBX+0x670], EDX
        MOV     EDX, DWORD PTR DS:[ECX]
        LEA     ECX, DWORD PTR DS:[EBX+0x654]
        MOV     DWORD PTR DS:[EBX+0x700], EDX
        FMUL    ST(0x2), ST(0x0)
        FXCH    ST(0x2)
        FSTP    DWORD PTR SS:[EBP+0x74]
        FLD     DWORD PTR SS:[EBP+0x70]
        FLD     ST(0x0)
        FSUBP   ST(0x2), ST(0x0)
        FXCH    ST(0x1)
        FMULP   ST(0x2), ST(0x0)
        FXCH    ST(0x1)
        FSTP    DWORD PTR SS:[EBP+0x70]
        FLD     DWORD PTR SS:[EBP+0x6C]
        FLD     ST(0x0)
        FMULP   ST(0x3), ST(0x0)
        FXCH    ST(0x2)
        FSTP    DWORD PTR DS:[EBX+0x69C]
        FLD     DWORD PTR SS:[EBP+0x10]
        FLD     ST(0x0)
        FMULP   ST(0x2), ST(0x0)
        FXCH    ST(0x1)
        FSTP    DWORD PTR DS:[EBX+0x6AC]
        FLD     DWORD PTR SS:[EBP+0x74]
        FMULP   ST(0x2), ST(0x0)
        FXCH    ST(0x1)
        FSTP    DWORD PTR DS:[EBX+0x6B4]
        FMUL    DWORD PTR SS:[EBP+0x70]
        FSTP    DWORD PTR DS:[EBX+0x6B8]
        CALL    DWORD PTR DS:[v_301AC0]
        MOV     ESI, EAX
        LEA     EDI, DWORD PTR DS:[EBX+0x678]
        MOV     ECX, 0x9
        REP     MOVS DWORD PTR ES:[EDI], DWORD PTR DS:[ESI]
        LEA     ECX, DWORD PTR SS:[EBP-0xFC]
        PUSH    ECX
        LEA     ECX, DWORD PTR DS:[EBX+0x69C]
        CALL    DWORD PTR DS:[v_301AC0]
        MOV     ESI, EAX
        LEA     EDI, DWORD PTR DS:[EBX+0x6C0]
        MOV     ECX, 0x9
        LEA     EDX, DWORD PTR SS:[EBP-0xFC]
        REP     MOVS DWORD PTR ES:[EDI], DWORD PTR DS:[ESI]
        PUSH    EDX
        LEA     ECX, DWORD PTR DS:[EBX+0x6E4]
        CALL    DWORD PTR DS:[v_301AC0]
        LEA     EDI, DWORD PTR DS:[EBX+0x708]
        MOV     ECX, 0x9
        MOV     ESI, EAX
        REP     MOVS DWORD PTR ES:[EDI], DWORD PTR DS:[ESI]
        LEA     EAX, DWORD PTR DS:[EBX+0x6E4]
        PUSH    EAX
        LEA     EAX, DWORD PTR DS:[EBX+0x6C0]
        PUSH    EAX
        LEA     EDX, DWORD PTR DS:[EBX+0x678]
        LEA     ECX, DWORD PTR SS:[EBP-0xFC]
        CALL    DWORD PTR DS:[v_4B16F0]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[EBP-0xD8]
        CALL    DWORD PTR DS:[v_4B16F0]
        MOV     ESI, EAX
        LEA     EDI, DWORD PTR DS:[EBX+0x72C]
        MOV     ECX, 0x9
        LEA     EAX, DWORD PTR DS:[EBX+0x69C]
        REP     MOVS DWORD PTR ES:[EDI], DWORD PTR DS:[ESI]
        PUSH    EAX
        LEA     EDX, DWORD PTR DS:[EBX+0x708]
        LEA     ECX, DWORD PTR SS:[EBP-0xD8]
        CALL    DWORD PTR DS:[v_4B16F0]
        LEA     EDX, DWORD PTR DS:[EBX+0x750]
        MOV     ESI, EAX
        MOV     EDI, EDX
        MOV     ECX, 0x9
        LEA     EAX, DWORD PTR DS:[EBX+0x654]
        REP     MOVS DWORD PTR ES:[EDI], DWORD PTR DS:[ESI]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[EBP-0xD8]
        MOV     DWORD PTR SS:[EBP+0x34], EDX
        CALL    DWORD PTR DS:[v_4B16F0]
        MOV     ESI, EAX
        LEA     EDI, DWORD PTR DS:[EBX+0x774]
        MOV     ECX, 0x9
        REP     MOVS DWORD PTR ES:[EDI], DWORD PTR DS:[ESI]
        LEA     ECX, DWORD PTR SS:[EBP-0xB4]
        CALL    DWORD PTR DS:[v_00C850]
        MOV     EDX, 0x0FF
        FLD     DWORD PTR DS:[EBX+0x20C]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_9401B0]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        FMUL    ST(0x1), ST(0x0)
        FXCH    ST(0x1)
        FSTP    DWORD PTR SS:[EBP-0xB4]
        FLD     DWORD PTR DS:[EBX+0x210]
        FMUL    ST(0x0), ST(0x1)
        FSTP    DWORD PTR SS:[EBP-0xA4]
        FLD     DWORD PTR SS:[EBP+0x74]
        FMUL    ST(0x0), ST(0x1)
        FSTP    DWORD PTR SS:[EBP-0x9C]
        FLD     DWORD PTR SS:[EBP+0x70]
        FMUL    ST(0x0), ST(0x1)
        FSTCW   WORD PTR SS:[EBP+0x72]
        MOVZX   EAX, WORD PTR SS:[EBP+0x72]
        FSTP    DWORD PTR SS:[EBP-0x98]
        OR      EAX, 0x0C00
        FLD     DWORD PTR DS:[EBX+0x20C]
        MOV     DWORD PTR SS:[EBP+0x74], EAX
        FLD1
        FLD     ST(0x0)
        FSUBRP  ST(0x2), ST(0x0)
        FXCH    ST(0x1)
        FMUL    ST(0x0), ST(0x2)
        FLDCW   WORD PTR SS:[EBP+0x74]
        FISTP   QWORD PTR SS:[EBP+0x5C]
        MOV     ECX, DWORD PTR SS:[EBP+0x5C]
        SHR     ECX, 0x1
        MOV     DWORD PTR DS:[EBX+0x214], ECX
        FLDCW   WORD PTR SS:[EBP+0x72]
        FSUB    DWORD PTR DS:[EBX+0x210]
        FSTCW   WORD PTR SS:[EBP+0x72]
        MOVZX   EAX, WORD PTR SS:[EBP+0x72]
        FMULP   ST(0x1), ST(0x0)
        OR      EAX, 0x0C00
        MOV     DWORD PTR SS:[EBP+0x74], EAX
        FLDCW   WORD PTR SS:[EBP+0x74]
        FISTP   QWORD PTR SS:[EBP+0x5C]
        MOV     EAX, DWORD PTR SS:[EBP+0x5C]
        SHR     EAX, 0x1
        MOV     DWORD PTR DS:[EBX+0x218], EAX
        ADD     EAX, EAX
        FLDCW   WORD PTR SS:[EBP+0x72]
        SUB     EDX, EAX
        MOV     DWORD PTR SS:[EBP+0x60], EDX
        TEST    EDX, EDX
        FILD    DWORD PTR SS:[EBP+0x60]
        JGE     SHORT @L00000006
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB8]
        FADD    DWORD PTR DS:[EAX]
        POP     EAX

    @L00000006:
        MOV     EAX, DWORD PTR DS:[EBX+0x230]
        SUB     EAX, DWORD PTR DS:[EBX+0x22C]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[EBP+0x60], EAX
        FILD    DWORD PTR SS:[EBP+0x60]
        JGE     SHORT @L00000007
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB8]
        FADD    DWORD PTR DS:[EAX]
        POP     EAX

    @L00000007:
        FDIVP   ST(0x1), ST(0x0)
        ADD     ECX, ECX
        MOV     EDX, 0x0FF
        SUB     ESP, 0x8
        SUB     EDX, ECX
        TEST    EDX, EDX
        MOV     DWORD PTR SS:[EBP+0x60], EDX
        FSTP    DWORD PTR SS:[EBP+0x74]
        FLD     DWORD PTR SS:[EBP+0x74]
        FSTP    DWORD PTR SS:[ESP+0x4]
        FILD    DWORD PTR SS:[EBP+0x60]
        JGE     SHORT @L00000008
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB8]
        FADD    DWORD PTR DS:[EAX]
        POP     EAX

    @L00000008:
        MOV     EAX, DWORD PTR DS:[EBX+0x224]
        SUB     EAX, DWORD PTR DS:[EBX+0x228]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[EBP+0x60], EAX
        FILD    DWORD PTR SS:[EBP+0x60]
        JGE     SHORT @L00000009
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB8]
        FADD    DWORD PTR DS:[EAX]
        POP     EAX

    @L00000009:
        FDIVP   ST(0x1), ST(0x0)
        LEA     ECX, DWORD PTR SS:[EBP+0x5C]
        FSTP    DWORD PTR SS:[EBP+0x74]
        FLD     DWORD PTR SS:[EBP+0x74]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_00C470]
        MOV     ECX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR DS:[EBX+0x21C], ECX
        MOV     EDX, DWORD PTR DS:[EAX+0x4]
        LEA     EAX, DWORD PTR SS:[EBP-0xB4]
        MOV     DWORD PTR DS:[EBX+0x220], EDX
        PUSH    EAX
        LEA     EDX, DWORD PTR DS:[EBX+0x708]
        LEA     ECX, DWORD PTR SS:[EBP-0xD8]
        CALL    DWORD PTR DS:[v_4B16F0]
        MOV     ESI, EAX
        LEA     EDI, DWORD PTR DS:[EBX+0x798]
        MOV     ECX, 0x9
        REP     MOVS DWORD PTR ES:[EDI], DWORD PTR DS:[ESI]
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_36A520]
        LEA     ECX, DWORD PTR DS:[EBX+0x1C0]
        CALL    DWORD PTR DS:[v_4C4660]
        PUSH    EAX
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_33A960]
        PUSH    0x1
        PUSH    0x0
        XOR     EDX, EDX
        MOV     ECX, DWORD PTR DS:[v_940198]
        CALL    DWORD PTR DS:[v_31F530]
        XOR     EDX, EDX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_732360]
        TEST    EAX, EAX
        MOV     DWORD PTR DS:[EBX+0x408], EAX
        JNZ     SHORT @L00000011

    @L00000010:
        XOR     EAX, EAX
        JMP     @L00000046

    @L00000011:
        LEA     ECX, DWORD PTR SS:[EBP-0x10]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[EBP-0x14]
        MOV     ECX, DWORD PTR DS:[v_87604C]
        CALL    DWORD PTR DS:[v_727C00]
        TEST    EAX, EAX
        MOV     DWORD PTR DS:[EBX+0x17C], EAX
        JE      SHORT @L00000010
        LEA     EDX, DWORD PTR DS:[EBX+0x298]
        PUSH    EDX
        XOR     EDX, EDX
        MOV     ECX, DWORD PTR DS:[v_940180]
        LEA     ESI, DWORD PTR DS:[EBX+0x294]
        CALL    DWORD PTR DS:[v_31F530]
        MOV     EDX, ESI
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_727C00]
        TEST    EAX, EAX
        MOV     DWORD PTR DS:[EBX+0x180], EAX
        JE      SHORT @L00000010
        LEA     EAX, DWORD PTR DS:[EBX+0x2A0]
        PUSH    EAX
        XOR     EDX, EDX
        MOV     ECX, DWORD PTR DS:[v_940160]
        LEA     ESI, DWORD PTR DS:[EBX+0x29C]
        CALL    DWORD PTR DS:[v_31F530]
        MOV     EDX, ESI
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_727C00]
        TEST    EAX, EAX
        MOV     DWORD PTR DS:[EBX+0x184], EAX
        JE      SHORT @L00000010
        LEA     ECX, DWORD PTR DS:[EBX+0x2A8]
        PUSH    ECX
        XOR     EDX, EDX
        MOV     ECX, DWORD PTR DS:[v_940140]
        LEA     ESI, DWORD PTR DS:[EBX+0x2A4]
        CALL    DWORD PTR DS:[v_31F530]
        MOV     EDX, ESI
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_727C00]
        TEST    EAX, EAX
        MOV     DWORD PTR DS:[EBX+0x188], EAX
        JE      @L00000010
        LEA     EDX, DWORD PTR DS:[EBX+0x2C8]
        PUSH    EDX
        XOR     EDX, EDX
        MOV     ECX, DWORD PTR DS:[v_940128]
        LEA     ESI, DWORD PTR DS:[EBX+0x2C4]
        CALL    DWORD PTR DS:[v_31F530]
        MOV     EDX, ESI
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_727C00]
        TEST    EAX, EAX
        MOV     DWORD PTR DS:[EBX+0x18C], EAX
        JE      @L00000010
        LEA     EAX, DWORD PTR DS:[EBX+0x2D0]
        PUSH    EAX
        XOR     EDX, EDX
        MOV     ECX, DWORD PTR DS:[v_940114]
        LEA     ESI, DWORD PTR DS:[EBX+0x2CC]
        CALL    DWORD PTR DS:[v_31F530]
        MOV     EDX, ESI
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_727C00]
        TEST    EAX, EAX
        MOV     DWORD PTR DS:[EBX+0x190], EAX
        JE      @L00000010
        PUSH    0x0
        PUSH    0x1F0
        PUSH    DWORD PTR DS:[v_93FB60]
        PUSH    0x40040
        CALL    DWORD PTR DS:[v_6EB5B2]
        MOV     ECX, DWORD PTR DS:[EBX+0x17C]
        MOV     DWORD PTR DS:[EBX+0x1D4], EAX
        AND     EAX, 0xFFFFFFE0
        ADD     EAX, 0x20
        CMP     DWORD PTR DS:[EBX+0x178], 0x0
        MOV     DWORD PTR DS:[EBX+0x1D8], EAX
        MOV     ECX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR SS:[EBP+0x74], 0x10
        MOV     DWORD PTR SS:[EBP+0x70], EAX
        MOV     DWORD PTR SS:[EBP+0x60], ECX
        JE      SHORT @L00000014
        PUSH    EBX
        MOV     ESI, DWORD PTR SS:[EBP+0x60]
        MOV     EDI, DWORD PTR SS:[EBP+0x70]
        MOV     EBX, DWORD PTR DS:[v_939F7C]
        MOV     EBX, DWORD PTR DS:[EBX]

    @L00000012:
        MOV     EAX, DWORD PTR SS:[EBP+0x74]

    @L00000013:
        MOVQ    MM0, QWORD PTR DS:[ESI]
        MOVQ    MM1, QWORD PTR DS:[ESI+0x8]
        MOVQ    MM2, QWORD PTR DS:[ESI+0x10]
        MOVQ    MM3, QWORD PTR DS:[ESI+0x18]
        MOVQ    MM4, QWORD PTR DS:[ESI+0x20]
        MOVQ    MM5, QWORD PTR DS:[ESI+0x28]
        MOVQ    MM6, QWORD PTR DS:[ESI+0x30]
        MOVQ    MM7, QWORD PTR DS:[ESI+0x38]
        MOVQ    QWORD PTR DS:[EDI], MM0
        MOVQ    QWORD PTR DS:[EDI+0x8], MM1
        MOVQ    QWORD PTR DS:[EDI+0x10], MM2
        MOVQ    QWORD PTR DS:[EDI+0x18], MM3
        MOVQ    QWORD PTR DS:[EDI+0x20], MM4
        MOVQ    QWORD PTR DS:[EDI+0x28], MM5
        MOVQ    QWORD PTR DS:[EDI+0x30], MM6
        MOVQ    QWORD PTR DS:[EDI+0x38], MM7
        ADD     ESI, 0x40
        ADD     EDI, 0x40
        DEC     EAX
        JNZ     SHORT @L00000013
        DEC     EBX
        JNZ     SHORT @L00000012
        POP     EBX
        EMMS
        MOV     EBX, DWORD PTR SS:[EBP-0x28]
        JMP     SHORT @L00000015

    @L00000014:
        PUSH    0x40000
        PUSH    ECX
        PUSH    EAX
        CALL    DWORD PTR DS:[v_7E15EC]
        ADD     ESP, 0x0C

    @L00000015:
        CALL    DWORD PTR DS:[v_005720]
        LEA     EDX, DWORD PTR SS:[EBP+0x2C]
        PUSH    EDX
        PUSH    0x8
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_0059C0]
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0
        LEA     ECX, DWORD PTR SS:[EBP-0x28]
        LEA     ESI, DWORD PTR DS:[EBX+0x1D0]
        CALL    DWORD PTR DS:[v_00C7B0]
        MOV     EAX, DWORD PTR DS:[EAX]
        PUSH    ESI
        MOV     ECX, 0x1
        CMP     ECX, DWORD PTR SS:[EBP+0x2C]
        PUSH    DWORD PTR DS:[fpc_f_3625B0]             // PUSH    0x6F3625B0
        PUSH    EBX
        SBB     EDX, EDX
        ADD     EDX, ECX
        PUSH    EAX
        PUSH    EDX
        MOV     EDX, 0x100
        MOV     ECX, EDX
        CALL    DWORD PTR DS:[v_526510]
        TEST    EAX, EAX
        JE      @L00000010
        MOV     ECX, DWORD PTR DS:[ESI]
        CALL    DWORD PTR DS:[v_4DF730]
        TEST    EAX, EAX
        MOV     DWORD PTR DS:[EBX+0x1CC], EAX
        JE      @L00000010
        MOV     ESI, DWORD PTR SS:[EBP+0x10]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        MOV     DWORD PTR SS:[ESP+0x4], ESI
        LEA     ECX, DWORD PTR DS:[EBX+0x1DC]
        MOV     DWORD PTR SS:[ESP], 0x0
        CALL    DWORD PTR DS:[v_334760]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        MOV     DWORD PTR SS:[ESP+0x4], 0x0
        LEA     ECX, DWORD PTR DS:[EBX+0x1E8]
        MOV     DWORD PTR SS:[ESP], 0x0
        CALL    DWORD PTR DS:[v_334760]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        MOV     DWORD PTR SS:[ESP+0x4], ESI
        MOV     ESI, DWORD PTR SS:[EBP+0x6C]
        LEA     ECX, DWORD PTR DS:[EBX+0x1F4]
        MOV     DWORD PTR SS:[ESP], ESI
        CALL    DWORD PTR DS:[v_334760]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        MOV     DWORD PTR SS:[ESP+0x4], 0x0
        LEA     ECX, DWORD PTR DS:[EBX+0x200]
        MOV     DWORD PTR SS:[ESP], ESI
        CALL    DWORD PTR DS:[v_334760]
        FLD     DWORD PTR SS:[EBP+0x44]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_8763A8]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        FMUL    ST(0x1), ST(0x0)
        FXCH    ST(0x1)
        FSTP    DWORD PTR SS:[EBP+0x44]
        FLD     DWORD PTR SS:[EBP+0x44]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_9401B0]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        FLD     ST(0x0)
        FDIVRP  ST(0x2), ST(0x0)
        FXCH    ST(0x1)
        FSTP    DWORD PTR SS:[EBP+0x44]
        FLD     DWORD PTR SS:[EBP+0x64]
        FMULP   ST(0x2), ST(0x0)
        FXCH    ST(0x1)
        FSTP    DWORD PTR SS:[EBP+0x64]
        FDIV    DWORD PTR SS:[EBP+0x64]
        FSTP    DWORD PTR SS:[EBP+0x64]
        FLD     DWORD PTR SS:[EBP+0x44]
        FLD     DWORD PTR SS:[EBP+0x64]
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000016
        FSTP    ST(0x0)
        JMP     SHORT @L00000017

    @L00000016:
        FSTP    ST(0x1)

    @L00000017:
        FSTP    DWORD PTR SS:[EBP+0x6C]
        SUB     ESP, 0x0C
        FLD     DWORD PTR SS:[EBP+0x6C]
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93F140]
        FMUL    QWORD PTR DS:[EAX]
        POP     EAX
        LEA     ECX, DWORD PTR DS:[EBX+0x40C]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875120]
        FMUL    QWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[EBP+0x6C]
        FLD     DWORD PTR SS:[EBP+0x6C]
        MOV     ESI, DWORD PTR SS:[EBP+0x6C]
        FCHS
        MOV     DWORD PTR SS:[ESP+0x4], ESI
        FSTP    DWORD PTR SS:[EBP+0x64]
        MOV     EDI, DWORD PTR SS:[EBP+0x64]
        MOV     DWORD PTR SS:[ESP], EDI
        CALL    DWORD PTR DS:[v_334760]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        MOV     DWORD PTR SS:[ESP+0x4], EDI
        LEA     ECX, DWORD PTR DS:[EBX+0x418]
        MOV     DWORD PTR SS:[ESP], EDI
        CALL    DWORD PTR DS:[v_334760]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        MOV     DWORD PTR SS:[ESP+0x4], ESI
        LEA     ECX, DWORD PTR DS:[EBX+0x424]
        MOV     DWORD PTR SS:[ESP], ESI
        CALL    DWORD PTR DS:[v_334760]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        MOV     DWORD PTR SS:[ESP+0x4], EDI
        LEA     ECX, DWORD PTR DS:[EBX+0x430]
        MOV     DWORD PTR SS:[ESP], ESI
        CALL    DWORD PTR DS:[v_334760]
        XOR     ECX, ECX
        PUSH    ECX
        MOV     EAX, ESP
        OR      ESI, 0xFFFFFFFF
        MOV     DWORD PTR SS:[EBP+0x64], ESP
        MOV     DWORD PTR DS:[EAX], ESI
        CALL    DWORD PTR DS:[v_4E3C80]
        TEST    EAX, EAX
        MOV     DWORD PTR DS:[EBX+0x580], EAX
        JE      @L00000010
        PUSH    0x0
        PUSH    0x255
        PUSH    DWORD PTR DS:[v_93FB60]
        PUSH    0x1C
        CALL    DWORD PTR DS:[v_6EB5B2]
        MOV     DWORD PTR SS:[EBP+0x64], EAX
        MOV     DWORD PTR SS:[EBP+0x44], EAX
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[EBP-0x4], 0x0
        JE      SHORT @L00000018
        PUSH    0x1
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_60FC50]
        JMP     SHORT @L00000019

    @L00000018:
        XOR     EAX, EAX

    @L00000019:
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[EBP-0x4], ESI
        MOV     DWORD PTR DS:[EBX+0x5B4], EAX
        JE      @L00000010
        PUSH    0x0
        PUSH    0x259
        PUSH    DWORD PTR DS:[v_93FB60]
        PUSH    0x1C
        CALL    DWORD PTR DS:[v_6EB5B2]
        MOV     DWORD PTR SS:[EBP+0x64], EAX
        MOV     DWORD PTR SS:[EBP+0x44], EAX
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[EBP-0x4], 0x1
        JE      SHORT @L00000020
        PUSH    0x1
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_60FC50]
        JMP     SHORT @L00000021

    @L00000020:
        XOR     EAX, EAX

    @L00000021:
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[EBP-0x4], ESI
        MOV     DWORD PTR DS:[EBX+0x198], EAX
        JE      @L00000010
        LEA     ECX, DWORD PTR SS:[EBP-0x12C]
        CALL    DWORD PTR DS:[v_00C8E0]
        LEA     ECX, DWORD PTR SS:[EBP-0x16C]
        CALL    DWORD PTR DS:[v_00C970]
        LEA     ECX, DWORD PTR SS:[EBP-0x12C]
        CALL    DWORD PTR DS:[v_526710]
        LEA     ECX, DWORD PTR SS:[EBP-0x16C]
        CALL    DWORD PTR DS:[v_526700]
        PUSH    ECX
        LEA     ECX, DWORD PTR SS:[EBP]
        MOV     DWORD PTR SS:[ESP], 0x0
        CALL    DWORD PTR DS:[v_00CB10]
        MOV     ECX, DWORD PTR SS:[EBP-0x34]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EAX+0x10]
        LEA     EDX, DWORD PTR SS:[EBP]
        PUSH    EDX
        CALL    NEAR EAX
        PUSH    DWORD PTR DS:[v_00F2B0]
        PUSH    0x4
        PUSH    0x0C
        LEA     ECX, DWORD PTR SS:[EBP-0x64]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_002010]
        MOV     EAX, DWORD PTR SS:[EBP+0x8]
        MOV     ECX, DWORD PTR SS:[EBP+0x4]
        MOV     ESI, DWORD PTR SS:[EBP+0x30]
        PUSH    0x0
        LEA     EDX, DWORD PTR SS:[EBP-0x64]
        PUSH    EDX
        SUB     ESP, 0x8
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        MOV     DWORD PTR SS:[ESP], ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_398EA0]
        MOV     EAX, DWORD PTR SS:[EBP]
        MOV     ECX, DWORD PTR SS:[EBP+0x4]
        PUSH    0x0
        LEA     EDX, DWORD PTR SS:[EBP-0x58]
        PUSH    EDX
        SUB     ESP, 0x8
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        MOV     DWORD PTR SS:[ESP], ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_398EA0]
        MOV     EAX, DWORD PTR SS:[EBP+0x8]
        MOV     ECX, DWORD PTR SS:[EBP+0xC]
        PUSH    0x0
        LEA     EDX, DWORD PTR SS:[EBP-0x4C]
        PUSH    EDX
        SUB     ESP, 0x8
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        MOV     DWORD PTR SS:[ESP], ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_398EA0]
        MOV     EAX, DWORD PTR SS:[EBP]
        MOV     ECX, DWORD PTR SS:[EBP+0xC]
        PUSH    0x0
        LEA     EDX, DWORD PTR SS:[EBP-0x40]
        PUSH    EDX
        SUB     ESP, 0x8
        MOV     DWORD PTR SS:[ESP+0x4], EAX
        MOV     DWORD PTR SS:[ESP], ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_398EA0]
        LEA     ECX, DWORD PTR SS:[EBP-0x16C]
        CALL    DWORD PTR DS:[v_526630]
        LEA     ECX, DWORD PTR SS:[EBP-0x12C]
        CALL    DWORD PTR DS:[v_526650]
        MOV     EAX, DWORD PTR DS:[v_A7747C]
        FLD     DWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR DS:[EAX]
        FLD     ST(0x0)
        FCHS
        MOV     EDX, EAX
        FSTP    DWORD PTR SS:[EBP+0x30]
        MOV     DWORD PTR SS:[EBP+0x4C], EAX
        MOV     ECX, DWORD PTR SS:[EBP+0x30]
        MOV     EDI, ECX
        MOV     DWORD PTR SS:[EBP+0x54], EDI
        MOV     DWORD PTR SS:[EBP+0x48], EDX
        MOV     ESI, ECX
        FLD     DWORD PTR SS:[EBP-0x64]
        MOV     ECX, DWORD PTR SS:[EBP-0x64]
        FCOM    ST(0x1)
        MOV     DWORD PTR SS:[EBP+0x50], ESI
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000022
        MOV     DWORD PTR SS:[EBP+0x4C], ECX

    @L00000022:
        FLD     DWORD PTR SS:[EBP+0x54]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000023
        MOV     EDI, ECX
        MOV     DWORD PTR SS:[EBP+0x54], EDI

    @L00000023:
        FLD     DWORD PTR SS:[EBP-0x60]
        MOV     ECX, DWORD PTR SS:[EBP-0x60]
        FCOM    ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x41
        JE      SHORT @L00000024
        MOV     EDX, ECX
        MOV     DWORD PTR SS:[EBP+0x48], EDX

    @L00000024:
        FLD     DWORD PTR SS:[EBP+0x50]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000025
        MOV     ESI, ECX
        MOV     DWORD PTR SS:[EBP+0x50], ESI

    @L00000025:
        FLD     DWORD PTR SS:[EBP+0x4C]
        MOV     ECX, DWORD PTR SS:[EBP-0x58]
        FLD     DWORD PTR SS:[EBP-0x58]
        FCOM    ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x41
        JE      SHORT @L00000026
        MOV     DWORD PTR SS:[EBP+0x4C], ECX

    @L00000026:
        FLD     DWORD PTR SS:[EBP+0x54]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000027
        MOV     EDI, ECX
        MOV     DWORD PTR SS:[EBP+0x54], EDI

    @L00000027:
        FLD     DWORD PTR SS:[EBP+0x48]
        MOV     ECX, DWORD PTR SS:[EBP-0x54]
        FLD     DWORD PTR SS:[EBP-0x54]
        FCOM    ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x41
        JE      SHORT @L00000028
        MOV     EDX, ECX
        MOV     DWORD PTR SS:[EBP+0x48], EDX

    @L00000028:
        FLD     DWORD PTR SS:[EBP+0x50]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000029
        MOV     ESI, ECX
        MOV     DWORD PTR SS:[EBP+0x50], ESI

    @L00000029:
        FLD     DWORD PTR SS:[EBP+0x4C]
        MOV     ECX, DWORD PTR SS:[EBP-0x4C]
        FLD     DWORD PTR SS:[EBP-0x4C]
        FCOM    ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x41
        JE      SHORT @L00000030
        MOV     DWORD PTR SS:[EBP+0x4C], ECX

    @L00000030:
        FLD     DWORD PTR SS:[EBP+0x54]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000031
        MOV     EDI, ECX
        MOV     DWORD PTR SS:[EBP+0x54], EDI

    @L00000031:
        FLD     DWORD PTR SS:[EBP+0x48]
        MOV     ECX, DWORD PTR SS:[EBP-0x48]
        FLD     DWORD PTR SS:[EBP-0x48]
        FCOM    ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x41
        JE      SHORT @L00000032
        MOV     EDX, ECX
        MOV     DWORD PTR SS:[EBP+0x48], EDX

    @L00000032:
        FLD     DWORD PTR SS:[EBP+0x50]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000033
        MOV     ESI, ECX
        MOV     DWORD PTR SS:[EBP+0x50], ESI

    @L00000033:
        FLD     DWORD PTR SS:[EBP+0x4C]
        MOV     ECX, DWORD PTR SS:[EBP-0x40]
        FLD     DWORD PTR SS:[EBP-0x40]
        FCOM    ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x41
        JE      SHORT @L00000034
        MOV     DWORD PTR SS:[EBP+0x4C], ECX

    @L00000034:
        FLD     DWORD PTR SS:[EBP+0x54]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000035
        MOV     EDI, ECX

    @L00000035:
        FLD     DWORD PTR SS:[EBP+0x48]
        MOV     ECX, DWORD PTR SS:[EBP-0x3C]
        FLD     DWORD PTR SS:[EBP-0x3C]
        FCOM    ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x41
        JE      SHORT @L00000036
        MOV     EDX, ECX

    @L00000036:
        FLD     DWORD PTR SS:[EBP+0x50]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000037
        MOV     ESI, ECX

    @L00000037:
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x3F800000
        MOV     DWORD PTR SS:[ESP+0x4], EDX
        MOV     EDX, DWORD PTR SS:[EBP+0x4C]
        LEA     ECX, DWORD PTR SS:[EBP+0x38]
        MOV     DWORD PTR SS:[ESP], EDX
        CALL    DWORD PTR DS:[v_009A70]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x3F800000
        MOV     DWORD PTR SS:[ESP+0x4], ESI
        LEA     ECX, DWORD PTR SS:[EBP+0x58]
        MOV     DWORD PTR SS:[ESP], EDI
        CALL    DWORD PTR DS:[v_009A70]
        FLD     DWORD PTR SS:[EBP+0x38]
        FLD     DWORD PTR DS:[EBX+0x16C]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        JPO     SHORT @L00000038
        MOV     EAX, DWORD PTR DS:[EBX+0x16C]
        MOV     DWORD PTR SS:[EBP+0x38], EAX

    @L00000038:
        FLD     DWORD PTR SS:[EBP+0x38]
        FLD     DWORD PTR DS:[EBX+0x174]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000039
        MOV     ECX, DWORD PTR DS:[EBX+0x174]
        MOV     DWORD PTR SS:[EBP+0x38], ECX

    @L00000039:
        FLD     DWORD PTR SS:[EBP+0x3C]
        MOV     ECX, DWORD PTR SS:[EBP+0x68]
        FLD     DWORD PTR DS:[ECX]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        JPO     SHORT @L00000040
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR SS:[EBP+0x3C], EDX

    @L00000040:
        FLD     DWORD PTR SS:[EBP+0x3C]
        FLD     DWORD PTR DS:[EBX+0x170]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000041
        MOV     EAX, DWORD PTR DS:[EBX+0x170]
        MOV     DWORD PTR SS:[EBP+0x3C], EAX

    @L00000041:
        FLD     DWORD PTR SS:[EBP+0x58]
        FLD     DWORD PTR DS:[EBX+0x16C]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        JPO     SHORT @L00000042
        MOV     EDX, DWORD PTR DS:[EBX+0x16C]
        MOV     DWORD PTR SS:[EBP+0x58], EDX

    @L00000042:
        FLD     DWORD PTR SS:[EBP+0x58]
        FLD     DWORD PTR DS:[EBX+0x174]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000043
        MOV     EAX, DWORD PTR DS:[EBX+0x174]
        MOV     DWORD PTR SS:[EBP+0x58], EAX

    @L00000043:
        FLD     DWORD PTR SS:[EBP+0x5C]
        FLD     DWORD PTR DS:[ECX]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        JPO     SHORT @L00000044
        MOV     ECX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR SS:[EBP+0x5C], ECX

    @L00000044:
        FLD     DWORD PTR SS:[EBP+0x5C]
        FLD     DWORD PTR DS:[EBX+0x170]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JE      SHORT @L00000045
        MOV     EDX, DWORD PTR DS:[EBX+0x170]
        MOV     DWORD PTR SS:[EBP+0x5C], EDX

    @L00000045:
        MOV     ESI, DWORD PTR SS:[EBP+0x34]
        PUSH    ESI
        LEA     EDX, DWORD PTR SS:[EBP+0x38]
        LEA     ECX, DWORD PTR SS:[EBP+0x4C]
        CALL    DWORD PTR DS:[v_00C880]
        MOV     ECX, DWORD PTR DS:[EAX]
        MOV     EDX, DWORD PTR DS:[EAX+0x4]
        MOV     EAX, DWORD PTR DS:[EAX+0x8]
        MOV     DWORD PTR SS:[EBP+0x38], ECX
        MOV     DWORD PTR SS:[EBP+0x3C], EDX
        PUSH    ESI
        LEA     EDX, DWORD PTR SS:[EBP+0x58]
        LEA     ECX, DWORD PTR SS:[EBP+0x4C]
        MOV     DWORD PTR SS:[EBP+0x40], EAX
        CALL    DWORD PTR DS:[v_00C880]
        MOV     ECX, DWORD PTR DS:[EAX]
        MOV     EDX, DWORD PTR DS:[EAX+0x4]
        MOV     EAX, DWORD PTR DS:[EAX+0x8]
        MOV     DWORD PTR SS:[EBP+0x58], ECX
        FLD     DWORD PTR SS:[EBP+0x58]
        FSUB    DWORD PTR SS:[EBP+0x38]
        MOV     DWORD PTR SS:[EBP+0x5C], EDX
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875120]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        SUB     ESP, 0x0C
        FMUL    ST(0x1), ST(0x0)
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        FXCH    ST(0x1)
        LEA     ECX, DWORD PTR SS:[EBP+0x4C]
        MOV     DWORD PTR SS:[EBP+0x60], EAX
        FSTP    DWORD PTR SS:[EBP+0x6C]
        FLD     DWORD PTR SS:[EBP+0x5C]
        FSUB    DWORD PTR SS:[EBP+0x3C]
        FMULP   ST(0x1), ST(0x0)
        FSTP    DWORD PTR SS:[EBP+0x68]
        FLD     DWORD PTR SS:[EBP+0x6C]
        MOV     ESI, DWORD PTR SS:[EBP+0x68]
        FCHS
        MOV     DWORD PTR SS:[ESP+0x4], ESI
        FSTP    DWORD PTR SS:[EBP+0x34]
        MOV     EDI, DWORD PTR SS:[EBP+0x34]
        MOV     DWORD PTR SS:[ESP], EDI
        CALL    DWORD PTR DS:[v_009A70]
        FLD     DWORD PTR SS:[EBP+0x68]
        MOV     ECX, DWORD PTR DS:[EAX]
        FCHS
        MOV     DWORD PTR DS:[EBX+0x584], ECX
        FSTP    DWORD PTR SS:[EBP+0x68]
        MOV     EDX, DWORD PTR DS:[EAX+0x4]
        MOV     ECX, DWORD PTR SS:[EBP+0x68]
        SUB     ESP, 0x0C
        MOV     DWORD PTR DS:[EBX+0x588], EDX
        MOV     EAX, DWORD PTR DS:[EAX+0x8]
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        MOV     DWORD PTR SS:[ESP+0x4], ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x4C]
        MOV     DWORD PTR DS:[EBX+0x58C], EAX
        MOV     DWORD PTR SS:[ESP], EDI
        CALL    DWORD PTR DS:[v_009A70]
        MOV     EDX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR DS:[EBX+0x590], EDX
        MOV     ECX, DWORD PTR DS:[EAX+0x4]
        SUB     ESP, 0x0C
        MOV     DWORD PTR DS:[EBX+0x594], ECX
        MOV     EDX, DWORD PTR DS:[EAX+0x8]
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        MOV     DWORD PTR SS:[ESP+0x4], ESI
        MOV     ESI, DWORD PTR SS:[EBP+0x6C]
        LEA     ECX, DWORD PTR SS:[EBP+0x4C]
        MOV     DWORD PTR DS:[EBX+0x598], EDX
        MOV     DWORD PTR SS:[ESP], ESI
        CALL    DWORD PTR DS:[v_009A70]
        MOV     ECX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR DS:[EBX+0x59C], ECX
        MOV     EDX, DWORD PTR DS:[EAX+0x4]
        MOV     ECX, DWORD PTR SS:[EBP+0x68]
        MOV     DWORD PTR DS:[EBX+0x5A0], EDX
        MOV     EAX, DWORD PTR DS:[EAX+0x8]
        SUB     ESP, 0x0C
        MOV     DWORD PTR SS:[ESP+0x8], 0x0
        MOV     DWORD PTR DS:[EBX+0x5A4], EAX
        MOV     DWORD PTR SS:[ESP+0x4], ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x4C]
        MOV     DWORD PTR SS:[ESP], ESI
        CALL    DWORD PTR DS:[v_009A70]
        MOV     EDX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR DS:[EBX+0x5A8], EDX
        MOV     ECX, DWORD PTR DS:[EAX+0x4]
        MOV     DWORD PTR DS:[EBX+0x5AC], ECX
        MOV     EDX, DWORD PTR DS:[EAX+0x8]
        MOV     DWORD PTR DS:[EBX+0x5B0], EDX
        MOV     EAX, 0x1

    @L00000046:
        MOV     ECX, DWORD PTR SS:[EBP-0xC]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBX
        ADD     EBP, 0x78
        MOV     ESP, EBP
        POP     EBP
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_3625B0()
{
    __asm
    {
        SUB     ECX, 0x0
        JE      SHORT @L00000001
        SUB     ECX, 0x1
        JNZ     SHORT @L00000002
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        MOV     ECX, DWORD PTR SS:[ESP+0xC]
        MOV     DWORD PTR DS:[EAX], 0x400
        MOV     EDX, DWORD PTR DS:[ECX+0x1D8]
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR DS:[EAX], EDX
        RET     0x14

    @L00000001:
        MOV     ECX, DWORD PTR SS:[ESP+0xC]
        CALL    f_362190                                //CALL    DWORD PTR DS:[v_362190]

    @L00000002:
        RET     0x14
    }
}
//---------------------------------------------------------------------------

FRAW void f_362190()
{
    __asm
    {
        PUSH    EBP
        MOV     EBP, ESP
        SUB     ESP, 0x1C
        CMP     DWORD PTR DS:[ECX+0x61C], 0x0
        MOV     EAX, DWORD PTR DS:[v_AB65F4]
        MOV     EAX, DWORD PTR DS:[EAX]
        MOV     EDX, DWORD PTR DS:[EAX+0x3C0]
        PUSH    EBX
        PUSH    ESI
        PUSH    EDI
        MOV     DWORD PTR SS:[EBP-0x4], ECX
        MOV     DWORD PTR SS:[EBP-0x1C], EDX
        JE      @L00000025
        CMP     DWORD PTR DS:[ECX+0x624], 0x0
        JE      @L00000025
        CMP     DWORD PTR DS:[ECX+0x178], 0x0
        MOV     ESI, DWORD PTR DS:[ECX+0x1D8]
        JE      @L00000007
        MOV     EDX, DWORD PTR DS:[ECX+0x218]
        MOV     EAX, EDX
        SHL     EAX, 0x0A
        ADD     ESI, EAX
        MOV     DWORD PTR SS:[EBP-0x10], ESI
        MOV     ESI, DWORD PTR DS:[ECX+0x17C]
        MOV     ESI, DWORD PTR DS:[ESI]
        ADD     ESI, EAX
        MOV     EAX, 0x80
        SUB     EAX, EDX
        ADD     EAX, EAX
        CMP     DWORD PTR DS:[ECX+0x62C], 0x0
        MOV     DWORD PTR SS:[EBP-0x14], ESI
        MOV     DWORD PTR SS:[EBP-0xC], EAX
        MOV     DWORD PTR SS:[EBP-0x8], 0x10
        JE      SHORT @L00000004
        PUSH    EBX
        MOV     ESI, DWORD PTR SS:[EBP-0x14]
        MOV     EDI, DWORD PTR SS:[EBP-0x10]
        MOV     EBX, DWORD PTR SS:[EBP-0xC]

    @L00000002:
        MOV     EAX, DWORD PTR SS:[EBP-0x8]

    @L00000003:
        MOVQ    MM0, QWORD PTR DS:[ESI]
        MOVQ    MM1, QWORD PTR DS:[ESI+0x8]
        MOVQ    MM2, QWORD PTR DS:[ESI+0x10]
        MOVQ    MM3, QWORD PTR DS:[ESI+0x18]
        MOVQ    MM4, QWORD PTR DS:[ESI+0x20]
        MOVQ    MM5, QWORD PTR DS:[ESI+0x28]
        MOVQ    MM6, QWORD PTR DS:[ESI+0x30]
        MOVQ    MM7, QWORD PTR DS:[ESI+0x38]
        MOVQ    QWORD PTR DS:[EDI], MM0
        MOVQ    QWORD PTR DS:[EDI+0x8], MM1
        MOVQ    QWORD PTR DS:[EDI+0x10], MM2
        MOVQ    QWORD PTR DS:[EDI+0x18], MM3
        MOVQ    QWORD PTR DS:[EDI+0x20], MM4
        MOVQ    QWORD PTR DS:[EDI+0x28], MM5
        MOVQ    QWORD PTR DS:[EDI+0x30], MM6
        MOVQ    QWORD PTR DS:[EDI+0x38], MM7
        ADD     ESI, 0x40
        ADD     EDI, 0x40
        DEC     EAX
        JNZ     SHORT @L00000003
        DEC     EBX
        JNZ     SHORT @L00000002
        POP     EBX
        EMMS
        JMP     @L00000011

    @L00000004:
        MOV     EAX, 0xFF000000
        MOV     DWORD PTR SS:[EBP-0x18], EAX
        MOV     DWORD PTR SS:[EBP-0x14], EAX
        MOV     ESI, DWORD PTR SS:[EBP-0x10]
        MOV     EDI, DWORD PTR SS:[EBP-0xC]
        MOVQ    MM0, QWORD PTR SS:[EBP-0x18]
        MOVQ    MM1, QWORD PTR SS:[EBP-0x18]
        MOVQ    MM2, QWORD PTR SS:[EBP-0x18]
        MOVQ    MM3, QWORD PTR SS:[EBP-0x18]
        MOVQ    MM4, QWORD PTR SS:[EBP-0x18]
        MOVQ    MM5, QWORD PTR SS:[EBP-0x18]
        MOVQ    MM6, QWORD PTR SS:[EBP-0x18]
        MOVQ    MM7, QWORD PTR SS:[EBP-0x18]

    @L00000005:
        MOV     EAX, DWORD PTR SS:[EBP-0x8]

    @L00000006:
        MOVQ    QWORD PTR DS:[ESI], MM0
        MOVQ    QWORD PTR DS:[ESI+0x8], MM1
        MOVQ    QWORD PTR DS:[ESI+0x10], MM2
        MOVQ    QWORD PTR DS:[ESI+0x18], MM3
        MOVQ    QWORD PTR DS:[ESI+0x20], MM4
        MOVQ    QWORD PTR DS:[ESI+0x28], MM5
        MOVQ    QWORD PTR DS:[ESI+0x30], MM6
        MOVQ    QWORD PTR DS:[ESI+0x38], MM7
        ADD     ESI, 0x40
        DEC     EAX
        JNZ     SHORT @L00000006
        DEC     EDI
        JNZ     SHORT @L00000005
        EMMS
        JMP     SHORT @L00000011

    @L00000007:
        CMP     DWORD PTR DS:[ECX+0x640], 0x0
        MOV     EDX, DWORD PTR DS:[ECX+0x17C]
        MOV     EDI, DWORD PTR DS:[EDX]
        MOV     EAX, 0x40000
        JE      SHORT @L00000008
        MOV     EDX, DWORD PTR DS:[ECX+0x218]
        MOV     EAX, EDX
        SHL     EAX, 0x0A
        ADD     ESI, EAX
        ADD     EDI, EAX
        MOV     EAX, 0x100
        SUB     EAX, EDX
        SUB     EAX, EDX
        SHL     EAX, 0x0A

    @L00000008:
        CMP     DWORD PTR DS:[ECX+0x62C], 0x0
        PUSH    EAX
        JE      SHORT @L00000009
        PUSH    EDI
        PUSH    ESI
        CALL    DWORD PTR DS:[v_7E15EC]
        JMP     SHORT @L00000010

    @L00000009:
        PUSH    0x0
        PUSH    ESI
        CALL    DWORD PTR DS:[v_7E11C2]

    @L00000010:
        MOV     EAX, DWORD PTR SS:[EBP-0x4]
        ADD     ESP, 0x0C
        MOV     DWORD PTR DS:[EAX+0x640], 0x1
        MOV     ECX, EAX

    @L00000011:
        CALL    DWORD PTR DS:[v_356580]
        MOV     ESI, DWORD PTR SS:[EBP-0x4]
        XOR     EBX, EBX
        CMP     DWORD PTR DS:[ESI+0x634], EBX
        JE      SHORT @L00000012
        PUSH    EBX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3567F0]
        MOV     ECX, ESI
        CALL    f_361390                                //CALL    DWORD PTR DS:[v_361390]

    @L00000012:
        MOV     EDI, DWORD PTR DS:[ESI+0x63C]
        MOV     ECX, 0x0D
        ADD     EDI, 0x1FF
        CALL    DWORD PTR DS:[v_4C34D0]
        MOV     ECX, DWORD PTR DS:[EAX+0x10]
        MOV     EAX, DWORD PTR DS:[ECX]
        CMP     EAX, EBX
        JE      SHORT @L00000013
        TEST    DWORD PTR DS:[EAX+0x4], EDI
        JE      SHORT @L00000013
        MOV     ECX, 0x1
        JMP     SHORT @L00000014

    @L00000013:
        XOR     ECX, ECX

    @L00000014:
        MOV     EAX, 0x1
        SAR     EAX, CL
        XOR     EDX, EDX
        CMP     EAX, EBX
        SETE    DL
        ADD     DWORD PTR DS:[ESI+0x814], EDX
        CMP     EAX, EBX
        MOV     ECX, DWORD PTR DS:[ESI+0x814]
        JE      SHORT @L00000015
        CMP     DWORD PTR DS:[ESI+0x63C], EBX
        JNZ     SHORT @L00000016

    @L00000015:
        CMP     ECX, 0x264
        JNZ     SHORT @L00000017
        MOV     EDX, 0x1
        MOV     ECX, 0x200
        MOV     DWORD PTR DS:[ESI+0x814], EBX
        CALL    DWORD PTR DS:[v_34D800]
        JMP     SHORT @L00000017

    @L00000016:
        MOV     ECX, ESI
        CALL    f_356240                                //CALL    DWORD PTR DS:[v_356240]

    @L00000017:
        CMP     DWORD PTR DS:[ESI+0x634], EBX
        JE      SHORT @L00000018
        CMP     DWORD PTR SS:[EBP-0x1C], EBX
        JE      SHORT @L00000018
        PUSH    0x1
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3567F0]

    @L00000018:
        MOV     EDX, DWORD PTR DS:[ESI+0x218]
        MOV     ECX, DWORD PTR DS:[ESI+0x214]
        SUB     ECX, EDX
        JNS     SHORT @L00000019
        NEG     ECX

    @L00000019:
        FLD     DWORD PTR DS:[ESI+0x20C]
        FLD     DWORD PTR DS:[ESI+0x210]
        FUCOMPP
        FSTSW   AX
        TEST    AH, 0x44
        JPO     @L00000024
        CMP     ECX, 0x6
        JLE     @L00000024
        FLD     DWORD PTR DS:[ESI+0x20C]
        MOV     ECX, DWORD PTR DS:[ESI+0x7F4]
        FLD     DWORD PTR DS:[ESI+0x210]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        MOV     EAX, DWORD PTR DS:[ESI+0x1D8]
        JNZ     @L00000021
        MOV     EDI, 0x40
        JMP     SHORT @L00000020
        LEA     ECX, DWORD PTR DS:[ECX]

    @L00000020:
        MOV     EDX, 0x0FF
        SUB     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4]
        MOV     EDX, 0x0FE
        SUB     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4]
        MOV     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4]
        MOV     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4-0x4], ECX
        MOV     EDX, 0x1FF
        SUB     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4]
        MOV     EDX, 0x1FE
        SUB     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4]
        MOV     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4+0x400], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4+0x400]
        MOV     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4+0x3FC], ECX
        MOV     EDX, 0x2FF
        SUB     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4]
        MOV     EDX, 0x2FE
        SUB     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4]
        MOV     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4+0x800], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4+0x800]
        MOV     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4+0x7FC], ECX
        MOV     EDX, 0x3FF
        SUB     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4]
        MOV     EDX, 0x3FE
        SUB     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4], ECX
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4]
        MOV     EDX, DWORD PTR DS:[ESI+0x214]
        LEA     EDX, DWORD PTR DS:[EAX+EDX*0x4+0xC00]
        MOV     DWORD PTR DS:[EDX], ECX
        MOV     EDX, DWORD PTR DS:[ESI+0x214]
        MOV     DWORD PTR DS:[EAX+EDX*0x4+0xBFC], ECX
        ADD     EAX, 0x1000
        SUB     EDI, 0x1
        JNZ     @L00000020
        MOV     DWORD PTR DS:[ESI+0x61C], EBX
        POP     EDI
        POP     ESI
        POP     EBX
        MOV     ESP, EBP
        POP     EBP
        RET

    @L00000021:
        SHL     EDX, 0x0A
        LEA     EAX, DWORD PTR DS:[EDX+EAX-0x400]
        MOV     EDI, 0x200

    @L00000022:
        MOV     EDX, EAX
        ADD     EAX, 0x4
        SUB     EDI, 0x1
        MOV     DWORD PTR DS:[EDX], ECX
        JNZ     SHORT @L00000022
        MOV     EAX, 0x100
        SUB     EAX, DWORD PTR DS:[ESI+0x218]
        MOV     EDI, 0x200
        SHL     EAX, 0x0A
        ADD     EAX, DWORD PTR DS:[ESI+0x1D8]
        JMP     SHORT @L00000023
        LEA     ECX, DWORD PTR DS:[ECX]

    @L00000023:
        MOV     EDX, EAX
        ADD     EAX, 0x4
        SUB     EDI, 0x1
        MOV     DWORD PTR DS:[EDX], ECX
        JNZ     SHORT @L00000023

    @L00000024:
        MOV     DWORD PTR DS:[ESI+0x61C], EBX

    @L00000025:
        POP     EDI
        POP     ESI
        POP     EBX
        MOV     ESP, EBP
        POP     EBP
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_361390()
{
    __asm
    {
        PUSH    EBP
        MOV     EBP, ESP
        AND     ESP, 0xFFFFFFF8
        SUB     ESP, 0x74
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x70], EAX
        PUSH    EBX
        PUSH    ESI
        PUSH    EDI
        MOV     EDI, ECX
        XOR     EBX, EBX
        CMP     DWORD PTR DS:[EDI+0x624], EBX
        JE      @L00000064
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        MOV     ESI, DWORD PTR DS:[ECX+0x34]
        PUSH    EAX
        MOV     DWORD PTR SS:[ESP+0x24], ECX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     DWORD PTR SS:[ESP+0x34], EAX
        MOVZX   EAX, BYTE PTR DS:[EAX+0x30]
        LEA     ECX, DWORD PTR DS:[EBX+0xD]
        MOV     DWORD PTR SS:[ESP+0x28], EAX
        CALL    DWORD PTR DS:[v_4C34D0]
        MOV     ECX, DWORD PTR DS:[EAX+0x10]
        MOV     EAX, DWORD PTR DS:[ECX]
        CMP     EAX, EBX
        JE      SHORT @L00000002
        TEST    DWORD PTR DS:[EAX+0x4], 0x200
        JE      SHORT @L00000002
        LEA     ECX, DWORD PTR DS:[EBX+0x1]
        JMP     SHORT @L00000003

    @L00000002:
        XOR     ECX, ECX

    @L00000003:
        MOV     EAX, 0x1
        SAR     EAX, CL
        XOR     EDX, EDX
        CMP     EAX, EBX
        SETE    DL
        ADD     DWORD PTR DS:[EDI+0x814], EDX
        CMP     EAX, EBX
        JE      SHORT @L00000004
        CALL    DWORD PTR DS:[v_53F160]
        TEST    EAX, EAX
        JE      SHORT @L00000005
        TEST    BYTE PTR DS:[ESI+0x24], 0x1
        JE      SHORT @L00000005

    @L00000004:
        MOV     DWORD PTR SS:[ESP+0x30], EBX
        JMP     SHORT @L00000008

    @L00000005:
        CMP     DWORD PTR DS:[ESI+0x14], EBX
        JNZ     SHORT @L00000006
        CMP     DWORD PTR DS:[ESI+0x10], EBX
        JNZ     SHORT @L00000006
        MOV     ECX, 0x1
        JMP     SHORT @L00000007

    @L00000006:
        XOR     ECX, ECX

    @L00000007:
    // FEAT UMINI
        XOR     EAX, EAX                                //MOV     EAX, 0x1
        CMP     BYTE PTR DS:[bUMINI], 0
        SETE    AL

        SHR     EAX, CL
        CMP     EAX, EBX
        MOV     DWORD PTR SS:[ESP+0x30], EAX
        JNZ     SHORT @L00000009

    @L00000008:
        CMP     DWORD PTR DS:[EDI+0x814], 0x264
        JNZ     SHORT @L00000009
        MOV     ECX, 0x0D
        MOV     DWORD PTR DS:[EDI+0x814], EBX
        CALL    DWORD PTR DS:[v_4C34D0]
        MOV     EAX, DWORD PTR DS:[EAX+0x10]
        MOV     EAX, DWORD PTR DS:[EAX]
        OR      DWORD PTR DS:[EAX+0x4], 0x200

    @L00000009:
        MOV     ECX, DWORD PTR DS:[EDI+0x228]
        MOV     EDX, DWORD PTR DS:[EDI+0x22C]
        MOV     EAX, DWORD PTR DS:[EDI+0x224]
        MOV     DWORD PTR SS:[ESP+0x50], ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x230]
        MOV     DWORD PTR SS:[ESP+0x4C], EDX
        MOV     EDX, DWORD PTR DS:[EDI+0x7BC]
        MOV     DWORD PTR SS:[ESP+0x58], EAX
        MOV     EAX, DWORD PTR DS:[EDI+0x7C0]
        MOV     DWORD PTR SS:[ESP+0x54], ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x7C4]
        MOV     DWORD PTR SS:[ESP+0x48], EDX
        MOV     EDX, DWORD PTR DS:[EDI+0x7D8]
        LEA     EBX, DWORD PTR DS:[EDI+0x23C]
        MOV     DWORD PTR SS:[ESP+0x24], EAX
        MOV     DWORD PTR SS:[ESP+0x38], ECX
        MOV     DWORD PTR SS:[ESP+0x2C], EDX
        XOR     ESI, ESI
        MOV     DWORD PTR SS:[ESP+0x10], EBX

    @L00000010:
        CMP     ESI, DWORD PTR SS:[ESP+0x28]
        JNZ     SHORT @L00000011
        MOV     EAX, DWORD PTR SS:[ESP+0x48]
        MOV     DWORD PTR DS:[EBX], EAX
        JMP     @L00000019

    @L00000011:
        CMP     DWORD PTR DS:[EDI+0x638], 0x0
        JE      SHORT @L00000012
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_314B50]
        MOV     ECX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR DS:[EBX], ECX
        JMP     @L00000019

    @L00000012:
        MOV     ECX, DWORD PTR SS:[ESP+0x34]
        ADD     ECX, 0x0F0
        CALL    DWORD PTR DS:[v_473170]
        TEST    EAX, EAX
        JE      @L00000017
        MOV     ECX, DWORD PTR SS:[ESP+0x34]
        ADD     ECX, 0x0E0
        CALL    DWORD PTR DS:[v_473170]
        TEST    EAX, EAX
        JNZ     @L00000017
        MOV     ECX, DWORD PTR SS:[ESP+0x20]
        PUSH    ESI
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     DWORD PTR SS:[ESP+0x44], EAX
        XOR     EBX, EBX

    @L00000013:
        MOV     ECX, DWORD PTR SS:[ESP+0x20]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ECX, DWORD PTR SS:[ESP+0x44]
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        CALL    DWORD PTR DS:[v_41B420]
        LEA     ECX, DWORD PTR DS:[EAX+0x38]
        CALL    DWORD PTR DS:[v_473170]
        MOV     EDX, 0x1
        MOV     ECX, EBX
        SHL     EDX, CL
        TEST    EDX, EAX
        JE      SHORT @L00000014
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_41B420]
        LEA     ECX, DWORD PTR DS:[EAX+0x38]
        CALL    DWORD PTR DS:[v_473170]
        MOV     EDX, 0x1
        MOV     ECX, ESI
        SHL     EDX, CL
        TEST    EDX, EAX
        JNZ     SHORT @L00000015

    @L00000014:
        ADD     EBX, 0x1
        CMP     EBX, 0x0C
        JB      SHORT @L00000013

    @L00000015:
        CMP     EBX, 0x0C
        JNZ     SHORT @L00000016
        MOV     ECX, DWORD PTR SS:[ESP+0x10]
        MOV     EAX, DWORD PTR SS:[ESP+0x38]
        MOV     DWORD PTR DS:[ECX], EAX
        MOV     EBX, ECX
        JMP     SHORT @L00000019

    @L00000016:
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_314B50]
        MOV     EDX, DWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        MOV     DWORD PTR DS:[EAX], EDX
        MOV     EBX, EAX
        JMP     SHORT @L00000019

    @L00000017:
        MOV     ECX, DWORD PTR SS:[ESP+0x28]
        PUSH    ESI
        PUSH    ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x28]
        CALL    DWORD PTR DS:[v_3A3400]
        TEST    EAX, EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x24]
        JNZ     SHORT @L00000018
        LEA     EAX, DWORD PTR SS:[ESP+0x38]

    @L00000018:
        MOV     EDX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR DS:[EBX], EDX

    @L00000019:
        ADD     ESI, 0x1
        ADD     EBX, 0x4
        CMP     ESI, 0x0C
        MOV     DWORD PTR SS:[ESP+0x10], EBX
        JB      @L00000010
        CMP     ESI, 0x10
        JNB     SHORT @L00000023
        LEA     EBX, DWORD PTR DS:[EDI+ESI*0x4+0x23C]
        LEA     ESP, DWORD PTR SS:[ESP]

    @L00000020:
        CMP     DWORD PTR DS:[EDI+0x638], 0x0
        JE      SHORT @L00000021
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_314B50]
        JMP     SHORT @L00000022

    @L00000021:
        LEA     EAX, DWORD PTR SS:[ESP+0x2C]

    @L00000022:
        MOV     EAX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR DS:[EBX], EAX
        ADD     ESI, 0x1
        ADD     EBX, 0x4
        CMP     ESI, 0x10
        JB      SHORT @L00000020

    @L00000023:
        CMP     DWORD PTR DS:[EDI+0x638], 0x0
        LEA     EAX, DWORD PTR DS:[EDI+0x7DC]
        JNZ     SHORT @L00000024
        LEA     EAX, DWORD PTR SS:[ESP+0x2C]

    @L00000024:
        MOV     ECX, DWORD PTR DS:[EAX]
        MOV     EDX, DWORD PTR SS:[ESP+0x20]
        MOV     DWORD PTR DS:[EDI+0x26C], ECX
        MOV     EAX, DWORD PTR DS:[EDX+0x3C0]
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR DS:[EDX+0x1]
        MOV     WORD PTR SS:[ESP+0x74], 0x4
        MOV     WORD PTR SS:[ESP+0x76], 0x6
        MOV     WORD PTR SS:[ESP+0x78], 0x7
        MOV     DWORD PTR SS:[ESP+0x44], EAX
        CALL    DWORD PTR DS:[v_300710]
        MOV     EAX, DWORD PTR DS:[EAX+0x3BC]
        PUSH    0x0
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_39B6E0]
        MOV     ECX, DWORD PTR DS:[EAX+0x4]
        MOV     DWORD PTR SS:[ESP+0x24], EAX
        MOV     DWORD PTR SS:[ESP+0x40], ECX
        XOR     EAX, EAX
        LEA     ESP, DWORD PTR SS:[ESP]

    @L00000025:
        MOV     EDX, DWORD PTR DS:[EDI+0x2E4]
        MOV     DWORD PTR DS:[EAX+EDX], 0x0
        ADD     EAX, 0x4
        CMP     EAX, 0x40
        JB      SHORT @L00000025
        TEST    ECX, ECX
        MOV     DWORD PTR SS:[ESP+0x10], 0x0
        JBE     @L00000050
        MOV     ESI, DWORD PTR DS:[v_AB7788]
        MOV     ESI, DWORD PTR DS:[ESI]
        JMP     SHORT @L00000026
        LEA     ECX, DWORD PTR DS:[ECX]

    @L00000026:
        MOV     EAX, DWORD PTR SS:[ESP+0x24]
        MOV     ECX, DWORD PTR DS:[EAX+0x8]
        MOV     EDX, DWORD PTR SS:[ESP+0x10]
        MOV     EBX, DWORD PTR DS:[ECX+EDX*0x4]
        TEST    EBX, EBX
        JE      @L00000049
        MOV     EAX, DWORD PTR DS:[EBX+0xC]
        MOV     ECX, EAX
        SHR     ECX, 0x1F
        MOV     DWORD PTR SS:[ESP+0x14], ECX
        JNZ     SHORT @L00000027
        CMP     EAX, DWORD PTR DS:[ESI+0x1C]
        JNB     @L00000049
        MOV     EDX, DWORD PTR DS:[ESI+0xC]
        CMP     DWORD PTR DS:[EDX+EAX*0x8], -0x2
        JE      SHORT @L00000028
        JMP     @L00000049

    @L00000027:
        MOV     ECX, EAX
        AND     ECX, 0x7FFFFFFF
        CMP     ECX, DWORD PTR DS:[ESI+0x3C]
        JNB     @L00000049
        MOV     EDX, DWORD PTR DS:[ESI+0x2C]
        CMP     DWORD PTR DS:[EDX+ECX*0x8], -0x2
        JNZ     @L00000049
        MOV     ECX, DWORD PTR SS:[ESP+0x14]

    @L00000028:
        TEST    ECX, ECX
        JE      SHORT @L00000029
        MOV     ECX, DWORD PTR DS:[ESI+0x2C]
        AND     EAX, 0x7FFFFFFF
        MOV     ECX, DWORD PTR DS:[ECX+EAX*0x8+0x4]
        JMP     SHORT @L00000030

    @L00000029:
        MOV     EDX, DWORD PTR DS:[ESI+0xC]
        MOV     ECX, DWORD PTR DS:[EDX+EAX*0x8+0x4]

    @L00000030:
        MOV     EAX, DWORD PTR DS:[ECX+0x18]
        SUB     EAX, DWORD PTR DS:[EBX+0x10]
        NEG     EAX
        SBB     EAX, EAX
        NOT     EAX
        AND     EAX, ECX
        JE      @L00000049
        XOR     ECX, ECX
        CMP     DWORD PTR DS:[EAX+0xC], 0x2B61676C
        SETNE   CL
        SUB     ECX, 0x1
        AND     ECX, EAX
        MOV     EAX, ECX
        JE      @L00000049
        CMP     DWORD PTR DS:[EAX+0x20], 0x0
        JNZ     @L00000049
        TEST    BYTE PTR DS:[EBX+0x20], 0x2
        JE      @L00000049
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_277300]
        TEST    EAX, EAX
        JNZ     @L00000048
        TEST    DWORD PTR DS:[EBX+0x5C], 0x40000
        JNZ     @L00000048
        TEST    DWORD PTR DS:[EBX+0x280], 0x200
        JNZ     @L00000048
        TEST    BYTE PTR DS:[EBX+0x60], 0x1
        JNZ     @L00000048
        MOV     EAX, EBX
        CALL    DWORD PTR DS:[v_33AA90]
        TEST    EAX, EAX
        JNZ     @L00000048
        MOV     DWORD PTR SS:[ESP+0x18], EAX
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        MOV     EAX, DWORD PTR DS:[EBX]
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[EAX+0xB8]
        MOV     ECX, EBX
        CALL    NEAR EDX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_474460]
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        MOV     ECX, DWORD PTR SS:[ESP+0x1C]
        SAR     EAX, 0x2
        SAR     ECX, 0x2
        CMP     EAX, DWORD PTR SS:[ESP+0x50]
        MOV     DWORD PTR SS:[ESP+0x18], EAX
        MOV     DWORD PTR SS:[ESP+0x1C], ECX
        JL      @L00000048
        CMP     EAX, DWORD PTR SS:[ESP+0x58]
        JG      @L00000048
        CMP     ECX, DWORD PTR SS:[ESP+0x4C]
        JL      @L00000048
        CMP     ECX, DWORD PTR SS:[ESP+0x54]
        JG      @L00000048
        PUSH    0x1
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_26DE50]
        CMP     DWORD PTR SS:[ESP+0x30], 0x0
        MOV     DWORD PTR SS:[ESP+0x2C], EAX
        JNZ     SHORT @L00000031
        TEST    DWORD PTR DS:[EBX+0x5C], 0x1000000
        JE      SHORT @L00000034

    @L00000031:
        TEST    EAX, EAX
        JE      SHORT @L00000032
        CMP     DWORD PTR SS:[ESP+0x44], 0x0
        JE      SHORT @L00000032
        MOV     ECX, 0x1
        JMP     SHORT @L00000033

    @L00000032:
        XOR     ECX, ECX

    @L00000033:
        MOV     EDX, DWORD PTR DS:[EBX]
        MOV     EDX, DWORD PTR DS:[EDX+0x100]
        ADD     ECX, EAX
        MOVZX   EAX, WORD PTR SS:[ESP+ECX*0x2+0x74]
        PUSH    EAX
        PUSH    0x0
        MOV     ECX, EBX
        CALL    NEAR EDX
        TEST    EAX, EAX
        JE      @L00000048

    @L00000034:
        MOV     EAX, DWORD PTR DS:[EBX]
        MOV     EDX, DWORD PTR DS:[EAX+0xEC]
        MOV     ECX, EBX
        CALL    NEAR EDX
        MOV     ESI, EAX
        CMP     ESI, DWORD PTR SS:[ESP+0x28]
        JE      SHORT @L00000035
        CMP     DWORD PTR SS:[ESP+0x30], 0x0
        JE      SHORT @L00000035
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_2AD5D0]
        TEST    EAX, EAX
        JE      SHORT @L00000035
        MOV     ECX, DWORD PTR SS:[ESP+0x28]
        MOV     EAX, 0x1
        SHL     EAX, CL
        TEST    WORD PTR DS:[EBX+0x2C], AX
        JE      @L00000048

    @L00000035:
        MOV     EAX, EBX
        CALL    DWORD PTR DS:[v_33AA60]
        TEST    EAX, EAX
        JE      @L00000039
        PUSH    0x0
        LEA     ECX, DWORD PTR SS:[ESP+0x6C]
        PUSH    ECX
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_2781F0]
        FLD1
        LEA     EDX, DWORD PTR DS:[EDI+0x750]
        FSTP    DWORD PTR SS:[ESP+0x70]
        PUSH    EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x6C]
        LEA     ECX, DWORD PTR SS:[ESP+0x60]
        CALL    DWORD PTR DS:[v_00C880]
        MOV     EAX, DWORD PTR DS:[EBX+0x68]
        MOV     EAX, DWORD PTR DS:[EAX+0x18]
        LEA     ECX, DWORD PTR DS:[EBX+0x68]
        LEA     EDX, DWORD PTR SS:[ESP+0x48]
        PUSH    EDX
        CALL    NEAR EAX
        FLD     DWORD PTR SS:[ESP+0x48]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AAE470]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FUCOMPP
        FSTSW   AX
        TEST    AH, 0x44
        JPO     SHORT @L00000036
        FLD1
        JMP     SHORT @L00000037

    @L00000036:
        FLDZ

    @L00000037:
        MOV     ECX, DWORD PTR DS:[EDI+0x2E4]
        FSTP    DWORD PTR SS:[ESP+0x64]
        MOV     EBX, DWORD PTR DS:[ECX+ESI*0x4]
        LEA     EAX, DWORD PTR DS:[ECX+ESI*0x4]
        LEA     EDX, DWORD PTR DS:[EBX+0x1]
        MOV     DWORD PTR DS:[EAX], EDX
        MOV     EAX, DWORD PTR DS:[EDI+0x2F0]
        CMP     EBX, DWORD PTR DS:[EAX+ESI*0x4]
        LEA     EAX, DWORD PTR DS:[EAX+ESI*0x4]
        JNZ     SHORT @L00000038
        ADD     DWORD PTR DS:[EAX], 0x8
        MOV     ECX, DWORD PTR DS:[EDI+0x2F0]
        MOV     EDX, DWORD PTR DS:[ECX+ESI*0x4]
        MOV     EAX, ESI
        SHL     EAX, 0x4
        PUSH    EDX
        LEA     ECX, DWORD PTR DS:[EAX+EDI+0x2F4]
        CALL    DWORD PTR DS:[v_35C6D0]

    @L00000038:
        SHL     ESI, 0x4
        MOV     EDX, DWORD PTR DS:[ESI+EDI+0x2FC]
        LEA     ECX, DWORD PTR DS:[EBX+EBX*0x2]
        LEA     EAX, DWORD PTR DS:[EDX+ECX*0x4]
        MOV     ECX, DWORD PTR SS:[ESP+0x5C]
        MOV     EDX, DWORD PTR SS:[ESP+0x60]
        MOV     DWORD PTR DS:[EAX], ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x64]
        MOV     DWORD PTR DS:[EAX+0x4], EDX
        MOV     DWORD PTR DS:[EAX+0x8], ECX
        JMP     @L00000048

    @L00000039:
        TEST    BYTE PTR DS:[EBX+0x60], 0x1
        LEA     EAX, DWORD PTR DS:[EDI+ESI*0x4+0x23C]
        JE      SHORT @L00000040
        LEA     EAX, DWORD PTR DS:[EDI+0x278]

    @L00000040:
        MOV     ESI, DWORD PTR DS:[EAX]
        MOV     EDX, DWORD PTR DS:[EBX+0x68]
        MOV     EDX, DWORD PTR DS:[EDX+0x18]
        LEA     ECX, DWORD PTR DS:[EBX+0x68]
        LEA     EAX, DWORD PTR SS:[ESP+0x34]
        PUSH    EAX
        CALL    NEAR EDX
        FLD     DWORD PTR SS:[ESP+0x34]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AAE470]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FUCOMPP
        FSTSW   AX
        TEST    AH, 0x44
        JPO     SHORT @L00000041
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AB59CC]
        CMP     DWORD PTR DS:[EAX], 0x0
        POP     EAX
        JE      SHORT @L00000041
        MOV     ESI, DWORD PTR SS:[ESP+0x38]

    @L00000041:
        MOV     ECX, DWORD PTR SS:[ESP+0x2C]
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        SUB     EAX, DWORD PTR DS:[EDI+0x228]
        ADD     ECX, 0x1
        MOV     EDX, 0x1
        SHL     EDX, CL
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0xC], EAX
        FILD    DWORD PTR SS:[ESP+0xC]
        MOV     DWORD PTR SS:[ESP+0x3C], EDX
        JGE     SHORT @L00000042
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB8]
        FADD    DWORD PTR DS:[EAX]
        POP     EAX

    @L00000042:
        FMUL    DWORD PTR DS:[EDI+0x21C]
        MOV     ECX, DWORD PTR SS:[ESP+0x1C]
        SUB     ECX, DWORD PTR DS:[EDI+0x22C]
        TEST    ECX, ECX
        FSTP    DWORD PTR SS:[ESP+0x14]
        FLD     DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR SS:[ESP+0xC], ECX
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93A098]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        FADD    ST(0x1), ST(0x0)
        FXCH    ST(0x1)
        FSTP    DWORD PTR SS:[ESP+0x20]
        FILD    DWORD PTR SS:[ESP+0xC]
        JGE     SHORT @L00000043
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB8]
        FADD    DWORD PTR DS:[EAX]
        POP     EAX

    @L00000043:
        FMUL    DWORD PTR DS:[EDI+0x220]
        LEA     EAX, DWORD PTR DS:[EDX+EDX]
        MOV     DWORD PTR SS:[ESP+0xC], EAX
        MOV     ECX, 0x101
        SUB     ECX, EAX
        FSTP    DWORD PTR SS:[ESP+0x14]
        MOV     EAX, DWORD PTR SS:[ESP+0x20]
        FADD    DWORD PTR SS:[ESP+0x14]
        SHR     EAX, 0x0E
        MOVZX   EAX, AL
        ADD     EAX, DWORD PTR DS:[EDI+0x214]
        FSTP    DWORD PTR SS:[ESP+0x14]
        SUB     EAX, EDX
        MOV     EDX, DWORD PTR SS:[ESP+0x14]
        SHR     EDX, 0x0E
        MOVZX   EBX, DL
        MOV     EDX, 0x100
        SUB     EDX, EBX
        SUB     EDX, DWORD PTR DS:[EDI+0x218]
        XOR     EBX, EBX
        SUB     EDX, DWORD PTR SS:[ESP+0x3C]
        TEST    EAX, EAX
        SETLE   BL
        SUB     EBX, 0x1
        AND     EBX, EAX
        LEA     EAX, DWORD PTR DS:[ECX-0x1]
        CMP     EBX, EAX
        JL      SHORT @L00000044
        MOV     EBX, EAX

    @L00000044:
        XOR     EAX, EAX
        TEST    EDX, EDX
        SETLE   AL
        SUB     EAX, 0x1
        AND     EAX, EDX
        MOV     EDX, 0x0FF
        SUB     EDX, DWORD PTR DS:[EDI+0x218]
        SUB     EDX, DWORD PTR SS:[ESP+0xC]
        CMP     EAX, EDX
        JB      SHORT @L00000045
        MOV     EAX, EDX

    @L00000045:
        MOV     EDX, DWORD PTR DS:[EDI+0x1D8]
        SHL     EAX, 0x8
        ADD     EAX, EBX
        LEA     EAX, DWORD PTR DS:[EDX+EAX*0x4]
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, EAX
        ADD     EAX, 0x4
        ADD     ECX, ECX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, EAX
        ADD     ECX, ECX
        ADD     EAX, 0x4
        CMP     DWORD PTR SS:[ESP+0x2C], 0x0
        MOV     DWORD PTR DS:[EDX], ESI
        JE      @L00000046
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     DWORD PTR DS:[EAX+0x4], ESI
        ADD     EAX, 0x4
        ADD     EAX, ECX
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     DWORD PTR DS:[EAX+0x4], ESI
        ADD     EAX, 0x4
        ADD     EAX, ECX
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     DWORD PTR DS:[EAX+0x4], ESI
        ADD     EAX, 0x4
        ADD     EAX, ECX
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     DWORD PTR DS:[EAX], ESI
        ADD     EAX, ECX
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     DWORD PTR DS:[EAX+0x4], ESI
        ADD     EAX, 0x4
        ADD     EAX, ECX
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     DWORD PTR DS:[EAX+0x4], ESI
        ADD     EAX, 0x4
        ADD     EAX, ECX
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     DWORD PTR DS:[EAX], ESI
        ADD     EAX, ECX
        MOV     ECX, EAX
        MOV     DWORD PTR DS:[ECX], ESI
        ADD     EAX, 0x4
        MOV     ECX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[ECX], ESI
        MOV     ECX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[ECX], ESI
        MOV     ECX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[ECX], ESI
        JMP     SHORT @L00000047

    @L00000046:
        MOV     DWORD PTR DS:[EAX], ESI
        ADD     EAX, ECX
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     DWORD PTR DS:[EAX+0x4], ESI
        ADD     EAX, 0x4
        ADD     EAX, ECX
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     DWORD PTR DS:[EAX], ESI
        ADD     EAX, ECX

    @L00000047:
        MOV     ECX, EAX
        MOV     DWORD PTR DS:[ECX], ESI
        ADD     EAX, 0x4
        MOV     ECX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[ECX], ESI
        MOV     DWORD PTR DS:[EAX], ESI
        MOV     DWORD PTR DS:[EAX+0x4], ESI

    @L00000048:
        MOV     ESI, DWORD PTR DS:[v_AB7788]
        MOV     ESI, DWORD PTR DS:[ESI]

    @L00000049:
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        ADD     EAX, 0x1
        CMP     EAX, DWORD PTR SS:[ESP+0x40]
        MOV     DWORD PTR SS:[ESP+0x10], EAX
        JB      @L00000026

    @L00000050:
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR DS:[EDX+0x1]
        CALL    DWORD PTR DS:[v_300710]
        MOV     ECX, DWORD PTR DS:[EAX+0x3BC]
        CALL    DWORD PTR DS:[v_38C6B0]
        MOV     ECX, DWORD PTR SS:[ESP+0x28]
        MOV     EDX, DWORD PTR DS:[EAX+0x4]
        MOV     ESI, 0x1
        SHL     ESI, CL
        MOV     DWORD PTR SS:[ESP+0x40], EAX
        MOV     DWORD PTR SS:[ESP+0x14], EDX
        MOVZX   ECX, SI
        MOV     DWORD PTR SS:[ESP+0x3C], ECX
        XOR     ECX, ECX
        TEST    EDX, EDX
        MOV     DWORD PTR SS:[ESP+0x10], ECX
        JBE     @L00000064
        MOV     EDX, DWORD PTR DS:[v_AB7788]
        MOV     EDX, DWORD PTR DS:[EDX]
        JMP     SHORT @L00000052
        LEA     ESP, DWORD PTR SS:[ESP]

    @L00000051:
        MOV     EAX, DWORD PTR SS:[ESP+0x40]

    @L00000052:
        MOV     EAX, DWORD PTR DS:[EAX+0x8]
        MOV     ESI, DWORD PTR DS:[EAX+ECX*0x4]
        TEST    ESI, ESI
        JE      @L00000063
        MOV     EAX, DWORD PTR DS:[ESI+0xC]
        MOV     ECX, EAX
        SHR     ECX, 0x1F
        MOV     DWORD PTR SS:[ESP+0xC], ECX
        JNZ     SHORT @L00000053
        CMP     EAX, DWORD PTR DS:[EDX+0x1C]
        JNB     @L00000063
        MOV     EBX, DWORD PTR DS:[EDX+0xC]
        CMP     DWORD PTR DS:[EBX+EAX*0x8], -0x2
        JE      SHORT @L00000054
        JMP     @L00000063

    @L00000053:
        MOV     ECX, EAX
        AND     ECX, 0x7FFFFFFF
        CMP     ECX, DWORD PTR DS:[EDX+0x3C]
        JNB     @L00000063
        MOV     EBX, DWORD PTR DS:[EDX+0x2C]
        CMP     DWORD PTR DS:[EBX+ECX*0x8], -0x2
        JNZ     @L00000063
        MOV     ECX, DWORD PTR SS:[ESP+0xC]

    @L00000054:
        XOR     EBX, EBX
        CMP     ECX, EBX
        JE      SHORT @L00000055
        MOV     ECX, DWORD PTR DS:[EDX+0x2C]
        AND     EAX, 0x7FFFFFFF
        JMP     SHORT @L00000056

    @L00000055:
        MOV     ECX, DWORD PTR DS:[EDX+0xC]

    @L00000056:
        MOV     ECX, DWORD PTR DS:[ECX+EAX*0x8+0x4]
        MOV     EAX, DWORD PTR DS:[ECX+0x18]
        SUB     EAX, DWORD PTR DS:[ESI+0x10]
        NEG     EAX
        SBB     EAX, EAX
        NOT     EAX
        AND     EAX, ECX
        JE      @L00000063
        XOR     ECX, ECX
        CMP     DWORD PTR DS:[EAX+0xC], 0x2B61676C
        SETNE   CL
        SUB     ECX, 0x1
        AND     ECX, EAX
        MOV     EAX, ECX
        JE      @L00000063
        CMP     DWORD PTR DS:[EAX+0x20], EBX
        JNZ     @L00000063
        MOVZX   EAX, WORD PTR DS:[ESI+0x48]
        TEST    EAX, 0x400
        JA      @L00000063
        TEST    EAX, 0x100
        JA      @L00000063
        TEST    EAX, 0x200
        JA      @L00000063
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        PUSH    EDX
        LEA     ECX, DWORD PTR DS:[ESI+0x30]
        MOV     DWORD PTR SS:[ESP+0x1C], EBX
        MOV     DWORD PTR SS:[ESP+0x20], EBX
        CALL    DWORD PTR DS:[v_474460]
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        MOV     EDX, DWORD PTR SS:[ESP+0x1C]
        SAR     EAX, 0x2
        SAR     EDX, 0x2
        CMP     EAX, DWORD PTR SS:[ESP+0x50]
        MOV     DWORD PTR SS:[ESP+0x18], EAX
        MOV     DWORD PTR SS:[ESP+0x1C], EDX
        JL      @L00000062
        CMP     EAX, DWORD PTR SS:[ESP+0x58]
        JG      @L00000062
        CMP     EDX, DWORD PTR SS:[ESP+0x4C]
        JL      @L00000062
        CMP     EDX, DWORD PTR SS:[ESP+0x54]
        JG      @L00000062
        CMP     DWORD PTR SS:[ESP+0x30], EBX
        JE      SHORT @L00000057
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2C6220]
        MOV     BX, AX
        MOV     ECX, ESI
        NOT     BX
        CALL    DWORD PTR DS:[v_2C6200]
        MOV     CX, AX
        MOV     EAX, DWORD PTR SS:[ESP+0x3C]
        AND     CX, BX
        AND     CX, AX
        CMP     CX, AX
        JNZ     @L00000062
        MOV     EDX, DWORD PTR SS:[ESP+0x1C]
        MOV     EAX, DWORD PTR SS:[ESP+0x18]

    @L00000057:
        SUB     EAX, DWORD PTR DS:[EDI+0x228]
        MOVZX   ECX, BYTE PTR DS:[ESI+0x48]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0xC], EAX
        LEA     ECX, DWORD PTR DS:[EDI+ECX*0x4+0x23C]
        FILD    DWORD PTR SS:[ESP+0xC]
        JGE     SHORT @L00000058
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB8]
        FADD    DWORD PTR DS:[EAX]
        POP     EAX

    @L00000058:
        FMUL    DWORD PTR DS:[EDI+0x21C]
        SUB     EDX, DWORD PTR DS:[EDI+0x22C]
        TEST    EDX, EDX
        FSTP    DWORD PTR SS:[ESP+0xC]
        FLD     DWORD PTR SS:[ESP+0xC]
        MOV     DWORD PTR SS:[ESP+0xC], EDX
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93A098]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        FADD    ST(0x1), ST(0x0)
        FXCH    ST(0x1)
        FSTP    DWORD PTR SS:[ESP+0x24]
        FILD    DWORD PTR SS:[ESP+0xC]
        JGE     SHORT @L00000059
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB8]
        FADD    DWORD PTR DS:[EAX]
        POP     EAX

    @L00000059:
        FMUL    DWORD PTR DS:[EDI+0x220]
        MOV     EDX, DWORD PTR SS:[ESP+0x24]
        SHR     EDX, 0x0E
        MOVZX   EAX, DL
        MOV     EDX, DWORD PTR DS:[EDI+0x214]
        FSTP    DWORD PTR SS:[ESP+0xC]
        FADD    DWORD PTR SS:[ESP+0xC]
        LEA     EAX, DWORD PTR DS:[EAX+EDX-0x4]
        MOV     ESI, 0x0FC
        FSTP    DWORD PTR SS:[ESP+0xC]
        MOV     EDX, DWORD PTR SS:[ESP+0xC]
        SHR     EDX, 0x0E
        MOVZX   EDX, DL
        SUB     ESI, EDX
        SUB     ESI, DWORD PTR DS:[EDI+0x218]
        XOR     EDX, EDX
        TEST    EAX, EAX
        SETLE   DL
        SUB     EDX, 0x1
        AND     EDX, EAX
        CMP     EDX, 0x0F8
        JL      SHORT @L00000060
        MOV     EDX, 0x0F8

    @L00000060:
        XOR     EAX, EAX
        TEST    ESI, ESI
        SETLE   AL
        SUB     EAX, 0x1
        AND     EAX, ESI
        CMP     EAX, 0x0F8
        JL      SHORT @L00000061
        MOV     EAX, 0x0F8

    @L00000061:
        MOV     ESI, DWORD PTR DS:[ECX]
        SHL     EAX, 0x8
        ADD     EAX, EDX
        MOV     EDX, DWORD PTR DS:[EDI+0x1D8]
        LEA     EAX, DWORD PTR DS:[EDX+EAX*0x4]
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR DS:[EAX+0x4], EDX
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        ADD     EAX, 0x3E4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR DS:[EAX+0x4], EDX
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        ADD     EAX, 0x3E4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR DS:[EAX+0x4], EDX
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        ADD     EAX, 0x3E4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR DS:[EAX+0x4], EDX
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        ADD     EAX, 0x3E4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EAX], EDX
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x3E4
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR DS:[EAX+0x4], EDX
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        ADD     EAX, 0x3E4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR DS:[EAX+0x4], EDX
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        ADD     EAX, 0x3E4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        ADD     EAX, 0x4
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     ESI, DWORD PTR DS:[ECX]
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, EAX
        ADD     EAX, 0x4
        MOV     ESI, DWORD PTR DS:[ECX]
        MOV     DWORD PTR DS:[EDX], ESI
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR DS:[EAX], EDX
        MOV     ECX, DWORD PTR DS:[ECX]
        MOV     DWORD PTR DS:[EAX+0x4], ECX

    @L00000062:
        MOV     EDX, DWORD PTR DS:[v_AB7788]
        MOV     EDX, DWORD PTR DS:[EDX]

    @L00000063:
        MOV     ECX, DWORD PTR SS:[ESP+0x10]
        ADD     ECX, 0x1
        CMP     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR SS:[ESP+0x10], ECX
        JB      @L00000051

    @L00000064:
        MOV     ECX, DWORD PTR SS:[ESP+0x7C]
        POP     EDI
        POP     ESI
        POP     EBX
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        MOV     ESP, EBP
        POP     EBP
        RET
    }
}
//---------------------------------------------------------------------------


