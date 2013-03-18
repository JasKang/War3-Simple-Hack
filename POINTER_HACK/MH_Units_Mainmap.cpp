//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

void    *fpc_f_395CF0   = &f_395CF0;

FRAW void f_39C090()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_8236CB]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x104
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x118]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     ESI, ECX
        FLD     DWORD PTR DS:[ESI+0x23C]
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        FSTP    DWORD PTR SS:[ESP+0x128]
        FLDZ
        FSTP    DWORD PTR DS:[ESI+0x23C]
        FLD     DWORD PTR DS:[ESI+0x390]
        FADD    DWORD PTR SS:[ESP+0x128]
        FSTP    DWORD PTR DS:[ESI+0x390]
        CALL    DWORD PTR DS:[v_38BFE0]
        XOR     EBP, EBP
        MOV     DWORD PTR SS:[ESP+0x120], EBP
        CALL    DWORD PTR DS:[v_53F1E0]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_4D3330]
        FLDZ
        FST     DWORD PTR SS:[ESP+0x5C]
        MOV     EDI, DWORD PTR SS:[ESP+0x130]
        FST     DWORD PTR SS:[ESP+0x60]
        PUSH    EDI
        FST     DWORD PTR SS:[ESP+0x68]
        SUB     ESP, 0x8
        FST     DWORD PTR SS:[ESP+0x74]
        FST     DWORD PTR SS:[ESP+0x78]
        FST     DWORD PTR SS:[ESP+0x7C]
        FST     DWORD PTR SS:[ESP+0x80]
        FST     DWORD PTR SS:[ESP+0x84]
        FST     DWORD PTR SS:[ESP+0x88]
        FST     DWORD PTR SS:[ESP+0x8C]
        FST     DWORD PTR SS:[ESP+0x90]
        FST     DWORD PTR SS:[ESP+0x94]
        FST     DWORD PTR SS:[ESP+0x98]
        FST     DWORD PTR SS:[ESP+0x9C]
        FST     DWORD PTR SS:[ESP+0xA0]
        FST     DWORD PTR SS:[ESP+0xA4]
        FST     DWORD PTR SS:[ESP+0xA8]
        FST     DWORD PTR SS:[ESP+0xAC]
        FST     DWORD PTR SS:[ESP+0xB0]
        FST     DWORD PTR SS:[ESP+0xB4]
        FST     DWORD PTR SS:[ESP+0xB8]
        FST     DWORD PTR SS:[ESP+0xBC]
        FST     DWORD PTR SS:[ESP+0xC0]
        FST     DWORD PTR SS:[ESP+0xC4]
        FLD1
        FST     DWORD PTR SS:[ESP+0x38]
        FST     DWORD PTR SS:[ESP+0x48]
        FST     DWORD PTR SS:[ESP+0x58]
        FST     DWORD PTR SS:[ESP+0xC8]
        FST     DWORD PTR SS:[ESP+0xDC]
        FST     DWORD PTR SS:[ESP+0xF0]
        FSTP    DWORD PTR SS:[ESP+0x104]
        FST     DWORD PTR SS:[ESP+0x3C]
        FST     DWORD PTR SS:[ESP+0x40]
        FST     DWORD PTR SS:[ESP+0x44]
        FST     DWORD PTR SS:[ESP+0x4C]
        FST     DWORD PTR SS:[ESP+0x50]
        FST     DWORD PTR SS:[ESP+0x54]
        FST     DWORD PTR SS:[ESP+0x5C]
        FST     DWORD PTR SS:[ESP+0x60]
        FST     DWORD PTR SS:[ESP+0x64]
        FST     DWORD PTR SS:[ESP+0xCC]
        FST     DWORD PTR SS:[ESP+0xD0]
        FST     DWORD PTR SS:[ESP+0xD4]
        FST     DWORD PTR SS:[ESP+0xD8]
        FST     DWORD PTR SS:[ESP+0xE0]
        FST     DWORD PTR SS:[ESP+0xE4]
        FST     DWORD PTR SS:[ESP+0xE8]
        FST     DWORD PTR SS:[ESP+0xEC]
        FST     DWORD PTR SS:[ESP+0xF4]
        FST     DWORD PTR SS:[ESP+0xF8]
        FST     DWORD PTR SS:[ESP+0xFC]
        FSTP    DWORD PTR SS:[ESP+0x100]
        FLD     DWORD PTR DS:[ESI+0x380]
        FLD     DWORD PTR SS:[ESP+0x134]
        FLD     ST(0x0)
        FADDP   ST(0x2), ST(0x0)
        FXCH    ST(0x1)
        FSTP    DWORD PTR DS:[ESI+0x380]
        FLD     DWORD PTR SS:[ESP+0x138]
        FSTP    DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_608100]
        TEST    EAX, EAX
        JNZ     SHORT @L00000001
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        MOV     DWORD PTR SS:[ESP+0x120], -0x1
        CALL    DWORD PTR DS:[v_38C000]
        XOR     EAX, EAX
        JMP     @L00000015

    @L00000001:
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR DS:[EDX+0x1]
        CALL    DWORD PTR DS:[v_300710]
        MOV     ECX, DWORD PTR DS:[EAX+0x250]
        CALL    DWORD PTR DS:[v_3782C0]
        PUSH    EBP
        LEA     EAX, DWORD PTR DS:[ESI+0x310]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_39A460]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_39B240]
        FLD     DWORD PTR SS:[ESP+0x128]
        MOV     ECX, DWORD PTR DS:[ESI+0x19C]
        PUSH    EDI
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_302980]
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        CALL    DWORD PTR DS:[v_526710]
        LEA     ECX, DWORD PTR SS:[ESP+0xBC]
        CALL    DWORD PTR DS:[v_526700]
        LEA     ECX, DWORD PTR SS:[ESP+0x5C]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0xC0]
        LEA     ECX, DWORD PTR SS:[ESP+0x30]
        CALL    DWORD PTR DS:[v_7B67D0]
        CALL    DWORD PTR DS:[v_509440]
        FLD     DWORD PTR DS:[ESI+0x394]
        MOV     EAX, DWORD PTR DS:[v_A7930C]
        FLD     DWORD PTR DS:[EAX]
        FUCOMPP
        FSTSW   AX
        TEST    AH, 0x44
        JPE     SHORT @L00000002
        CALL    DWORD PTR DS:[v_0112E0]
        FSTP    DWORD PTR DS:[ESI+0x394]

    @L00000002:
        FLD     DWORD PTR DS:[ESI+0x394]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x10C]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EDX
        MOV     EAX, 0x8
        LEA     EBX, DWORD PTR SS:[ESP+0x64]
        CALL    DWORD PTR DS:[v_38B890]
        MOV     ECX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR DS:[ESI+0x1D4], ECX
        MOV     EDX, DWORD PTR DS:[EAX+0x4]
        MOV     DWORD PTR DS:[ESI+0x1D8], EDX
        MOV     ECX, DWORD PTR DS:[EAX+0x8]
        MOV     DWORD PTR DS:[ESI+0x1DC], ECX
        MOV     EDX, DWORD PTR DS:[EAX+0xC]
        MOV     DWORD PTR DS:[ESI+0x1E0], EDX
        FLD     DWORD PTR DS:[ESI+0x1D4]
        MOV     EAX, DWORD PTR DS:[v_AB7368]
        MOV     EAX, DWORD PTR DS:[EAX]
        FSTP    DWORD PTR SS:[ESP+0x18]
        ADD     EAX, 0x70
        PUSH    EAX
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_6EEEF0]
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        LEA     EAX, DWORD PTR DS:[ECX+0xFD000000]
        XOR     EAX, ECX
        SAR     EAX, 0x1F
        LEA     EDX, DWORD PTR DS:[ECX+0xFD800000]
        NOT     EAX
        AND     EAX, EDX
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        FLD     DWORD PTR DS:[ESI+0x1D8]
        MOV     DWORD PTR DS:[ESI+0x1E4], EAX
        FSTP    DWORD PTR SS:[ESP+0x18]
        MOV     ECX, DWORD PTR DS:[v_AB7368]
        MOV     ECX, DWORD PTR DS:[ECX]
        ADD     ECX, 0x6C
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_6EEEF0]
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        LEA     EAX, DWORD PTR DS:[ECX+0xFD000000]
        XOR     EAX, ECX
        SAR     EAX, 0x1F
        LEA     EDX, DWORD PTR DS:[ECX+0xFD800000]
        NOT     EAX
        AND     EAX, EDX
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        FLD     DWORD PTR DS:[ESI+0x1DC]
        MOV     DWORD PTR DS:[ESI+0x1E8], EAX
        FSTP    DWORD PTR SS:[ESP+0x18]
        MOV     EDX, DWORD PTR DS:[v_AB7368]
        MOV     EDX, DWORD PTR DS:[EDX]
        ADD     EDX, 0x70
        PUSH    EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_6EEEF0]
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        LEA     EAX, DWORD PTR DS:[ECX+0xFD000000]
        XOR     EAX, ECX
        SAR     EAX, 0x1F
        LEA     EDX, DWORD PTR DS:[ECX+0xFD800000]
        NOT     EAX
        AND     EAX, EDX
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        FLD     DWORD PTR DS:[ESI+0x1E0]
        MOV     DWORD PTR DS:[ESI+0x1EC], EAX
        FSTP    DWORD PTR SS:[ESP+0x18]
        MOV     EAX, DWORD PTR DS:[v_AB7368]
        MOV     EAX, DWORD PTR DS:[EAX]
        ADD     EAX, 0x6C
        PUSH    EAX
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_6EEEF0]
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        LEA     EAX, DWORD PTR DS:[ECX+0xFD000000]
        XOR     EAX, ECX
        SAR     EAX, 0x1F
        LEA     EDX, DWORD PTR DS:[ECX+0xFD800000]
        NOT     EAX
        AND     EAX, EDX
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        MOV     ECX, DWORD PTR DS:[ESI+0x19C]
        MOV     DWORD PTR DS:[ESI+0x1F0], EAX
        MOV     EDI, DWORD PTR DS:[ECX+0x34]
        LEA     EDX, DWORD PTR SS:[ESP+0x20]
        PUSH    EDX
        MOV     DWORD PTR SS:[ESP+0x1C], EDI
        CALL    DWORD PTR DS:[v_302950]
        MOV     ECX, DWORD PTR DS:[ESI+0x19C]
        LEA     EAX, DWORD PTR SS:[ESP+0xFC]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_302920]
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        CALL    DWORD PTR DS:[v_5087C0]
        MOV     ECX, DWORD PTR DS:[ESI+0x354]
        CMP     ECX, EBP
        JE      SHORT @L00000003
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    EBP
        PUSH    ECX
        MOV     EDX, EDI
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_4D2CF0]
        MOV     DWORD PTR DS:[ESI+0x35C], EAX

    @L00000003:
        MOV     EAX, DWORD PTR DS:[v_941328]
        FLD     DWORD PTR DS:[EAX]
        FCOMP   DWORD PTR DS:[ESI+0x380]
        FSTSW   AX
        TEST    AH, 0x5
        JPE     SHORT @L00000004
        MOV     DWORD PTR DS:[ESI+0x388], 0x1

    @L00000004:
        MOV     ECX, DWORD PTR DS:[ESI+0x19C]
        LEA     EDX, DWORD PTR SS:[ESP+0x108]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_302950]
        CMP     DWORD PTR DS:[ESI+0x38C], EBP
        MOV     ECX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR DS:[ESI+0x18C], ECX
        MOV     EDX, DWORD PTR DS:[EAX+0x4]
        MOV     DWORD PTR DS:[ESI+0x190], EDX
        MOV     EAX, DWORD PTR DS:[EAX+0x8]
        MOV     DWORD PTR DS:[ESI+0x194], EAX
        JE      SHORT @L00000005
        MOV     EDX, 0x8
        LEA     ECX, DWORD PTR SS:[ESP+0x5C]
        CALL    DWORD PTR DS:[v_015260]
        MOV     EDX, DWORD PTR DS:[v_92ED00]
        FLD     DWORD PTR DS:[EDX]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x100]
        FSTP    DWORD PTR SS:[ESP]
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        CALL    f_016B10                            // CALL    DWORD PTR DS:[v_016B10]

    @L00000005:
        CALL    DWORD PTR DS:[v_011250]
        CMP     DWORD PTR DS:[ESI+0x330], EBP
        JE      SHORT @L00000006
        MOV     ECX, ESI
        CALL    f_39B2D0                            //CALL    DWORD PTR DS:[v_39B2D0]

    @L00000006:
        MOV     EDX, 0x8
        LEA     ECX, DWORD PTR SS:[ESP+0x5C]
        CALL    DWORD PTR DS:[v_015260]
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    EBP
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x338]
        FSTP    DWORD PTR SS:[ESP]
        MOV     EDX, EDI
        CALL    DWORD PTR DS:[v_4D2CF0]
        FLD     DWORD PTR DS:[ESI+0x238]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x100]
        FSTP    DWORD PTR SS:[ESP]
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        CALL    f_016B10                            //CALL    DWORD PTR DS:[v_016B10]
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        CMP     ECX, EBP
        JE      SHORT @L00000007
        CALL    DWORD PTR DS:[v_3A8060]
        CMP     EAX, EBP
        JE      SHORT @L00000007
        FLD     DWORD PTR DS:[ESI+0x238]
        PUSH    ECX
        MOV     ECX, EAX
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_426CB0]

    @L00000007:
        CMP     DWORD PTR DS:[ESI+0x330], EBP
        JE      SHORT @L00000008
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_38EC40]

    @L00000008:
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    EBP
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x33C]
        FSTP    DWORD PTR SS:[ESP]
        MOV     EDX, EDI
        CALL    DWORD PTR DS:[v_4D2CF0]
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    ECX
        MOV     ECX, ESI
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_391240]
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    ECX
        LEA     ECX, DWORD PTR DS:[ESI+0x254]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_336E30]
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x1A0]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_33AB00]
        CMP     DWORD PTR DS:[ESI+0x388], EBP
        JE      SHORT @L00000009
        FLDZ
        MOV     DWORD PTR DS:[ESI+0x388], EBP
        FST     DWORD PTR DS:[ESI+0x380]
        FSTP    DWORD PTR DS:[ESI+0x384]

    @L00000009:
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_36FE10]
        XOR     EBX, EBX
        CMP     DWORD PTR DS:[ESI+0x3B4], EBP
        JBE     SHORT @L00000012
        LEA     ESP, DWORD PTR SS:[ESP]

    @L00000010:
        MOV     EAX, DWORD PTR DS:[ESI+0x3B8]
        ADD     EAX, EBP
        CMP     DWORD PTR DS:[EAX+0x10], 0x0
        JE      SHORT @L00000011
        MOV     EAX, DWORD PTR DS:[EAX+0x8]
        TEST    EAX, EAX
        JE      SHORT @L00000011
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    0x0
        PUSH    EDI
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x16C]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_60FC80]

    @L00000011:
        ADD     EBX, 0x1
        ADD     EBP, 0x18
        CMP     EBX, DWORD PTR DS:[ESI+0x3B4]
        JB      SHORT @L00000010

    @L00000012:
        TEST    BYTE PTR DS:[ESI+0x3AC], 0x2
        JE      SHORT @L00000013
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    0x0
        PUSH    EDI
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x588]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x16C]
        CALL    DWORD PTR DS:[v_60FC80]

    @L00000013:
        MOV     EAX, DWORD PTR DS:[ESI+0x58C]
        TEST    EAX, EAX
        JE      SHORT @L00000014
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    0x0
        PUSH    EDI
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x16C]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_60FC80]

    @L00000014:
        CALL    f_379EA0                                //CALL    DWORD PTR DS:[v_379EA0]
        CALL    DWORD PTR DS:[v_349B70]
        FLD     DWORD PTR SS:[ESP+0x128]
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        PUSH    EDX
        PUSH    ECX
        MOV     ECX, ESI
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_390890]
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x0
        PUSH    0x0
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_607D10]
        FLD     DWORD PTR SS:[ESP+0x128]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x0
        PUSH    0x0
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_607F90]
        FLDZ
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        FSTP    DWORD PTR DS:[ESI+0x238]
        MOV     DWORD PTR SS:[ESP+0x120], -0x1
        CALL    DWORD PTR DS:[v_38C000]
        MOV     EAX, 0x1

    @L00000015:
        MOV     ECX, DWORD PTR SS:[ESP+0x118]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x110
        RET     0x0C
    }
}
//---------------------------------------------------------------------------

FRAW void f_39B2D0()
{
    __asm
    {
        SUB     ESP, 0x6C
        PUSH    EBX
        PUSH    ESI
        MOV     ESI, ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x16C]
        CALL    DWORD PTR DS:[v_60FD40]
        MOV     ECX, DWORD PTR DS:[ESI+0x170]
        CALL    DWORD PTR DS:[v_60FD40]
        MOV     ECX, DWORD PTR DS:[ESI+0x174]
        CALL    DWORD PTR DS:[v_60FD40]
        XOR     EBX, EBX
        PUSH    EBX
        LEA     ECX, DWORD PTR DS:[ESI+0x620]
        CALL    DWORD PTR DS:[v_334410]
        PUSH    EBX
        LEA     ECX, DWORD PTR DS:[ESI+0x630]
        CALL    DWORD PTR DS:[v_37CBD0]
        PUSH    EBX
        LEA     ECX, DWORD PTR DS:[ESI+0x640]
        CALL    DWORD PTR DS:[v_3961D0]
        CMP     DWORD PTR DS:[ESI+0x388], EBX
        JE      SHORT @L00000002
        PUSH    EBX
        LEA     ECX, DWORD PTR DS:[ESI+0x600]
        CALL    DWORD PTR DS:[v_334410]
        PUSH    0x10
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_392E70]
        PUSH    EBX
        PUSH    ESI
        CALL    DWORD PTR DS:[v_26C1C0]
        MOV     EDX, DWORD PTR DS:[v_39B160]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_46D1B0]
        PUSH    EBX
        LEA     ECX, DWORD PTR DS:[ESI+0x650]
        CALL    DWORD PTR DS:[v_2C7150]
        PUSH    EBX
        PUSH    ESI
        CALL    DWORD PTR DS:[v_2C6140]
        MOV     EDX, DWORD PTR DS:[v_3998B0]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_46D1B0]

    @L00000002:
        PUSH    EDI
        PUSH    EBX
        PUSH    ESI
        CALL    DWORD PTR DS:[v_3DC690]
        MOV     EDX, DWORD PTR DS:[v_38E910]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_46D1B0]
        MOV     ECX, 0x2
        CALL    DWORD PTR DS:[v_62B170]
        MOV     EDI, EAX
        CMP     EDI, EBX
        JNZ     SHORT @L00000003
        MOV     ECX, 0x112
        CALL    DWORD PTR DS:[v_62B170]
        TEST    EAX, EAX
        JE      SHORT @L00000004

    @L00000003:
        MOV     EAX, 0x1

    @L00000004:
        CMP     EDI, EBX
        MOV     DWORD PTR DS:[ESI+0x180], EAX
        JNZ     SHORT @L00000005
        MOV     ECX, 0x113
        CALL    DWORD PTR DS:[v_62B170]
        TEST    EAX, EAX
        JE      SHORT @L00000006

    @L00000005:
        MOV     EAX, 0x1

    @L00000006:
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR DS:[EDX+0x1]
        MOV     DWORD PTR DS:[ESI+0x17C], EAX
        CALL    DWORD PTR DS:[v_300710]
        CMP     DWORD PTR DS:[EAX+0x1D8], EBX
        JE      SHORT @L00000007
        XOR     EAX, EAX
        CMP     DWORD PTR DS:[ESI+0x180], EBX
        SETE    AL
        XOR     ECX, ECX
        CMP     DWORD PTR DS:[ESI+0x17C], EBX
        SETE    CL
        MOV     DWORD PTR DS:[ESI+0x180], EAX
        MOV     DWORD PTR DS:[ESI+0x17C], ECX

    @L00000007:
        CMP     DWORD PTR DS:[ESI+0x180], EBX
        JNZ     SHORT @L00000008
        CMP     DWORD PTR DS:[ESI+0x17C], EBX
        JNZ     SHORT @L00000008
        CALL    DWORD PTR DS:[v_37D260]

    @L00000008:
        CALL    DWORD PTR DS:[v_00D890]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_0116A0]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_392900]
        MOV     EDX, DWORD PTR DS:[ESI+0x178]
        MOVZX   EAX, WORD PTR DS:[EDX+0x2C]
        PUSH    EBX
        PUSH    EAX
        LEA     ECX, DWORD PTR DS:[ESI+0x1F8]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_38DEA0]
        MOVZX   EDX, WORD PTR DS:[ESI+0x1F4]
        PUSH    0x1
        PUSH    EDX
        LEA     EAX, DWORD PTR DS:[ESI+0x214]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_38DEA0]
        PUSH    EBX
        PUSH    ESI
        CALL    DWORD PTR DS:[v_2A8570]
        MOV     EDX, DWORD PTR DS:[fpc_f_395CF0]        //MOV     EDX, DWORD PTR DS:[v_395CF0]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_46D1B0]
        MOV     ECX, 0x5
        LEA     EAX, DWORD PTR SS:[ESP+0x20]

    @L00000009:
        MOV     DWORD PTR DS:[EAX-0x8], EBX
        MOV     DWORD PTR DS:[EAX-0x4], 0x1
        MOV     DWORD PTR DS:[EAX], EBX
        MOV     DWORD PTR DS:[EAX+0x4], EBX
        ADD     EAX, 0x10
        SUB     ECX, 0x1
        JNS     SHORT @L00000009
        CMP     DWORD PTR DS:[ESI+0x38C], EBX
        LEA     EDI, DWORD PTR DS:[ESI+0x1D4]
        JE      SHORT @L00000010
        LEA     ECX, DWORD PTR SS:[ESP+0xC]
        PUSH    ECX
        PUSH    DWORD PTR DS:[v_392CC0]
        PUSH    EBX
        PUSH    EBX
        MOV     EDX, 0x4FD0000
        MOV     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x1C], ESI
        MOV     DWORD PTR SS:[ESP+0x20], EBX
        MOV     DWORD PTR SS:[ESP+0x24], EBX
        CALL    DWORD PTR DS:[v_4693D0]
        MOV     DWORD PTR DS:[ESI+0x38C], EBX

    @L00000010:
        CALL    DWORD PTR DS:[v_266160]
        MOV     DWORD PTR SS:[ESP+0x18], EAX
        MOV     DWORD PTR SS:[ESP+0x1C], EBX
        PUSH    EAX                                 // +0x04
        MOV     EAX, DWORD PTR DS:[v_395B70]
        MOV     DWORD PTR SS:[ESP+0x20+0x04], EAX
        POP     EAX
        MOV     DWORD PTR SS:[ESP+0x24], ESI
        CALL    DWORD PTR DS:[v_26C1C0]
        MOV     DWORD PTR SS:[ESP+0x28], EAX
        MOV     DWORD PTR SS:[ESP+0x2C], EBX
        PUSH    EAX                                 // +0x04
        MOV     EAX, DWORD PTR DS:[v_395B10]
        MOV     DWORD PTR SS:[ESP+0x30+0x04], EAX
        POP     EAX
        MOV     DWORD PTR SS:[ESP+0x34], ESI
        CALL    DWORD PTR DS:[v_2B5AE0]
        MOV     DWORD PTR SS:[ESP+0x38], EAX
        MOV     DWORD PTR SS:[ESP+0x3C], EBX
        PUSH    EAX                                 // +0x04
        MOV     EAX, DWORD PTR DS:[v_395C30]
        MOV     DWORD PTR SS:[ESP+0x40+0x04], EAX
        POP     EAX
        MOV     DWORD PTR SS:[ESP+0x44], ESI
        CALL    DWORD PTR DS:[v_2A8690]
        MOV     DWORD PTR SS:[ESP+0x48], EAX
        MOV     DWORD PTR SS:[ESP+0x4C], 0x1
        PUSH    EAX                                 // +0x04
        MOV     EAX, DWORD PTR DS:[v_395C90]
        MOV     DWORD PTR SS:[ESP+0x50+0x04], EAX
        POP     EAX
        MOV     DWORD PTR SS:[ESP+0x54], ESI
        CALL    DWORD PTR DS:[v_2C6140]
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        PUSH    EDX
        PUSH    0x5
        MOV     EDX, 0x910000
        MOV     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x60], EAX
        MOV     DWORD PTR SS:[ESP+0x64], EBX
        PUSH    EAX                                 // +0x04
        MOV     EAX, DWORD PTR DS:[v_395D00]
        MOV     DWORD PTR SS:[ESP+0x68+0x04], EAX
        POP     EAX
        MOV     DWORD PTR SS:[ESP+0x6C], ESI
        CALL    DWORD PTR DS:[v_4675B0]
        XOR     EDI, EDI
        CMP     DWORD PTR DS:[ESI+0x5A4], EBX
        JBE     SHORT @L00000012
        MOV     EDI, EDI

    @L00000011:
        MOV     EAX, DWORD PTR DS:[ESI+0x5A8]
        MOV     ECX, DWORD PTR DS:[EAX+EDI*0x4]
        MOV     EDX, ESI
        CALL    f_39B210                                //CALL    DWORD PTR DS:[v_39B210]
        ADD     EDI, 0x1
        CMP     EDI, DWORD PTR DS:[ESI+0x5A4]
        JB      SHORT @L00000011

    @L00000012:
        XOR     EDI, EDI
        CMP     DWORD PTR DS:[ESI+0x5B4], EBX
        JBE     SHORT @L00000014

    @L00000013:
        MOV     ECX, DWORD PTR DS:[ESI+0x5B8]
        MOV     ECX, DWORD PTR DS:[ECX+EDI*0x4]
        MOV     EDX, ESI
        CALL    f_39B220                            // DWORD PTR DS:[v_39B220]
        ADD     EDI, 0x1
        CMP     EDI, DWORD PTR DS:[ESI+0x5B4]
        JB      SHORT @L00000013

    @L00000014:
        XOR     EDI, EDI
        CMP     DWORD PTR DS:[ESI+0x5D4], EBX
        JBE     SHORT @L00000016
        LEA     EBX, DWORD PTR DS:[EBX]

    @L00000015:
        MOV     EAX, DWORD PTR DS:[ESI+0x5D8]
        MOV     ECX, DWORD PTR DS:[EAX+EDI*0x4]
        MOV     EDX, ESI
        CALL    DWORD PTR DS:[v_3998F0]
        ADD     EDI, 0x1
        CMP     EDI, DWORD PTR DS:[ESI+0x5D4]
        JB      SHORT @L00000015

    @L00000016:
        XOR     EDI, EDI
        CMP     DWORD PTR DS:[ESI+0x5C4], EBX
        JBE     SHORT @L00000018

    @L00000017:
        MOV     ECX, DWORD PTR DS:[ESI+0x5C8]
        MOV     ECX, DWORD PTR DS:[ECX+EDI*0x4]
        MOV     EDX, ESI
        CALL    f_39B230                                //CALL    DWORD PTR DS:[v_39B230]
        ADD     EDI, 0x1
        CMP     EDI, DWORD PTR DS:[ESI+0x5C4]
        JB      SHORT @L00000017

    @L00000018:
        XOR     EDI, EDI
        CMP     DWORD PTR DS:[ESI+0x5E4], EBX
        JBE     SHORT @L00000020
        LEA     EBX, DWORD PTR DS:[EBX]

    @L00000019:
        MOV     EAX, DWORD PTR DS:[ESI+0x5E8]
        MOV     ECX, DWORD PTR DS:[EAX+EDI*0x4]
        MOV     EDX, ESI
        CALL    f_38E880                                //CALL    DWORD PTR DS:[v_38E880]
        ADD     EDI, 0x1
        CMP     EDI, DWORD PTR DS:[ESI+0x5E4]
        JB      SHORT @L00000019

    @L00000020:
        XOR     EDI, EDI
        CMP     DWORD PTR DS:[ESI+0x5F4], EBX
        JBE     SHORT @L00000022

    @L00000021:
        MOV     ECX, DWORD PTR DS:[ESI+0x5F8]
        MOV     ECX, DWORD PTR DS:[ECX+EDI*0x4]
        MOV     EDX, ESI
        CALL    f_3928F0                                //CALL    DWORD PTR DS:[v_3928F0]
        ADD     EDI, 0x1
        CMP     EDI, DWORD PTR DS:[ESI+0x5F4]
        JB      SHORT @L00000021

    @L00000022:
        MOV     DWORD PTR DS:[ESI+0x5A4], EBX
        MOV     DWORD PTR DS:[ESI+0x5B4], EBX
        MOV     DWORD PTR DS:[ESI+0x5C4], EBX
        MOV     DWORD PTR DS:[ESI+0x5E4], EBX
        MOV     DWORD PTR DS:[ESI+0x5F4], EBX
        CMP     DWORD PTR DS:[ESI+0x31C], EBX
        POP     EDI
        JNZ     SHORT @L00000023
        PUSH    0x1
        PUSH    ESI
        CALL    DWORD PTR DS:[v_2BB350]
        MOV     EDX, DWORD PTR DS:[v_3928E0]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_46D1B0]

    @L00000023:
        MOV     ECX, DWORD PTR DS:[ESI+0x178]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ECX, DWORD PTR DS:[EAX+0x34]
        CALL    DWORD PTR DS:[v_425120]
        CALL    f_333590                                //CALL    DWORD PTR DS:[v_333590]
        CMP     DWORD PTR DS:[ESI+0x31C], EBX
        JNZ     SHORT @L00000024
        CMP     DWORD PTR DS:[ESI+0x2FC], EBX
        JE      SHORT @L00000024
        MOV     EAX, DWORD PTR DS:[ESI+0x2F8]
        CMP     EAX, EBX
        JE      SHORT @L00000024
        MOV     EDX, DWORD PTR DS:[ESI+0x140]
        FLD     DWORD PTR DS:[ESI+0x23C]
        PUSH    EBX
        PUSH    EBX
        PUSH    EDX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x16C]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_60FCE0]

    @L00000024:
        POP     ESI
        POP     EBX
        ADD     ESP, 0x6C
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_39B220()
{
    __asm
    {
        PUSH    ECX
        MOV     ECX, EDX
        CALL    f_399D00                            //CALL    DWORD PTR DS:[v_399D00]
        MOV     EAX, 0x1
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_399D00()
{
    __asm
    {
        SUB     ESP, 0x2C
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x3C]
        PUSH    EDI
        MOV     EDI, ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_26BA80]
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EBX, EAX
        XOR     EAX, EAX
        TEST    EBX, EBX
        SETNE   AL
        LEA     ECX, DWORD PTR SS:[ESP+0x30]
        PUSH    ECX
        MOV     ECX, ESI
        MOV     EBP, EAX
        MOV     EAX, DWORD PTR DS:[EDX+0xB8]
        CALL    NEAR EAX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_4743A0]
        MOV     EAX, DWORD PTR SS:[ESP+0x38]
        MOV     EDX, DWORD PTR SS:[ESP+0x34]
        MOV     ECX, DWORD PTR SS:[ESP+0x30]
        MOV     DWORD PTR SS:[ESP+0x2C], EAX
        XOR     EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x40], EAX
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x20]
        SHR     EAX, 0x5
        AND     EAX, 0x1
        MOV     DWORD PTR SS:[ESP+0x28], EDX
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     DWORD PTR SS:[ESP+0x24], ECX
        MOV     DWORD PTR SS:[ESP+0x10], EAX
        MOV     EAX, DWORD PTR DS:[EDX+0x1AC]
        MOV     ECX, ESI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JNZ     SHORT @L00000002
        LEA     ECX, DWORD PTR DS:[EDI+0x1F8]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x44]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x30]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x178]
        CALL    f_3A1460                            //CALL    DWORD PTR DS:[v_3A1460]
        MOVZX   EDX, WORD PTR DS:[EDI+0x1F4]
        MOV     EAX, DWORD PTR SS:[ESP+0x40]
        PUSH    EDX
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2AB710]
        CMP     DWORD PTR DS:[EDI+0x328], 0x0
        JE      SHORT @L00000002
        CMP     DWORD PTR SS:[ESP+0x10], 0x0
        JNZ     SHORT @L00000002
        MOV     CX, WORD PTR DS:[EDI+0x1F4]
        AND     CX, WORD PTR SS:[ESP+0x14]
        NEG     CX
        SBB     ECX, ECX
        NEG     ECX
        AND     EBP, ECX

    @L00000002:
        TEST    EBX, EBX
        JE      SHORT @L00000004
        CMP     DWORD PTR DS:[EDI+0x328], 0x0
        JE      SHORT @L00000003
        CMP     DWORD PTR SS:[ESP+0x10], 0x0
        JNZ     SHORT @L00000003
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0xF0]
        PUSH    0x1
        MOV     ECX, ESI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JE      SHORT @L00000004
        MOV     CX, WORD PTR SS:[ESP+0x40]
        TEST    WORD PTR DS:[EDI+0x1F4], CX
        JE      SHORT @L00000004
        MOV     EDX, DWORD PTR DS:[EDI+0x198]
        PUSH    EDX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_38B490]
        TEST    EAX, EAX
        JE      SHORT @L00000004

    @L00000003:
        MOV     EAX, 0x1
        JMP     SHORT @L00000005

    @L00000004:
        XOR     EAX, EAX

    @L00000005:
        OR      EBP, EAX
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x13C]
        MOV     ECX, ESI
        CALL    NEAR EDX
        TEST    EAX, EAX
        JNZ     SHORT @L00000006
        TEST    EBP, EBP
        JE      SHORT @L00000006
        MOV     EAX, 0x1
        JMP     SHORT @L00000007

    @L00000006:
        XOR     EAX, EAX

    @L00000007:
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_268F90]
        TEST    EBP, EBP
        JE      @L00000013
        CMP     DWORD PTR DS:[EDI+0x300], -0x1
        JE      @L00000014
        CMP     DWORD PTR DS:[EDI+0x2FC], 0x0
        JE      @L00000014
        FLD     DWORD PTR DS:[EDI+0x310]
        MOV     EAX, DWORD PTR DS:[ESI]
        FSUB    DWORD PTR SS:[ESP+0x24]
        MOV     EDX, DWORD PTR DS:[EAX+0x168]
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP+0x20]
        MOV     ECX, ESI
        FLD     DWORD PTR DS:[EDI+0x314]
        FSUB    DWORD PTR SS:[ESP+0x2C]
        FSTP    DWORD PTR SS:[ESP+0x1C]
        CALL    NEAR EDX
        FLD     DWORD PTR DS:[EAX]
        FSTP    DWORD PTR SS:[ESP+0x20]
        FLD     DWORD PTR SS:[ESP+0x18]
        FLD     DWORD PTR SS:[ESP+0x1C]
        FMUL    ST(0x0), ST(0x0)
        FLD     ST(0x1)
        FMULP   ST(0x2), ST(0x0)
        FADDP   ST(0x1), ST(0x0)
        FLDZ
        FMUL    ST(0x0), ST(0x0)
        FADDP   ST(0x1), ST(0x0)
        FSTP    DWORD PTR SS:[ESP+0x1C]
        FLD     DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_7E15E6]
        FSTP    DWORD PTR SS:[ESP+0x1C]
        FLD     DWORD PTR SS:[ESP+0x1C]
        MOV     EAX, DWORD PTR DS:[ESI]
        FSUB    DWORD PTR SS:[ESP+0x20]
        MOV     EDX, DWORD PTR DS:[EAX+0x13C]
        MOV     ECX, ESI
        FSTP    DWORD PTR SS:[ESP+0x20]
        CALL    NEAR EDX
        TEST    EAX, EAX
        JNZ     @L00000009
        TEST    DWORD PTR DS:[ESI+0x20], 0x400
        JNZ     @L00000009
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x1AC]
        MOV     ECX, ESI
        CALL    NEAR EDX
        TEST    EAX, EAX
        JNZ     @L00000009
        TEST    BYTE PTR DS:[ESI+0x20], 0x20
        JNZ     SHORT @L00000009
        FLD     DWORD PTR SS:[ESP+0x20]
        FMUL    ST(0x0), ST(0x0)
        FLD     DWORD PTR DS:[EDI+0x308]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x1
        JNZ     SHORT @L00000009
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x30C]
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], ECX
        XOR     EDX, EDX
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_4D3220]
        FLD     DWORD PTR DS:[EDI+0x238]
        MOV     EDX, DWORD PTR DS:[EDI+0x140]
        PUSH    ESI
        PUSH    0x0
        PUSH    EDX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x170]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_60FCE0]
        TEST    EAX, EAX
        JE      SHORT @L00000008
        MOV     ECX, DWORD PTR DS:[EDI+0x198]
        MOV     EAX, 0x1
        SHL     EAX, CL
        OR      WORD PTR DS:[ESI+0x2C], AX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x2C
        RET     0x4

    @L00000008:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0xB4]
        MOV     ECX, ESI
        CALL    NEAR EAX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x2C
        RET     0x4

    @L00000009:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0xB4]
        MOV     ECX, ESI
        CALL    NEAR EAX

    @L00000010:
        MOV     EAX, DWORD PTR DS:[EDI+0x140]
        FLD     DWORD PTR DS:[EDI+0x238]
        PUSH    ESI
        PUSH    0x0
        PUSH    EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x16C]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_60FCE0]
        TEST    EAX, EAX
        JE      SHORT @L00000013
        PUSH    ESI
        LEA     ECX, DWORD PTR DS:[EDI+0x640]
        CALL    DWORD PTR DS:[v_28E580]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_029770]
        MOV     ECX, DWORD PTR DS:[EDI+0x198]
        MOV     EDX, 0x1
        SHL     EDX, CL
        OR      WORD PTR DS:[ESI+0x2C], DX
        TEST    DWORD PTR DS:[ESI+0x20], 0x1000
        JE      SHORT @L00000013
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2AD5D0]
        TEST    EAX, EAX
        JE      SHORT @L00000011
        CMP     DWORD PTR SS:[ESP+0x10], 0x0
        JE      SHORT @L00000012

    @L00000011:
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x1A0]
        MOV     ECX, ESI
        CALL    NEAR EDX
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x1A8]
        MOV     ECX, ESI
        CALL    NEAR EDX

    @L00000012:
        PUSH    ESI
        LEA     ECX, DWORD PTR DS:[EDI+0x630]
        CALL    DWORD PTR DS:[v_37CB20]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_2C86C0]

    @L00000013:
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x2C
        RET     0x4

    @L00000014:
        TEST    DWORD PTR DS:[ESI+0x20], 0x400
        JE      @L00000010
        MOV     ECX, DWORD PTR DS:[EDI+0x140]
        FLD     DWORD PTR DS:[EDI+0x238]
        PUSH    ESI
        PUSH    0x0
        PUSH    ECX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x174]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_60FCE0]
        TEST    EAX, EAX
        JE      SHORT @L00000013
        PUSH    ESI
        LEA     ECX, DWORD PTR DS:[EDI+0x640]
        CALL    DWORD PTR DS:[v_28E580]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_029770]
        MOV     ECX, DWORD PTR DS:[EDI+0x198]
        MOV     EDX, 0x1
        SHL     EDX, CL
        POP     EDI
        OR      WORD PTR DS:[ESI+0x2C], DX
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x2C
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_3A1460()
{
    __asm
    {
        SUB     ESP, 0x8
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EDI, ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     WORD PTR DS:[EAX], 0x0
        LEA     EDX, DWORD PTR SS:[ESP+0x10]
        PUSH    EDX
        MOV     WORD PTR DS:[ECX], 0x0
        MOV     ECX, DWORD PTR SS:[ESP+0x20]
        LEA     EAX, DWORD PTR SS:[ESP+0x18]
        PUSH    EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x34]
        CALL    DWORD PTR DS:[v_26D0C0]
        MOV     EBP, DWORD PTR SS:[ESP+0x28]
        MOV     EBX, 0x1
        ADD     EBP, 0x4
        MOV     DWORD PTR SS:[ESP+0x1C], 0x0C

    @L00000002:
        MOVZX   EAX, WORD PTR SS:[EBP]
        TEST    AX, AX
        JE      SHORT @L00000005
        MOV     EDX, DWORD PTR SS:[ESP+0x20]
        MOVZX   ESI, WORD PTR DS:[EDX]
        MOVZX   ECX, SI
        MOVZX   EDX, AX
        AND     ECX, EDX
        JNZ     SHORT @L00000004
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x34]
        CALL    DWORD PTR DS:[v_00E7A0]
        MOV     EDX, EAX
        SHR     EDX, 0x2
        AND     EDX, 0x1
    // FEAT RUNES
        PUSHFD
        CMP     BYTE PTR DS:[bRUNES], 0
        JE      @L_RUNES_G
        POPFD
        JMP     @L00000004                              //JNZ     SHORT @L00000004
    @L_RUNES_G:
        POPFD
        JNZ     SHORT @L00000004

        CMP     DWORD PTR DS:[EDI+0x3C0], EDX
        JNZ     SHORT @L00000003
        TEST    AL, 0x2
        JE      SHORT @L00000005

    @L00000003:
        MOV     EAX, DWORD PTR SS:[ESP+0x24]
        OR      WORD PTR DS:[EAX], BX
    // FEAT_UMAIN
        CMP     BYTE PTR DS:[bUMAIN], 0
        JE      SHORT @L00000005                        //JMP     SHORT @L00000005

    @L00000004:
        MOV     EAX, DWORD PTR SS:[ESP+0x20]
        OR      ESI, EBX
        MOV     WORD PTR DS:[EAX], SI

    @L00000005:
        ADD     EBP, 0x2
        ADD     EBX, EBX
        SUB     DWORD PTR SS:[ESP+0x1C], 0x1
        JNZ     SHORT @L00000002
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x8
        RET     0x10
    }
}
//---------------------------------------------------------------------------

FRAW void f_2A5D50()
{
    __asm
    {
        SUB     ESP, 0x0C
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        PUSH    0x1
        MOV     ESI, ECX
        CALL    DWORD PTR DS:[v_26DE50]
        MOV     EBP, DWORD PTR SS:[ESP+0x30]
        MOV     EBX, EAX
        TEST    EBX, EBX
        JNZ     SHORT @L00000001
        TEST    DWORD PTR DS:[ESI+0x248], 0x200
        JE      @L00000003

    @L00000001:
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x14C]
        PUSH    0x1
        PUSH    0x0
        CALL    NEAR EDX
        PUSH    0x0
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_283BC0]
        MOV     EAX, DWORD PTR DS:[ESI+0x30]
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[v_AB425C]
        MOV     DWORD PTR DS:[EDX], EAX
        POP     EDX
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0xEC]
        MOV     ECX, ESI
        CALL    NEAR EAX
        CMP     EBP, -0x1
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[v_AB4260]
        MOV     DWORD PTR DS:[EDX], EAX
        MOV     EDX, DWORD PTR DS:[v_AB4264]
        MOV     DWORD PTR DS:[EDX], EBP
        POP     EDX
        JNZ     @L00000002
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[v_AB7368]
        MOV     ECX, DWORD PTR DS:[EDX]
        POP     EDX
        MOV     EDX, DWORD PTR SS:[ESP+0x20]
        ADD     ECX, 0x6C
        PUSH    ECX
        LEA     ECX, DWORD PTR SS:[ESP+0x34]
        CALL    DWORD PTR DS:[v_6EEEF0]
        MOV     EAX, DWORD PTR SS:[ESP+0x30]
        LEA     EDX, DWORD PTR DS:[EAX+0xFD000000]
        XOR     EDX, EAX
        SAR     EDX, 0x1F
        NOT     EDX
        ADD     EAX, 0xFD800000
        AND     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x30]
        MOV     DWORD PTR SS:[ESP+0x30], EDX
        CALL    DWORD PTR DS:[v_6EEC20]
        MOV     EDX, DWORD PTR SS:[ESP+0x24]
        MOV     EDI, EAX
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[v_AB7368]
        MOV     EAX, DWORD PTR DS:[EDX]
        POP     EDX
        ADD     EAX, 0x70
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x34]
        CALL    DWORD PTR DS:[v_6EEEF0]
        MOV     EAX, DWORD PTR SS:[ESP+0x30]
        LEA     ECX, DWORD PTR DS:[EAX+0xFD000000]
        XOR     ECX, EAX
        SAR     ECX, 0x1F
        NOT     ECX
        ADD     EAX, 0xFD800000
        AND     ECX, EAX
        MOV     DWORD PTR SS:[ESP+0x30], ECX
        LEA     ECX, DWORD PTR SS:[ESP+0x30]
        CALL    DWORD PTR DS:[v_6EEC20]
        PUSH    0x0
        MOV     EDX, EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_0128C0]
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[v_AB4264]
        MOV     DWORD PTR DS:[EDX], EAX
        POP     EDX
        JMP     SHORT @L00000003

    @L00000002:
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[v_AB4264]
        MOV     DWORD PTR DS:[EDX], EBP
        POP     EDX

    @L00000003:
        MOV     ECX, DWORD PTR SS:[ESP+0x38]
        TEST    ECX, ECX
        JNZ     SHORT @L00000004
        MOV     ECX, EBX
        NEG     ECX
        SBB     ECX, ECX
        AND     ECX, DWORD PTR DS:[v_AB425C]

    @L00000004:
        MOV     EAX, DWORD PTR SS:[ESP+0x34]
        TEST    EAX, EAX
        JNZ     SHORT @L00000005
        MOV     EAX, EBX
        NEG     EAX
        SBB     EAX, EAX
        AND     EAX, DWORD PTR DS:[v_2A5C90]

    @L00000005:
        MOV     EDX, DWORD PTR SS:[ESP+0x44]
        PUSH    EDX
        MOV     EDX, DWORD PTR SS:[ESP+0x44]
        PUSH    EDX
        MOV     EDX, DWORD PTR SS:[ESP+0x44]
        PUSH    0x0
        PUSH    EDX
        MOV     EDX, DWORD PTR SS:[ESP+0x34]
        PUSH    ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x3C]
        PUSH    EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x44]
        PUSH    EBP
        PUSH    EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x40]
        PUSH    ECX
        PUSH    EDX
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2AC220]
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x1A0]
        MOV     ECX, ESI
        CALL    NEAR EAX
        PUSH    0x1
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2781F0]
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x1A0]
        MOV     ECX, ESI
        CALL    NEAR EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_283A50]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2ADA60]
        CMP     DWORD PTR DS:[ESI+0x28], 0x0
        JE      SHORT @L00000006
        MOV     ECX, ESI
        CALL    f_3334C0                                //CALL    DWORD PTR DS:[v_3334C0]

    @L00000006:
        XOR     ECX, ECX
        CMP     DWORD PTR DS:[ESI+0x1EC], ECX
        SETE    CL
        TEST    EBX, EBX
        MOV     EDI, ECX
        JNZ     SHORT @L00000007
        TEST    DWORD PTR DS:[ESI+0x248], 0x200
        JNZ     SHORT @L00000007
        TEST    EDI, EDI
        JE      SHORT @L00000009

    @L00000007:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x148]
        PUSH    0x1
        PUSH    0x1
        PUSH    0x1
        MOV     ECX, ESI
        CALL    NEAR EAX
        PUSH    0x1
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_283BC0]
        TEST    EBX, EBX
        JE      SHORT @L00000008
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_28E170]

    @L00000008:
        CMP     DWORD PTR DS:[ESI+0x28], 0x0
        JE      SHORT @L00000009
        TEST    EDI, EDI
        JE      SHORT @L00000009
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EDX+0xE0]
        PUSH    0x0
        PUSH    0x0
        PUSH    -0x1
        PUSH    0x1
        LEA     EAX, DWORD PTR SS:[ESP+0x20]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    NEAR EDX
        MOV     ECX, DWORD PTR DS:[ESI+0x28]
        PUSH    EAX
        MOV     EDX, 0x1
        CALL    DWORD PTR DS:[v_4E82D0]
        MOV     ECX, DWORD PTR DS:[ESI+0x28]
        LEA     EAX, DWORD PTR DS:[ESI+0x294]
        PUSH    EAX
        MOV     EDX, 0x4
        CALL    DWORD PTR DS:[v_4E8360]

    @L00000009:
        MOV     ECX, DWORD PTR DS:[ESI+0x1E8]
        TEST    ECX, ECX
        JE      SHORT @L00000010
        CALL    DWORD PTR DS:[v_0C6840]

    @L00000010:
        PUSH    0x1
        PUSH    0x1
        PUSH    0x0
        PUSH    0x0
        CALL    DWORD PTR DS:[v_110BC0]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        TEST    EAX, EAX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        JE      SHORT @L00000011
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_12D520]

    @L00000011:
        ADD     ESP, 0x0C
        RET     0x28
    }
}
//---------------------------------------------------------------------------

FRAW void f_3334C0()
{
    __asm
    {
        PUSH    ESI
        MOV     ESI, ECX
        XOR     EDX, EDX
        XOR     ECX, ECX
        CALL    DWORD PTR DS:[v_300710]
        TEST    EAX, EAX
        JE      SHORT @L00000002
        MOV     ECX, DWORD PTR DS:[EAX+0x3BC]
        PUSH    ESI
        CALL    f_39A220                                //CALL    DWORD PTR DS:[v_39A220]

    @L00000002:
        POP     ESI
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_39A220()
{
    __asm
    {
        MOV     EAX, DWORD PTR DS:[v_AB65F4]
        MOV     EAX, DWORD PTR DS:[EAX]
        SUB     ESP, 0x24
        CMP     DWORD PTR DS:[EAX+0x3E0], 0x0
        PUSH    EDI
        MOV     EDI, ECX
        JE      @L00000003
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x30]
        PUSH    ESI
        CALL    DWORD PTR DS:[v_39A1E0]
        PUSH    0x1
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2781F0]
        FLD     DWORD PTR SS:[ESP+0x1C]
        FSTP    DWORD PTR SS:[ESP+0x8]
        LEA     ECX, DWORD PTR DS:[EDI+0x1F8]
        FLD     DWORD PTR SS:[ESP+0x18]
        MOV     EAX, DWORD PTR SS:[ESP+0x8]
        FSTP    DWORD PTR SS:[ESP+0x30]
        PUSH    ECX
        MOV     EDX, DWORD PTR SS:[ESP+0x34]
        FLD     DWORD PTR SS:[ESP+0x18]
        MOV     DWORD PTR SS:[ESP+0x28], EDX
        FSTP    DWORD PTR SS:[ESP+0x24]
        LEA     EDX, DWORD PTR SS:[ESP+0x10]
        MOV     DWORD PTR SS:[ESP+0x2C], EAX
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x18]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x178]
        CALL    f_3A1460                                //CALL    DWORD PTR DS:[v_3A1460]
        MOVZX   EDX, WORD PTR DS:[EDI+0x1F4]
        MOV     EAX, DWORD PTR SS:[ESP+0xC]
        PUSH    EDX
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2AB710]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2AD5D0]
        TEST    EAX, EAX
        JNZ     SHORT @L00000002
        MOV     EDX, DWORD PTR DS:[ESI]
        PUSH    0x4
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDX+0x100]
        MOV     ECX, ESI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JE      SHORT @L00000002
        MOV     ECX, DWORD PTR SS:[ESP+0x10]
        AND     ECX, 0x0FFF
        OR      WORD PTR DS:[ESI+0x2C], CX

    @L00000002:
        PUSH    ESI
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_399900]
        POP     ESI

    @L00000003:
        POP     EDI
        ADD     ESP, 0x24
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_3928F0()
{
    __asm
    {
        PUSH    ECX
        MOV     ECX, EDX
        CALL    f_38EA30                                //CALL    DWORD PTR DS:[v_38EA30]
        MOV     EAX, 0x1
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_38EA30()
{
    __asm
    {
        SUB     ESP, 0x24
        PUSH    EBX
        PUSH    ESI
        PUSH    EDI
        MOV     EDI, DWORD PTR SS:[ESP+0x34]
        MOV     EBX, DWORD PTR DS:[EDI+0x2C]
        LEA     EAX, DWORD PTR SS:[ESP+0x24]
        MOV     ESI, ECX
        PUSH    EAX
        LEA     ECX, DWORD PTR DS:[EDI+0x30]
        CALL    DWORD PTR DS:[v_4743A0]
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     EDX, DWORD PTR SS:[ESP+0x28]
        MOV     EAX, DWORD PTR SS:[ESP+0x2C]
        MOV     DWORD PTR SS:[ESP+0x18], ECX
        LEA     ECX, DWORD PTR DS:[ESI+0x1F8]
        PUSH    ECX
        MOV     DWORD PTR SS:[ESP+0x20], EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x38]
        MOV     DWORD PTR SS:[ESP+0x24], EAX
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x178]
        CALL    f_3A1460                                //CALL    DWORD PTR DS:[v_3A1460]
        MOV     EDX, DWORD PTR SS:[ESP+0x34]
        PUSH    EDX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2C6210]
        MOV     EAX, DWORD PTR SS:[ESP+0xC]
        PUSH    EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2C6230]
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2C6220]
        MOV     ECX, DWORD PTR SS:[ESP+0x34]
        MOVZX   EAX, AX
        NOT     EAX
        AND     ECX, EAX
        TEST    CX, CX
        MOV     DWORD PTR SS:[ESP+0x34], ECX
        JE      @L00000008
        CMP     DWORD PTR DS:[ESI+0x230], 0x0
        JE      SHORT @L00000002
        CMP     WORD PTR SS:[ESP+0xC], 0x0
        JNZ     @L00000008

    @L00000002:
        TEST    EBX, EBX
        JE      @L00000006
        CMP     DWORD PTR DS:[ESI+0x328], 0x0
        JE      @L00000006
        MOVZX   EAX, WORD PTR DS:[ESI+0x1F4]
        MOV     EDX, EAX
        AND     EDX, ECX
        CMP     DX, AX
        JNZ     @L00000006
        CMP     DWORD PTR DS:[ESI+0x300], -0x1
        JE      @L00000005
        CMP     DWORD PTR DS:[ESI+0x2FC], 0x0
        JE      @L00000005
        FLD     DWORD PTR DS:[ESI+0x310]
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        FSUB    DWORD PTR SS:[ESP+0x18]
        PUSH    EAX
        MOV     ECX, EDI
        FSTP    DWORD PTR SS:[ESP+0x14]
        FLD     DWORD PTR DS:[ESI+0x314]
        FSUB    DWORD PTR SS:[ESP+0x20]
        FSTP    DWORD PTR SS:[ESP+0x18]
        FLD     DWORD PTR SS:[ESP+0x14]
        FSTP    DWORD PTR SS:[ESP+0x28]
        FLD     DWORD PTR SS:[ESP+0x18]
        FSTP    DWORD PTR SS:[ESP+0x2C]
        FLDZ
        FSTP    DWORD PTR SS:[ESP+0x30]
        CALL    DWORD PTR DS:[v_2C6240]
        FLD     DWORD PTR DS:[EAX]
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        FSTP    DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_301BE0]
        FSUB    DWORD PTR SS:[ESP+0x14]
        FSTP    DWORD PTR SS:[ESP+0x14]
        FLD     DWORD PTR SS:[ESP+0x14]
        FMUL    ST(0x0), ST(0x0)
        FLD     DWORD PTR DS:[ESI+0x308]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x1
        JNZ     SHORT @L00000004
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x30C]
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], ECX
        XOR     EDX, EDX
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_4D3220]
        FLDZ
        MOV     EDX, DWORD PTR DS:[ESI+0x140]
        PUSH    EDI
        PUSH    0x0
        PUSH    EDX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x170]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_60FCE0]
        TEST    EAX, EAX
        JE      SHORT @L00000003
        PUSH    0x1
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2C64D0]

    @L00000003:
        MOV     EAX, 0x1
        POP     EDI
        POP     ESI
        POP     EBX
        ADD     ESP, 0x24
        RET     0x4

    @L00000004:
        PUSH    0x1
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2C64D0]

    @L00000005:
        MOV     EAX, DWORD PTR DS:[ESI+0x140]
        FLDZ
        PUSH    EDI
        PUSH    0x0
        PUSH    EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x16C]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_60FCE0]
        TEST    EAX, EAX
        JE      SHORT @L00000007
        PUSH    0x1
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2C64D0]
        MOV     EAX, 0x1
        POP     EDI
        POP     ESI
        POP     EBX
        ADD     ESP, 0x24
        RET     0x4

    @L00000006:
        PUSH    0x0
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2C64D0]

    @L00000007:
        MOV     EAX, 0x1
        POP     EDI
        POP     ESI
        POP     EBX
        ADD     ESP, 0x24
        RET     0x4

    @L00000008:
        MOV     EDX, DWORD PTR DS:[EDI]
        MOV     EAX, DWORD PTR DS:[EDX+0x5C]
        MOV     ECX, EDI
        CALL    NEAR EAX
        POP     EDI
        POP     ESI
        XOR     EAX, EAX
        POP     EBX
        ADD     ESP, 0x24
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_36A660()
{
    __asm
    {
        SUB     ESP, 0x8
        FLD     DWORD PTR SS:[ESP+0xC]
        PUSH    EDI
        FLD     ST(0x0)
        MOV     EDI, ECX
        FADD    DWORD PTR DS:[EDI+0x404]
        FSTP    DWORD PTR SS:[ESP+0x4]
        FLD     DWORD PTR SS:[ESP+0x4]
        FST     DWORD PTR DS:[EDI+0x404]
        MOV     EAX, DWORD PTR DS:[v_876A44]
        FLD     DWORD PTR DS:[EAX]
        FCOM    ST(0x1)
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000001
        FSTP    ST(0x0)
        JMP     SHORT @L00000002

    @L00000001:
        FSTP    ST(0x1)

    @L00000002:
        MOV     EAX, DWORD PTR DS:[EDI+0xB0]
        FSTP    DWORD PTR SS:[ESP+0x4]
        TEST    AL, 0x3
        FLD     DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR DS:[EDI+0x404]
        JE      SHORT @L00000003
        FSTP    ST(0x0)
        MOV     EAX, 0x1
        POP     EDI
        ADD     ESP, 0x8
        RET     0x0C

    @L00000003:
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        FLD     DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_608100]
        TEST    EAX, EAX
        JNZ     SHORT @L00000004
        POP     EDI
        ADD     ESP, 0x8
        RET     0x0C

    @L00000004:
        PUSH    EBX
        XOR     EBX, EBX
        CMP     DWORD PTR DS:[EDI+0x1CC], EBX
        JNZ     SHORT @L00000005
        MOV     EDX, DWORD PTR DS:[EDI]
        MOV     EAX, DWORD PTR DS:[EDX+0xE4]
        MOV     ECX, EDI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JNZ     SHORT @L00000005
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_36A520]
        POP     EBX
        MOV     EAX, 0x1
        POP     EDI
        ADD     ESP, 0x8
        RET     0x0C

    @L00000005:
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_6072C0]
        MOV     ECX, DWORD PTR DS:[EDI+0x5B4]
        CALL    DWORD PTR DS:[v_60FD40]
        MOV     ECX, DWORD PTR DS:[EDI+0x198]
        CALL    DWORD PTR DS:[v_60FD40]
        CMP     DWORD PTR DS:[EDI+0x624], EBX
        JE      @L00000015
        PUSH    EBP
        PUSH    ESI
        MOV     ECX, EDI
        MOV     DWORD PTR DS:[EDI+0x628], EBX
        CALL    DWORD PTR DS:[v_606890]
        MOV     DWORD PTR SS:[ESP+0x24], EAX
        XOR     EBP, EBP
        JMP     SHORT @L00000006
        LEA     ECX, DWORD PTR DS:[ECX]

    @L00000006:
        MOV     ESI, DWORD PTR DS:[EDI+0x5D8]
        MOV     EAX, DWORD PTR DS:[ESI+EBP]
        ADD     ESI, EBP
        CMP     EAX, EBX
        JE      @L00000010
        CMP     DWORD PTR DS:[ESI+0x20], EBX
        JE      @L00000010
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        FLD     DWORD PTR SS:[ESP+0x1C]
        PUSH    EBX
        PUSH    ECX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x5B4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_60FC80]
        TEST    EAX, EAX
        JE      SHORT @L00000007
        MOV     DWORD PTR DS:[EDI+0x628], 0x1

    @L00000007:
        FLD     DWORD PTR DS:[ESI+0x4]
        FSUB    DWORD PTR SS:[ESP+0x1C]
        FSTP    DWORD PTR SS:[ESP+0x20]
        FLD     DWORD PTR SS:[ESP+0x20]
        FST     DWORD PTR DS:[ESI+0x4]
        FLDZ
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000010
        CMP     DWORD PTR DS:[ESI+0x18], EBX
        JNZ     SHORT @L00000009
        CMP     DWORD PTR DS:[ESI+0x1C], EBX
        MOV     ECX, DWORD PTR DS:[ESI]
        MOV     DWORD PTR DS:[ESI+0x18], 0x1
        PUSH    EBX
        JE      SHORT @L00000008
        PUSH    0x2
        LEA     EDX, DWORD PTR SS:[ESP+0x18]
        MOV     DWORD PTR SS:[ESP+0x18], 0x3
        MOV     DWORD PTR SS:[ESP+0x1C], 0x2
        CALL    DWORD PTR DS:[v_4D7E50]
        FSTP    DWORD PTR DS:[ESI+0x4]
        JMP     SHORT @L00000010

    @L00000008:
        PUSH    0x1
        LEA     EDX, DWORD PTR SS:[ESP+0x28]
        MOV     DWORD PTR SS:[ESP+0x28], 0x2
        CALL    DWORD PTR DS:[v_4D7E50]
        FSTP    DWORD PTR DS:[ESI+0x4]
        JMP     SHORT @L00000010

    @L00000009:
        MOV     DWORD PTR DS:[ESI+0x20], EBX
        MOV     DWORD PTR DS:[ESI+0x1C], EBX

    @L00000010:
        ADD     EBP, 0x28
        CMP     EBP, 0x280
        JB      @L00000006
        XOR     ESI, ESI

    @L00000011:
        MOV     EAX, DWORD PTR DS:[EDI+0x5EC]
        MOV     ECX, DWORD PTR DS:[EAX+ESI]
        ADD     EAX, ESI
        CMP     ECX, EBX
        JE      SHORT @L00000012
        CMP     DWORD PTR DS:[EAX+0x20], EBX
        JE      SHORT @L00000012
        CMP     DWORD PTR DS:[EAX+0x24], EBX
        JE      SHORT @L00000012
        MOV     EDX, DWORD PTR SS:[ESP+0x24]
        FLD     DWORD PTR SS:[ESP+0x1C]
        PUSH    EBX
        PUSH    EDX
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x5B4]
        CALL    DWORD PTR DS:[v_60FC80]
        TEST    EAX, EAX
        JE      SHORT @L00000012
        MOV     DWORD PTR DS:[EDI+0x628], 0x1

    @L00000012:
        ADD     ESI, 0x28
        CMP     ESI, 0x2800
        JB      SHORT @L00000011
        MOV     ESI, DWORD PTR DS:[v_AB65F4]
        MOV     ESI, DWORD PTR DS:[ESI]
        CALL    DWORD PTR DS:[v_53F160]
        TEST    EAX, EAX
        JE      SHORT @L00000013
        MOV     EAX, DWORD PTR DS:[ESI+0x34]
        TEST    BYTE PTR DS:[EAX+0x24], 0x1
        JNZ     SHORT @L00000014

    @L00000013:
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        FLD     DWORD PTR SS:[ESP+0x1C]
        PUSH    ECX
        PUSH    ECX
        MOV     ECX, EDI
        FSTP    DWORD PTR SS:[ESP]
        CALL    f_360EE0                            //CALL    DWORD PTR DS:[v_360EE0]

    @L00000014:
        CMP     DWORD PTR DS:[EDI+0x61C], EBX
        POP     ESI
        POP     EBP
        JE      SHORT @L00000015
        MOV     ECX, DWORD PTR DS:[EDI+0x1D0]
        PUSH    EBX
        PUSH    EBX
        PUSH    EBX
        XOR     EDX, EDX
        CALL    DWORD PTR DS:[v_526A10]

    @L00000015:
        POP     EBX
        MOV     EAX, 0x1
        POP     EDI
        ADD     ESP, 0x8
        RET     0x0C
    }
}
//---------------------------------------------------------------------------

FRAW void f_360EE0()
{
    __asm
    {
        SUB     ESP, 0x88
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     ESI, ECX
        XOR     EDI, EDI
        CMP     DWORD PTR DS:[ESI+0x624], EDI
        JE      @L00000017
        MOV     EBP, DWORD PTR DS:[v_AB65F4]
        MOV     EBP, DWORD PTR DS:[EBP]
        CMP     DWORD PTR SS:[EBP+0x3C0], EDI
        MOV     DWORD PTR SS:[ESP+0x50], EBP
        JE      @L00000017
        MOVZX   EAX, WORD PTR SS:[EBP+0x28]
        PUSH    EAX
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_3A1650]
        MOVZX   EAX, BYTE PTR DS:[EAX+0x30]
        MOV     ECX, DWORD PTR DS:[ESI+0x228]
        MOV     EDX, DWORD PTR DS:[ESI+0x22C]
        MOV     DWORD PTR SS:[ESP+0x74], EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x224]
        MOV     DWORD PTR SS:[ESP+0x64], ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x230]
        MOV     DWORD PTR SS:[ESP+0x60], EDX
        MOV     DWORD PTR SS:[ESP+0x6C], EAX
        MOV     DWORD PTR SS:[ESP+0x68], ECX
        CALL    DWORD PTR DS:[v_251170]
        MOV     EDX, EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x7F8]
        FLD     DWORD PTR DS:[ESI+0x800]
        MOV     ECX, DWORD PTR DS:[EDX+0x4]
        FSTP    DWORD PTR SS:[ESP+0x58]
        FLD     DWORD PTR DS:[ESI+0x810]
        MOV     DWORD PTR SS:[ESP+0x4C], EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x7FC]
        FSTP    DWORD PTR SS:[ESP+0x10]
        FLD     DWORD PTR SS:[ESP+0x10]
        MOV     DWORD PTR SS:[ESP+0x78], EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x804]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_876620]
        FCOMP   QWORD PTR DS:[EAX]
        POP     EAX
        MOV     DWORD PTR SS:[ESP+0x7C], EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x808]
        MOV     DWORD PTR SS:[ESP+0x5C], EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x80C]
        MOV     DWORD PTR SS:[ESP+0x70], EAX
        FSTSW   AX
        MOV     DWORD PTR SS:[ESP+0x80], EDX
        TEST    AH, 0x5
        MOV     DWORD PTR SS:[ESP+0x54], ECX
        JPE     SHORT @L00000002
        FLDZ
        FSTP    DWORD PTR SS:[ESP+0x10]

    @L00000002:
        FLD     DWORD PTR SS:[ESP+0x10]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_876898]
        FCOMP   QWORD PTR DS:[EAX]
        POP     EAX
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000003
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_876A44]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FSTP    DWORD PTR SS:[ESP+0x10]

    @L00000003:
        XOR     EAX, EAX
        CMP     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x18], EDI
        MOV     DWORD PTR SS:[ESP+0x1C], EDI
        MOV     DWORD PTR SS:[ESP+0x2C], EAX
        JBE     @L00000016
        JMP     SHORT @L00000005

    @L00000004:
        MOV     EDX, DWORD PTR SS:[ESP+0x80]

    @L00000005:
        CMP     DWORD PTR SS:[ESP+0x18], ECX
        JNB     @L00000016
        MOV     ECX, DWORD PTR DS:[EDX+0x8]
        MOV     EDI, DWORD PTR DS:[ECX+EAX*0x4]
        TEST    EDI, EDI
        JE      @L00000015
        MOV     EDX, DWORD PTR DS:[EDI+0x10]
        MOV     ECX, DWORD PTR DS:[EDI+0xC]
        CALL    DWORD PTR DS:[v_03FA30]
        TEST    EAX, EAX
        JE      @L00000015
        MOV     ECX, DWORD PTR DS:[EAX+0xC]
        XOR     EDX, EDX
        CMP     ECX, 0x2B61676C
        SETE    DL
        MOV     ECX, EDX
        NEG     ECX
        SBB     ECX, ECX
        AND     ECX, EAX
        JE      @L00000015
        CMP     DWORD PTR DS:[ECX+0x20], 0x0
        JNZ     @L00000015
        MOV     EAX, DWORD PTR DS:[EDI+0x28]
        MOV     DWORD PTR SS:[ESP+0x40], EAX
        FLD     DWORD PTR SS:[ESP+0x40]
        MOV     ECX, DWORD PTR DS:[EDI+0x2C]
        FSTP    DWORD PTR SS:[ESP+0x34]
        MOV     EAX, DWORD PTR DS:[v_AB7368]
        MOV     EAX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR SS:[ESP+0x44], ECX
        FLD     DWORD PTR SS:[ESP+0x44]
        MOV     EDX, DWORD PTR DS:[EDI+0x30]
        FSTP    DWORD PTR SS:[ESP+0x38]
        MOV     DWORD PTR SS:[ESP+0x48], EDX
        FLD     DWORD PTR SS:[ESP+0x48]
        ADD     EAX, 0x70
        FSTP    DWORD PTR SS:[ESP+0x3C]
        PUSH    EAX
        LEA     EDX, DWORD PTR SS:[ESP+0x48]
        LEA     ECX, DWORD PTR SS:[ESP+0x28]
        CALL    DWORD PTR DS:[v_6EEEF0]
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        LEA     EAX, DWORD PTR DS:[ECX+0xFD000000]
        XOR     EAX, ECX
        LEA     EDX, DWORD PTR DS:[ECX+0xFD800000]
        MOV     ECX, DWORD PTR DS:[v_AB7368]
        MOV     ECX, DWORD PTR DS:[ECX]
        SAR     EAX, 0x1F
        ADD     ECX, 0x6C
        NOT     EAX
        AND     EAX, EDX
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x44]
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     DWORD PTR SS:[ESP+0x28], EAX
        CALL    DWORD PTR DS:[v_6EEEF0]
        MOV     ECX, DWORD PTR SS:[ESP+0x20]
        LEA     EAX, DWORD PTR DS:[ECX+0xFD000000]
        XOR     EAX, ECX
        SAR     EAX, 0x1F
        LEA     EDX, DWORD PTR DS:[ECX+0xFD800000]
        NOT     EAX
        AND     EAX, EDX
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     DWORD PTR SS:[ESP+0x20], EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        MOV     EBX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        SAR     EBX, 0x2
        CALL    DWORD PTR DS:[v_6EEC20]
        SAR     EAX, 0x2
        CMP     EAX, DWORD PTR SS:[ESP+0x64]
        MOV     DWORD PTR SS:[ESP+0x84], EAX
        MOV     DWORD PTR SS:[ESP+0x88], EBX
        JL      @L00000015
        CMP     EAX, DWORD PTR SS:[ESP+0x6C]
        JG      @L00000015
        CMP     EBX, DWORD PTR SS:[ESP+0x60]
        JL      @L00000015
        CMP     EBX, DWORD PTR SS:[ESP+0x68]
        JG      @L00000015
        PUSH    0x0FFFF
        LEA     EDX, DWORD PTR SS:[ESP+0x2C]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x38]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x90]
        PUSH    ECX
        MOV     ECX, EBP
        CALL    f_3A5DC0                                //CALL    DWORD PTR DS:[v_3A5DC0]
        MOV     EDX, DWORD PTR SS:[ESP+0x30]
        PUSH    EDX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_250910]
        CMP     DWORD PTR DS:[ESI+0x630], 0x0
        JE      @L00000015
        MOV     ECX, DWORD PTR SS:[ESP+0x74]
        MOVZX   EAX, WORD PTR SS:[ESP+0x28]
        MOV     EBX, 0x1
        SHL     EBX, CL
        TEST    EBX, EAX
        JNZ     SHORT @L00000006
        MOVZX   ECX, WORD PTR SS:[ESP+0x30]
        TEST    EBX, ECX
        JNZ     @L00000015

    @L00000006:
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_24F5C0]
        MOVZX   EDX, AX
        TEST    EBX, EDX
        JNZ     @L00000015
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_24F5F0]
        CMP     EAX, DWORD PTR SS:[ESP+0x78]
        SBB     EBX, EBX
        INC     EBX
        JNZ     SHORT @L00000008
        CMP     EAX, DWORD PTR SS:[ESP+0x4C]
        JB      SHORT @L00000008
        LEA     EBP, DWORD PTR DS:[EBX+0x1]

    @L00000007:
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        CMP     EAX, DWORD PTR DS:[ESI+0x1A0]
        JB      @L00000010
        LEA     ECX, DWORD PTR DS:[ESI+0x19C]
        CALL    DWORD PTR DS:[v_35C200]
        MOV     ECX, 0x1
        MOV     EDI, EAX
        CALL    DWORD PTR DS:[v_4D9830]
        PUSH    0x0
        PUSH    0x0
        MOV     DWORD PTR DS:[EDI], EAX
        PUSH    0x0
        MOV     EDI, EAX
        CALL    DWORD PTR DS:[v_30FFE0]
        PUSH    EAX
        XOR     EDX, EDX
        MOV     ECX, DWORD PTR DS:[v_93F070]
        CALL    DWORD PTR DS:[v_31F530]
        MOV     EDX, EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_4D8D60]
        PUSH    0x0
        PUSH    0x1
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        MOV     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x1C], 0x0
        CALL    DWORD PTR DS:[v_4D7E50]
        FSTP    ST(0x0)
        JMP     @L00000011

    @L00000008:
        XOR     EBP, EBP
        TEST    EBX, EBX
        JE      SHORT @L00000007
        MOV     EAX, DWORD PTR SS:[ESP+0x1C]
        CMP     EAX, DWORD PTR DS:[ESI+0x1B0]
        JB      SHORT @L00000009
        LEA     ECX, DWORD PTR DS:[ESI+0x1AC]
        CALL    DWORD PTR DS:[v_35C200]
        LEA     ECX, DWORD PTR SS:[EBP+0x1]
        MOV     EDI, EAX
        CALL    DWORD PTR DS:[v_4D9830]
        PUSH    EBP
        PUSH    EBP
        MOV     DWORD PTR DS:[EDI], EAX
        PUSH    EBP
        MOV     EDI, EAX
        CALL    DWORD PTR DS:[v_30FFE0]
        PUSH    EAX
        XOR     EDX, EDX
        MOV     ECX, DWORD PTR DS:[v_93F058]
        CALL    DWORD PTR DS:[v_31F530]
        MOV     EDX, EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_4D8D60]
        PUSH    EBP
        PUSH    0x1
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        MOV     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x1C], EBP
        CALL    DWORD PTR DS:[v_4D7E50]
        FSTP    ST(0x0)
        ADD     DWORD PTR SS:[ESP+0x1C], 0x1
        JMP     SHORT @L00000012

    @L00000009:
        MOV     ECX, DWORD PTR DS:[ESI+0x1B4]
        MOV     EDI, DWORD PTR DS:[ECX+EAX*0x4]
        ADD     DWORD PTR SS:[ESP+0x1C], 0x1
        JMP     SHORT @L00000012

    @L00000010:
        MOV     EDX, DWORD PTR DS:[ESI+0x1A4]
        MOV     EDI, DWORD PTR DS:[EDX+EAX*0x4]

    @L00000011:
        ADD     DWORD PTR SS:[ESP+0x18], 0x1

    @L00000012:
        FLD1
        LEA     EAX, DWORD PTR DS:[ESI+0x750]
        PUSH    EAX
        FSTP    DWORD PTR SS:[ESP+0x40]
        LEA     EDX, DWORD PTR SS:[ESP+0x38]
        LEA     ECX, DWORD PTR SS:[ESP+0x90]
        CALL    DWORD PTR DS:[v_00C880]
        MOV     ECX, DWORD PTR DS:[EAX]
        MOV     EDX, DWORD PTR DS:[EAX+0x4]
        MOV     DWORD PTR SS:[ESP+0x34], ECX
        MOV     ECX, DWORD PTR DS:[EAX+0x8]
        MOV     DWORD PTR SS:[ESP+0x38], EDX
        MOV     EDX, DWORD PTR DS:[EAX]
        MOV     DWORD PTR SS:[ESP+0x3C], ECX
        SUB     ESP, 0x0C
        MOV     ECX, ESP
        MOV     DWORD PTR DS:[ECX], EDX
        MOV     EDX, DWORD PTR DS:[EAX+0x4]
        MOV     EAX, DWORD PTR DS:[EAX+0x8]
        MOV     DWORD PTR DS:[ECX+0x4], EDX
        MOV     DWORD PTR DS:[ECX+0x8], EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_4D3180]
        TEST    EBP, EBP
        PUSH    ECX
        MOV     ECX, EDI
        JE      SHORT @L00000013
        FLD     DWORD PTR SS:[ESP+0x5C]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_4D3190]
        PUSH    ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x60]
        JMP     SHORT @L00000014

    @L00000013:
        FLD1
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_4D3190]
        TEST    EBX, EBX
        PUSH    ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x74]
        JNZ     SHORT @L00000014
        MOV     ECX, DWORD PTR SS:[ESP+0x80]

    @L00000014:
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], ECX
        XOR     EDX, EDX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_4D3220]
        FLD     DWORD PTR SS:[ESP+0x10]
        FMUL    DWORD PTR SS:[ESP+0x9C]
        MOV     EDX, DWORD PTR SS:[ESP+0xA0]
        PUSH    0x0
        PUSH    EDX
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP+0x20]
        FLD     DWORD PTR SS:[ESP+0x20]
        MOV     ECX, DWORD PTR DS:[ESI+0x198]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EDI
        CALL    DWORD PTR DS:[v_60FC80]
        MOV     EBP, DWORD PTR SS:[ESP+0x50]

    @L00000015:
        MOV     EAX, DWORD PTR SS:[ESP+0x2C]
        MOV     ECX, DWORD PTR SS:[ESP+0x54]
        ADD     EAX, 0x1
        CMP     EAX, ECX
        MOV     DWORD PTR SS:[ESP+0x2C], EAX
        JB      @L00000004

    @L00000016:
        MOV     DWORD PTR DS:[ESI+0x1BC], 0x1

    @L00000017:
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x88
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_3A5DC0()
{
    __asm
    {
        SUB     ESP, 0x20
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x30]
        TEST    AX, AX
        PUSH    EBX
        MOV     EBX, DWORD PTR SS:[ESP+0x28]
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x30]
        PUSH    EDI
        MOV     EDI, DWORD PTR SS:[ESP+0x38]
        JNZ     SHORT @L00000002
        MOV     WORD PTR DS:[ESI], AX
        MOV     WORD PTR DS:[EDI], AX
        POP     EDI
        POP     ESI
        POP     EBX
        MOV     ECX, DWORD PTR SS:[ESP+0x1C]
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x20
        RET     0x10

    @L00000002:
        PUSH    0x0
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        MOV     DWORD PTR SS:[ESP+0x18], 0x0C
        CALL    DWORD PTR DS:[v_3A3A70]
        LEA     EDX, DWORD PTR SS:[ESP+0xC]
        PUSH    EDX
        PUSH    EDI
        PUSH    ESI
        PUSH    EBX
        CALL    f_3A1520                                //CALL    DWORD PTR DS:[v_3A1520]
        MOV     ECX, DWORD PTR SS:[ESP+0x28]
        POP     EDI
        POP     ESI
        POP     EBX
        XOR     ECX, ESP
        CALL    DWORD PTR DS:[v_7E1059]
        ADD     ESP, 0x20
        RET     0x10
    }
}
//---------------------------------------------------------------------------

FRAW void f_3A1520()
{
    __asm
    {
        SUB     ESP, 0x8
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        PUSH    EBX
        PUSH    EBP
        MOV     WORD PTR DS:[EAX], 0x0
        MOV     EBP, DWORD PTR SS:[ESP+0x20]
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x18]
        PUSH    EDI
        MOV     EDI, ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     WORD PTR DS:[ECX], 0x0
        MOV     EDX, DWORD PTR DS:[EDI+0x34]
        MOV     ECX, DWORD PTR DS:[EDX+0x68]
        MOV     EAX, DWORD PTR DS:[ESI+0x4]
        SHL     EAX, CL
        MOV     ECX, DWORD PTR DS:[EDX+0x30]
        MOV     EDX, DWORD PTR DS:[EDX+0x2C]
        MOV     EBX, 0x1
        ADD     EAX, DWORD PTR DS:[ESI]
        MOV     DWORD PTR SS:[ESP+0x1C], 0x0C
        MOV     CX, WORD PTR DS:[ECX+EAX*0x2]
        MOV     AX, WORD PTR DS:[EDX+EAX*0x2]
        OR      CX, 0x0F000
        MOVZX   ECX, CX
        AND     AX, 0x0FFF
        MOV     DWORD PTR SS:[ESP+0x14], ECX
        MOVZX   ECX, AX
        MOV     DWORD PTR SS:[ESP+0x10], ECX
        ADD     EBP, 0x4

    @L00000002:
        MOVZX   EAX, WORD PTR SS:[EBP]
        TEST    AX, AX
        JE      SHORT @L00000005
        MOV     EDX, DWORD PTR SS:[ESP+0x20]
        MOVZX   ESI, WORD PTR DS:[EDX]
        MOVZX   ECX, SI
        MOVZX   EDX, AX
    // FEAT UMAIN
        PUSHFD
        CMP     BYTE PTR DS:[bUMAIN], 0
        JNE     @L_UMAIN_G
        POPFD
        AND     ECX, EDX
        JMP     @L_UMAIN_F
    @L_UMAIN_G:
        POPFD                                           //AND     ECX, EDX
    @L_UMAIN_F:

        JNZ     SHORT @L00000004
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        PUSH    EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x34]
        CALL    DWORD PTR DS:[v_00E7A0]
        MOV     EDX, EAX
        SHR     EDX, 0x2
        AND     EDX, 0x1
        JNZ     SHORT @L00000004
        CMP     DWORD PTR DS:[EDI+0x3C0], EDX
        JNZ     SHORT @L00000003
        TEST    AL, 0x2
        JE      SHORT @L00000005

    @L00000003:
        MOV     EAX, DWORD PTR SS:[ESP+0x24]
        OR      WORD PTR DS:[EAX], BX
        JMP     SHORT @L00000005

    @L00000004:
        MOV     EAX, DWORD PTR SS:[ESP+0x20]
        OR      ESI, EBX
        MOV     WORD PTR DS:[EAX], SI

    @L00000005:
        ADD     EBP, 0x2
        ADD     EBX, EBX
        SUB     DWORD PTR SS:[ESP+0x1C], 0x1
        JNZ     SHORT @L00000002
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x8
        RET     0x10
    }
}
//---------------------------------------------------------------------------

FRAW void f_39B210()
{
    __asm
    {
        PUSH    ECX
        MOV     ECX, EDX
        CALL    f_399900                                //CALL    DWORD PTR DS:[v_399900]
        MOV     EAX, 0x1
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_399900()
{
    __asm
    {
        SUB     ESP, 0x30
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x40]
        MOV     EDX, DWORD PTR DS:[ESI]
        PUSH    EDI
        LEA     EAX, DWORD PTR SS:[ESP+0x2C]
        MOV     EDI, ECX
        XOR     EBP, EBP
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDX+0xB8]
        MOV     ECX, ESI
        MOV     DWORD PTR SS:[ESP+0x30], EBP
        MOV     DWORD PTR SS:[ESP+0x34], EBP
        CALL    NEAR EAX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_474460]
        SAR     DWORD PTR SS:[ESP+0x2C], 0x2
        SAR     DWORD PTR SS:[ESP+0x30], 0x2
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_26BA80]
        MOV     EDX, DWORD PTR DS:[ESI]
        XOR     EBX, EBX
        CMP     EAX, EBP
        MOV     DWORD PTR SS:[ESP+0x14], EAX
        MOV     EAX, DWORD PTR DS:[EDX+0xF0]
        PUSH    0x1
        MOV     ECX, ESI
        SETNE   BL
        CALL    NEAR EAX
        LEA     ECX, DWORD PTR DS:[EDI+0x1F8]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR SS:[ESP+0x48], EAX
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x20]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x38]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x178]
        MOV     DWORD PTR SS:[ESP+0x20], EBP
        MOV     DWORD PTR SS:[ESP+0x28], EBP
        CALL    f_3A1520                                //CALL    DWORD PTR DS:[v_3A1520]
        MOVZX   EDX, WORD PTR DS:[EDI+0x1F4]
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        PUSH    EDX
        PUSH    EAX
        MOV     ECX, ESI
    // FEAT CLRINV
        CMP     BYTE PTR DS:[bCLRINV], 0
        JE      @L_CLRINV_G
        CALL    ColoredInviFunc
    @L_CLRINV_G:

        CALL    DWORD PTR DS:[v_2AB710]
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x1BC]
        MOV     ECX, ESI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JNZ     SHORT @L00000002
        CMP     DWORD PTR DS:[EDI+0x328], EBP
        JE      SHORT @L00000002
        MOV     CX, WORD PTR DS:[EDI+0x1F4]
        AND     CX, WORD PTR SS:[ESP+0x18]
        NEG     CX
        SBB     ECX, ECX
        NEG     ECX
        AND     EBX, ECX

    @L00000002:
        CMP     EBX, EBP
        MOV     DWORD PTR SS:[ESP+0x1C], EBP
        JNZ     SHORT @L00000003
        CMP     DWORD PTR DS:[EDI+0x328], EBP
        JNZ     @L00000008

    @L00000003:
        MOV     EDX, DWORD PTR DS:[EDI+0x198]
        MOV     ECX, DWORD PTR DS:[EDI+0x178]
        LEA     EAX, DWORD PTR DS:[EDI+EDX*0x2+0x218]
        MOVZX   EAX, WORD PTR DS:[EAX]
        PUSH    EBP
        PUSH    EAX
        PUSH    ESI
        CALL    DWORD PTR DS:[v_3A15F0]
        AND     EBX, EAX
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        JNZ     SHORT @L00000004
        CMP     DWORD PTR DS:[EDI+0x328], EBP
        JNZ     SHORT @L00000005

    @L00000004:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x1A8]
        MOV     ECX, ESI
        CALL    NEAR EAX

    @L00000005:
        PUSH    0x1
        LEA     ECX, DWORD PTR SS:[ESP+0x38]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2781F0]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_283A50]
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x1A0]
        MOV     ECX, ESI
        CALL    NEAR EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2830E0]
        CMP     DWORD PTR SS:[ESP+0x44], EBP
        JNZ     SHORT @L00000008
        CMP     EBX, EBP
        JNZ     SHORT @L00000006
        CMP     DWORD PTR DS:[EDI+0x328], EBP
        JNZ     SHORT @L00000008

    @L00000006:
        MOV     ECX, DWORD PTR DS:[EDI+0x198]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_26F9E0]
        TEST    EAX, EAX
        JNZ     SHORT @L00000007
        MOV     EDX, DWORD PTR DS:[EDI+0x198]
        PUSH    EDX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_284CD0]
        TEST    EAX, EAX
        JE      SHORT @L00000008

    @L00000007:
        PUSH    0x1
        LEA     EDX, DWORD PTR DS:[EDI+0x18C]
        LEA     ECX, DWORD PTR SS:[ESP+0x38]
        CALL    DWORD PTR DS:[v_00F650]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_26ECB0]

    @L00000008:
        CMP     DWORD PTR SS:[ESP+0x14], EBP
        JE      SHORT @L00000010
        CMP     DWORD PTR DS:[EDI+0x328], EBP
    // FEAT INVI
        PUSHFD
        CMP     BYTE PTR DS:[bINVI], 0
        JNE     @L_INV_G
        POPFD
        JE      SHORT @L00000009
        JMP     @L_INV_F
    @L_INV_G:
        POPFD
        JMP     @L00000009                              //JE      SHORT @L00000009
    @L_INV_F:

        CMP     DWORD PTR SS:[ESP+0x44], EBP
        JE      SHORT @L00000010
        MOV     AX, WORD PTR SS:[ESP+0x10]
        TEST    WORD PTR DS:[EDI+0x1F4], AX
        JE      SHORT @L00000010
        MOV     ECX, DWORD PTR DS:[EDI+0x198]
        MOV     EDX, 0x1
        SHL     EDX, CL
        TEST    WORD PTR DS:[ESI+0x2C], DX
        JE      SHORT @L00000010

    @L00000009:
        MOV     DWORD PTR SS:[ESP+0x44], 0x1
        JMP     SHORT @L00000011

    @L00000010:
        MOV     DWORD PTR SS:[ESP+0x44], EBP

    @L00000011:
        OR      EBX, DWORD PTR SS:[ESP+0x44]
        MOV     ECX, ESI
        PUSH    EBX
        CALL    DWORD PTR DS:[v_283BC0]
        CMP     EBX, EBP
        JE      @L00000020
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_26F490]
        CMP     DWORD PTR DS:[EDI+0x300], -0x1
        JE      @L00000017
        CMP     DWORD PTR DS:[EDI+0x2FC], EBP
        JE      @L00000017
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0xE0]
        PUSH    EBP
        PUSH    -0x1
        PUSH    EBP
        LEA     ECX, DWORD PTR SS:[ESP+0x40]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    NEAR EDX
        FLD     DWORD PTR DS:[EDI+0x310]
        FSUB    DWORD PTR SS:[ESP+0x34]
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x168]
        LEA     ECX, DWORD PTR SS:[ESP+0x28]
        FSTP    DWORD PTR SS:[ESP+0x24]
        PUSH    ECX
        FLD     DWORD PTR DS:[EDI+0x314]
        MOV     ECX, ESI
        FSUB    DWORD PTR SS:[ESP+0x3C]
        FSTP    DWORD PTR SS:[ESP+0x24]
        CALL    NEAR EDX
        FLD     DWORD PTR DS:[EAX]
        FSTP    DWORD PTR SS:[ESP+0x28]
        FLD     DWORD PTR SS:[ESP+0x20]
        FLD     DWORD PTR SS:[ESP+0x24]
        FMUL    ST(0x0), ST(0x0)
        FLD     ST(0x1)
        FMULP   ST(0x2), ST(0x0)
        FADDP   ST(0x1), ST(0x0)
        FLDZ
        FMUL    ST(0x0), ST(0x0)
        FADDP   ST(0x1), ST(0x0)
        FSTP    DWORD PTR SS:[ESP+0x24]
        FLD     DWORD PTR SS:[ESP+0x24]
        CALL    DWORD PTR DS:[v_7E15E6]
        FSTP    DWORD PTR SS:[ESP+0x24]
        FLD     DWORD PTR SS:[ESP+0x24]
        MOV     EAX, DWORD PTR DS:[ESI]
        FSUB    DWORD PTR SS:[ESP+0x28]
        MOV     EDX, DWORD PTR DS:[EAX+0x1B0]
        MOV     ECX, ESI
        FSTP    DWORD PTR SS:[ESP+0x28]
        CALL    NEAR EDX
        TEST    EAX, EAX
        JE      @L00000016
        CMP     DWORD PTR SS:[ESP+0x1C], EBP
        JNZ     SHORT @L00000012
        CMP     DWORD PTR SS:[ESP+0x44], EBP
        JE      @L00000016

    @L00000012:
        FLD     DWORD PTR SS:[ESP+0x28]
        FMUL    ST(0x0), ST(0x0)
        FLD     DWORD PTR DS:[EDI+0x308]
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x1
        JNZ     @L00000016
        MOV     EBX, DWORD PTR SS:[ESP+0x14]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x30C]
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], ECX
        XOR     EDX, EDX
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_4D3220]
        FLD     DWORD PTR DS:[EDI+0x238]
        MOV     EDX, DWORD PTR DS:[EDI+0x140]
        PUSH    ESI
        PUSH    EBP
        PUSH    EDX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x170]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_60FCE0]
        TEST    EAX, EAX
        JE      SHORT @L00000015
        PUSH    ESI
        LEA     ECX, DWORD PTR DS:[EDI+0x620]
        CALL    DWORD PTR DS:[v_0A4730]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_02A560]
        MOV     EDX, DWORD PTR DS:[EDI+0x180]
        CMP     EDX, EBP
        JNZ     SHORT @L00000013
        CMP     DWORD PTR DS:[EDI+0x17C], EBP
        JE      SHORT @L00000014

    @L00000013:
        MOV     EAX, DWORD PTR DS:[EDI+0x17C]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    f_37D0D0                                //CALL    DWORD PTR DS:[v_37D0D0]

    @L00000014:
        CMP     DWORD PTR SS:[ESP+0x44], EBP
        JNZ     @L00000020
        MOV     ECX, DWORD PTR DS:[EDI+0x198]
        MOV     EDX, 0x1
        SHL     EDX, CL
        OR      WORD PTR DS:[ESI+0x2C], DX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x30
        RET     0x4

    @L00000015:
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0xB4]
        MOV     ECX, ESI
        CALL    NEAR EDX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x30
        RET     0x4

    @L00000016:
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0xB4]
        MOV     ECX, ESI
        CALL    NEAR EDX

    @L00000017:
        MOV     EAX, DWORD PTR DS:[EDI+0x140]
        FLD     DWORD PTR DS:[EDI+0x238]
        PUSH    ESI
        PUSH    EBP
        PUSH    EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x16C]
        CALL    DWORD PTR DS:[v_60FCE0]
        TEST    EAX, EAX
        JE      SHORT @L00000020
        CMP     DWORD PTR SS:[ESP+0x44], EBP
        JNZ     SHORT @L00000018
        MOV     ECX, DWORD PTR DS:[EDI+0x198]
        MOV     EDX, 0x1
        SHL     EDX, CL
        OR      WORD PTR DS:[ESI+0x2C], DX

    @L00000018:
        PUSH    ESI
        LEA     ECX, DWORD PTR DS:[EDI+0x640]
        CALL    DWORD PTR DS:[v_28E580]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_029770]
        PUSH    ESI
        LEA     ECX, DWORD PTR DS:[EDI+0x620]
        CALL    DWORD PTR DS:[v_0A4730]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_02A560]
        MOV     EDX, DWORD PTR DS:[EDI+0x180]
        CMP     EDX, EBP
        JNZ     SHORT @L00000019
        CMP     DWORD PTR DS:[EDI+0x17C], EBP
        JE      SHORT @L00000020

    @L00000019:
        MOV     EAX, DWORD PTR DS:[EDI+0x17C]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    f_37D0D0                                //CALL    DWORD PTR DS:[v_37D0D0]

    @L00000020:
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x30
        RET     0x4
    }
}
//---------------------------------------------------------------------------


