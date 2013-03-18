//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

void    *fpc_f_34F280   = &f_34F280;
void    *fpc_f_34F2C0   = &f_34F2C0;

FRAW void f_2026A0()
{
    __asm
    {
        CMP     DWORD PTR SS:[ESP+0x4], 0x0
        PUSH    ESI
        MOV     ESI, ECX
        JNZ     @L00000010
        MOV     EAX, DWORD PTR DS:[ESI+0x30]
        TEST    EAX, EAX
        PUSH    EDI
        MOV     EDI, DWORD PTR DS:[v_AB65F4]
        MOV     EDI, DWORD PTR DS:[EDI]
        JNZ     SHORT @L00000001
        CALL    DWORD PTR DS:[v_472890]

    @L00000001:
        MOVZX   ECX, WORD PTR DS:[EDI+0x28]
        MOV     EDX, DWORD PTR DS:[EAX]
        PUSH    ECX
        MOV     ECX, EAX
        MOV     EAX, DWORD PTR DS:[EDX+0xEC]
        CALL    NEAR EAX
        PUSH    EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_3A3530]
        TEST    EAX, EAX
    // FEAT SKLCD
        PUSHFD
        CMP     BYTE PTR DS:[bSKLCD], 0
        JNE     @L_SKLCD_G_1
        POPFD
        JE      @L00000009
        JMP     @L_SKLCD_F_1
    @L_SKLCD_G_1:
        POPFD
    @L_SKLCD_F_1:
                                                        //JE      @L00000009

        MOV     EDI, DWORD PTR DS:[ESI+0x30]
        TEST    EDI, EDI
        JNZ     SHORT @L00000002
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_472890]
        MOV     EDI, EAX

    @L00000002:
        PUSH    0x1
        PUSH    0x1
        PUSH    0x0
        PUSH    0x0
        MOV     DWORD PTR SS:[ESP+0x1C], 0x0
        CALL    DWORD PTR DS:[v_1D4C20]
        PUSH    EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_0787D0]
        TEST    EAX, EAX
        JE      SHORT @L00000003
        MOV     EAX, DWORD PTR DS:[EAX+0x20]
        SHR     EAX, 0x0A
        AND     EAX, 0x1
        MOV     DWORD PTR SS:[ESP+0xC], EAX

    @L00000003:
        PUSH    0x1
        PUSH    0x1
        PUSH    0x0
        PUSH    0x0
        CALL    DWORD PTR DS:[v_1D4CA0]
        PUSH    EAX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_0787D0]
        TEST    EAX, EAX
        JE      SHORT @L00000004
        MOV     ECX, DWORD PTR DS:[EAX+0x20]
        SHR     ECX, 0x8
        AND     ECX, 0x1
        OR      DWORD PTR SS:[ESP+0xC], ECX

    @L00000004:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x290]
        PUSH    EBX
        PUSH    EBP
        MOV     ECX, ESI
        CALL    NEAR EAX
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EDX+0x294]
        PUSH    -0x1
        XOR     ECX, ECX
        CMP     DWORD PTR DS:[EDI+0x194], ECX
        PUSH    0x0
        MOV     EBX, EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x20]
        SETE    CL
        PUSH    0x0
        MOV     EDI, EAX
        PUSH    0x0
        SHR     EAX, 0x7
        AND     EAX, 0x1
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92ED9C]
        MOV     EAX, DWORD PTR DS:[EAX]
        PUSH    EBX
        PUSH    0x0
        PUSH    EAX
        PUSH    0x6
        MOV     EBP, ECX
        SHR     EDI, 0x9
        PUSH    0x0D0012
        MOV     ECX, ESI
        AND     EDI, 0x1
        CALL    NEAR EDX
        MOV     ECX, DWORD PTR DS:[ESI+0x20]
        MOV     EDX, DWORD PTR DS:[v_92ED9C]
        MOV     EDX, DWORD PTR DS:[EDX]
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EAX+0x294]
        PUSH    -0x1
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0
        SHR     ECX, 0x8
        AND     ECX, 0x1
        PUSH    ECX
        PUSH    EBX
        PUSH    0x0
        PUSH    EDX
        PUSH    0x6
        PUSH    0x0D0016
        MOV     ECX, ESI
        CALL    NEAR EAX
        TEST    EBP, EBP
        JE      SHORT @L00000005
        TEST    EDI, EDI
        JNZ     SHORT @L00000005
        CMP     DWORD PTR SS:[ESP+0x14], EDI
        JNZ     SHORT @L00000005
        LEA     EAX, DWORD PTR DS:[EDI+0x1]
        JMP     SHORT @L00000006

    @L00000005:
        XOR     EAX, EAX

    @L00000006:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EDX+0x294]
        PUSH    -0x1
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92ED9C]
        MOV     EAX, DWORD PTR DS:[EAX]
        PUSH    EBX
        PUSH    0x0
        PUSH    EAX
        PUSH    0x1
        PUSH    0x0D0004
        MOV     ECX, ESI
        CALL    NEAR EDX
        TEST    EBP, EBP
        JE      SHORT @L00000007
        TEST    EDI, EDI
        JE      SHORT @L00000007
        CMP     DWORD PTR SS:[ESP+0x14], 0x0
        JNZ     SHORT @L00000007
        MOV     EAX, 0x1
        JMP     SHORT @L00000008

    @L00000007:
        XOR     EAX, EAX

    @L00000008:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EDX+0x294]
        PUSH    -0x1
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_92ED9C]
        MOV     EAX, DWORD PTR DS:[EAX]
        PUSH    EBX
        PUSH    0x0
        PUSH    EAX
        PUSH    0x1
        PUSH    0x0D0019
        MOV     ECX, ESI
        CALL    NEAR EDX
        POP     EBP
        POP     EBX

    @L00000009:
        POP     EDI

    @L00000010:
        POP     ESI
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_2FB0E0()
{
    __asm
    {
        PUSH    EBX
        PUSH    ESI
        MOV     ESI, ECX
        MOV     EAX, DWORD PTR DS:[ESI+0x1B4]
        XOR     EBX, EBX
        CMP     EAX, DWORD PTR DS:[ESI+0x214]
        JNZ     SHORT @L00000002
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        CMP     ECX, EBX
        JE      SHORT @L00000002
        PUSH    0x4
        CALL    DWORD PTR DS:[v_601E40]
        TEST    EAX, EAX
        JE      SHORT @L00000002
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        PUSH    EDI
        MOV     EDI, DWORD PTR DS:[ECX+0x238]
        CMP     EDI, EBX
        JE      SHORT @L00000001
        CALL    DWORD PTR DS:[v_441B20]
        PUSH    EDI
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2F8EF0]

    @L00000001:
        POP     EDI

    @L00000002:
        CMP     DWORD PTR DS:[ESI+0x26C], EBX
        JE      SHORT @L00000003
        MOV     ECX, ESI
        CALl    f_2F8500                                //CALL    DWORD PTR DS:[v_2F8500]
        MOV     DWORD PTR DS:[ESI+0x26C], EBX
        MOV     DWORD PTR DS:[ESI+0x278], EBX
        MOV     DWORD PTR DS:[ESI+0x27C], EBX

    @L00000003:
        CMP     DWORD PTR DS:[ESI+0x278], EBX
        JE      SHORT @L00000004
        MOV     ECX, DWORD PTR DS:[ESI+0x3C4]
        CALL    f_35E780                                //CALL    DWORD PTR DS:[v_35E780]
        MOV     DWORD PTR DS:[ESI+0x278], EBX

    @L00000004:
        CMP     DWORD PTR DS:[ESI+0x27C], EBX
        JE      SHORT @L00000005
        MOV     ECX, DWORD PTR DS:[ESI+0x3C8]
        CALL    f_372F50                                //CALL    DWORD PTR DS:[v_372F50]
        MOV     DWORD PTR DS:[ESI+0x27C], EBX

    @L00000005:
        CMP     DWORD PTR DS:[ESI+0x280], EBX
        JE      SHORT @L00000006
        MOV     ECX, DWORD PTR DS:[ESI+0x3DC]
        PUSH    0x1
        CALL    DWORD PTR DS:[v_370A90]
        MOV     DWORD PTR DS:[ESI+0x280], EBX

    @L00000006:
        MOV     ECX, DWORD PTR DS:[ESI+0x254]
        CMP     ECX, EBX
        JE      SHORT @L00000007
        FLD     DWORD PTR SS:[ESP+0xC]
        PUSH    ECX
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_3063D0]

    @L00000007:
        CMP     DWORD PTR DS:[ESI+0x274], EBX
        JE      SHORT @L00000008
        MOV     ECX, DWORD PTR DS:[ESI+0x24C]
        CALL    DWORD PTR DS:[v_37E3E0]
        MOV     DWORD PTR DS:[ESI+0x274], EBX

    @L00000008:
        MOV     EDX, DWORD PTR SS:[ESP+0x14]
        FLD     DWORD PTR SS:[ESP+0x10]
        PUSH    EDX
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        MOV     ECX, ESI
        FLD     DWORD PTR SS:[ESP+0x18]
        FSTP    DWORD PTR SS:[ESP]
        CALL    DWORD PTR DS:[v_60A1A0]
        POP     ESI
        POP     EBX
        RET     0x0C
    }
}
//---------------------------------------------------------------------------

FRAW void f_2F8500()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_81AFE8]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x14
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
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     EBP, DWORD PTR DS:[EAX+0x34]
        CALL    DWORD PTR DS:[v_53F160]
        TEST    EAX, EAX
        JNZ     @L00000012
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_41F660]
        TEST    EAX, EAX
        JNZ     SHORT @L00000002
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_41FA10]
        TEST    EAX, EAX
        JNZ     SHORT @L00000002
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_2F32C0]

    @L00000002:
        CMP     DWORD PTR DS:[ESI+0x284], 0x0
        JE      SHORT @L00000003
        MOV     ECX, DWORD PTR DS:[ESI+0x3C8]
        CALL    DWORD PTR DS:[v_373040]
        MOV     DWORD PTR DS:[ESI+0x284], 0x0

    @L00000003:
        MOV     ECX, DWORD PTR DS:[ESI+0x3C8]
        CALL    f_372F50                                //CALL    DWORD PTR DS:[v_372F50]
        MOV     ECX, DWORD PTR DS:[ESI+0x3C4]
        CALL    f_35E780                                //CALL    DWORD PTR DS:[v_35E780]
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_41FA10]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        CALL    DWORD PTR DS:[v_038890]
        MOV     ECX, EBP
        MOV     DWORD PTR SS:[ESP+0x2C], 0x0
        CALL    DWORD PTR DS:[v_41FA10]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x14]
        CALL    DWORD PTR DS:[v_012CF0]
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        TEST    EAX, EAX
        MOV     EDX, 0x1
        MOV     BYTE PTR SS:[ESP+0x2C], DL
        JE      SHORT @L00000005
        PUSH    0x0
        PUSH    ECX
        MOV     ECX, ESP
        MOV     DWORD PTR DS:[ECX], EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x1C]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x28], ESP
        JE      SHORT @L00000004
        ADD     DWORD PTR DS:[EAX+0x4], EDX

    @L00000004:
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x118]
        JMP     SHORT @L00000009

    @L00000005:
        MOV     ECX, DWORD PTR SS:[ESP+0x10]
        TEST    ECX, ECX
        JE      SHORT @L00000007
        PUSH    0x0
        PUSH    ECX
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], ECX
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x28], ESP
        JE      SHORT @L00000006
        ADD     DWORD PTR DS:[EAX+0x4], EDX

    @L00000006:
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x114]
        JMP     SHORT @L00000009

    @L00000007:
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_421E50]
        TEST    EAX, EAX
        JNZ     SHORT @L00000008
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_41FA00]
        TEST    EAX, EAX
        JE      SHORT @L00000010

    @L00000008:
        PUSH    0x0
        PUSH    ECX
        MOV     ECX, ESP
        MOV     DWORD PTR SS:[ESP+0x28], ESP
        PUSH    EAX
        CALL    DWORD PTR DS:[v_038450]
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x110]

    @L00000009:
        CALL    NEAR EDX

    @L00000010:
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        TEST    EAX, EAX
        MOV     BYTE PTR SS:[ESP+0x2C], 0x0
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
        JMP     @L00000022

    @L00000012:
        MOV     EAX, DWORD PTR DS:[ESI+0x3B8]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        CALL    DWORD PTR DS:[v_038450]
        MOV     EAX, DWORD PTR DS:[ESI+0x3B8]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x20]
        MOV     DWORD PTR SS:[ESP+0x30], 0x2
        CALL    DWORD PTR DS:[v_038890]
        MOV     EAX, DWORD PTR DS:[ESI+0x3B8]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        MOV     BYTE PTR SS:[ESP+0x30], 0x3
        CALL    DWORD PTR DS:[v_012CF0]
        MOV     EDI, DWORD PTR SS:[ESP+0x20]
        TEST    EDI, EDI
        MOV     BYTE PTR SS:[ESP+0x2C], 0x4
        JE      SHORT @L00000014
        MOV     EDX, DWORD PTR DS:[EDI+0x10]
        MOV     ECX, DWORD PTR DS:[EDI+0xC]
        CALL    DWORD PTR DS:[v_03FA30]
        TEST    EAX, EAX
        JE      SHORT @L00000014
        MOV     ECX, DWORD PTR DS:[EAX+0xC]
        XOR     EDX, EDX
        CMP     ECX, 0x2B61676C
        SETE    DL
        MOV     ECX, EDX
        NEG     ECX
        SBB     ECX, ECX
        AND     ECX, EAX
        JE      SHORT @L00000014
        CMP     DWORD PTR DS:[ECX+0x20], 0x0
        JNZ     SHORT @L00000014
        PUSH    0x0
        PUSH    ECX
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], EDI
        MOV     EAX, DWORD PTR SS:[ESP+0x28]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x1C], ESP
        JE      SHORT @L00000013
        ADD     DWORD PTR DS:[EAX+0x4], 0x1

    @L00000013:
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x110]
        CALL    NEAR EDX
        JMP     @L00000019

    @L00000014:
        MOV     EDI, DWORD PTR SS:[ESP+0x1C]
        TEST    EDI, EDI
        JE      SHORT @L00000016
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_0418A0]
        TEST    EAX, EAX
        JE      SHORT @L00000016
        PUSH    0x0
        PUSH    ECX
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], EDI
        MOV     EAX, DWORD PTR SS:[ESP+0x24]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x1C], ESP
        JE      SHORT @L00000015
        ADD     DWORD PTR DS:[EAX+0x4], 0x1

    @L00000015:
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x118]
        CALL    NEAR EDX
        JMP     SHORT @L00000019

    @L00000016:
        MOV     EDI, DWORD PTR SS:[ESP+0x18]
        TEST    EDI, EDI
        JE      SHORT @L00000018
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_0418A0]
        TEST    EAX, EAX
        JE      SHORT @L00000018
        PUSH    0x0
        PUSH    ECX
        MOV     EAX, ESP
        MOV     DWORD PTR DS:[EAX], EDI
        MOV     EAX, DWORD PTR SS:[ESP+0x20]
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x1C], ESP
        JE      SHORT @L00000017
        ADD     DWORD PTR DS:[EAX+0x4], 0x1

    @L00000017:
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX+0x114]
        CALL    NEAR EDX
        JMP     SHORT @L00000019

    @L00000018:
        MOV     ECX, DWORD PTR DS:[ESI+0x3F4]
        CALL    DWORD PTR DS:[v_349910]

    @L00000019:
        MOV     ECX, DWORD PTR DS:[ESI+0x3C8]
        CALL    f_372F50                                //CALL    DWORD PTR DS:[v_372F50]
        MOV     ECX, DWORD PTR DS:[ESI+0x3C4]
        CALL    f_35E780                                //CALL    DWORD PTR DS:[v_35E780]
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        TEST    EAX, EAX
        MOV     BYTE PTR SS:[ESP+0x2C], 0x3
        JE      SHORT @L00000020
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000020
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000020:
        MOV     EAX, DWORD PTR SS:[ESP+0x1C]
        TEST    EAX, EAX
        MOV     BYTE PTR SS:[ESP+0x2C], 0x2
        JE      SHORT @L00000021
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000021
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000021:
        MOV     EAX, DWORD PTR SS:[ESP+0x20]

    @L00000022:
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x2C], -0x1
        JE      SHORT @L00000023
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], 0x0
        JNZ     SHORT @L00000023
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000023:
        CMP     DWORD PTR DS:[ESI+0x270], 0x0
        JE      SHORT @L00000026
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_41FA00]
        MOV     EBP, DWORD PTR DS:[ESI+0x3BC]
        MOV     EDI, EAX
        TEST    EDI, EDI
        JE      SHORT @L00000024
        MOV     EDX, DWORD PTR DS:[EDI+0x10]
        MOV     ECX, DWORD PTR DS:[EDI+0xC]
        CALL    DWORD PTR DS:[v_03FA30]
        TEST    EAX, EAX
        JE      SHORT @L00000024
        XOR     ECX, ECX
        CMP     DWORD PTR DS:[EAX+0xC], 0x2B61676C
        SETNE   CL
        SUB     ECX, 0x1
        AND     ECX, EAX
        MOV     EAX, ECX
        JE      SHORT @L00000024
        CMP     DWORD PTR DS:[EAX+0x20], 0x0
        JNZ     SHORT @L00000024
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_285DC0]
        TEST    EAX, EAX
        JNZ     SHORT @L00000025

    @L00000024:
        XOR     EDI, EDI

    @L00000025:
        PUSH    EDI
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_39B810]
        MOV     DWORD PTR DS:[ESI+0x270], 0x0

    @L00000026:
        MOV     ECX, DWORD PTR SS:[ESP+0x24]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        ADD     ESP, 0x20
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_372F50()
{
    __asm
    {
        PUSH    ESI
        MOV     ESI, ECX
        CALL    DWORD PTR DS:[v_53F160]
        TEST    EAX, EAX
        JNZ     @L00000009
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        PUSH    EBX
        PUSH    EBP
        PUSH    EDI
        PUSH    EAX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     EBX, DWORD PTR DS:[EAX+0x34]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_342130]
        CALL    DWORD PTR DS:[v_333820]
        MOV     ECX, DWORD PTR DS:[ESI+0x16C]
        MOV     EBP, EAX
        XOR     EAX, EAX
        XOR     EDI, EDI
        CMP     ECX, EDI
        SETLE   AL
        SUB     EAX, 0x1
        AND     ECX, EAX
        CMP     ECX, EDI
        JLE     SHORT @L00000006
        LEA     ESP, DWORD PTR SS:[ESP]

    @L00000002:
        CMP     EBP, EDI
        MOV     DWORD PTR DS:[ECX+0x5C0], EDI
        MOV     DWORD PTR DS:[ECX+0x5C4], EDI
        MOV     DWORD PTR DS:[ECX+0x5CC], EDI
        JNZ     SHORT @L00000003
        MOV     DWORD PTR DS:[ECX+0x5D4], EDI

    @L00000003:
        CMP     ECX, EDI
        MOV     DWORD PTR DS:[ECX+0x5D8], EDI
        MOV     DWORD PTR DS:[ECX+0x6EC], EDI
        MOV     DWORD PTR DS:[ECX+0x5DC], EDI
        MOV     DWORD PTR DS:[ECX+0x5E0], EDI
        JE      SHORT @L00000004
        MOV     EDX, DWORD PTR DS:[ESI+0x164]
        ADD     EDX, ECX
        JMP     SHORT @L00000005

    @L00000004:
        LEA     EDX, DWORD PTR DS:[ESI+0x168]

    @L00000005:
        MOV     ECX, DWORD PTR DS:[EDX+0x4]
        CMP     ECX, EDI
        JG      SHORT @L00000002

    @L00000006:
        MOV     EAX, DWORD PTR DS:[ESI+0x1BC]
        CMP     EAX, EDI
        PUSH    ESI
        MOV     ECX, EBX
        PUSH    DWORD PTR DS:[fpc_f_34F280]             //PUSH    DWORD PTR DS:[v_34F280]
        JLE     SHORT @L00000007
        CALL    DWORD PTR DS:[v_421E90]
        JMP     SHORT @L00000008

    @L00000007:
        CALL    DWORD PTR DS:[v_421E40]

    @L00000008:
        PUSH    ESI
        PUSH    DWORD PTR DS:[fpc_f_34F2C0]             //PUSH    DWORD PTR DS:[v_34F2C0]
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_421E90]
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_4209E0]
        PUSH    EAX
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_41F660]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_372CB0]
        POP     EDI
        POP     EBP
        POP     EBX

    @L00000009:
        POP     ESI
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_34F280()
{
    __asm
    {
        TEST    EDX, EDX
        PUSH    EDI
        MOV     EDI, ECX
        JNZ     SHORT @L00000001
        XOR     EAX, EAX
        POP     EDI
        RET

    @L00000001:
        MOV     EAX, DWORD PTR DS:[EDX+0x1BC]
        TEST    EAX, EAX
        PUSH    ESI
        JLE     SHORT @L00000002
        MOV     ESI, DWORD PTR DS:[EAX+0x8]
        JMP     SHORT @L00000003

    @L00000002:
        MOV     ESI, DWORD PTR DS:[v_92ED9C]
        MOV     ESI, DWORD PTR DS:[ESI]

    @L00000003:
        CALL    DWORD PTR DS:[v_285DC0]
        TEST    EAX, EAX
    // FEAT SKLCD
        PUSHFD
        CMP     BYTE PTR DS:[bSKLCD], 0
        JNE     @L_SKLCD_G_2
        POPFD
        JE      @L00000004
        JMP     @L_SKLCD_F_2
    @L_SKLCD_G_2:
        POPFD
    @L_SKLCD_F_2:
                                                        //JE      SHORT @L00000004

        PUSH    ESI
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_2774C0]

    @L00000004:
        POP     ESI
        MOV     EAX, 0x1
        POP     EDI
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_34F2C0()
{
    __asm
    {
        TEST    EDX, EDX
        PUSH    EDI
        MOV     EDI, ECX
        JNZ     SHORT @L00000001
        XOR     EAX, EAX
        POP     EDI
        RET

    @L00000001:
        MOV     EAX, DWORD PTR DS:[EDX+0x1BC]
        TEST    EAX, EAX
        PUSH    ESI
        JLE     SHORT @L00000002
        MOV     ESI, DWORD PTR DS:[EAX+0x8]
        JMP     SHORT @L00000003

    @L00000002:
        MOV     ESI, DWORD PTR DS:[v_92ED9C]
        MOV     ESI, DWORD PTR DS:[ESI]

    @L00000003:
        CALL    DWORD PTR DS:[v_285DC0]
        TEST    EAX, EAX
    // FEAT SKLCD
        PUSHFD
        CMP     BYTE PTR DS:[bSKLCD], 0
        JNE     @L_SKLCD_G_3
        POPFD
        JE      @L00000004
        JMP     @L_SKLCD_F_3
    @L_SKLCD_G_3:
        POPFD
    @L_SKLCD_F_3:
                                                        //JE      SHORT @L00000004

        PUSH    ESI
        MOV     ECX, EDI
        CALL    f_277570                                //CALL    DWORD PTR DS:[v_277570]

    @L00000004:
        POP     ESI
        MOV     EAX, 0x1
        POP     EDI
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_35E780()
{
    __asm
    {
        PUSH    -0x1
        PUSH    DWORD PTR DS:[v_81F900]
        MOV     EAX, DWORD PTR FS:[0x0]
        PUSH    EAX
        SUB     ESP, 0x18
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EAX, DWORD PTR DS:[v_AAE140]
        MOV     EAX, DWORD PTR DS:[EAX]
        XOR     EAX, ESP
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x2C]
        MOV     DWORD PTR FS:[0x0], EAX
        MOV     EBP, ECX
        CALL    DWORD PTR DS:[v_53F160]
        TEST    EAX, EAX
        JE      SHORT @L00000002
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_3529F0]
        MOV     ECX, DWORD PTR SS:[ESP+0x2C]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x24
        RET

    @L00000002:
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ESI, DWORD PTR DS:[EAX+0x34]
        MOV     ECX, ESI
        MOV     DWORD PTR SS:[ESP+0x20], ESI
        CALL    DWORD PTR DS:[v_41F660]
        MOV     ECX, ESI
        MOV     EDI, EAX
        CALL    DWORD PTR DS:[v_41FA10]
        MOV     ESI, EAX
        PUSH    ESI
        LEA     ECX, DWORD PTR SS:[ESP+0x1C]
        CALL    DWORD PTR DS:[v_038890]
        XOR     EBX, EBX
        PUSH    ESI
        LEA     ECX, DWORD PTR SS:[ESP+0x18]
        MOV     DWORD PTR SS:[ESP+0x38], EBX
        CALL    DWORD PTR DS:[v_012CF0]
        CMP     EDI, EBX
        MOV     BYTE PTR SS:[ESP+0x34], 0x1
        JNZ     SHORT @L00000005
        CMP     ESI, EBX
        JE      SHORT @L00000003
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0418A0]
        TEST    EAX, EAX
        JNZ     SHORT @L00000005

    @L00000003:
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_346530]
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        CMP     EAX, EBX
        MOV     BYTE PTR SS:[ESP+0x34], BL
        JE      SHORT @L00000004
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], EBX
        JNZ     SHORT @L00000004
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX

    @L00000004:
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        CMP     EAX, EBX
        MOV     DWORD PTR SS:[ESP+0x34], -0x1
        JE      @L00000009
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], EBX
        JNZ     @L00000009
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EAX]
        CALL    NEAR EDX
        MOV     ECX, DWORD PTR SS:[ESP+0x2C]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x24
        RET

    @L00000005:
        CMP     DWORD PTR SS:[ESP+0x18], EBX
        JE      @L00000010
        PUSH    0x5
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_346490]
        MOV     ECX, DWORD PTR SS:[EBP+0x140]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR SS:[ESP+0x18]
        MOV     EAX, DWORD PTR DS:[EAX+0x78]
        PUSH    0x1
        PUSH    EDX
        CALL    NEAR EAX

    @L00000006:
        MOV     ECX, DWORD PTR SS:[EBP+0x148]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBX
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR SS:[EBP+0x14C]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x68]
        MOV     DWORD PTR DS:[ECX+0x90], 0x1
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR SS:[EBP+0x150]
        CALL    DWORD PTR DS:[v_60E7E0]

    @L00000007:
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        CMP     EAX, EBX
        MOV     BYTE PTR SS:[ESP+0x34], BL
        JE      SHORT @L00000008
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], EBX
        JNZ     SHORT @L00000008
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000008:
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        CMP     EAX, EBX
        MOV     DWORD PTR SS:[ESP+0x34], -0x1
        JE      SHORT @L00000009
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], EBX
        JNZ     SHORT @L00000009
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000009:
        MOV     ECX, DWORD PTR SS:[ESP+0x2C]
        MOV     DWORD PTR FS:[0x0], ECX
        POP     ECX
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x24
        RET

    @L00000010:
        CMP     DWORD PTR SS:[ESP+0x14], EBX
        JE      SHORT @L00000011
        PUSH    0x6
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_346490]
        MOV     ECX, DWORD PTR SS:[EBP+0x144]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        MOV     EDX, DWORD PTR DS:[EDX+0x78]
        PUSH    0x1
        PUSH    EAX
        CALL    NEAR EDX
        JMP     @L00000006

    @L00000011:
        CMP     EDI, 0x1
        MOV     EDI, DWORD PTR SS:[ESP+0x20]
        MOV     ECX, EDI
        JNZ     @L00000038
        CALL    DWORD PTR DS:[v_421E50]
        MOV     ESI, EAX
        CMP     ESI, EBX
        JNZ     SHORT @L00000012
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_41FA00]
        MOV     ESI, EAX
        CMP     ESI, EBX
        JE      @L00000037

    @L00000012:
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0418A0]
        TEST    EAX, EAX
        JE      @L00000037
        MOV     ECX, ESI
        CALL    f_28E1D0                                //CALL    DWORD PTR DS:[v_28E1D0]
        MOV     ECX, ESI
        MOV     EDI, EAX
        CALL    DWORD PTR DS:[v_282C60]
        CMP     EAX, EBX
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        JNZ     SHORT @L00000015
        PUSH    0x1
        PUSH    0x1
        PUSH    EBX
        PUSH    0x1
        CALL    DWORD PTR DS:[v_028840]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        TEST    EAX, EAX
        JE      SHORT @L00000015
        PUSH    0x1
        PUSH    0x1
        PUSH    EBX
        PUSH    0x1
        CALL    DWORD PTR DS:[v_026790]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        CMP     EAX, EBX
        JE      SHORT @L00000013
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   ECX, WORD PTR DS:[ECX+0x28]
        PUSH    EBX
        PUSH    0x1
        PUSH    0x1
        PUSH    ECX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_049740]
        JMP     SHORT @L00000014

    @L00000013:
        XOR     EAX, EAX

    @L00000014:
        XOR     EDX, EDX
        CMP     EAX, EBX
        SETNE   DL
        MOV     DWORD PTR SS:[ESP+0x1C], EDX

    @L00000015:
        MOV     EAX, DWORD PTR DS:[v_AB65F4]
        MOV     EAX, DWORD PTR DS:[EAX]
        CMP     DWORD PTR DS:[EAX+0x334], EBX
        JNZ     SHORT @L00000016
        PUSH    EBX
        MOV     EDX, DWORD PTR DS:[v_93A0D8]
        MOV     ECX, DWORD PTR DS:[v_875DE0]
        CALL    DWORD PTR DS:[v_009F90]
        TEST    EAX, EAX
        JNZ     SHORT @L00000018

    @L00000016:
        CMP     EDI, EBX
        JNZ     SHORT @L00000019
        MOV     DWORD PTR SS:[ESP+0x1C], EBX

    @L00000017:
        PUSH    0x1
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_346490]
        MOV     ECX, DWORD PTR SS:[EBP+0x130]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x78]
        PUSH    0x1
        PUSH    ESI
        CALL    NEAR EAX
        JMP     @L00000040

    @L00000018:
        CMP     EDI, EBX
        JE      SHORT @L00000017

    @L00000019:
        PUSH    0x1
        PUSH    0x1
        PUSH    EBX
        PUSH    0x1
        CALL    DWORD PTR DS:[v_15BA20]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x28]
        CALL    DWORD PTR DS:[v_221480]
        MOV     EDI, DWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR SS:[ESP+0x24]
        CMP     EAX, EBX
        JE      SHORT @L00000020
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], EBX
        JNZ     SHORT @L00000020
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000020:
        CMP     EDI, EBX
        JE      SHORT @L00000021
        CMP     DWORD PTR DS:[EDI+0x74], EBX
        MOV     DWORD PTR SS:[ESP+0x24], 0x1
        JNZ     SHORT @L00000022

    @L00000021:
        MOV     DWORD PTR SS:[ESP+0x24], EBX

    @L00000022:
        MOV     EAX, DWORD PTR DS:[ESI+0x5C]
        TEST    EAX, 0x2000000
        JNZ     SHORT @L00000023
        TEST    EAX, 0x4000000
        JE      SHORT @L00000024

    @L00000023:
        MOV     EAX, 0x1
        JMP     @L00000035

    @L00000024:
        PUSH    0x1
        PUSH    0x1
        PUSH    EBX
        PUSH    EBX
        CALL    DWORD PTR DS:[v_0278B0]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        CALL    DWORD PTR DS:[v_280F60]
        MOV     EDI, DWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR SS:[ESP+0x28]
        CMP     EAX, EBX
        JE      SHORT @L00000025
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], EBX
        JNZ     SHORT @L00000025
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000025:
        CMP     EDI, EBX
        JE      SHORT @L00000026
        MOV     EDX, DWORD PTR DS:[EDI]
        MOV     EAX, DWORD PTR DS:[EDX+0x324]
        MOV     ECX, EDI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JE      SHORT @L00000026
        MOV     EAX, 0x1
        JMP     @L00000035

    @L00000026:
        PUSH    0x1
        PUSH    0x1
        PUSH    EBX
        PUSH    EBX
        CALL    DWORD PTR DS:[v_15B770]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        CALL    DWORD PTR DS:[v_34BBC0]
        MOV     EDI, DWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR SS:[ESP+0x28]
        CMP     EAX, EBX
        JE      SHORT @L00000027
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], EBX
        JNZ     SHORT @L00000027
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000027:
        CMP     EDI, EBX
        JE      SHORT @L00000028
        MOV     EDX, DWORD PTR DS:[EDI]
        MOV     EAX, DWORD PTR DS:[EDX+0x32C]
        PUSH    EBX
        MOV     ECX, EDI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JE      SHORT @L00000028
        MOV     EAX, 0x1
        JMP     @L00000035

    @L00000028:
        PUSH    0x1
        PUSH    0x1
        PUSH    EBX
        PUSH    EBX
        CALL    DWORD PTR DS:[v_1D3D80]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        CALL    DWORD PTR DS:[v_223FA0]
        MOV     EDI, DWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR SS:[ESP+0x28]
        CMP     EAX, EBX
        JE      SHORT @L00000029
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], EBX
        JNZ     SHORT @L00000029
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000029:
        CMP     EDI, EBX
        JE      SHORT @L00000030
        MOV     EDX, DWORD PTR DS:[EDI]
        MOV     EAX, DWORD PTR DS:[EDX+0x32C]
        PUSH    EBX
        MOV     ECX, EDI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JE      SHORT @L00000030
        MOV     EAX, 0x1
        JMP     @L00000035

    @L00000030:
        PUSH    0x1
        PUSH    0x1
        PUSH    EBX
        PUSH    EBX
        CALL    DWORD PTR DS:[v_028090]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        CALL    DWORD PTR DS:[v_34BC20]
        MOV     EDI, DWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR SS:[ESP+0x28]
        CMP     EAX, EBX
        JE      SHORT @L00000031
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], EBX
        JNZ     SHORT @L00000031
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000031:
        CMP     EDI, EBX
        JE      SHORT @L00000032
        CMP     DWORD PTR DS:[EDI+0x94], EBX
        JE      SHORT @L00000032
        MOV     EAX, 0x1
        JMP     SHORT @L00000035

    @L00000032:
        PUSH    0x1
        PUSH    0x1
        PUSH    EBX
        PUSH    EBX
        CALL    DWORD PTR DS:[v_028170]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x2C]
        CALL    DWORD PTR DS:[v_223E80]
        MOV     EDI, DWORD PTR DS:[EAX]
        MOV     EAX, DWORD PTR SS:[ESP+0x28]
        CMP     EAX, EBX
        JE      SHORT @L00000033
        ADD     DWORD PTR DS:[EAX+0x4], -0x1
        MOV     ECX, EAX
        ADD     EAX, 0x4
        CMP     DWORD PTR DS:[EAX], EBX
        JNZ     SHORT @L00000033
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX]
        CALL    NEAR EAX

    @L00000033:
        CMP     EDI, EBX
        JE      SHORT @L00000034
        MOV     EDX, DWORD PTR DS:[EDI]
        MOV     EAX, DWORD PTR DS:[EDX+0x32C]
        PUSH    EBX
        MOV     ECX, EDI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JE      SHORT @L00000034
        MOV     EAX, 0x1
        JMP     SHORT @L00000035

    @L00000034:
        XOR     EAX, EAX

    @L00000035:
        CMP     DWORD PTR SS:[ESP+0x24], EBX
        JE      SHORT @L00000036
        PUSH    0x3
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_346490]
        MOV     ECX, DWORD PTR SS:[EBP+0x138]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x78]
        PUSH    0x1
        PUSH    ESI
        CALL    NEAR EAX
        JMP     SHORT @L00000040

    @L00000036:
        CMP     EAX, EBX
        JE      @L00000017
        PUSH    0x2
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_346490]
        MOV     ECX, DWORD PTR SS:[EBP+0x134]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x78]
        PUSH    0x1
        PUSH    ESI
        CALL    NEAR EAX
        JMP     SHORT @L00000040

    @L00000037:
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_346530]
        JMP     @L00000007

    @L00000038:
        CALL    DWORD PTR DS:[v_421E50]
        MOV     ESI, EAX
        CMP     ESI, EBX
        JNZ     SHORT @L00000039
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_41FA00]
        MOV     ESI, EAX
        CMP     ESI, EBX
        JE      @L00000007

    @L00000039:
        PUSH    0x4
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_346490]
        MOV     ECX, DWORD PTR SS:[EBP+0x13C]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x6C]
        CALL    NEAR EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_282C60]
        MOV     DWORD PTR SS:[ESP+0x1C], EAX

    @L00000040:
        CMP     DWORD PTR SS:[ESP+0x1C], EBX
        JE      @L00000006
        MOV     ESI, DWORD PTR SS:[ESP+0x20]
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_421E50]
        CMP     EAX, EBX
        JNZ     SHORT @L00000041
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_41FA00]
        CMP     EAX, EBX
        JE      @L00000007

    @L00000041:
        MOV     ECX, DWORD PTR SS:[EBP+0x148]
        MOV     EDX, DWORD PTR DS:[ECX]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDX+0x6C]
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR SS:[EBP+0x148]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x68]
        MOV     DWORD PTR DS:[ECX+0x90], 0x1
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR SS:[EBP+0x14C]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBX
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR SS:[EBP+0x150]
        CALL    DWORD PTR DS:[v_60E7C0]
        JMP     @L00000007
    }
}
//---------------------------------------------------------------------------

FRAW void f_28E1D0()
{
    __asm
    {
        PUSH    ESI
        MOV     ESI, DWORD PTR DS:[v_AB65F4]
        MOV     ESI, DWORD PTR DS:[ESI]
        CALL    DWORD PTR DS:[v_28E1C0]
    // FEAT SKLCD
        CMP     BYTE PTR DS:[bSKLCD], 0
        JE      @L_SKLCD_G_4
        JMP     SHORT @L00000003
    @L_SKLCD_G_4:
        TEST    EAX, EAX
        JNZ     SHORT @L00000003                        //JNZ     SHORT @L00000003

        MOVZX   EAX, WORD PTR DS:[ESI+0x28]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_3A1650]
        LEA     ECX, DWORD PTR DS:[EAX+0xF0]
        CALL    DWORD PTR DS:[v_473170]
        TEST    EAX, EAX
        JNZ     SHORT @L00000003
        CALL    DWORD PTR DS:[v_53F160]
        TEST    EAX, EAX
        JE      SHORT @L00000002
        MOV     EAX, DWORD PTR DS:[ESI+0x34]
        TEST    BYTE PTR DS:[EAX+0x24], 0x1
        JNZ     SHORT @L00000003

    @L00000002:
        XOR     EAX, EAX
        POP     ESI
        RET

    @L00000003:
        MOV     EAX, 0x1
        POP     ESI
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_35F940()
{
    __asm
    {
        SUB     ESP, 0x124
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EDI, ECX
        MOV     ESI, DWORD PTR DS:[EDI+0x124]
        XOR     EBP, EBP
        CMP     ESI, EBP
        JE      @L00000046
        MOV     EDX, DWORD PTR DS:[ESI+0x10]
        MOV     ECX, DWORD PTR DS:[ESI+0xC]
        CALL    DWORD PTR DS:[v_03FA30]
        CMP     EAX, EBP
        JE      @L00000046
        XOR     ECX, ECX
        CMP     DWORD PTR DS:[EAX+0xC], 0x2B61676C
        SETNE   CL
        SUB     ECX, 0x1
        AND     ECX, EAX
        MOV     EAX, ECX
        JE      @L00000046
        CMP     DWORD PTR DS:[EAX+0x20], EBP
        JNZ     @L00000046
        TEST    DWORD PTR DS:[ESI+0x5C], 0x100
        JNZ     @L00000046
        PUSH    EBX
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_346D50]
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_339A80]
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        MOVZX   EAX, BYTE PTR DS:[ECX+0x33]
        ADD     EAX, -0x41
        MOV     EDX, 0x19
        CMP     EDX, EAX
        SBB     ESI, ESI
        ADD     ESI, 0x1
        MOV     DWORD PTR SS:[ESP+0x1C], ESI
        CALL    f_28E1D0                                //CALL    DWORD PTR DS:[v_28E1D0]
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        PUSH    EBP
        MOV     DWORD PTR SS:[ESP+0x18], EAX
        MOV     DWORD PTR SS:[ESP+0x1C], EBP
        CALL    DWORD PTR DS:[v_26DE50]
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        MOV     DWORD PTR SS:[ESP+0x20], EAX
        CALL    DWORD PTR DS:[v_285AA0]
        TEST    EAX, EAX
        JNZ     SHORT @L00000003
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        MOV     EBX, EAX
        CALL    DWORD PTR DS:[v_2834E0]
        MOV     ECX, EAX
        MOV     DWORD PTR SS:[ESP+0x18], EAX
        CALL    DWORD PTR DS:[v_41B420]
        MOVZX   ECX, BYTE PTR DS:[EBX+0x30]
        PUSH    ECX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_2761D0]
        TEST    EAX, EAX
        JNZ     SHORT @L00000002
        MOV     EAX, DWORD PTR SS:[ESP+0x18]
        CMP     BYTE PTR DS:[EAX+0x30], 0x0C
        JNB     SHORT @L00000001
        LEA     ECX, DWORD PTR DS:[EBX+0xF0]
        CALL    DWORD PTR DS:[v_473170]
        CMP     EAX, EBP
        JNZ     SHORT @L00000002

    @L00000001:
        MOV     DWORD PTR SS:[ESP+0x18], EBP
        JMP     SHORT @L00000003

    @L00000002:
        MOV     DWORD PTR SS:[ESP+0x18], 0x1

    @L00000003:
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        MOV     EDX, DWORD PTR DS:[EDI+0x128]
        CALL    DWORD PTR DS:[v_346A20]
        MOV     EBX, DWORD PTR SS:[ESP+0x14]
        CMP     EBX, EBP
        JE      SHORT @L00000004
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        CALL    DWORD PTR DS:[v_277690]
        CMP     ESI, EBP
        JE      SHORT @L00000004
        CMP     DWORD PTR DS:[EDI+0x140], EBP
        JNZ     SHORT @L00000004
        MOV     ECX, DWORD PTR DS:[EDI+0x148]
        CALL    DWORD PTR DS:[v_3529E0]
        MOV     ECX, DWORD PTR DS:[EDI+0x148]
        CALL    DWORD PTR DS:[v_2F0FF0]
        MOV     ECX, DWORD PTR DS:[EDI+0x148]
        CALL    DWORD PTR DS:[v_2F1010]
        JMP     SHORT @L00000005

    @L00000004:
        MOV     ECX, DWORD PTR DS:[EDI+0x148]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBP
        CALL    NEAR EAX

    @L00000005:
        MOV     EAX, DWORD PTR DS:[EDI+0x140]
        CMP     EAX, EBP
        JNZ     SHORT @L00000006
        CMP     DWORD PTR DS:[EDI+0x130], EBP
        JE      SHORT @L00000007
        CMP     EAX, EBP
        JNZ     SHORT @L00000006
        CMP     DWORD PTR DS:[EDI+0x130], EBP
        JE      SHORT @L00000009

    @L00000006:
        CMP     EBX, EBP
        JNZ     SHORT @L00000008

    @L00000007:
        MOV     ECX, DWORD PTR DS:[EDI+0x12C]
        CALL    DWORD PTR DS:[v_60E7C0]
        MOV     EBX, DWORD PTR DS:[EDI+0x124]
        MOV     ECX, DWORD PTR DS:[EDI+0x12C]
        PUSH    EBP
        CALL    DWORD PTR DS:[v_346A90]

    @L00000008:
        CMP     DWORD PTR DS:[EDI+0x130], EBP
        JE      SHORT @L00000009
        MOV     ECX, DWORD PTR DS:[EDI+0x12C]
        CALL    DWORD PTR DS:[v_60E7E0]

    @L00000009:
        MOV     ECX, DWORD PTR DS:[EDI+0x14C]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBP
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x150]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBP
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x154]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBP
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x158]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBP
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x15C]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBP
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x160]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBP
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x164]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBP
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x168]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBP
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x16C]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x64]
        MOV     DWORD PTR DS:[ECX+0x90], EBP
        CALL    NEAR EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x7C]
        CALL    DWORD PTR DS:[v_077E80]
        LEA     ECX, DWORD PTR SS:[ESP+0xD8]
        CALL    DWORD PTR DS:[v_077E80]
        LEA     ECX, DWORD PTR SS:[ESP+0xD8]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        LEA     EDX, DWORD PTR SS:[ESP+0x80]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_077FA0]
        FLD     DWORD PTR SS:[ESP+0x8C]
        FSTP    DWORD PTR SS:[ESP+0x50]
        MOV     EAX, DWORD PTR SS:[ESP+0x80]
        FLD     DWORD PTR SS:[ESP+0x98]
        MOV     ECX, DWORD PTR SS:[ESP+0xDC]
        FSTP    DWORD PTR SS:[ESP+0x54]
        MOV     EDX, DWORD PTR SS:[ESP+0x84]
        FLD     DWORD PTR SS:[ESP+0xE8]
        MOV     DWORD PTR SS:[ESP+0x4C], EAX
        MOV     EAX, DWORD PTR SS:[ESP+0xE0]
        FSTP    DWORD PTR SS:[ESP+0x38]
        FLD     DWORD PTR SS:[ESP+0xF4]
        MOV     DWORD PTR SS:[ESP+0x34], ECX
        FSTP    DWORD PTR SS:[ESP+0x3C]
        MOV     DWORD PTR SS:[ESP+0x58], EDX
        FLD     DWORD PTR SS:[ESP+0x90]
        MOV     DWORD PTR SS:[ESP+0x40], EAX
        FSTP    DWORD PTR SS:[ESP+0x5C]
        FLD     DWORD PTR SS:[ESP+0x9C]
        FSTP    DWORD PTR SS:[ESP+0x60]
        FLD     DWORD PTR SS:[ESP+0xEC]
        FSTP    DWORD PTR SS:[ESP+0x44]
        FLD     DWORD PTR SS:[ESP+0xF8]
        FSTP    DWORD PTR SS:[ESP+0x48]
        FLD     DWORD PTR SS:[ESP+0xA0]
        FSTP    DWORD PTR SS:[ESP+0x24]
        FLD     DWORD PTR SS:[ESP+0xA4]
        MOV     ECX, DWORD PTR SS:[ESP+0xCC]
        MOV     EDX, DWORD PTR SS:[ESP+0xD0]
        FSTP    DWORD PTR SS:[ESP+0x28]
        MOV     EAX, DWORD PTR SS:[ESP+0xD4]
        FLD     DWORD PTR SS:[ESP+0xFC]
        MOV     DWORD PTR SS:[ESP+0x64], ECX
        FSTP    DWORD PTR SS:[ESP+0x2C]
        MOV     ECX, DWORD PTR SS:[ESP+0x128]
        FLD     DWORD PTR SS:[ESP+0x100]
        MOV     DWORD PTR SS:[ESP+0x68], EDX
        FSTP    DWORD PTR SS:[ESP+0x30]
        MOV     EDX, DWORD PTR SS:[ESP+0x12C]
        MOV     DWORD PTR SS:[ESP+0x6C], EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x130]
        MOV     DWORD PTR SS:[ESP+0x70], ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        XOR     EBX, EBX
        CMP     DWORD PTR DS:[EDI+0x130], EBP
        MOV     DWORD PTR SS:[ESP+0x74], EDX
        MOV     DWORD PTR SS:[ESP+0x78], EAX
        MOV     ESI, DWORD PTR DS:[ECX+0x1E8]
        MOV     DWORD PTR SS:[ESP+0x10], EBX
        JNZ     @L00000015
        CMP     ESI, EBP
        JE      @L00000015
        CMP     DWORD PTR DS:[ESI+0x88], EBP
        JE      SHORT @L00000010
        PUSH    EBP
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0C6F90]
        TEST    EAX, EAX
        JE      SHORT @L00000010
        PUSH    EBP
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_089050]
        TEST    EAX, EAX
        JNZ     SHORT @L00000010
        MOV     ECX, DWORD PTR DS:[EDI+0x14C]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EDX+0x6C]
        PUSH    EBP
        LEA     EAX, DWORD PTR SS:[ESP+0x38]
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x54]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDI+0x124]
        PUSH    EAX
        MOV     DWORD PTR SS:[ESP+0x20], 0x1
        CALL    NEAR EDX
        MOV     EBX, DWORD PTR SS:[ESP+0x10]

    @L00000010:
        CMP     DWORD PTR DS:[ESI+0x8C], EBP
        JE      SHORT @L00000015
        PUSH    0x1
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0C6F90]
        TEST    EAX, EAX
        JE      SHORT @L00000015
        PUSH    0x1
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_089050]
        TEST    EAX, EAX
        JNZ     SHORT @L00000015
        ADD     EBX, 0x1
        CMP     EBX, 0x1
        MOV     DWORD PTR SS:[ESP+0x10], EBX
        JNZ     SHORT @L00000011
        MOV     EBX, DWORD PTR DS:[EDI+0x14C]
        JMP     SHORT @L00000012

    @L00000011:
        MOV     EBX, DWORD PTR DS:[EDI+0x150]

    @L00000012:
        CMP     DWORD PTR SS:[ESP+0x1C], EBP
        JNZ     SHORT @L00000014
        CMP     DWORD PTR SS:[ESP+0x10], 0x2
        JNZ     SHORT @L00000013
        CALL    DWORD PTR DS:[v_346CF0]
        TEST    EAX, EAX
        JE      SHORT @L00000014

    @L00000013:
        MOV     EAX, DWORD PTR DS:[EBX]
        PUSH    0x1
        LEA     ECX, DWORD PTR SS:[ESP+0x44]
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        LEA     EDX, DWORD PTR SS:[ESP+0x60]
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[EAX+0x6C]
        PUSH    ECX
        MOV     ECX, EBX
        CALL    NEAR EDX

    @L00000014:
        MOV     EBX, DWORD PTR SS:[ESP+0x10]

    @L00000015:
        CMP     DWORD PTR DS:[EDI+0x130], EBP
        FLDZ
        MOV     DWORD PTR SS:[ESP+0x14], EBP
        JNZ     @L00000023
        CMP     DWORD PTR SS:[ESP+0x1C], EBP
        JNZ     SHORT @L00000017
        MOV     ESI, DWORD PTR DS:[EDI+0x124]
        FSTP    ST(0x0)
        PUSH    0x1
        PUSH    0x1
        PUSH    EBP
        PUSH    0x1
        CALL    DWORD PTR DS:[v_082470]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR DS:[v_0787D0]
        CMP     EAX, EBP
        JE      @L00000018
        MOV     ESI, DWORD PTR DS:[EAX+0x6C]
        CMP     ESI, EBP
        MOV     DWORD PTR SS:[ESP+0x14], ESI
        JE      SHORT @L00000016
        MOV     ECX, DWORD PTR DS:[EDI+0x160]
        PUSH    EBP
        CALL    DWORD PTR DS:[v_606270]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_939F50]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x160]
        PUSH    0x1
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        FLDZ
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBP
        PUSH    EDI
        PUSH    EBP
        CALL    DWORD PTR DS:[v_606770]
        MOV     ECX, DWORD PTR DS:[EDI+0x160]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EDI+0x124]
        MOV     EAX, DWORD PTR DS:[EAX+0x6C]
        PUSH    ESI
        PUSH    EDX
        CALL    NEAR EAX

    @L00000016:
        FLDZ

    @L00000017:
        CMP     DWORD PTR DS:[EDI+0x130], EBP
        JNZ     @L00000023
        CMP     DWORD PTR SS:[ESP+0x14], EBP
        JNZ     SHORT @L00000020
        CMP     EBX, EBP
        JE      SHORT @L00000019
        JBE     SHORT @L00000021
        CMP     EBX, 0x2
        JA      SHORT @L00000021
        MOV     ECX, DWORD PTR DS:[EDI+0x14C]
        PUSH    0x1
        SUB     ESP, 0x8
        FST     DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x6
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x154]
        PUSH    EBP
        CALL    DWORD PTR DS:[v_606770]
        JMP     SHORT @L00000022

    @L00000018:
        MOV     DWORD PTR SS:[ESP+0x14], EBP
        JMP     SHORT @L00000016

    @L00000019:
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_939F50]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x154]
        PUSH    0x1
        SUB     ESP, 0x8
        FSTP    DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    EBP
        PUSH    EDI
        PUSH    EBP
        CALL    DWORD PTR DS:[v_606770]
        JMP     SHORT @L00000022

    @L00000020:
        MOV     EDX, DWORD PTR DS:[EDI+0x160]
        MOV     ECX, DWORD PTR DS:[EDI+0x154]
        PUSH    0x1
        SUB     ESP, 0x8
        FST     DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x6
        PUSH    EDX
        PUSH    EBP
        CALL    DWORD PTR DS:[v_606770]
        JMP     SHORT @L00000022

    @L00000021:
        FSTP    ST(0x0)

    @L00000022:
        MOV     ECX, DWORD PTR DS:[EDI+0x154]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EAX+0x6C]
        LEA     EDX, DWORD PTR SS:[ESP+0x2C]
        PUSH    EDX
        LEA     EDX, DWORD PTR SS:[ESP+0x28]
        PUSH    EDX
        MOV     EDX, DWORD PTR DS:[EDI+0x124]
        PUSH    EDX
        CALL    NEAR EAX
        FLDZ

    @L00000023:
        CMP     DWORD PTR SS:[ESP+0x1C], EBP
        JE      SHORT @L00000024
        XOR     ESI, ESI
        JMP     SHORT @L00000025

    @L00000024:
        MOV     ECX, DWORD PTR DS:[EDI+0x124]
        FSTP    ST(0x0)
        MOV     ECX, DWORD PTR DS:[ECX+0x30]
        CALL    DWORD PTR DS:[v_29C4A0]
        FLDZ
        MOV     ESI, EAX

    @L00000025:
        CMP     DWORD PTR DS:[EDI+0x130], EBP
        JNZ     @L00000041
        CMP     ESI, EBP
        JE      SHORT @L00000030
        MOV     EAX, EBX
        SUB     EAX, EBP
        JE      SHORT @L00000027
        SUB     EAX, 0x1
        JE      SHORT @L00000026
        SUB     EAX, 0x1
        JE      SHORT @L00000027
        FSTP    ST(0x0)
        JMP     SHORT @L00000029

    @L00000026:
        MOV     EDX, DWORD PTR DS:[EDI+0x14C]
        PUSH    0x1
        SUB     ESP, 0x8
        FST     DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x2
        PUSH    EDX
        JMP     SHORT @L00000028

    @L00000027:
        MOV     EAX, DWORD PTR DS:[EDI+0x154]
        PUSH    0x1
        SUB     ESP, 0x8
        FST     DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x2
        PUSH    EAX

    @L00000028:
        MOV     ECX, DWORD PTR DS:[EDI+0x158]
        PUSH    EBP
        CALL    DWORD PTR DS:[v_606770]

    @L00000029:
        MOV     ECX, DWORD PTR DS:[EDI+0x158]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDI+0x124]
        MOV     EDX, DWORD PTR DS:[EDX+0x6C]
        PUSH    ESI
        PUSH    EAX
        CALL    NEAR EDX
        FLDZ

    @L00000030:
        CMP     DWORD PTR DS:[EDI+0x130], EBP
        JNZ     @L00000041
        CMP     DWORD PTR SS:[ESP+0x20], EBP
        JE      @L00000043
        CMP     DWORD PTR SS:[ESP+0x1C], EBP
        JNZ     @L00000041
        MOV     EBX, DWORD PTR SS:[ESP+0x18]
        CMP     EBX, EBP
        JE      SHORT @L00000031
        CMP     DWORD PTR SS:[ESP+0x10], 0x2
        JNZ     SHORT @L00000036

    @L00000031:
        MOV     EAX, DWORD PTR DS:[EDI+0x124]
        FSTP    ST(0x0)
        MOV     ECX, DWORD PTR DS:[EAX+0x30]
        CALL    DWORD PTR DS:[v_29BB20]
        MOV     ESI, EAX
        CMP     ESI, EBP
        JE      SHORT @L00000035
        MOV     ECX, DWORD PTR DS:[EDI+0x15C]
        PUSH    EBP
        CALL    DWORD PTR DS:[v_606270]
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        SUB     EAX, EBP
        JE      SHORT @L00000032
        SUB     EAX, 0x1
        JE      @L00000037
        SUB     EAX, 0x1
        JNZ     SHORT @L00000034

    @L00000032:
        FLDZ
        MOV     EDX, DWORD PTR DS:[EDI+0x154]
        PUSH    0x1
        SUB     ESP, 0x8
        FST     DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x2
        PUSH    EDX

    @L00000033:
        MOV     ECX, DWORD PTR DS:[EDI+0x15C]
        PUSH    EBP
        CALL    DWORD PTR DS:[v_606770]

    @L00000034:
        MOV     ECX, DWORD PTR DS:[EDI+0x15C]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EDI+0x124]
        MOV     EAX, DWORD PTR DS:[EAX+0x6C]
        PUSH    ESI
        PUSH    EDX
        CALL    NEAR EAX

    @L00000035:
        FLDZ

    @L00000036:
        CMP     EBX, EBP
        JE      @L00000041
        MOV     EAX, DWORD PTR SS:[ESP+0x10]
        CMP     EAX, 0x2
        JE      @L00000041
        CMP     DWORD PTR SS:[ESP+0x14], EBP
        JNZ     @L00000041
        SUB     EAX, EBP
        JE      SHORT @L00000038
        SUB     EAX, 0x1
        JNZ     SHORT @L00000039
        MOV     ECX, DWORD PTR DS:[EDI+0x14C]
        PUSH    0x1
        SUB     ESP, 0x8
        FST     DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x2
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x168]
        PUSH    EBP
        CALL    DWORD PTR DS:[v_606770]
        JMP     SHORT @L00000040

    @L00000037:
        FLDZ
        MOV     ECX, DWORD PTR DS:[EDI+0x14C]
        PUSH    0x1
        SUB     ESP, 0x8
        FST     DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x2
        PUSH    ECX
        JMP     @L00000033

    @L00000038:
        MOV     EDX, DWORD PTR DS:[EDI+0x154]
        MOV     ECX, DWORD PTR DS:[EDI+0x168]
        PUSH    0x1
        SUB     ESP, 0x8
        FST     DWORD PTR SS:[ESP+0x4]
        FSTP    DWORD PTR SS:[ESP]
        PUSH    0x2
        PUSH    EDX
        PUSH    EBP
        CALL    DWORD PTR DS:[v_606770]
        JMP     SHORT @L00000040

    @L00000039:
        FSTP    ST(0x0)

    @L00000040:
        MOV     ECX, DWORD PTR DS:[EDI+0x168]
        MOV     EAX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EDI+0x124]
        MOV     EAX, DWORD PTR DS:[EAX+0x6C]
        PUSH    EDX
        CALL    NEAR EAX
        JMP     SHORT @L00000042

    @L00000041:
        FSTP    ST(0x0)

    @L00000042:
        CMP     DWORD PTR SS:[ESP+0x20], EBP
        JE      SHORT @L00000044
        PUSH    EBP
        MOV     EDX, DWORD PTR DS:[v_93A0C0]
        MOV     ECX, DWORD PTR DS:[v_875DE0]
        CALL    DWORD PTR DS:[v_009F90]
        TEST    EAX, EAX
        JE      SHORT @L00000045
        JMP     SHORT @L00000044

    @L00000043:
        FSTP    ST(0x0)

    @L00000044:
        MOV     ECX, DWORD PTR DS:[EDI+0x16C]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EAX, DWORD PTR DS:[EDX+0x68]
        MOV     DWORD PTR DS:[ECX+0x90], 0x1
        CALL    NEAR EAX
        MOV     ECX, DWORD PTR DS:[EDI+0x16C]
        PUSH    EBP
        CALL    DWORD PTR DS:[v_35DD00]

    @L00000045:
        CMP     DWORD PTR DS:[EDI+0x130], EBP
        POP     EBX
        JNZ     SHORT @L00000047
        CMP     DWORD PTR SS:[ESP+0x18], EBP
        JE      SHORT @L00000047
        MOV     ECX, DWORD PTR DS:[EDI+0x164]
        MOV     EDX, DWORD PTR DS:[ECX]
        MOV     EDX, DWORD PTR DS:[EDX+0x6C]
        LEA     EAX, DWORD PTR SS:[ESP+0x6C]
        PUSH    EAX
        LEA     EAX, DWORD PTR SS:[ESP+0x64]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[EDI+0x124]
        PUSH    EAX
        CALL    NEAR EDX
        POP     EDI
        POP     ESI
        POP     EBP
        ADD     ESP, 0x124
        RET

    @L00000046:
        MOV     EAX, DWORD PTR DS:[EDI]
        MOV     EDX, DWORD PTR DS:[EAX+0x64]
        MOV     ECX, EDI
        MOV     DWORD PTR DS:[EDI+0x90], EBP
        CALL    NEAR EDX

    @L00000047:
        POP     EDI
        POP     ESI
        POP     EBP
        ADD     ESP, 0x124
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f_277570()
{
    __asm
    {
        MOV     EAX, DWORD PTR DS:[ECX+0x1E0]
        PUSH    EBX
        PUSH    EDI
        MOV     EDI, DWORD PTR SS:[ESP+0xC]
        XOR     EBX, EBX
        CMP     EDI, 0x0D0142
        SETNE   BL
        AND     EAX, DWORD PTR DS:[ECX+0x1DC]
        ADD     ECX, 0x1DC
        CMP     EAX, -0x1
        JE      SHORT @L00000008
        PUSH    ESI
        CALL    DWORD PTR DS:[v_4786B0]
        MOV     ESI, EAX
        TEST    ESI, ESI
        JE      SHORT @L00000007

    @L00000002:
        CMP     DWORD PTR DS:[ESI+0x3C], 0x0
        JLE     SHORT @L00000003
        CMP     DWORD PTR DS:[ESI+0x40], 0x0
        JG      SHORT @L00000004

    @L00000003:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x1C4]
        PUSH    EDI
        PUSH    EBX
        MOV     ECX, ESI

        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[pGameP]
        ADD     ECX, 0x378A0
        CMP     ECX, EAX
        JNE     @L_GOOD:
        LEA     EAX, f_0378A0
    @L_GOOD:
        POP     ECX

        CALL    NEAR EAX

    @L00000004:
        MOV     EDX, DWORD PTR DS:[ESI+0x28]
        AND     EDX, DWORD PTR DS:[ESI+0x24]
        LEA     ECX, DWORD PTR DS:[ESI+0x24]
        CMP     EDX, -0x1
        JNZ     SHORT @L00000005
        XOR     EAX, EAX
        JMP     SHORT @L00000006

    @L00000005:
        CALL    DWORD PTR DS:[v_4786B0]

    @L00000006:
        TEST    EAX, EAX
        MOV     ESI, EAX
        JNZ     SHORT @L00000002

    @L00000007:
        POP     ESI

    @L00000008:
        POP     EDI
        POP     EBX
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_0378A0()
{
    __asm
    {
        PUSH    ESI
        MOV     ESI, ECX
        MOV     EAX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EAX+0x314]
        CALL    NEAR EDX
        TEST    EAX, EAX
        JNZ     @L00000007
        CMP     DWORD PTR SS:[ESP+0x8], EAX
        JE      SHORT @L00000002
        MOV     EAX, DWORD PTR SS:[ESP+0xC]
        CMP     EAX, DWORD PTR DS:[ESI+0x6C]
        JNZ     @L00000007

    @L00000002:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x318]
        PUSH    EBX
        MOV     EBX, DWORD PTR DS:[ESI+0x34]
        PUSH    EDI
        MOV     ECX, ESI
        CALL    NEAR EAX
        PUSH    ECX
        MOV     ECX, DWORD PTR DS:[v_92ED9C]
        CMP     EAX, DWORD PTR DS:[ECX]
        POP     ECX
        JE      SHORT @L00000003
        TEST    BYTE PTR DS:[ESI+0x20], 0x80
        JE      SHORT @L00000003
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x318]
        MOV     ECX, ESI
        CALL    NEAR EAX
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EDI, EAX
        MOV     EAX, DWORD PTR DS:[EDX+0x354]
        JMP     SHORT @L00000004

    @L00000003:
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x308]
        MOV     ECX, ESI
        CALL    NEAR EAX
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EDI, EAX
        MOV     EAX, DWORD PTR DS:[EDX+0x350]

    @L00000004:
        MOV     ECX, ESI
        CALL    NEAR EAX
        CMP     DWORD PTR DS:[ESI+0x3C], 0x0
        JG      SHORT @L00000006
        TEST    EAX, EAX
        MOV     DWORD PTR SS:[ESP+0x10], -0x1
        JE      SHORT @L00000005
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[EDX+0x370]
        PUSH    0x0
        MOV     ECX, ESI
        CALL    NEAR EAX
        TEST    EAX, EAX
        JNZ     SHORT @L00000005
        MOV     DWORD PTR SS:[ESP+0x10], 0xFF4040FF

    @L00000005:
        LEA     ECX, DWORD PTR SS:[ESP+0x10]
        PUSH    ECX
        PUSH    ESI
        MOV     EDX, EDI
        MOV     ECX, EBX
        CALL    f_332D80                                //CALL    DWORD PTR DS:[v_332D80]

    @L00000006:
        POP     EDI
        POP     EBX

    @L00000007:
        POP     ESI
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_332D80()
{
    __asm
    {
        PUSH    ESI
        PUSH    EDI
        MOV     ESI, EDX
        MOV     EDI, ECX
        XOR     EDX, EDX
        XOR     ECX, ECX
        CALL    DWORD PTR DS:[v_300710]
        TEST    EAX, EAX
        JE      SHORT @L00000002
        MOV     ECX, DWORD PTR SS:[ESP+0x10]
        MOV     EDX, DWORD PTR SS:[ESP+0xC]
        PUSH    ECX
        PUSH    EDX
        PUSH    ESI
        PUSH    EDI
        MOV     ECX, EAX
        CALL    f_3015F0                                //CALL    DWORD PTR DS:[v_3015F0]

    @L00000002:
        POP     EDI
        POP     ESI
        RET     0x8
    }
}
//---------------------------------------------------------------------------

FRAW void f_3015F0()
{
    __asm
    {
        PUSH    ECX
        PUSH    EBX
        PUSH    EBP
        XOR     EAX, EAX
        MOV     EBP, ECX
        MOV     ECX, DWORD PTR SS:[ESP+0x1C]
        CMP     DWORD PTR DS:[ECX], -0x1
        PUSH    ESI
        MOV     ESI, DWORD PTR SS:[ESP+0x1C]
        SETNE   AL
        TEST    ESI, ESI
        PUSH    EDI
        MOV     EDI, EAX
        MOV     DWORD PTR SS:[ESP+0x10], EDI
        JE      SHORT @L00000003
        MOV     EAX, DWORD PTR SS:[ESP+0x1C]
        MOV     EDX, DWORD PTR DS:[ESI]
        MOV     EDX, DWORD PTR DS:[EDX+0x2DC]
        PUSH    EAX
        LEA     ECX, DWORD PTR SS:[ESP+0x24]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    NEAR EDX
        FLD     DWORD PTR DS:[EAX]
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_AAE470]
        FLD     DWORD PTR DS:[EAX]
        POP     EAX
        FCOMPP
        FSTSW   AX
        TEST    AH, 0x5
        JPE     SHORT @L00000002
        MOV     EAX, 0x1
        MOVZX   EBX, AL
        JMP     SHORT @L00000004

    @L00000002:
        XOR     EAX, EAX
        MOVZX   EBX, AL
        JMP     SHORT @L00000004

    @L00000003:
        XOR     EBX, EBX

    @L00000004:
        TEST    EDI, EDI
        MOV     EDI, DWORD PTR SS:[ESP+0x18]
        JNZ     SHORT @L00000005
        TEST    EBX, EBX
        JNZ     SHORT @L00000006

    @L00000005:
        MOV     EAX, DWORD PTR SS:[ESP+0x24]
        MOV     ECX, DWORD PTR SS:[ESP+0x1C]
        PUSH    EAX
        PUSH    ECX
        PUSH    EDI
        MOV     ECX, EBP
        CALL    DWORD PTR DS:[v_300C10]

    @L00000006:
        TEST    ESI, ESI
        JE      SHORT @L00000008
        TEST    EBX, EBX
        JNZ     SHORT @L00000007
        CMP     DWORD PTR SS:[ESP+0x10], EBX
        JNZ     SHORT @L00000008

    @L00000007:
        MOV     EDX, DWORD PTR SS:[ESP+0x1C]
        PUSH    ESI
        PUSH    EDX
        PUSH    EDI
        MOV     ECX, EBP
        CALL    f_2F9B60                                //CALL    DWORD PTR DS:[v_2F9B60]

    @L00000008:
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        POP     ECX
        RET     0x10
    }
}
//---------------------------------------------------------------------------

FRAW void f_2F9B60()
{
    __asm
    {
        PUSH    EBX
        MOV     EBX, DWORD PTR SS:[ESP+0x10]
        TEST    EBX, EBX
        PUSH    EBP
        MOV     EBP, ECX
        JE      @L00000005
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        PUSH    ESI
        PUSH    EDI
        PUSH    EAX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     EDI, DWORD PTR DS:[EAX+0x34]
        MOV     EAX, DWORD PTR DS:[EBX+0x30]
        TEST    EAX, EAX
        JNZ     SHORT @L00000002
        MOV     ECX, EBX
        CALL    DWORD PTR DS:[v_472890]

    @L00000002:
        MOV     ESI, EAX
        PUSH    ESI
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_421E20]
        TEST    EAX, EAX
        JE      SHORT @L00000004
        PUSH    ESI
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_421E70]
        TEST    EAX, EAX
        JE      SHORT @L00000004
        MOV     ECX, ESI
        CALL    f_28E1D0                                //CALL    DWORD PTR DS:[v_28E1D0]
        TEST    EAX, EAX
        JE      SHORT @L00000004
        MOV     ESI, DWORD PTR SS:[ESP+0x18]
        MOV     EAX, DWORD PTR SS:[ESP+0x14]
        MOV     ECX, DWORD PTR SS:[EBP+0x3C8]
        PUSH    ESI
        PUSH    EAX
        CALL    DWORD PTR DS:[v_372C60]
        TEST    EAX, EAX
        JNZ     SHORT @L00000003
        MOV     ECX, DWORD PTR SS:[EBP+0x3C4]
        MOV     ECX, DWORD PTR DS:[ECX+0x148]
        PUSH    ESI
        CALL    DWORD PTR DS:[v_347190]
        TEST    EAX, EAX
        JE      SHORT @L00000004

    @L00000003:
        PUSH    EBX
        MOV     ECX, EAX
        CALL    DWORD PTR DS:[v_34F920]

    @L00000004:
        POP     EDI
        POP     ESI

    @L00000005:
        POP     EBP
        POP     EBX
        RET     0x0C
    }
}
//---------------------------------------------------------------------------


