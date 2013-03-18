//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_353820()
{
    __asm
    {
        SUB     ESP, 0x7AC
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x7A8], EAX
        CMP     DWORD PTR DS:[ECX+0x94], 0x0
        PUSH    EBP
        MOV     EBP, DWORD PTR SS:[ESP+0x7B8]
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x7B8]
        PUSH    EDI
        MOV     DWORD PTR SS:[ESP+0x14], ECX
        JNZ     SHORT @L00000001
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x68]
        MOV     DWORD PTR DS:[ECX+0x90], 0x1
        CALL    NEAR EDX

    @L00000001:
        MOV     EDI, DWORD PTR DS:[ESI+0x1E8]
        TEST    EDI, EDI
        JE      @L00000018
        PUSH    EBX
        MOV     EBX, DWORD PTR SS:[ESP+0x7CC]
        CMP     DWORD PTR DS:[EDI+EBX*0x4+0x88], 0x0
        JE      @L00000017
        MOV     EAX, DWORD PTR DS:[EDI+EBX*0x4+0xF4]
        PUSH    EBX
        MOV     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x38], EAX
        CALL    DWORD PTR DS:[v_0C6CB0]
        SUB     EAX, DWORD PTR SS:[EBP]
        PUSH    EBX
        MOV     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x30], EAX
        CALL    DWORD PTR DS:[v_0C6CD0]
        SUB     EAX, DWORD PTR SS:[EBP]
        PUSH    EBX
        LEA     ECX, DWORD PTR SS:[ESP+0x34]
        PUSH    ECX
        MOV     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x30], EAX
        CALL    DWORD PTR DS:[v_0C6B30]
        FLD     DWORD PTR DS:[EAX]
        FSUB    DWORD PTR SS:[EBP+0x4]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP+0x28]
        FLD     DWORD PTR SS:[ESP+0x28]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_3346B0]
        PUSH    EBX
        LEA     EDX, DWORD PTR SS:[ESP+0x34]
        PUSH    EDX
        MOV     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x2C], EAX
        CALL    DWORD PTR DS:[v_0C8D70]
        FLD     DWORD PTR DS:[EAX]
        FSUB    DWORD PTR SS:[EBP+0x8]
        XOR     EAX, EAX
        CMP     DWORD PTR SS:[ESP+0x2C], EAX
        FSTP    DWORD PTR SS:[ESP+0x30]
        JGE     SHORT @L00000002
        MOV     DWORD PTR SS:[ESP+0x2C], EAX

    @L00000002:
        CMP     DWORD PTR SS:[ESP+0x28], EAX
        JGE     SHORT @L00000003
        MOV     DWORD PTR SS:[ESP+0x28], EAX

    @L00000003:
        MOV     ECX, DWORD PTR DS:[ESI+0x30]
        CALL    DWORD PTR DS:[v_29C440]
        MOV     ECX, DWORD PTR DS:[ESI+0x30]
        MOV     EDI, EAX
        CALL    DWORD PTR DS:[v_29C470]
        MOV     ECX, DWORD PTR DS:[ESI+0x30]
        MOV     EBX, EAX
        CALL    DWORD PTR DS:[v_29C410]
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0xEC]
        MOV     ECX, ESI
        CALL    NEAR EDX
        MOV     ECX, DWORD PTR DS:[ESI+0x30]
        MOV     DWORD PTR SS:[ESP+0x10], EAX
        XOR     EAX, EAX
        MOV     EDX, EDI
        MOV     DWORD PTR SS:[ESP+0x20], EAX
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        CALL    DWORD PTR DS:[v_29FD50]
        TEST    EAX, EAX
        JNZ     SHORT @L00000005
        MOV     ECX, DWORD PTR DS:[ESI+0x30]
        MOV     EDX, EBX
        CALL    DWORD PTR DS:[v_29FD50]
        TEST    EAX, EAX
        JE      SHORT @L00000004
        MOV     EDX, DWORD PTR SS:[ESP+0x10]
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_2B1D80]
        MOV     DWORD PTR SS:[ESP+0x1C], EBX
        JMP     SHORT @L00000006

    @L00000004:
        MOV     ESI, DWORD PTR DS:[ESI+0x30]
        MOV     EDI, DWORD PTR SS:[ESP+0x14]
        MOV     EDX, EDI
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_29FD50]
        TEST    EAX, EAX
        JE      SHORT @L00000007

    @L00000005:
        MOV     EDX, DWORD PTR SS:[ESP+0x10]
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2B1D80]
        MOV     DWORD PTR SS:[ESP+0x1C], EDI

    @L00000006:
        CMP     DWORD PTR SS:[ESP+0x1C], 0x0
        MOV     DWORD PTR SS:[ESP+0x20], EAX
        JE      SHORT @L00000007
        MOV     EAX, DWORD PTR SS:[ESP+0x34]
        ADD     EAX, EAX
        MOV     ECX, DWORD PTR DS:[v_A77358]
        ADD     EAX, EAX
        MOV     ECX, DWORD PTR DS:[EAX+ECX]
        PUSH    0x0
        XOR     EDX, EDX
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        CALL    DWORD PTR DS:[v_31F530]
        PUSH    EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x20]
        MOV     ECX, DWORD PTR DS:[EAX+0x124]
        JMP     SHORT @L00000008

    @L00000007:
        MOV     EAX, DWORD PTR SS:[ESP+0x34]
        ADD     EAX, EAX
        MOV     ECX, DWORD PTR DS:[v_A77374]
        ADD     EAX, EAX
        MOV     ECX, DWORD PTR DS:[EAX+ECX]
        PUSH    0x0
        XOR     EDX, EDX
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        CALL    DWORD PTR DS:[v_31F530]
        MOV     ECX, DWORD PTR SS:[ESP+0x1C]
        MOV     ECX, DWORD PTR DS:[ECX+0x124]
        PUSH    EAX

    @L00000008:
        CALL    DWORD PTR DS:[v_60E090]
        MOV     EDX, DWORD PTR SS:[ESP+0x28]
        MOV     EAX, DWORD PTR SS:[ESP+0x2C]
        PUSH    EDX
        PUSH    EAX
        PUSH    DWORD PTR DS:[v_93DF60]
        LEA     ECX, DWORD PTR SS:[ESP+0x84]
        PUSH    0x40
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5A6]
        MOV     EDX, DWORD PTR SS:[ESP+0x7DC]
        MOV     EDI, DWORD PTR DS:[EDX]
        ADD     EDI, DWORD PTR SS:[EBP]
        ADD     ESP, 0x14
        MOV     EBX, 0x40
        LEA     ESI, DWORD PTR SS:[ESP+0x78]
        CALL    DWORD PTR DS:[v_338CA0]
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        MOV     EDI, DWORD PTR DS:[EAX+0x130]
        CALL    DWORD PTR DS:[v_346660]
        MOV     EBX, DWORD PTR SS:[ESP+0x1C]
        TEST    EBX, EBX
        JE      SHORT @L00000009
        MOV     ECX, DWORD PTR SS:[ESP+0x20]
        PUSH    ECX
        PUSH    DWORD PTR DS:[v_915D68]
        LEA     EDX, DWORD PTR SS:[ESP+0x40]
        PUSH    0x40
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5A6]
        MOV     EAX, DWORD PTR SS:[ESP+0x28]
        MOV     EDI, DWORD PTR DS:[EAX+0x134]
        ADD     ESP, 0x10
        LEA     ESI, DWORD PTR SS:[ESP+0x38]
        JMP     SHORT @L00000010

    @L00000009:
        MOV     ECX, DWORD PTR SS:[ESP+0x18]
        MOV     EDI, DWORD PTR DS:[ECX+0x134]
        MOV     ESI, DWORD PTR DS:[v_87529C]

    @L00000010:
        CALL    DWORD PTR DS:[v_346660]
        PUSH    0x40
        LEA     EDX, DWORD PTR SS:[ESP+0x3C]
        MOV     ECX, DWORD PTR DS:[v_93DF50]
        MOV     BYTE PTR SS:[ESP+0xBC], 0x0
        MOV     BYTE PTR SS:[ESP+0x5BC], 0x0
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x40
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EDX, DWORD PTR SS:[ESP+0x40]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x40
        LEA     EAX, DWORD PTR SS:[ESP+0x7C]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x40]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        MOV     EDX, DWORD PTR SS:[ESP+0x10]
        MOV     ECX, DWORD PTR DS:[v_A77390]
        MOV     ECX, DWORD PTR DS:[EDX+ECX]
        TEST    ECX, ECX
        JE      SHORT @L00000011
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x2BC]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x200
        LEA     EAX, DWORD PTR SS:[ESP+0x2BC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0xC0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000011:
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EAX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x2BC]
        MOV     ECX, DWORD PTR DS:[v_93DF44]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x200
        LEA     ECX, DWORD PTR SS:[ESP+0x2BC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EAX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_93A354]
        MOV     EDX, DWORD PTR DS:[v_93A348]
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_009EE0]
        FILD    DWORD PTR SS:[ESP+0x24]
        FLD     DWORD PTR SS:[ESP+0x14]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x1
        JNZ     SHORT @L00000012
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x2BC]
        MOV     ECX, DWORD PTR DS:[v_93DF3C]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x200
        LEA     ECX, DWORD PTR SS:[ESP+0x2BC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EAX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        JMP     SHORT @L00000013

    @L00000012:
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        PUSH    ECX
        PUSH    DWORD PTR DS:[v_915D68]
        LEA     EDX, DWORD PTR SS:[ESP+0x5C0]
        PUSH    0x200
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x10
        PUSH    0x200
        LEA     EAX, DWORD PTR SS:[ESP+0x5BC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0xC0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        MOV     EDX, DWORD PTR SS:[ESP+0x7C8]
        FLD     DWORD PTR DS:[EDX+0x4]
        PUSH    ECX
        FADD    DWORD PTR SS:[EBP+0x4]
        FSTP    DWORD PTR SS:[ESP+0x18]
        FLD     DWORD PTR SS:[ESP+0x18]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_3346B0]
        MOV     EBX, 0x200
        LEA     ESI, DWORD PTR SS:[ESP+0xB8]
        MOV     EDI, EAX
        CALL    DWORD PTR DS:[v_338CA0]
        MOV     EBX, DWORD PTR SS:[ESP+0x1C]

    @L00000013:
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EAX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x2BC]
        MOV     ECX, DWORD PTR DS:[v_93DF30]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x200
        LEA     ECX, DWORD PTR SS:[ESP+0x2BC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EAX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        MOV     ECX, DWORD PTR SS:[ESP+0x7C8]
        FLD     DWORD PTR DS:[ECX+0x8]
        SUB     ESP, 0x8
        FADD    DWORD PTR SS:[EBP+0x8]
        MOV     EDI, 0x200
        LEA     ESI, DWORD PTR SS:[ESP+0xC0]
        FSTP    DWORD PTR SS:[ESP+0x1C]
        FLD     DWORD PTR SS:[ESP+0x1C]
        FSTP    DWORD PTR SS:[ESP+0x4]
        FLD     DWORD PTR SS:[ESP+0x38]
        FSTP    DWORD PTR SS:[ESP]
        CALL    f_339150                                //CALL    DWORD PTR DS:[v_339150]
        TEST    EBX, EBX
        JE      SHORT @L00000014
        PUSH    EDI
        PUSH    DWORD PTR DS:[v_935C5C]
        MOV     EDX, ESI
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    EDI
        LEA     EDX, DWORD PTR SS:[ESP+0x2BC]
        MOV     ECX, DWORD PTR DS:[v_93DF20]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    EDI
        LEA     EAX, DWORD PTR SS:[ESP+0x2BC]
        PUSH    EAX
        MOV     ECX, ESI
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    EDI
        PUSH    DWORD PTR DS:[v_92A448]
        MOV     EDX, ESI
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    EBX
        MOV     EBX, EDI
        MOV     EDI, DWORD PTR SS:[ESP+0x24]
        CALL    DWORD PTR DS:[v_338EE0]

    @L00000014:
        PUSH    0x0FF
        LEA     EAX, DWORD PTR SS:[ESP+0x4BD]
        PUSH    0x0
        PUSH    EAX
        MOV     BYTE PTR SS:[ESP+0x4C4], 0x0
        CALL    DWORD PTR DS:[v_7E11C2]
        MOV     ECX, DWORD PTR DS:[v_A4F6E8]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOV     ESI, DWORD PTR SS:[ESP+0x1C]
        MOV     EDX, DWORD PTR DS:[v_A773AC]
        MOV     EDX, DWORD PTR DS:[ESI+EDX]
        PUSH    ECX
        PUSH    EDX
        PUSH    DWORD PTR DS:[v_874F48]
        LEA     EAX, DWORD PTR SS:[ESP+0x4D0]
        PUSH    0x100
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5A6]
        MOV     EDI, DWORD PTR SS:[ESP+0x38]
        ADD     ESP, 0x20
        CMP     DWORD PTR DS:[EDI+0x138], 0x0
        MOV     EAX, DWORD PTR DS:[v_93DF1C]
        JNZ     SHORT @L00000015
        MOV     EAX, DWORD PTR DS:[v_93DF18]

    @L00000015:
        PUSH    0x100
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x4C0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x5BC]
        LEA     ECX, DWORD PTR SS:[ESP+0x4BC]
        CALL    DWORD PTR DS:[v_5C9650]
        TEST    EAX, EAX
        JNZ     SHORT @L00000016
        MOV     ECX, DWORD PTR DS:[v_A773AC]
        MOV     ECX, DWORD PTR DS:[ESI+ECX]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x5BC]
        CALL    DWORD PTR DS:[v_5C9650]

    @L00000016:
        LEA     EDX, DWORD PTR SS:[ESP+0x5B8]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0xBC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x40]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x128]
        CALL    DWORD PTR DS:[v_3535D0]

    @L00000017:
        POP     EBX

    @L00000018:
        MOV     ECX, DWORD PTR SS:[ESP+0x7B4]
        POP     EDI
        POP     ESI
        POP     EBP
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x7AC
        RET     0x10
    }
}
//---------------------------------------------------------------------------

FRAW void f_339150()
{
    __asm
    {
        SUB     ESP, 0x54
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x50], EAX
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_93A39C]
        MOV     EDX, DWORD PTR DS:[v_93A348]
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_009EE0]
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_93A3AC]
        MOV     EDX, DWORD PTR DS:[v_93A348]
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        CALL    DWORD PTR DS:[v_009EE0]
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_93A3B8]
        MOV     EDX, DWORD PTR DS:[v_93A348]
        LEA     ECX, DWORD PTR SS:[ESP+0xC]
        CALL    DWORD PTR DS:[v_009EE0]
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_93A3C8]
        MOV     EDX, DWORD PTR DS:[v_93A348]
        LEA     ECX, DWORD PTR SS:[ESP+0x8]
        CALL    DWORD PTR DS:[v_009EE0]
        PUSH    0x3E
        LEA     EAX, DWORD PTR SS:[ESP+0x16]
        PUSH    0x0
        PUSH    EAX
        MOV     WORD PTR SS:[ESP+0x1C], 0x20
        CALL    DWORD PTR DS:[v_7E11C2]
        FLD     DWORD PTR SS:[ESP+0x64]
        FLD     DWORD PTR SS:[ESP+0x18]
        ADD     ESP, 0x0C
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x41
        JPE     SHORT @L00000002
        FSTP    ST(0x1)
        MOV     ECX, DWORD PTR DS:[v_93AF08]
        FSTP    ST(0x0)
        JMP     SHORT @L00000006

    @L00000002:
        FCOMP   ST(0x1)
        FSTSW   AX
        FLD     DWORD PTR SS:[ESP+0x8]
        TEST    AH, 0x41
        JNZ     SHORT @L00000003
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x41
        JPE     SHORT @L00000003
        FSTP    ST(0x1)
        MOV     ECX, DWORD PTR DS:[v_93AEF8]
        FSTP    ST(0x0)
        JMP     SHORT @L00000006

    @L00000003:
        FCOMP   ST(0x1)
        FSTSW   AX
        FLD     DWORD PTR SS:[ESP+0x4]
        TEST    AH, 0x41
        JNZ     SHORT @L00000004
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x41
        JPE     SHORT @L00000004
        FSTP    ST(0x1)
        MOV     ECX, DWORD PTR DS:[v_93AEE4]
        FSTP    ST(0x0)
        JMP     SHORT @L00000006

    @L00000004:
        FCOMP   ST(0x1)
        FSTSW   AX
        FLD     DWORD PTR SS:[ESP]
        TEST    AH, 0x41
        JNZ     SHORT @L00000005
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x41
        JPE     SHORT @L00000005
        FSTP    ST(0x1)
        MOV     ECX, DWORD PTR DS:[v_93AED4]
        FSTP    ST(0x0)
        JMP     SHORT @L00000006

    @L00000005:
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000007
        MOV     ECX, DWORD PTR DS:[v_93AEC0]

    @L00000006:
        PUSH    0x40
        LEA     EDX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_5C9650]

    @L00000007:
        FLD     DWORD PTR SS:[ESP+0x5C]
        PUSH    EBX
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_876620]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        FSUBR   ST(0x0), ST(0x1)
        FSTP    DWORD PTR SS:[ESP+0x4]
        FLD     DWORD PTR SS:[ESP+0x4]
        FABS
        FSTP    DWORD PTR SS:[ESP+0x4]
        FLD     DWORD PTR SS:[ESP+0x4]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92E7A4]
        FCOMP   DWORD PTR DS:[EAX]
        POP     EAX
        FSTSW   AX
        TEST    AH, 0x5
        JPO     SHORT @L00000012
        FLDZ
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        JPE     SHORT @L00000008
        MOV     EBX, 0x1
        MOV     EAX, DWORD PTR DS:[v_93AE78]
        JMP     SHORT @L00000009

    @L00000008:
        OR      EBX, 0xFFFFFFFF
        MOV     EAX, DWORD PTR DS:[v_93AE6C]

    @L00000009:
        PUSH    EDI
        PUSH    EAX
        PUSH    ESI
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000010:
        PUSH    EDI
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        PUSH    ECX
        PUSH    ESI
    // FEAT HPMPSPD
        CMP     BYTE PTR DS:[bHPMPSPD], 0
        JNE     @L_HPMPSPD_G_1
        CALL    DWORD PTR DS:[v_6EB5BE]
        JMP     @L_HPMPSPD_F_1
    @L_HPMPSPD_G_1:
        CALL    HPMP_AS                                 //CALL    DWORD PTR DS:[v_6EB5BE]
    @L_HPMPSPD_F_1:

        TEST    EBX, EBX
        POP     EBX
        JE      SHORT @L00000011
        PUSH    EDI
        PUSH    DWORD PTR DS:[v_93AE68]
        PUSH    ESI
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000011:
        MOV     ECX, DWORD PTR SS:[ESP+0x50]
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x54
        RET     0x8

    @L00000012:
        FSTP    ST(0x0)
        XOR     EBX, EBX
        JMP     SHORT @L00000010
    }
}
//---------------------------------------------------------------------------

FRAW void f_353E10()
{
    __asm
    {
        SUB     ESP, 0x7AC
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x7A8], EAX
        CMP     DWORD PTR DS:[ECX+0x94], 0x0
        PUSH    EBX
        MOV     EBX, DWORD PTR SS:[ESP+0x7B4]
        PUSH    EBP
        MOV     EBP, DWORD PTR SS:[ESP+0x7BC]
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x7C4]
        PUSH    EDI
        MOV     DWORD PTR SS:[ESP+0x10], ECX
        MOV     DWORD PTR SS:[ESP+0x30], ESI
        JNZ     SHORT @L00000001
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x68]
        MOV     DWORD PTR DS:[ECX+0x90], 0x1
        CALL    NEAR EDX

    @L00000001:
        FLD     DWORD PTR SS:[EBP]
        MOV     EAX, DWORD PTR DS:[EBX+0xE0]
        FADD    DWORD PTR DS:[ESI]
        MOV     EDI, DWORD PTR DS:[EBX+0xE4]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP+0x2C]
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        FLD     DWORD PTR SS:[EBP]
        LEA     ECX, DWORD PTR SS:[ESP+0x38]
        FSTP    DWORD PTR SS:[ESP+0x1C]
        MOV     BYTE PTR SS:[ESP+0x3C], 0x0
        MOV     BYTE PTR SS:[ESP+0x7C], 0x0
        MOV     DWORD PTR SS:[ESP+0x18], EAX
        CALL    DWORD PTR DS:[v_6EEEF0]
        LEA     EDX, DWORD PTR SS:[ESP+0x28]
        PUSH    EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x38]
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        CALL    DWORD PTR DS:[v_6EF000]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        CALL    DWORD PTR DS:[v_26D270]
        PUSH    DWORD PTR DS:[v_AAE59C]
        PUSH    DWORD PTR DS:[v_AAE514]
        LEA     EDX, DWORD PTR SS:[ESP+0x34]
        LEA     ECX, DWORD PTR SS:[ESP+0x28]
        CALL    DWORD PTR DS:[v_6EFE10]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        CALL    DWORD PTR DS:[v_6EEE20]
        MOV     EAX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR SS:[ESP+0x2C], EAX
        FLD     DWORD PTR SS:[ESP+0x2C]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_3346B0]
        FLD     DWORD PTR SS:[ESP+0x34]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        MOV     DWORD PTR SS:[ESP+0x24], EAX
        CALL    DWORD PTR DS:[v_3346B0]
        MOV     ECX, DWORD PTR DS:[EBX+0x30]
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        CALL    DWORD PTR DS:[v_29C3E0]
        MOV     ECX, DWORD PTR DS:[EBX+0x30]
        MOV     ESI, EAX
        XOR     EAX, EAX
        MOV     EDX, ESI
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        MOV     DWORD PTR SS:[ESP+0x24], EAX
        CALL    DWORD PTR DS:[v_29FD50]
        TEST    EAX, EAX
        JE      SHORT @L00000002
        MOV     EDX, DWORD PTR DS:[EBX]
        MOV     EAX, DWORD PTR DS:[EDX+0xEC]
        MOV     ECX, EBX
        CALL    NEAR EAX
        MOV     EDX, EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2B1D80]
        TEST    ESI, ESI
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        MOV     DWORD PTR SS:[ESP+0x24], ESI
        JE      SHORT @L00000002
        ADD     EDI, EDI
        MOV     ECX, DWORD PTR DS:[v_A773C8]
        ADD     EDI, EDI
        MOV     ECX, DWORD PTR DS:[EDI+ECX]
        PUSH    0x0
        XOR     EDX, EDX
        MOV     DWORD PTR SS:[ESP+0x1C], EDI
        CALL    DWORD PTR DS:[v_31F530]
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     ECX, DWORD PTR DS:[ECX+0x124]
        JMP     SHORT @L00000003

    @L00000002:
        ADD     EDI, EDI
        MOV     ECX, DWORD PTR DS:[v_A773E8]
        ADD     EDI, EDI
        MOV     ECX, DWORD PTR DS:[EDI+ECX]
        PUSH    0x0
        XOR     EDX, EDX
        MOV     DWORD PTR SS:[ESP+0x1C], EDI
        CALL    DWORD PTR DS:[v_31F530]
        MOV     EDX, DWORD PTR SS:[ESP+0x14]
        MOV     ECX, DWORD PTR DS:[EDX+0x124]

    @L00000003:
        PUSH    EAX
        CALL    DWORD PTR DS:[v_60E090]
        TEST    BYTE PTR DS:[EBX+0x20], 0x8
        JE      SHORT @L00000004
        PUSH    0x40
        LEA     EDX, DWORD PTR SS:[ESP+0x7C]
        MOV     ECX, DWORD PTR DS:[v_93DFA4]
        CALL    DWORD PTR DS:[v_5C9650]
        JMP     SHORT @L00000005

    @L00000004:
        MOV     EAX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        PUSH    DWORD PTR DS:[v_915D68]
        LEA     ECX, DWORD PTR SS:[ESP+0x80]
        PUSH    0x40
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5A6]
        FLD     DWORD PTR SS:[EBP]
        MOV     EDX, DWORD PTR SS:[ESP+0x40]
        FADD    DWORD PTR DS:[EDX]
        ADD     ESP, 0x0C
        MOV     EDI, 0x40
        LEA     ESI, DWORD PTR SS:[ESP+0x7C]
        FSTP    DWORD PTR SS:[ESP+0x20]
        FLD     DWORD PTR SS:[ESP+0x20]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_338D00]

    @L00000005:
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        MOV     EDI, DWORD PTR DS:[EAX+0x130]
        LEA     ESI, DWORD PTR SS:[ESP+0x78]
        CALL    DWORD PTR DS:[v_346660]
        CMP     DWORD PTR SS:[ESP+0x24], 0x0
        JE      SHORT @L00000006
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        PUSH    ECX
        PUSH    DWORD PTR DS:[v_915D68]
        LEA     EDX, DWORD PTR SS:[ESP+0x40]
        PUSH    0x40
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5A6]
        MOV     EAX, DWORD PTR SS:[ESP+0x20]
        MOV     EDI, DWORD PTR DS:[EAX+0x134]
        ADD     ESP, 0x10
        LEA     ESI, DWORD PTR SS:[ESP+0x38]
        JMP     SHORT @L00000007

    @L00000006:
        MOV     ECX, DWORD PTR SS:[ESP+0x10]
        MOV     EDI, DWORD PTR DS:[ECX+0x134]
        MOV     ESI, DWORD PTR DS:[v_87529C]

    @L00000007:
        CALL    DWORD PTR DS:[v_346660]
        PUSH    0x40
        LEA     EDX, DWORD PTR SS:[ESP+0x3C]
        MOV     ECX, DWORD PTR DS:[v_93DF98]
        MOV     BYTE PTR SS:[ESP+0xBC], 0x0
        MOV     BYTE PTR SS:[ESP+0x3BC], 0x0
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x40
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EDX, DWORD PTR SS:[ESP+0x40]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x40
        LEA     EAX, DWORD PTR SS:[ESP+0x7C]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x40]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        MOV     EDX, DWORD PTR SS:[ESP+0x18]
        MOV     ECX, DWORD PTR DS:[v_A77408]
        MOV     ECX, DWORD PTR DS:[EDX+ECX]
        TEST    ECX, ECX
        JE      SHORT @L00000008
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x5BC]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x200
        LEA     EAX, DWORD PTR SS:[ESP+0x5BC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0xC0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000008:
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EAX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        TEST    BYTE PTR DS:[EBX+0x20], 0x8
        JNZ     @L00000013
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x5BC]
        MOV     ECX, DWORD PTR DS:[v_93DF80]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x200
        LEA     ECX, DWORD PTR SS:[ESP+0x5BC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EAX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        MOV     ECX, DWORD PTR SS:[ESP+0x20]
        PUSH    ECX
        PUSH    DWORD PTR DS:[v_915D68]
        LEA     EDX, DWORD PTR SS:[ESP+0x3C0]
        PUSH    0x200
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5A6]
        FLD     DWORD PTR SS:[ESP+0x38]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AAE470]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        ADD     ESP, 0x10
        FUCOMPP
        FSTSW   AX
        TEST    AH, 0x44
        JPO     SHORT @L00000009
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_93AE68]
        LEA     EAX, DWORD PTR SS:[ESP+0x3C0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000009:
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_93DF7C]
        LEA     ECX, DWORD PTR SS:[ESP+0x3C0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        FLD     DWORD PTR SS:[ESP+0x28]
        FLD     ST(0x0)
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AAE470]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FLD     ST(0x0)
        FUCOMP  ST(0x2)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x44
        JPO     SHORT @L00000011
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        MOV     EAX, DWORD PTR DS:[v_93AE78]
        JPO     SHORT @L00000010
        MOV     EAX, DWORD PTR DS:[v_93AE6C]

    @L00000010:
        PUSH    0x200
        PUSH    EAX
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        JMP     SHORT @L00000012

    @L00000011:
        FSTP    ST(0x1)
        FSTP    ST(0x0)

    @L00000012:
        PUSH    0x200
        LEA     EAX, DWORD PTR SS:[ESP+0x3BC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0xC0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000013:
        MOV     EBX, DWORD PTR DS:[EBX+0x1EC]
        TEST    EBX, EBX
        JE      @L00000014
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x5BC]
        MOV     ECX, DWORD PTR DS:[v_93DF68]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x200
        LEA     EAX, DWORD PTR SS:[ESP+0x5BC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0xC0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_2019F0]
        MOV     ECX, DWORD PTR SS:[ESP+0x30]
        FLD     DWORD PTR DS:[ECX+0x4]
        SUB     ESP, 0x8
        FADD    DWORD PTR SS:[EBP+0x4]
        MOV     EDI, 0x200
        LEA     ESI, DWORD PTR SS:[ESP+0xC0]
        FSTP    DWORD PTR SS:[ESP+0x28]
        FLD     DWORD PTR SS:[ESP+0x28]
        FSTP    DWORD PTR SS:[ESP+0x4]
        FLD     DWORD PTR DS:[EAX]
        FSTP    DWORD PTR SS:[ESP]
        CALL    f_338FB0                                //CALL    DWORD PTR DS:[v_338FB0]

    @L00000014:
        MOV     ESI, DWORD PTR SS:[ESP+0x24]
        TEST    ESI, ESI
        JE      SHORT @L00000015
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x5BC]
        MOV     ECX, DWORD PTR DS:[v_93DF20]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x200
        LEA     EAX, DWORD PTR SS:[ESP+0x5BC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0xC0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        MOV     EDI, DWORD PTR SS:[ESP+0x14]
        PUSH    ESI
        MOV     EBX, 0x200
        LEA     ESI, DWORD PTR SS:[ESP+0xBC]
        CALL    DWORD PTR DS:[v_338EE0]

    @L00000015:
        PUSH    0x0FF
        LEA     EAX, DWORD PTR SS:[ESP+0x2BD]
        PUSH    0x0
        PUSH    EAX
        MOV     BYTE PTR SS:[ESP+0x2C4], 0x0
        CALL    DWORD PTR DS:[v_7E11C2]
        MOV     ECX, DWORD PTR DS:[v_A4F6E8]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOV     EDI, DWORD PTR SS:[ESP+0x24]
        MOV     EDX, DWORD PTR DS:[v_A77428]
        MOV     EDX, DWORD PTR DS:[EDI+EDX]
        PUSH    ECX
        PUSH    EDX
        PUSH    DWORD PTR DS:[v_874F48]
        LEA     EAX, DWORD PTR SS:[ESP+0x2D0]
        PUSH    0x100
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5A6]
        MOV     ESI, DWORD PTR SS:[ESP+0x30]
        ADD     ESP, 0x20
        CMP     DWORD PTR DS:[ESI+0x138], 0x0
        MOV     EAX, DWORD PTR DS:[v_93DF1C]
        JNZ     SHORT @L00000016
        MOV     EAX, DWORD PTR DS:[v_93DF18]

    @L00000016:
        PUSH    0x100
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x3BC]
        LEA     ECX, DWORD PTR SS:[ESP+0x2BC]
        CALL    DWORD PTR DS:[v_5C9650]
        TEST    EAX, EAX
        JNZ     SHORT @L00000017
        MOV     ECX, DWORD PTR DS:[v_A77428]
        MOV     ECX, DWORD PTR DS:[EDI+ECX]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x3BC]
        CALL    DWORD PTR DS:[v_5C9650]

    @L00000017:
        LEA     EDX, DWORD PTR SS:[ESP+0x3B8]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0xBC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x40]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x128]
        CALL    DWORD PTR DS:[v_3535D0]
        MOV     ECX, DWORD PTR SS:[ESP+0x7B8]
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x7AC
        RET     0x0C
    }
}
//---------------------------------------------------------------------------

FRAW void f_338FB0()
{
    __asm
    {
        SUB     ESP, 0x54
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x50], EAX
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_93A364]
        MOV     EDX, DWORD PTR DS:[v_93A348]
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_009EE0]
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_93A374]
        MOV     EDX, DWORD PTR DS:[v_93A348]
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        CALL    DWORD PTR DS:[v_009EE0]
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_93A380]
        MOV     EDX, DWORD PTR DS:[v_93A348]
        LEA     ECX, DWORD PTR SS:[ESP+0xC]
        CALL    DWORD PTR DS:[v_009EE0]
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_93A390]
        MOV     EDX, DWORD PTR DS:[v_93A348]
        LEA     ECX, DWORD PTR SS:[ESP+0x8]
        CALL    DWORD PTR DS:[v_009EE0]
        PUSH    0x3E
        LEA     EAX, DWORD PTR SS:[ESP+0x16]
        PUSH    0x0
        PUSH    EAX
        MOV     WORD PTR SS:[ESP+0x1C], 0x20
        CALL    DWORD PTR DS:[v_7E11C2]
        FLD     DWORD PTR SS:[ESP+0x64]
        FLD     DWORD PTR SS:[ESP+0x18]
        ADD     ESP, 0x0C
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x1
        JNZ     SHORT @L00000002
        FSTP    ST(0x1)
        MOV     ECX, DWORD PTR DS:[v_93AF08]
        FSTP    ST(0x0)
        JMP     SHORT @L00000006

    @L00000002:
        FCOMP   ST(0x1)
        FSTSW   AX
        FLD     DWORD PTR SS:[ESP+0x8]
        TEST    AH, 0x5
        JPE     SHORT @L00000003
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x1
        JNZ     SHORT @L00000003
        FSTP    ST(0x1)
        MOV     ECX, DWORD PTR DS:[v_93AEF8]
        FSTP    ST(0x0)
        JMP     SHORT @L00000006

    @L00000003:
        FCOMP   ST(0x1)
        FSTSW   AX
        FLD     DWORD PTR SS:[ESP+0x4]
        TEST    AH, 0x5
        JPE     SHORT @L00000004
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x1
        JNZ     SHORT @L00000004
        FSTP    ST(0x1)
        MOV     ECX, DWORD PTR DS:[v_93AEE4]
        FSTP    ST(0x0)
        JMP     SHORT @L00000006

    @L00000004:
        FCOMP   ST(0x1)
        FSTSW   AX
        FLD     DWORD PTR SS:[ESP]
        TEST    AH, 0x5
        JPE     SHORT @L00000005
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x1
        JNZ     SHORT @L00000005
        FSTP    ST(0x1)
        MOV     ECX, DWORD PTR DS:[v_93AED4]
        FSTP    ST(0x0)
        JMP     SHORT @L00000006

    @L00000005:
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        JPE     SHORT @L00000007
        MOV     ECX, DWORD PTR DS:[v_93AEC0]

    @L00000006:
        PUSH    0x40
        LEA     EDX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_5C9650]

    @L00000007:
        FLD     DWORD PTR SS:[ESP+0x5C]
        PUSH    EBX
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_876620]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        FSUBR   ST(0x0), ST(0x1)
        FSTP    DWORD PTR SS:[ESP+0x4]
        FLD     DWORD PTR SS:[ESP+0x4]
        FABS
        FSTP    DWORD PTR SS:[ESP+0x4]
        FLD     DWORD PTR SS:[ESP+0x4]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92E7A4]
        FCOMP   DWORD PTR DS:[EAX]
        POP     EAX
        FSTSW   AX
        TEST    AH, 0x5
        JPO     SHORT @L00000012
        FLDZ
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        JPE     SHORT @L00000008
        MOV     EBX, 0x1
        MOV     EAX, DWORD PTR DS:[v_93AE78]
        JMP     SHORT @L00000009

    @L00000008:
        OR      EBX, 0xFFFFFFFF
        MOV     EAX, DWORD PTR DS:[v_93AE6C]

    @L00000009:
        PUSH    EDI
        PUSH    EAX
        PUSH    ESI
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000010:
        PUSH    EDI
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        PUSH    ECX
        PUSH    ESI
    // FEAT HPMPSPD
        CMP     BYTE PTR DS:[bHPMPSPD], 0
        JNE     @L_HPMPSPD_G_2
        CALL    DWORD PTR DS:[v_6EB5BE]
        JMP     @L_HPMPSPD_F_2
    @L_HPMPSPD_G_2:
        CALL    HPMP_MS                                 //CALL    DWORD PTR DS:[v_6EB5BE]
    @L_HPMPSPD_F_2:

        TEST    EBX, EBX
        POP     EBX
        JE      SHORT @L00000011
        PUSH    EDI
        PUSH    DWORD PTR DS:[v_93AE68]
        PUSH    ESI
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000011:
        MOV     ECX, DWORD PTR SS:[ESP+0x50]
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x54
        RET     0x8

    @L00000012:
        FSTP    ST(0x0)
        XOR     EBX, EBX
        JMP     SHORT @L00000010
    }
}
//---------------------------------------------------------------------------

FRAW void f_3625F0()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_81FB38]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     EDI, ECX
        CMP     DWORD PTR DS:[EDI+0x260], 0x0
        MOV     DWORD PTR SS:[ESP+0x1C], 0x0
        JE      SHORT @L00000001
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        OR      EAX, 0xFFFFFFFF
        TEST    ECX, ECX
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        JE      @L00000014
        ADD     DWORD PTR DS:[ECX+0x4], EAX
        JNZ     @L00000014
        MOV     EAX, DWORD PTR DS:[ECX]
        JMP     @L00000013

    @L00000001:
        MOV     ESI, DWORD PTR SS:[ESP+0x24]
        TEST    ESI, ESI
        JE      @L00000011
        MOV     EDX, DWORD PTR DS:[ESI+0x10]
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        CALL    DWORD PTR DS:[v_03FA30]
        TEST    EAX, EAX
        JE      @L00000011
        MOV     ECX, DWORD PTR DS:[EAX+0xC]
        XOR     EDX, EDX
        CMP     ECX, 0x2B61676C
        SETE    DL
        MOV     ECX, EDX
        NEG     ECX
        SBB     ECX, ECX
        AND     ECX, EAX
        JE      @L00000011
        CMP     DWORD PTR DS:[ECX+0x20], 0x0
        JNZ     @L00000011
        TEST    DWORD PTR DS:[ESI+0x5C], 0x100
        JE      SHORT @L00000002
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_349910]
        OR      EAX, 0xFFFFFFFF
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        JMP     @L00000012

    @L00000002:
        MOV     EBX, DWORD PTR DS:[ESI+0x30]
        PUSH    0x1
        PUSH    0x1
        PUSH    0x0
        PUSH    0x0
        CALL    DWORD PTR DS:[v_15C3D0]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        TEST    EAX, EAX
        JE      SHORT @L00000003
        MOV     EBX, DWORD PTR DS:[EAX+0xA8]

    @L00000003:
        CMP     DWORD PTR SS:[ESP+0x28], 0x0
        JNZ     SHORT @L00000004
        CMP     DWORD PTR DS:[EDI+0x238], ESI
        JNZ     SHORT @L00000004
        CMP     DWORD PTR DS:[EDI+0x23C], EBX
        JE      SHORT @L00000005

    @L00000004:
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_32CFF0]
        PUSH    0x0
        PUSH    EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_33ADC0]
        PUSH    ECX
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], ESI
        ADD     DWORD PTR DS:[ESI+0x4], 0x1
        MOV     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x2C], ESP
        CALL    DWORD PTR DS:[v_3579B0]
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_60EDE0]
        TEST    EAX, EAX
        JE      SHORT @L00000005
        MOVZX   EAX, BYTE PTR DS:[ESI+0x24]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x64]
        MOV     ECX, ESI
        CALL    NEAR EDX
        MOV     ECX, EDI
        MOV     EBP, EAX
        CALL    DWORD PTR DS:[v_60EDE0]
        MOV     EDX, EBP
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_314C80]
        FLDZ
        PUSH    0x0
        PUSH    ECX
        MOV     ECX, EDI
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_60EDE0]
        XOR     EDX, EDX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_4D2CF0]

    @L00000005:
        LEA     EBP, DWORD PTR DS:[EDI+0x238]
        PUSH    ESI
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_02A560]
        MOV     ECX, EDI
        MOV     DWORD PTR DS:[EDI+0x23C], EBX
        CALL    f_357D20                                //CALL    DWORD PTR DS:[v_357D20]
        MOV     ECX, DWORD PTR SS:[EBP]
        CALL    DWORD PTR DS:[v_334FA0]
        TEST    EAX, EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x240]
        JE      SHORT @L00000006
        CALL    DWORD PTR DS:[v_60E7C0]
        JMP     SHORT @L00000007

    @L00000006:
        CALL    DWORD PTR DS:[v_60E7E0]

    @L00000007:
        MOV     ECX, DWORD PTR SS:[EBP]
        CALL    DWORD PTR DS:[v_334FC0]
        TEST    EAX, EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x244]
        JE      SHORT @L00000008
        CALL    DWORD PTR DS:[v_60E7C0]
        JMP     SHORT @L00000009

    @L00000008:
        CALL    DWORD PTR DS:[v_60E7E0]

    @L00000009:
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_60EDE0]
        MOV     EDI, EAX
        TEST    EDI, EDI
        JE      SHORT @L00000010
        FLDZ
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        MOV     EDX, 0x6
        PUSH    EBP
        PUSH    DWORD PTR DS:[v_357B50]
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_4E8700]
        FLDZ
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBP
        PUSH    DWORD PTR DS:[v_357BB0]
        MOV     EDX, 0x5
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_4E8680]

    @L00000010:
        OR      EAX, 0xFFFFFFFF
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        JMP     SHORT @L00000012

    @L00000011:
        OR      EAX, 0xFFFFFFFF
        TEST    ESI, ESI
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        JE      SHORT @L00000014

    @L00000012:
        ADD     DWORD PTR DS:[ESI+0x4], EAX
        JNZ     SHORT @L00000014
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     ECX, ESI

    @L00000013:
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000014:
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x0C
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_357D20()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_81F0BE]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x138
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x134], EAX
        PUSH    EBX
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x148]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     ESI, ECX
        CMP     DWORD PTR DS:[ESI+0x260], 0x0
        JNZ     @L00000019
        MOV     EAX, DWORD PTR DS:[ESI+0x238]
        TEST    EAX, EAX
        JE      @L00000019
        MOV     EDX, DWORD PTR DS:[EAX+0x10]
        MOV     ECX, DWORD PTR DS:[EAX+0xC]
        CALL    DWORD PTR DS:[v_03FA30]
        TEST    EAX, EAX
        JE      @L00000019
        MOV     ECX, DWORD PTR DS:[EAX+0xC]
        XOR     EDX, EDX
        CMP     ECX, 0x2B61676C
        SETE    DL
        MOV     ECX, EDX
        NEG     ECX
        SBB     ECX, ECX
        AND     ECX, EAX
        JE      @L00000019
        CMP     DWORD PTR DS:[ECX+0x20], 0x0
        JNZ     @L00000019
        LEA     EAX, DWORD PTR SS:[ESP+0x30]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x34]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x30]
        PUSH    EAX
        LEA     EDX, DWORD PTR SS:[ESP+0x44]
        LEA     ECX, DWORD PTR SS:[ESP+0x48]
        CALL    DWORD PTR DS:[v_5266D0]
        FLD1
        SUB     ESP, 0x18
        FST     DWORD PTR SS:[ESP+0x14]
        FLDZ
        FST     DWORD PTR SS:[ESP+0x10]
        FXCH    ST(0x1)
        FST     DWORD PTR SS:[ESP+0xC]
        FXCH    ST(0x1)
        FST     DWORD PTR SS:[ESP+0x8]
        FXCH    ST(0x1)
        FSTP    DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_5265E0]
        CMP     DWORD PTR DS:[ESI+0x240], 0x0
        JE      SHORT @L00000002
        CMP     DWORD PTR DS:[ESI+0x244], 0x0
        JNZ     @L00000007

    @L00000002:
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR DS:[EDX+0x1]
        CALL    DWORD PTR DS:[v_300710]
        MOV     EDI, DWORD PTR DS:[EAX+0x428]
        PUSH    0x0
        PUSH    0x1B1
        PUSH    DWORD PTR DS:[v_93E30C]
        PUSH    0x0C4
        CALL    DWORD PTR DS:[v_6EB5B2]
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        MOV     DWORD PTR SS:[ESP+0x10], EAX
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x150], 0x0
        JE      SHORT @L00000003
        PUSH    0x0
        PUSH    0x2
        PUSH    EDI
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_60D580]
        JMP     SHORT @L00000004

    @L00000003:
        XOR     EAX, EAX

    @L00000004:
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93E308]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    0x1
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, EAX
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93E304]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        MOV     DWORD PTR SS:[ESP+0x15C], -0x1
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x6
        PUSH    EDI
        PUSH    0x0
        MOV     DWORD PTR DS:[ESI+0x240], EAX
        CALL    DWORD PTR DS:[v_606770]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_939FC8]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_605D90]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_939FCC]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_605DB0]
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        PUSH    0x2
        CALL    DWORD PTR DS:[v_60DAF0]
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        PUSH    0x10
        CALL    DWORD PTR DS:[v_60DB50]
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        LEA     EDX, DWORD PTR SS:[ESP+0x10]
        PUSH    EDX
        MOV     DWORD PTR SS:[ESP+0x14], 0xFF23CD00
        CALL    DWORD PTR DS:[v_60E740]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92E7A4]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        FSTP    DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_935D98]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        FSTP    DWORD PTR SS:[ESP+0x24]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        MOV     EBX, 0xEE000000
        MOV     DWORD PTR SS:[ESP+0x18], EBX
        CALL    DWORD PTR DS:[v_60DC70]
        MOV     ECX, DWORD PTR DS:[v_A8C27C]
        MOV     ECX, DWORD PTR DS:[ECX]
        PUSH    0x0
        MOV     EDX, DWORD PTR DS:[v_93E2F4]
        CALL    DWORD PTR DS:[v_009E30]
        FSTP    DWORD PTR SS:[ESP+0x10]
        FLD     DWORD PTR SS:[ESP+0x10]
        PUSH    0x0
        PUSH    ECX
        XOR     EDX, EDX
        FSTP    DWORD PTR SS:[ESP]
        MOV     ECX, DWORD PTR DS:[v_93A9B0]
        CALL    DWORD PTR DS:[v_31F530]
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_60DA20]
        PUSH    0x0
        PUSH    0x1BF
        PUSH    DWORD PTR DS:[v_93E30C]
        PUSH    0x0C4
        CALL    DWORD PTR DS:[v_6EB5B2]
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        MOV     DWORD PTR SS:[ESP+0x10], EAX
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x150], 0x1
        JE      SHORT @L00000005
        PUSH    0x0
        PUSH    0x2
        PUSH    EDI
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_60D580]
        JMP     SHORT @L00000006

    @L00000005:
        XOR     EAX, EAX

    @L00000006:
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93E2F0]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    0x1
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, EAX
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93E304]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        MOV     DWORD PTR SS:[ESP+0x15C], -0x1
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x6
        PUSH    EDI
        PUSH    0x0
        MOV     DWORD PTR DS:[ESI+0x244], EAX
        CALL    DWORD PTR DS:[v_606770]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_939FC8]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x244]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_605D90]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_939FCC]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x244]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_605DB0]
        MOV     ECX, DWORD PTR DS:[ESI+0x244]
        PUSH    0x2
        CALL    DWORD PTR DS:[v_60DAF0]
        MOV     ECX, DWORD PTR DS:[ESI+0x244]
        PUSH    0x10
        CALL    DWORD PTR DS:[v_60DB50]
        MOV     ECX, DWORD PTR DS:[ESI+0x244]
        LEA     EDX, DWORD PTR SS:[ESP+0x10]
        PUSH    EDX
        MOV     DWORD PTR SS:[ESP+0x14], 0xFFC3DBFF
        CALL    DWORD PTR DS:[v_60E740]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92E7A4]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        FSTP    DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_935D98]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        FSTP    DWORD PTR SS:[ESP+0x24]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x244]
        MOV     DWORD PTR SS:[ESP+0x18], EBX
        CALL    DWORD PTR DS:[v_60DC70]
        MOV     ECX, DWORD PTR DS:[v_A8C27C]
        MOV     ECX, DWORD PTR DS:[ECX]
        PUSH    0x0
        MOV     EDX, DWORD PTR DS:[v_93E2F4]
        CALL    DWORD PTR DS:[v_009E30]
        FSTP    DWORD PTR SS:[ESP+0x10]
        FLD     DWORD PTR SS:[ESP+0x10]
        PUSH    0x0
        PUSH    ECX
        XOR     EDX, EDX
        FSTP    DWORD PTR SS:[ESP]
        MOV     ECX, DWORD PTR DS:[v_93A9B0]
        CALL    DWORD PTR DS:[v_31F530]
        MOV     ECX, DWORD PTR DS:[ESI+0x244]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_60DA20]

    @L00000007:
        LEA     ECX, DWORD PTR SS:[ESP+0x3C]
        CALL    DWORD PTR DS:[v_077E80]
        LEA     ECX, DWORD PTR SS:[ESP+0x98]
        CALL    DWORD PTR DS:[v_077E80]
        MOV     ECX, DWORD PTR DS:[ESI+0x238]
        LEA     EDX, DWORD PTR SS:[ESP+0x98]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x40]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_077FA0]
        MOV     EDI, DWORD PTR DS:[ESI+0x238]
        PUSH    0x1
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_26DE50]
        TEST    EAX, EAX
        JE      SHORT @L00000008
        TEST    BYTE PTR DS:[EDI+0x20], 0x8
        JNZ     @L00000016

    @L00000008:
        MOV     ECX, DWORD PTR DS:[ESI+0x238]
        MOV     EDI, DWORD PTR DS:[ESI+0x248]
        MOV     EBX, DWORD PTR DS:[ESI+0x24C]
        LEA     EDX, DWORD PTR SS:[ESP+0xD0]
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EDX+0x12C]
        LEA     EAX, DWORD PTR SS:[ESP+0x78]
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        CALL    NEAR EDX
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_6EF000]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EF000]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EF200]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        MOV     ECX, DWORD PTR DS:[ESI+0x238]
        MOV     DWORD PTR DS:[ESI+0x248], EAX
    // FEAT HPMPSPD
        CMP     BYTE PTR DS:[bHPMPSPD], 0
        JNE     @L_HPMPSPD_G_3
        LEA     EAX, DWORD PTR SS:[ESP+0xD8]
        JMP     @L_HPMPSPD_F_3
    @L_HPMPSPD_G_3:
        CALL    HPMP_HP                                 //LEA     EAX, DWORD PTR SS:[ESP+0xD8]
    @L_HPMPSPD_F_3:

        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EAX+0x130]
        LEA     EDX, DWORD PTR SS:[ESP+0x80]
        PUSH    EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x24]
        PUSH    EDX
        CALL    NEAR EAX
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EF000]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_6EF000]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_6EF200]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        MOV     ECX, DWORD PTR DS:[ESI+0x248]
        CMP     ECX, EDI
        MOV     DWORD PTR DS:[ESI+0x24C], EAX
    // FEAT HPMPSPD
        PUSHFD
        CMP     BYTE PTR DS:[bHPMPSPD], 0
        JNE     @L_HPMPSPD_G_5
        POPFD
        JNZ     SHORT @L00000009
        JMP     @L_HPMPSPD_F_5
    @L_HPMPSPD_G_5:
        POPFD
        JMP     SHORT @L00000009                        //JNZ     SHORT @L00000009
    @L_HPMPSPD_F_5:

        CMP     EAX, EBX
        JE      @L00000016

    @L00000009:
        PUSH    EAX
        PUSH    ECX
        PUSH    DWORD PTR DS:[v_93DE8C]
        LEA     ECX, DWORD PTR SS:[ESP+0x100]
        PUSH    0x28
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5A6]
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        ADD     ESP, 0x14
        LEA     EDX, DWORD PTR SS:[ESP+0xF4]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_60CA10]
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        CALL    DWORD PTR DS:[v_60CFB0]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_939FC8]
        FCOMP   DWORD PTR DS:[EAX]
        POP     EAX
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000010
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        PUSH    DWORD PTR DS:[v_87529C]
        CALL    DWORD PTR DS:[v_60CA10]

    @L00000010:
        MOV     ECX, DWORD PTR DS:[ESI+0x238]
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        MOV     DWORD PTR SS:[ESP+0x14], 0xFF00FF00
        CALL    DWORD PTR DS:[v_020640]
        FLD     DWORD PTR DS:[EAX]
        FSTP    DWORD PTR SS:[ESP+0x18]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93D84C]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FLD     DWORD PTR SS:[ESP+0x18]
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000011
        FSTP    ST(0x1)
        MOV     BYTE PTR SS:[ESP+0x11], 0x0FF
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875120]
        FSUB    QWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR DS:[v_92F8A0]
        FLD     QWORD PTR DS:[EAX]
        POP     EAX
        FSTCW   WORD PTR SS:[ESP+0x18]
        MOVZX   EAX, WORD PTR SS:[ESP+0x18]
        FMUL    ST(0x1), ST(0x0)
        OR      EAX, 0x0C00
        FXCH    ST(0x1)
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        FADD    ST(0x0), ST(0x0)
        FSUBP   ST(0x1), ST(0x0)
        FLDCW   WORD PTR SS:[ESP+0x14]
        FISTP   DWORD PTR SS:[ESP+0x14]
        MOV     CL, BYTE PTR SS:[ESP+0x14]
        MOV     BYTE PTR SS:[ESP+0x12], CL
        FLDCW   WORD PTR SS:[ESP+0x18]
        JMP     @L00000015

    @L00000011:
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_939F94]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FCOMP   ST(0x1)
        FSTSW   AX
        TEST    AH, 0x5
        JPE     SHORT @L00000012
        FCOM    ST(0x1)
        FSTSW   AX
        FSTP    ST(0x1)
        TEST    AH, 0x41
        JPE     SHORT @L00000013
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_93C218]
        FDIV    QWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR DS:[v_92F8A0]
        FMUL    QWORD PTR DS:[EAX]
        POP     EAX
        FSTCW   WORD PTR SS:[ESP+0x18]
        MOVZX   EAX, WORD PTR SS:[ESP+0x18]
        OR      EAX, 0x0C00
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        FLDCW   WORD PTR SS:[ESP+0x14]
        FISTP   DWORD PTR SS:[ESP+0x14]
        MOV     DL, BYTE PTR SS:[ESP+0x14]
        MOV     BYTE PTR SS:[ESP+0x11], DL
        FLDCW   WORD PTR SS:[ESP+0x18]
        JMP     SHORT @L00000014

    @L00000012:
        FSTP    ST(0x1)

    @L00000013:
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_8768B0]
        FDIV    QWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR DS:[v_92F8A0]
        FMUL    QWORD PTR DS:[EAX]
        POP     EAX
        FSTCW   WORD PTR SS:[ESP+0x18]
        MOVZX   EAX, WORD PTR SS:[ESP+0x18]
        OR      EAX, 0x0C00
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        FLDCW   WORD PTR SS:[ESP+0x14]
        FISTP   DWORD PTR SS:[ESP+0x14]
        MOV     AL, BYTE PTR SS:[ESP+0x14]
        MOV     BYTE PTR SS:[ESP+0x11], AL
        FLDCW   WORD PTR SS:[ESP+0x18]

    @L00000014:
        MOV     BYTE PTR SS:[ESP+0x12], 0x0FF

    @L00000015:
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x240]
        CALL    DWORD PTR DS:[v_60E740]

    @L00000016:
        MOV     ECX, DWORD PTR DS:[ESI+0x238]
        CALL    DWORD PTR DS:[v_334FC0]
        TEST    EAX, EAX
        JE      @L00000018
        MOV     ECX, DWORD PTR DS:[ESI+0x238]
        MOV     EDI, DWORD PTR DS:[ESI+0x250]
        MOV     EBX, DWORD PTR DS:[ESI+0x254]
        LEA     EDX, DWORD PTR SS:[ESP+0x14]
        PUSH    EDX
    // FEAT HPMPSPD
        CMP     BYTE PTR DS:[bHPMPSPD], 0
        JNE     @L_HPMPSPD_G_6
        ADD     ECX, 0x0B8
        JMP     @L_HPMPSPD_F_6
    @L_HPMPSPD_G_6:
        CALL    HPMP_MP                                 //ADD     ECX, 0x0B8
    @L_HPMPSPD_F_6:

        CALL    DWORD PTR DS:[v_4773A0]
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        LEA     ECX, DWORD PTR SS:[ESP+0xD4]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x7C]
        PUSH    EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     DWORD PTR SS:[ESP+0x18], EAX
        CALL    DWORD PTR DS:[v_6EF000]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EF000]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        MOV     ECX, DWORD PTR DS:[ESI+0x238]
        MOV     DWORD PTR DS:[ESI+0x250], EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        ADD     ECX, 0x0B8
        CALL    DWORD PTR DS:[v_4773E0]
        LEA     ECX, DWORD PTR SS:[ESP+0xDC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x84]
        PUSH    EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        CALL    DWORD PTR DS:[v_6EF000]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_6EF000]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        MOV     ECX, DWORD PTR DS:[ESI+0x250]
        CMP     ECX, EDI
        MOV     DWORD PTR DS:[ESI+0x254], EAX
    // FEAT HPMPSPD
        PUSHFD
        CMP     BYTE PTR DS:[bHPMPSPD], 0
        JNE     @L_HPMPSPD_G_7
        POPFD
        JNZ     SHORT @L00000017
        JMP     @L_HPMPSPD_F_7
    @L_HPMPSPD_G_7:
        POPFD
        JMP     SHORT @L00000017                        //JNZ     SHORT @L00000017
    @L_HPMPSPD_F_7:

        CMP     EAX, EBX
        JE      SHORT @L00000018

    @L00000017:
        PUSH    EAX
        PUSH    ECX
        PUSH    DWORD PTR DS:[v_93DE8C]
        LEA     EAX, DWORD PTR SS:[ESP+0x128]
        PUSH    0x28
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x14
        LEA     ECX, DWORD PTR SS:[ESP+0x11C]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x244]
        CALL    DWORD PTR DS:[v_60CA10]
        MOV     ECX, DWORD PTR DS:[ESI+0x244]
        CALL    DWORD PTR DS:[v_60CFB0]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_939FC8]
        FCOMP   DWORD PTR DS:[EAX]
        POP     EAX
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000018
        MOV     ECX, DWORD PTR DS:[ESI+0x244]
        PUSH    DWORD PTR DS:[v_87529C]
        CALL    DWORD PTR DS:[v_60CA10]

    @L00000018:
        FLD     DWORD PTR SS:[ESP+0x30]
        SUB     ESP, 0x18
        FSTP    DWORD PTR SS:[ESP+0x14]
        FLD     DWORD PTR SS:[ESP+0x40]
        FSTP    DWORD PTR SS:[ESP+0x10]
        FLD     DWORD PTR SS:[ESP+0x44]
        FSTP    DWORD PTR SS:[ESP+0xC]
        FLD     DWORD PTR SS:[ESP+0x3C]
        FSTP    DWORD PTR SS:[ESP+0x8]
        FLD     DWORD PTR SS:[ESP+0x4C]
        FSTP    DWORD PTR SS:[ESP+0x4]
        FLD     DWORD PTR SS:[ESP+0x50]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_5265E0]

    @L00000019:
        MOV     ECX, DWORD PTR SS:[ESP+0x148]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBX
        MOV     ECX, DWORD PTR SS:[ESP+0x134]
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x144
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_3548C0()
{
    __asm
    {
        SUB     ESP, 0x8DC
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x8D8], EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x8E8]
        PUSH    EBX
        MOV     EBX, DWORD PTR SS:[ESP+0x8E8]
        PUSH    EBP
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x8EC]
        PUSH    EDI
        MOV     EDI, ECX
        CMP     DWORD PTR DS:[EDI+0x94], 0x0
        MOV     DWORD PTR SS:[ESP+0x20], EDI
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        JNZ     SHORT @L00000001
        MOV     EDX, DWORD PTR DS:[EDI]
        MOV     EAX, DWORD PTR DS:[EDX+0x68]
        MOV     DWORD PTR DS:[EDI+0x90], 0x1
        CALL    NEAR EAX

    @L00000001:
        MOV     EBP, DWORD PTR DS:[ESI+0x1F0]
        MOV     EAX, DWORD PTR SS:[EBP+0xCC]
        MOV     ECX, DWORD PTR DS:[v_A77444]
        MOV     ECX, DWORD PTR DS:[EAX*0x4+ECX]
        PUSH    0x0
        XOR     EDX, EDX
        MOV     DWORD PTR SS:[ESP+0x20], EAX
        CALL    DWORD PTR DS:[v_31F530]
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_60E090]
        MOV     ECX, DWORD PTR SS:[EBP+0xD4]
        MOV     ESI, DWORD PTR SS:[EBP+0x94]
        MOV     DWORD PTR SS:[ESP+0x10], ECX
        LEA     ECX, DWORD PTR SS:[EBP+0x6C]
        CALL    DWORD PTR DS:[v_473170]
        LEA     EDX, DWORD PTR SS:[ESP+0x10]
        PUSH    EDX
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x28]
        CALL    DWORD PTR DS:[v_6EF350]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EEE20]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        ADD     EAX, ESI
        SUB     EAX, DWORD PTR DS:[EBX]
        PUSH    EAX
        PUSH    DWORD PTR DS:[v_915D68]
        LEA     EAX, DWORD PTR SS:[ESP+0x30]
        PUSH    0x40
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5A6]
        MOV     ESI, DWORD PTR DS:[EBX]
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        ADD     ESP, 0x10
        ADD     ESI, DWORD PTR DS:[ECX]
        JE      SHORT @L00000003
        TEST    ESI, ESI
        MOV     EAX, DWORD PTR DS:[v_93AE98]
        JG      SHORT @L00000002
        MOV     EAX, DWORD PTR DS:[v_93AE8C]

    @L00000002:
        PUSH    0x40
        PUSH    EAX
        LEA     EDX, DWORD PTR SS:[ESP+0x30]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    ESI
        PUSH    DWORD PTR DS:[v_93AE84]
        LEA     EAX, DWORD PTR SS:[ESP+0x70]
        PUSH    0x40
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x10
        PUSH    0x40
        LEA     ECX, DWORD PTR SS:[ESP+0x6C]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x30]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000003:
        MOV     EDI, DWORD PTR DS:[EDI+0x12C]
        LEA     ESI, DWORD PTR SS:[ESP+0x28]
        CALL    DWORD PTR DS:[v_346660]
        MOV     EAX, DWORD PTR SS:[EBP+0xE4]
        MOV     ESI, DWORD PTR SS:[EBP+0xA8]
        LEA     ECX, DWORD PTR SS:[EBP+0x6C]
        MOV     DWORD PTR SS:[ESP+0x10], EAX
        CALL    DWORD PTR DS:[v_473170]
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        PUSH    ECX
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EF350]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x28]
        CALL    DWORD PTR DS:[v_6EEE20]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        ADD     EAX, ESI
        SUB     EAX, DWORD PTR DS:[EBX+0x4]
        LEA     EDX, DWORD PTR SS:[ESP+0x28]
        PUSH    EAX
        PUSH    DWORD PTR DS:[v_915D68]
        PUSH    0x40
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5A6]
        MOV     EAX, DWORD PTR SS:[ESP+0x24]
        MOV     ESI, DWORD PTR DS:[EAX+0x4]
        ADD     ESP, 0x10
        ADD     ESI, DWORD PTR DS:[EBX+0x4]
        JE      SHORT @L00000005
        TEST    ESI, ESI
        MOV     EAX, DWORD PTR DS:[v_93AE98]
        JG      SHORT @L00000004
        MOV     EAX, DWORD PTR DS:[v_93AE8C]

    @L00000004:
        PUSH    0x40
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x30]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    ESI
        PUSH    DWORD PTR DS:[v_93AE84]
        LEA     EDX, DWORD PTR SS:[ESP+0x70]
        PUSH    0x40
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x10
        PUSH    0x40
        LEA     EAX, DWORD PTR SS:[ESP+0x6C]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x30]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000005:
        MOV     EDX, DWORD PTR SS:[ESP+0x20]
        MOV     EDI, DWORD PTR DS:[EDX+0x130]
        LEA     ESI, DWORD PTR SS:[ESP+0x28]
        CALL    DWORD PTR DS:[v_346660]
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_0DB3A0]
        SUB     EAX, DWORD PTR DS:[EBX+0x8]
        PUSH    EAX
        PUSH    DWORD PTR DS:[v_915D68]
        MOV     EAX, ESI
        PUSH    0x40
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5A6]
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     ESI, DWORD PTR DS:[ECX+0x8]
        ADD     ESP, 0x10
        ADD     ESI, DWORD PTR DS:[EBX+0x8]
        JE      SHORT @L00000007
        TEST    ESI, ESI
        MOV     EAX, DWORD PTR DS:[v_93AE98]
        JG      SHORT @L00000006
        MOV     EAX, DWORD PTR DS:[v_93AE8C]

    @L00000006:
        PUSH    0x40
        PUSH    EAX
        LEA     EDX, DWORD PTR SS:[ESP+0x30]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    ESI
        PUSH    DWORD PTR DS:[v_93AE84]
        LEA     EAX, DWORD PTR SS:[ESP+0x70]
        PUSH    0x40
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x10
        PUSH    0x40
        LEA     ECX, DWORD PTR SS:[ESP+0x6C]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x30]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000007:
        MOV     EBP, DWORD PTR SS:[ESP+0x20]
    // FEAT HPMPSPD
        CMP     BYTE PTR DS:[bHPMPSPD], 0
        JNE     @L_HPMPSPD_G_4
        MOV     EDI, DWORD PTR SS:[EBP+0x134]
        JMP     @L_HPMPSPD_F_4
    @L_HPMPSPD_G_4:
        CALL    HPMP_DRAW                               //MOV     EDI, DWORD PTR SS:[EBP+0x134]
    @L_HPMPSPD_F_4:

        LEA     ESI, DWORD PTR SS:[ESP+0x28]
        CALL    DWORD PTR DS:[v_346660]
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR DS:[EDX+0x1]
        MOV     BYTE PTR SS:[ESP+0x2E8], 0x0
        MOV     BYTE PTR SS:[ESP+0x68], 0x0
        CALL    DWORD PTR DS:[v_300710]
        MOV     EDI, DWORD PTR DS:[EAX+0x1D0]
        PUSH    0x40
        MOV     EDX, ESI
        MOV     ECX, DWORD PTR DS:[v_93E100]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x80
        PUSH    DWORD PTR DS:[v_93E0FC]
        LEA     EAX, DWORD PTR SS:[ESP+0x70]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x6EC]
        MOV     ECX, DWORD PTR DS:[v_93E0E8]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x80
        LEA     ECX, DWORD PTR SS:[ESP+0x6EC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x70]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x80
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EAX, DWORD PTR SS:[ESP+0x70]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x80
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     ECX, DWORD PTR SS:[ESP+0x70]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        TEST    EDI, EDI
        JE      @L00000008
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_8B500C]
        MOV     EDX, DWORD PTR DS:[v_875DE0]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_009EE0]
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        CALL    DWORD PTR DS:[v_6EEC20]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0x6EC]
        MOV     ECX, DWORD PTR DS:[v_93E0D8]
        MOV     ESI, EAX
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    ESI
        LEA     EDX, DWORD PTR SS:[ESP+0x6EC]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0xF0]
        PUSH    0x200
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x10
        PUSH    0x80
        LEA     ECX, DWORD PTR SS:[ESP+0xEC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x70]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x80
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EAX, DWORD PTR SS:[ESP+0x70]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x80
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     ECX, DWORD PTR SS:[ESP+0x70]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        MOV     EBX, DWORD PTR SS:[ESP+0x1C]
        JMP     SHORT @L00000009

    @L00000008:
        MOV     EBX, DWORD PTR SS:[ESP+0x1C]
        CMP     EBX, 0x1
        MOV     ECX, DWORD PTR DS:[v_93E0CC]
        JNZ     SHORT @L00000010

    @L00000009:
        MOV     ECX, DWORD PTR DS:[v_93E0BC]

    @L00000010:
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x400
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     ECX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EDX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        CMP     EBX, 0x1
        JNZ     SHORT @L00000011
        PUSH    0x400
        LEA     EAX, DWORD PTR SS:[ESP+0x6C]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000011:
        TEST    EDI, EDI
        JE      @L00000012
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_8B501C]
        MOV     EDX, DWORD PTR DS:[v_875DE0]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_009EE0]
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        CALL    DWORD PTR DS:[v_6EEC20]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        MOV     ECX, DWORD PTR DS:[v_93E0AC]
        MOV     ESI, EAX
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    ESI
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x6F0]
        PUSH    0x200
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x10
        PUSH    0x400
        LEA     ECX, DWORD PTR SS:[ESP+0x6EC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EAX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     ECX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        MOV     ECX, DWORD PTR DS:[v_93E09C]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x400
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     ECX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EDX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        JMP     SHORT @L00000013

    @L00000012:
        CMP     EBX, 0x3
        MOV     ECX, DWORD PTR DS:[v_93E094]
        JNZ     SHORT @L00000014

    @L00000013:
        MOV     ECX, DWORD PTR DS:[v_93E084]

    @L00000014:
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x400
        LEA     EAX, DWORD PTR SS:[ESP+0xEC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EDX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EAX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        CMP     EBX, 0x3
        JNZ     SHORT @L00000015
        PUSH    0x400
        LEA     ECX, DWORD PTR SS:[ESP+0x6C]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000015:
        TEST    EDI, EDI
        JE      @L00000016
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_8B5040]
        MOV     EDX, DWORD PTR DS:[v_875DE0]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_009EE0]
        LEA     EDX, DWORD PTR SS:[ESP+0x10]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_6EF100]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        MOV     ECX, DWORD PTR DS:[v_93E070]
        MOV     ESI, EAX
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    ESI
        LEA     EAX, DWORD PTR SS:[ESP+0xEC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x6F0]
        PUSH    0x200
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x10
        PUSH    0x400
        LEA     EDX, DWORD PTR SS:[ESP+0x6EC]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     ECX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EDX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        MOV     ECX, DWORD PTR DS:[v_93E05C]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x400
        LEA     EAX, DWORD PTR SS:[ESP+0xEC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EDX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EAX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        JMP     SHORT @L00000017

    @L00000016:
        CMP     EBX, 0x2
        MOV     ECX, DWORD PTR DS:[v_93E050]
        JNZ     SHORT @L00000018

    @L00000017:
        MOV     ECX, DWORD PTR DS:[v_93E040]

    @L00000018:
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x400
        LEA     ECX, DWORD PTR SS:[ESP+0xEC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EAX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     ECX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        CMP     EBX, 0x2
        JNZ     SHORT @L00000019
        PUSH    0x400
        LEA     EDX, DWORD PTR SS:[ESP+0x6C]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]

    @L00000019:
        TEST    EDI, EDI
        JE      @L00000020
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_8B5030]
        MOV     EDX, DWORD PTR DS:[v_875DE0]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_009EE0]
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        CALL    DWORD PTR DS:[v_6EEC20]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        MOV     ECX, DWORD PTR DS:[v_93E034]
        MOV     ESI, EAX
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    ESI
        LEA     ECX, DWORD PTR SS:[ESP+0xEC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x6F0]
        PUSH    0x200
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5A6]
        ADD     ESP, 0x10
        PUSH    0x400
        LEA     EAX, DWORD PTR SS:[ESP+0x6EC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EDX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     EAX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x200
        LEA     EDX, DWORD PTR SS:[ESP+0xEC]
        MOV     ECX, DWORD PTR DS:[v_93E024]
        CALL    DWORD PTR DS:[v_5C9650]
        PUSH    0x400
        LEA     ECX, DWORD PTR SS:[ESP+0xEC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_92A448]
        LEA     EAX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_6EB5BE]
        PUSH    0x400
        PUSH    DWORD PTR DS:[v_935C5C]
        LEA     ECX, DWORD PTR SS:[ESP+0x2F0]
        PUSH    ECX
        CALL    DWORD PTR DS:[v_6EB5BE]
        LEA     EDX, DWORD PTR SS:[ESP+0x2E8]
        PUSH    EDX
        PUSH    DWORD PTR DS:[v_87529C]
        LEA     EAX, DWORD PTR SS:[ESP+0x30]
        PUSH    EAX
        JMP     SHORT @L00000021

    @L00000020:
        PUSH    DWORD PTR DS:[v_87529C]
        LEA     ECX, DWORD PTR SS:[ESP+0x2EC]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x30]
        PUSH    EDX

    @L00000021:
        MOV     ECX, DWORD PTR SS:[EBP+0x128]
        CALL    DWORD PTR DS:[v_3535D0]
        MOV     ECX, DWORD PTR SS:[ESP+0x8E8]
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x8DC
        RET     0x0C
    }
}
//---------------------------------------------------------------------------


