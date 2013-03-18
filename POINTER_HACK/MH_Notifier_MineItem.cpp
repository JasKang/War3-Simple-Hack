//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_29F990()
{
    __asm
    {
    // FEAT MINEWRD
        CMP     BYTE PTR DS:[bMINEWRD], 0
        JE      @L_MINEWRD_G
        CALL    MineWardNotifierFunc
    @L_MINEWRD_G:

        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_815DA6]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x1E0
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x1F4]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     EBP, EDX
        MOV     EBX, ECX
        MOV     EAX, DWORD PTR SS:[ESP+0x204]
        MOV     ECX, DWORD PTR DS:[EAX]
        MOV     EDX, DWORD PTR SS:[ESP+0x208]
        MOV     EAX, DWORD PTR DS:[EDX]
        MOV     DWORD PTR SS:[ESP+0x1C], ECX
        LEA     ECX, DWORD PTR SS:[ESP+0x54]
        MOV     DWORD PTR SS:[ESP+0x20], EAX
        CALL    DWORD PTR DS:[v_267500]
        XOR     EDI, EDI
        MOV     DWORD PTR SS:[ESP+0xD8], EDI
        MOV     DWORD PTR SS:[ESP+0xD4], EDI
        MOV     DWORD PTR SS:[ESP+0xD0], EDI
        LEA     ECX, DWORD PTR SS:[ESP+0x54]
        PUSH    ECX
        MOV     EDX, EBX
        MOV     ECX, EBP
        MOV     DWORD PTR SS:[ESP+0x200], EDI
        CALL    DWORD PTR DS:[v_29F3E0]
        TEST    EAX, EAX
        JNZ     SHORT @L00000002
        LEA     ECX, DWORD PTR SS:[ESP+0x80]
        MOV     DWORD PTR SS:[ESP+0x1FC], -0x1
        CALL    DWORD PTR DS:[v_4C48F0]
        XOR     EAX, EAX
        JMP     @L00000019

    @L00000002:
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_32D0B0]
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     ESI, EAX
        CALL    DWORD PTR DS:[v_020D30]
        PUSH    DWORD PTR DS:[v_AAE470]
        LEA     EDX, DWORD PTR SS:[ESP+0x28]
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EEEF0]
        MOV     EDX, DWORD PTR DS:[EAX]
        AND     EDX, 0x7FFFFFFF
        MOV     DWORD PTR SS:[ESP+0x18], EDX
        FLD     DWORD PTR SS:[ESP+0x18]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AAE614]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000003
        XOR     EAX, EAX
        JMP     SHORT @L00000005

    @L00000003:
        PUSH    DWORD PTR DS:[v_AAE570]
        LEA     EDX, DWORD PTR SS:[ESP+0x28]
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EEEF0]
        MOV     EAX, DWORD PTR DS:[EAX]
        AND     EAX, 0x7FFFFFFF
        MOV     DWORD PTR SS:[ESP+0x18], EAX
        FLD     DWORD PTR SS:[ESP+0x18]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AAE614]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x41
        JNZ     SHORT @L00000004
        MOV     EAX, 0x1
        JMP     SHORT @L00000005

    @L00000004:
        MOV     EDX, DWORD PTR DS:[v_AAE580]
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        CALL    DWORD PTR DS:[v_01FE40]
        NEG     EAX
        SBB     EAX, EAX
        ADD     EAX, 0x3

    @L00000005:
        CMP     ESI, EDI
        JE      SHORT @L00000006
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x24]
        PUSH    EDX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3E0B50]

    @L00000006:
        MOV     ECX, DWORD PTR SS:[ESP+0x20]
        FLD     DWORD PTR SS:[ESP+0x20]
        MOV     EAX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EDI
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     DWORD PTR SS:[ESP+0x64], ECX
        FLD     DWORD PTR SS:[ESP+0x28]
        XOR     EDX, EDX
        OR      ECX, 0xFFFFFFFF
        FSTP    DWORD PTR SS:[ESP]
        MOV     DWORD PTR SS:[ESP+0x60], EAX
        CALL    DWORD PTR DS:[v_0126F0]
        FSTP    DWORD PTR SS:[ESP+0x5C]
        MOV     EDX, DWORD PTR SS:[ESP+0x20C]
        MOV     EAX, DWORD PTR DS:[EDX]
        PUSH    EDI
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        MOV     DWORD PTR SS:[ESP+0x64], EAX
        MOV     DWORD PTR SS:[ESP+0x70], 0x1
        CALL    DWORD PTR DS:[v_038450]
        MOV     BYTE PTR SS:[ESP+0x1FC], 0x1
        CALL    DWORD PTR DS:[v_26C1C0]
        MOV     EDI, DWORD PTR DS:[v_AB7368]
        MOV     EDI, DWORD PTR DS:[EDI]
        MOV     ESI, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        MOV     DWORD PTR SS:[ESP+0x18], ESI
        CALL    DWORD PTR DS:[v_4C8520]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        PUSH    ECX
        PUSH    EAX
        LEA     ECX, DWORD PTR DS:[EDI+0xC]
        CALL    DWORD PTR DS:[v_001EC0]
        MOV     EDX, DWORD PTR DS:[EAX+0x70]
        PUSH    EDX
        MOV     EDX, ESI
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        CALL    DWORD PTR DS:[v_472C20]
        PUSH    0x1
        MOV     EDX, 0x1
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        MOV     DWORD PTR SS:[ESP+0x50], -0x1
        CALL    DWORD PTR DS:[v_48AB80]
        MOV     EAX, DWORD PTR DS:[EAX+0x54]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_02A560]
        MOV     ECX, DWORD PTR SS:[ESP+0x210]
        TEST    ECX, 0x10000
        JE      SHORT @L00000007
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        OR      DWORD PTR DS:[EAX+0x5C], 0x40000000

    @L00000007:
        TEST    ECX, 0x20000
        JE      SHORT @L00000008
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        OR      DWORD PTR DS:[EAX+0x5C], 0x2000000

    @L00000008:
        MOV     EDX, DWORD PTR SS:[ESP+0x218]
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EAX+0x1AC]
        PUSH    EDX
        MOV     EDX, DWORD PTR SS:[ESP+0x218]
        PUSH    EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x5C]
        PUSH    EDX
        PUSH    EBP
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        PUSH    EBX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ESI, EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_40B1E0]
        MOVZX   EDI, AX
        TEST    DI, DI
        JE      SHORT @L00000009
        MOV     EDX, DWORD PTR SS:[ESP+0x14]
        PUSH    0x1
        MOV     ECX, EDX
        CALL    DWORD PTR DS:[v_26DE50]
        TEST    EAX, EAX
        JE      SHORT @L00000009
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        PUSH    0x1
        PUSH    0x1
        PUSH    EDI
        PUSH    EDX
        CALL    DWORD PTR DS:[v_409E00]
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        PUSH    EDI
        CALL    DWORD PTR DS:[v_29EE30]

    @L00000009:
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_2E52F0]
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_2833E0]
        TEST    EAX, EAX
        JE      SHORT @L00000010
        PUSH    0x0
        CALL    DWORD PTR DS:[v_26FE60]

    @L00000010:
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        TEST    BYTE PTR DS:[ECX+0x248], 0x40
        JE      SHORT @L00000011
        PUSH    0x0
        CALL    DWORD PTR DS:[v_26FE70]

    @L00000011:
        MOV     EBX, DWORD PTR SS:[ESP+0x210]
        TEST    BL, 0x1
        JE      SHORT @L00000012
        PUSH    0x0
        PUSH    EBP
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_40FE30]
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        OR      DWORD PTR DS:[EAX+0x64], 0x9
        JMP     SHORT @L00000015

    @L00000012:
        TEST    BL, 0x2
        JE      SHORT @L00000013
        PUSH    0x0
        PUSH    EBP
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_40FD30]
        JMP     SHORT @L00000014

    @L00000013:
        TEST    BL, 0x4
        JE      SHORT @L00000015
        PUSH    0x0
        PUSH    EBP
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_40FDB0]

    @L00000014:
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        OR      DWORD PTR DS:[EAX+0x64], 0x12

    @L00000015:
        TEST    EBX, 0x100
        JE      SHORT @L00000016
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_29BAF0]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_40F5E0]
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        OR      DWORD PTR DS:[EAX+0x64], 0x300

    @L00000016:
        TEST    EBX, 0x400
        JE      SHORT @L00000017
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_29BB20]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_03F970]
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        OR      DWORD PTR DS:[EAX+0x64], 0x0C00

    @L00000017:
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        TEST    EAX, EAX
        MOV     ESI, EAX
        MOV     BYTE PTR SS:[ESP+0x1FC], 0x0
        JE      SHORT @L00000018
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000018
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000018:
        LEA     ECX, DWORD PTR SS:[ESP+0x80]
        MOV     DWORD PTR SS:[ESP+0x1FC], -0x1
        CALL    DWORD PTR DS:[v_4C48F0]
        MOV     EAX, ESI

    @L00000019:
        MOV     ECX, DWORD PTR SS:[ESP+0x1F4]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x1EC
        RET     0x18
    }
}
//---------------------------------------------------------------------------

FRAW void f_04E3B0()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_7EB268]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x28
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x3C]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     EBX, ECX
        MOV     EDI, DWORD PTR SS:[ESP+0x4C]
        MOV     ESI, DWORD PTR DS:[EDI+0x8]
        CMP     ESI, 0x0C
        JB      @L00000027
        CMP     ESI, 0x0D01C1
        JE      @L00000027
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_29D2F0]
        TEST    EAX, EAX
        JE      @L00000027
        XOR     EDX, EDX
        LEA     EAX, DWORD PTR DS:[EBX+0xD0]
        LEA     ESP, DWORD PTR SS:[ESP]

    @L00000001:
        MOV     ECX, DWORD PTR DS:[EAX-0x4]
        TEST    ECX, ECX
        JE      SHORT @L00000002
        CMP     ESI, ECX
        JE      SHORT @L00000013

    @L00000002:
        MOV     ECX, DWORD PTR DS:[EAX]
        TEST    ECX, ECX
        JE      SHORT @L00000003
        CMP     ESI, ECX
        JE      SHORT @L00000008

    @L00000003:
        MOV     ECX, DWORD PTR DS:[EAX+0x4]
        TEST    ECX, ECX
        JE      SHORT @L00000004
        CMP     ESI, ECX
        JE      SHORT @L00000009

    @L00000004:
        MOV     ECX, DWORD PTR DS:[EAX+0x8]
        TEST    ECX, ECX
        JE      SHORT @L00000005
        CMP     ESI, ECX
        JE      SHORT @L00000010

    @L00000005:
        MOV     ECX, DWORD PTR DS:[EAX+0xC]
        TEST    ECX, ECX
        JE      SHORT @L00000006
        CMP     ESI, ECX
        JE      SHORT @L00000011

    @L00000006:
        MOV     ECX, DWORD PTR DS:[EAX+0x10]
        TEST    ECX, ECX
        JE      SHORT @L00000007
        CMP     ESI, ECX
        JE      SHORT @L00000012

    @L00000007:
        ADD     EDX, 0x6
        ADD     EAX, 0x18
        CMP     EDX, 0x0C
        JB      SHORT @L00000001
        XOR     EAX, EAX
        JMP     @L00000028

    @L00000008:
        ADD     EDX, 0x1
        JMP     SHORT @L00000013

    @L00000009:
        ADD     EDX, 0x2
        JMP     SHORT @L00000013

    @L00000010:
        ADD     EDX, 0x3
        JMP     SHORT @L00000013

    @L00000011:
        ADD     EDX, 0x4
        JMP     SHORT @L00000013

    @L00000012:
        ADD     EDX, 0x5

    @L00000013:
        CMP     EDX, 0x0C
        JNB     SHORT @L00000015
        MOV     EAX, DWORD PTR DS:[EDI+0xC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x50]
        CALL    DWORD PTR DS:[v_03B620]
        MOV     ECX, DWORD PTR SS:[ESP+0x4C]
        TEST    ECX, ECX
        MOV     DWORD PTR SS:[ESP+0x44], 0x0
        JE      SHORT @L00000015
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x64]
        CALL    NEAR EDX
        MOV     EBP, EAX
        MOV     EAX, DWORD PTR DS:[EBX]
        MOV     EDX, DWORD PTR DS:[EAX+0x300]
        PUSH    ESI
        PUSH    EBP
        MOV     ECX, EBX
        MOV     DWORD PTR SS:[ESP+0x1C], EBP
        CALL    NEAR EDX
        TEST    EAX, EAX
        JE      SHORT @L00000016

    @L00000014:
        MOV     EAX, DWORD PTR SS:[ESP+0x4C]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x44], -0x1
        JE      SHORT @L00000015
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000015
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000015:
        XOR     EAX, EAX
        JMP     @L00000028

    @L00000016:
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        PUSH    EBP
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     EDI, EAX
        MOV     EAX, DWORD PTR DS:[EBX]
        MOV     EDX, DWORD PTR DS:[EAX+0x310]
        PUSH    ESI
        PUSH    EDI
        MOV     ECX, EBX
        CALL    NEAR EDX
        TEST    EAX, EAX
        JE      SHORT @L00000014
        MOV     EAX, DWORD PTR DS:[EBX+0x30]
        TEST    EAX, EAX
        JNZ     SHORT @L00000017
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_472890]

    @L00000017:
        MOV     EDX, DWORD PTR DS:[EAX]
        LEA     ECX, DWORD PTR SS:[ESP+0x30]
        PUSH    ECX
        MOV     ECX, EAX
        MOV     EAX, DWORD PTR DS:[EDX+0xB8]
        CALL    NEAR EAX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_4743A0]
        MOV     ECX, DWORD PTR SS:[ESP+0x30]
        MOV     EDX, DWORD PTR SS:[ESP+0x34]
        MOV     EAX, DWORD PTR SS:[ESP+0x38]
        MOV     DWORD PTR SS:[ESP+0x24], ECX
        MOV     ECX, ESI
        MOV     DWORD PTR SS:[ESP+0x28], EDX
        MOV     DWORD PTR SS:[ESP+0x2C], EAX
        CALL    DWORD PTR DS:[v_29C240]
        XOR     ECX, ECX
        CMP     EAX, 0x10
        MOV     EAX, DWORD PTR DS:[EBX+0x30]
        SETE    CL
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x18], ECX
        JNZ     SHORT @L00000018
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_472890]

    @L00000018:
        MOV     EDX, DWORD PTR SS:[ESP+0x18]
        PUSH    EDX
        PUSH    0x0
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        PUSH    ECX
        MOV     EDX, ESI
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_29E280]
        TEST    EAX, EAX
        JNZ     SHORT @L00000020
        PUSH    EAX
        XOR     EDX, EDX
        LEA     ECX, DWORD PTR DS:[EAX+0x49]
        CALL    DWORD PTR DS:[v_3333D0]
        MOV     EAX, DWORD PTR SS:[ESP+0x4C]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x44], -0x1
        JE      SHORT @L00000019
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000019
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000019:
        MOV     EAX, 0x1
        JMP     @L00000028

    @L00000020:
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x20]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x20]
        PUSH    EAX
        PUSH    EBP
        PUSH    ESI
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_04E190]
        MOV     ECX, DWORD PTR SS:[ESP+0x18]
        PUSH    0x0
        PUSH    0x0
        NEG     ECX
        PUSH    0x0
        PUSH    ECX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_416A00]
        MOV     EDX, DWORD PTR SS:[ESP+0x1C]
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0
        NEG     EDX
        PUSH    EDX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_416A40]
        MOV     EAX, DWORD PTR SS:[ESP+0x20]
        NEG     EAX
        PUSH    EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_02D790]
        PUSH    -0x1
        PUSH    0x0
        PUSH    0x502
        PUSH    DWORD PTR DS:[v_AAE470]
        LEA     ECX, DWORD PTR SS:[ESP+0x38]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x38]
        PUSH    EDX
        MOV     EDX, ESI
        MOV     ECX, EBP
        CALL    f_29F990                                //CALL    DWORD PTR DS:[v_29F990]
        MOV     EBP, EAX
        MOV     EAX, DWORD PTR DS:[EBX+0x30]
        TEST    EAX, EAX
        JNZ     SHORT @L00000021
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_472890]

    @L00000021:
        MOV     ECX, DWORD PTR SS:[ESP+0x14]
        PUSH    ECX
        PUSH    EBP
        MOV     EDX, EAX
        MOV     ECX, 0x1
        CALL    DWORD PTR DS:[v_1D2870]
        TEST    EBP, EBP
        JE      SHORT @L00000025
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_2858B0]
        MOV     EAX, DWORD PTR DS:[EDI+0x258]
        ADD     EAX, 0x1
        PUSH    ESI
        MOV     ECX, EBX
        MOV     DWORD PTR DS:[EDI+0x258], EAX
        CALL    DWORD PTR DS:[v_036300]
        MOV     EAX, DWORD PTR DS:[EBX+0x30]
        TEST    EAX, EAX
        JNZ     SHORT @L00000022
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_472890]

    @L00000022:
        PUSH    0x1
        PUSH    0x1
        PUSH    0x0
        MOV     ESI, EAX
        PUSH    0x0
        PUSH    0x416E6575
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        TEST    EAX, EAX
        JE      SHORT @L00000023
        MOV     EDX, DWORD PTR SS:[ESP+0x14]
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0
        PUSH    EDX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_049740]
        JMP     SHORT @L00000024

    @L00000023:
        XOR     EAX, EAX

    @L00000024:
        PUSH    EAX
        PUSH    EBP
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_298FA0]

    @L00000025:
        MOV     EAX, DWORD PTR SS:[ESP+0x4C]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x44], -0x1
        JE      SHORT @L00000026
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000026
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000026:
        MOV     EAX, 0x1
        JMP     SHORT @L00000028

    @L00000027:
        PUSH    EDI
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_036440]

    @L00000028:
        MOV     ECX, DWORD PTR SS:[ESP+0x3C]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x34
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_0B8510()
{
    __asm
    {
        SUB     ESP, 0x30
        PUSH    EBP
        PUSH    ESI
        MOV     ESI, ECX
        MOV     EBP, DWORD PTR DS:[ESI+0x30]
        TEST    EBP, EBP
        PUSH    EDI
        JNZ     SHORT @L00000001
        CALL    DWORD PTR DS:[v_472890]
        MOV     EBP, EAX

    @L00000001:
        MOV     EAX, DWORD PTR DS:[ESI+0x50]
        PUSH    EBX
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_02EDD0]
        MOV     EDI, EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x50]
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x20]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_02E760]
        MOV     EDX, DWORD PTR DS:[EAX]
        MOV     ECX, DWORD PTR DS:[ESI+0x9C]
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR SS:[ESP+0x14], ECX
        MOV     DWORD PTR SS:[ESP+0x18], EDX
        PUSH    EAX
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_6EF000]
        FLD     DWORD PTR SS:[ESP+0x10]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AAE470]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FUCOMPP
        FSTSW   AX
        TEST    AH, 0x44
        JPO     SHORT @L00000002
        MOV     EBX, 0x1
        JMP     SHORT @L00000003

    @L00000002:
        XOR     EBX, EBX

    @L00000003:
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_020D30]
        PUSH    DWORD PTR DS:[v_AAE5E8]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EEE20]
        MOV     EDX, DWORD PTR SS:[ESP+0x48]
        MOV     EAX, DWORD PTR SS:[ESP+0x44]
        NEG     BL
        PUSH    -0x1
        PUSH    0x1
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        SBB     EBX, EBX
        AND     EBX, 0xFFFFFB00
        ADD     EBX, 0x502
        PUSH    EBX
        PUSH    ECX
        PUSH    EDX
        MOV     EDX, DWORD PTR SS:[EBP]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDX+0xEC]
        MOV     ECX, EBP
        CALL    NEAR EAX
        MOV     EDX, EDI
        MOV     ECX, EAX
        CALL    f_29F990                                //CALL    DWORD PTR DS:[v_29F990]
        MOV     EDI, EAX
        TEST    EDI, EDI
        POP     EBX
        JE      SHORT @L00000004
        PUSH    0x0
        PUSH    ESI
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        CALL    DWORD PTR DS:[v_042B20]
        CALL    DWORD PTR DS:[v_0B53B0]
        MOV     ESI, EAX
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EDX+0x324]
        LEA     EAX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    NEAR EDX
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x31C]
        LEA     ECX, DWORD PTR SS:[ESP+0xC]
        PUSH    ECX
        PUSH    EDI
        MOV     ECX, ESI
        CALL    NEAR EDX
        PUSH    ESI
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_079CA0]
        MOV     EDX, EDI
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_1D2600]
        PUSH    EDI
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_299390]

    @L00000004:
        POP     EDI
        POP     ESI
        POP     EBP
        ADD     ESP, 0x30
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_118440()
{
    __asm
    {
        SUB     ESP, 0x18
        PUSH    ESI
        PUSH    EDI
        MOV     EDI, ECX
        MOV     ESI, DWORD PTR DS:[EDI+0x30]
        TEST    ESI, ESI
        JNZ     SHORT @L00000001
        CALL    DWORD PTR DS:[v_472890]
        MOV     ESI, EAX

    @L00000001:
        MOV     EDX, DWORD PTR DS:[ESI]
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
        MOV     DWORD PTR SS:[ESP+0x8], ECX
        MOV     DWORD PTR SS:[ESP+0xC], EDX
        LEA     EDX, DWORD PTR SS:[ESP+0xC]
        LEA     ECX, DWORD PTR SS:[ESP+0x8]
        MOV     DWORD PTR SS:[ESP+0x10], EAX
        CALL    DWORD PTR DS:[v_2ABF20]
        MOV     EDX, DWORD PTR SS:[ESP+0x28]
        MOV     ECX, DWORD PTR DS:[EDI+0x50]
        PUSH    EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x28]
        PUSH    0x1
        PUSH    0x2
        PUSH    DWORD PTR DS:[v_AAE470]
        PUSH    EDX
        PUSH    EAX
        PUSH    ECX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_02EDD0]
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EDI, EAX
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     ECX, ESI
        CALL    NEAR EAX
        MOV     EDX, EDI
        MOV     ECX, EAX
        CALL    f_29F990                                //CALL    DWORD PTR DS:[v_29F990]
        TEST    EAX, EAX
        JE      SHORT @L00000002
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_299390]

    @L00000002:
        POP     EDI
        POP     ESI
        ADD     ESP, 0x18
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_1FD180()
{
    __asm
    {
        SUB     ESP, 0x24
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        MOV     ESI, ECX
        MOV     EBP, DWORD PTR DS:[ESI+0x30]
        TEST    EBP, EBP
        PUSH    EDI
        JNZ     SHORT @L00000001
        CALL    DWORD PTR DS:[v_472890]
        MOV     EBP, EAX

    @L00000001:
        MOV     EAX, DWORD PTR DS:[ESI+0x50]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_02EDD0]
        MOV     EDI, EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x50]
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x2C]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_02E760]
        MOV     EDX, DWORD PTR DS:[EAX]
        MOV     ECX, DWORD PTR DS:[ESI+0x9C]
        LEA     EAX, DWORD PTR SS:[ESP+0x14]
        MOV     DWORD PTR SS:[ESP+0x14], ECX
        MOV     DWORD PTR SS:[ESP+0x18], EDX
        PUSH    EAX
        LEA     EDX, DWORD PTR SS:[ESP+0x1C]
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_6EF000]
        FLD     DWORD PTR SS:[ESP+0x10]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AAE470]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FUCOMPP
        FSTSW   AX
        TEST    AH, 0x44
        JPO     SHORT @L00000002
        MOV     EBX, 0x1
        JMP     SHORT @L00000003

    @L00000002:
        XOR     EBX, EBX

    @L00000003:
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        CALL    DWORD PTR DS:[v_020D30]
        PUSH    DWORD PTR DS:[v_AAE5E8]
        MOV     EDX, EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EEE20]
        MOV     EDX, DWORD PTR SS:[ESP+0x3C]
        MOV     EAX, DWORD PTR SS:[ESP+0x38]
        NEG     BL
        PUSH    -0x1
        PUSH    0x1
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        SBB     EBX, EBX
        AND     EBX, 0xFFFFFB00
        ADD     EBX, 0x502
        PUSH    EBX
        PUSH    ECX
        PUSH    EDX
        MOV     EDX, DWORD PTR SS:[EBP]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDX+0xEC]
        MOV     ECX, EBP
        CALL    NEAR EAX
        MOV     EDX, EDI
        MOV     ECX, EAX
        CALL    f_29F990                                //CALL    DWORD PTR DS:[v_29F990]
        MOV     EDI, EAX
        TEST    EDI, EDI
        JE      @L00000004
        MOV     EDX, EDI
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_1D2600]
        CALL    DWORD PTR DS:[v_1FA9D0]
        MOV     EBX, EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x50]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x3C]
        PUSH    ECX
        MOV     ECX, ESI
        MOV     DWORD PTR SS:[ESP+0x44], EAX
        CALL    DWORD PTR DS:[v_02EB30]
        MOV     EDX, DWORD PTR DS:[ESI+0x50]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x18]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_02EAC0]
        MOV     ECX, DWORD PTR DS:[ESI+0x4C]
        MOV     EDX, DWORD PTR DS:[ESI+0x50]
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x24]
        MOV     DWORD PTR SS:[ESP+0x20], ECX
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_02EA50]
        MOV     ECX, DWORD PTR DS:[ESI+0x50]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x28]
        PUSH    EDX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_02E9E0]
        MOV     ECX, DWORD PTR SS:[ESP+0x3C]
        MOV     EAX, DWORD PTR DS:[EBX]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x34]
        PUSH    EDX
        MOV     ECX, ESI
        MOV     DWORD PTR SS:[ESP+0x30], EAX
        CALL    DWORD PTR DS:[v_02E7D0]
        MOV     EDX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x3C]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        PUSH    ECX
        PUSH    EDX
        LEA     EAX, DWORD PTR SS:[ESP+0x30]
        PUSH    EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x3C]
        LEA     ECX, DWORD PTR SS:[ESP+0x38]
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x28]
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[EAX+0x364]
        PUSH    EDI
        MOV     ECX, EBX
        CALL    NEAR EDX
        PUSH    EBX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_079CA0]
        PUSH    EDI
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_299390]

    @L00000004:
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x24
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_162DC0()
{
    __asm
    {
        SUB     ESP, 0x1C
        PUSH    ESI
        PUSH    EDI
        MOV     EDI, ECX
        MOV     EAX, DWORD PTR DS:[EDI]
        MOV     EDX, DWORD PTR DS:[EAX+0x434]
        CALL    NEAR EDX
        MOV     ESI, EAX
        TEST    ESI, ESI
        MOV     DWORD PTR SS:[ESP+0x1C], ESI
        JE      @L00000009
        MOV     EAX, DWORD PTR DS:[EDI+0x30]
        TEST    EAX, EAX
        JNZ     SHORT @L00000001
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_472890]

    @L00000001:
        MOV     DWORD PTR SS:[ESP+0xC], EAX
        MOV     EAX, DWORD PTR DS:[EDI]
        MOV     EDX, DWORD PTR DS:[EAX+0x42C]
        PUSH    EBX
        PUSH    EBP
        MOV     ECX, EDI
        CALL    NEAR EDX
        MOV     EBP, EAX
        MOV     EAX, DWORD PTR DS:[EDI+0x50]
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x2C]
        PUSH    EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_02E9E0]
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_6EEC20]
        MOV     EBX, EAX
        MOV     EAX, DWORD PTR DS:[EDI+0x50]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        PUSH    ECX
        MOV     ECX, EDI
        MOV     DWORD PTR SS:[ESP+0x18], EBX
        CALL    DWORD PTR DS:[v_02E760]
        MOV     EDX, DWORD PTR DS:[EDI+0x9C]
        MOV     EAX, DWORD PTR DS:[EAX]
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        MOV     DWORD PTR SS:[ESP+0x1C], EDX
        PUSH    ECX
        LEA     EDX, DWORD PTR SS:[ESP+0x24]
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        MOV     DWORD PTR SS:[ESP+0x24], EAX
        CALL    DWORD PTR DS:[v_6EF000]
        TEST    EBX, EBX
        JE      @L00000008
        JMP     SHORT @L00000003
        LEA     EBX, DWORD PTR DS:[EBX]

    @L00000002:
        MOV     ESI, DWORD PTR SS:[ESP+0x24]

    @L00000003:
        FLD     DWORD PTR SS:[ESP+0x18]
        MOV     EBX, 0x1
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AAE470]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        SUB     DWORD PTR SS:[ESP+0x10], EBX
        FUCOMPP
        FSTSW   AX
        TEST    AH, 0x44
        JPE     SHORT @L00000004
        XOR     EBX, EBX

    @L00000004:
        PUSH    0x0
        PUSH    DWORD PTR DS:[v_876A7C]
        MOV     EDX, DWORD PTR DS:[v_875DE0]
        LEA     ECX, DWORD PTR SS:[ESP+0x28]
        CALL    DWORD PTR DS:[v_009EE0]
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        CALL    DWORD PTR DS:[v_6EEC20]
        CDQ
        MOV     ECX, 0x168
        IDIV    ECX
        MOV     EAX, 0xB60B60B7
        MOV     ECX, EDX
        IMUL    ECX
        ADD     EDX, ECX
        SAR     EDX, 0x6
        MOV     EAX, EDX
        SHR     EAX, 0x1F
        ADD     EDX, EAX
        IMUL    EDX, EDX, 0x5A
        MOV     EAX, ECX
        SUB     EAX, EDX
        TEST    ECX, ECX
        JE      SHORT @L00000006
        TEST    EAX, EAX
        JE      SHORT @L00000005
        SUB     ECX, EAX

    @L00000005:
        TEST    ECX, ECX
        JGE     SHORT @L00000006
        ADD     ECX, 0x168

    @L00000006:
        MOV     EDX, ECX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_6EF350]
        PUSH    DWORD PTR DS:[v_AAE5E8]
        LEA     EDX, DWORD PTR SS:[ESP+0x20]
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        CALL    DWORD PTR DS:[v_6EEE20]
        MOV     ECX, DWORD PTR SS:[ESP+0x34]
        MOV     EDX, DWORD PTR SS:[ESP+0x30]
        NEG     BL
        PUSH    -0x1
        PUSH    0x1
        LEA     EAX, DWORD PTR SS:[ESP+0x30]
        SBB     EBX, EBX
        AND     EBX, 0xFFFFFB00
        ADD     EBX, 0x502
        PUSH    EBX
        PUSH    EAX
        PUSH    ECX
        PUSH    EDX
        MOV     EDX, ESI
        MOV     ECX, EBP
        CALL    f_29F990                                //CALL    DWORD PTR DS:[v_29F990]
        MOV     ESI, EAX
        TEST    ESI, ESI
        JE      SHORT @L00000007
        MOV     EBX, DWORD PTR SS:[ESP+0x14]
        MOV     EDX, ESI
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_1D2600]
        MOV     EAX, DWORD PTR DS:[EDI]
        MOV     EDX, DWORD PTR DS:[EAX+0x430]
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        PUSH    ECX
        PUSH    ESI
        MOV     ECX, EDI
        CALL    NEAR EDX
        PUSH    ESI
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_299390]

    @L00000007:
        CMP     DWORD PTR SS:[ESP+0x10], 0x0
        JNZ     @L00000002

    @L00000008:
        POP     EBP
        POP     EBX

    @L00000009:
        POP     EDI
        POP     ESI
        ADD     ESP, 0x1C
        RET     0x8
    }
}
//---------------------------------------------------------------------------


