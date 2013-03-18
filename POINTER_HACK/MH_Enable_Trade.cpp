//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_35D960()
{
    __asm
    {
        MOV     EDX, DWORD PTR SS:[ESP+0x4]
        MOV     EAX, DWORD PTR DS:[EDX+0x8]
        CMP     EAX, 0x3
        PUSH    ESI
        JA      @L00000004
    // <HAND IMPL>
        JE      @LSW_0_3                                //JMP     NEAR DWORD PTR DS:[--SWITCH--]
        SUB     EAX, 0x1
        JZ      @LSW1
        SUB     EAX, 0x1
        JZ      @LSW_2
        JMP     @LSW_0_3
    // <HAND IMPL>
    @LSW1:
        CMP     DWORD PTR DS:[ECX+0x174], 0x0
        JE      @L00000004
        MOV     EAX, DWORD PTR DS:[EDX+0xC]
        CMP     EAX, DWORD PTR DS:[ECX+0x1A0]
        JNZ     SHORT @L00000001
        XOR     ESI, ESI
        JMP     SHORT @L00000002

    @L00000001:
        CMP     EAX, DWORD PTR DS:[ECX+0x1A4]
        JNZ     SHORT @L00000004
        MOV     ESI, 0x1

    @L00000002:
        XOR     EAX, EAX
        CMP     DWORD PTR DS:[EDX+0x10], 0x1
        SETE    AL
        PUSH    EAX
        PUSH    ESI
        CALL    f_34DD90                                //CALL    DWORD PTR DS:[v_34DD90]
        POP     ESI
        RET     0x4
    @LSW_2:
        CMP     DWORD PTR DS:[ECX+0x174], 0x0
        JE      SHORT @L00000004
        MOV     EAX, DWORD PTR DS:[EDX+0xC]
        CMP     EAX, DWORD PTR DS:[ECX+0x1A0]
        JNZ     SHORT @L00000003
        XOR     EAX, EAX
        XOR     ESI, ESI
        CMP     DWORD PTR DS:[EDX+0x2C], EAX
        SETG    AL
        PUSH    EAX
        PUSH    ESI
        CALL    f_34DD90                                //CALL    DWORD PTR DS:[v_34DD90]
        POP     ESI
        RET     0x4

    @L00000003:
        CMP     EAX, DWORD PTR DS:[ECX+0x1A4]
        JNZ     SHORT @L00000004
        XOR     EAX, EAX
        CMP     DWORD PTR DS:[EDX+0x2C], EAX
        MOV     ESI, 0x1
        SETG    AL
        PUSH    EAX
        PUSH    ESI
        CALL    f_34DD90                                //CALL    DWORD PTR DS:[v_34DD90]
        POP     ESI
        RET     0x4
    @LSW_0_3:
        CALL    DWORD PTR DS:[v_34DEB0]
        POP     ESI
        RET     0x4

    @L00000004:
        XOR     EAX, EAX
        POP     ESI
        RET     0x4
    }
}
//---------------------------------------------------------------------------

FRAW void f_34DD90()
{
    __asm
    {
        PUSH    ESI
        PUSH    EDI
        MOV     EDI, ECX
        MOV     ECX, 0x1
        CALL    DWORD PTR DS:[v_62B170]
        TEST    EAX, EAX
        JE      SHORT @L00000002
    // FEAT TRADE
        CMP     BYTE PTR DS:[bTRADE], 0
        JNE     @L_TRADE_G_1
        MOV     EAX, DWORD PTR DS:[EDI+0x16C]
        JMP     @L_TRADE_F_1
    @L_TRADE_G_1:
        MOV     EAX, 0xC8                               //MOV     EAX, DWORD PTR DS:[EDI+0x16C]
    @L_TRADE_F_1:

        JMP     SHORT @L00000003

    @L00000002:
    // FEAT TRADE
        CMP     BYTE PTR DS:[bTRADE], 0
        JNE     @L_TRADE_G_2
        MOV     EAX, DWORD PTR DS:[EDI+0x168]
        JMP     @L_TRADE_F_2
    @L_TRADE_G_2:
        MOV     EAX, 0x64                               //MOV     EAX, DWORD PTR DS:[EDI+0x168]
    @L_TRADE_F_2:

    @L00000003:
        XOR     ECX, ECX
        CMP     DWORD PTR SS:[ESP+0x10], ECX
        SETNE   CL
        LEA     ECX, DWORD PTR DS:[ECX+ECX-0x1]
        IMUL    ECX, EAX
        MOV     ESI, ECX
        MOV     ECX, DWORD PTR DS:[v_AB65F4]
        MOV     ECX, DWORD PTR DS:[ECX]
        MOVZX   EAX, WORD PTR DS:[ECX+0x28]
        PUSH    EAX
        CALL    DWORD PTR DS:[v_3A1650]
        MOV     ECX, DWORD PTR SS:[ESP+0xC]
        SUB     ECX, 0x0
        JE      SHORT @L00000006
        SUB     ECX, 0x1
        JNZ     @L00000009
        LEA     ECX, DWORD PTR DS:[EAX+0x60]
        CALL    DWORD PTR DS:[v_473170]
        MOV     ECX, EAX
        MOV     EAX, 0x66666667
        IMUL    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x180]
        SAR     EDX, 0x2
        MOV     EAX, EDX
        SHR     EAX, 0x1F
        ADD     EAX, EDX
        LEA     EDX, DWORD PTR DS:[ECX+ESI]
        TEST    EDX, EDX
        JGE     SHORT @L00000004
        NEG     ECX
        MOV     ESI, ECX
        PUSH    ESI
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_335CB0]
        POP     EDI
        MOV     EAX, 0x1
        POP     ESI
        RET     0x8

    @L00000004:
        MOV     ECX, DWORD PTR DS:[v_AB59C8]
        MOV     ECX, DWORD PTR DS:[ECX]
        LEA     EDX, DWORD PTR DS:[ECX+ESI]
        CMP     EDX, EAX
        JLE     SHORT @L00000005
        SUB     EAX, ECX
        MOV     ESI, EAX

    @L00000005:
        PUSH    ESI
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_335CB0]
        POP     EDI
        MOV     EAX, 0x1
        POP     ESI
        RET     0x8

    @L00000006:
        LEA     ECX, DWORD PTR DS:[EAX+0x50]
        CALL    DWORD PTR DS:[v_473170]
        MOV     ECX, EAX
        MOV     EAX, 0x66666667
        IMUL    ECX
        MOV     ECX, DWORD PTR DS:[EDI+0x17C]
        SAR     EDX, 0x2
        MOV     EAX, EDX
        SHR     EAX, 0x1F
        ADD     EAX, EDX
        LEA     EDX, DWORD PTR DS:[ECX+ESI]
        TEST    EDX, EDX
        JGE     SHORT @L00000007
        NEG     ECX
        MOV     ESI, ECX
        PUSH    ESI
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_335C70]
        POP     EDI
        MOV     EAX, 0x1
        POP     ESI
        RET     0x8

    @L00000007:
        MOV     ECX, DWORD PTR DS:[v_AB59C4]
        MOV     ECX, DWORD PTR DS:[ECX]
        LEA     EDX, DWORD PTR DS:[ECX+ESI]
        CMP     EDX, EAX
        JLE     SHORT @L00000008
        SUB     EAX, ECX
        MOV     ESI, EAX

    @L00000008:
        PUSH    ESI
        MOV     ECX, EDI
        CALL    DWORD PTR DS:[v_335C70]

    @L00000009:
        POP     EDI
        MOV     EAX, 0x1
        POP     ESI
        RET     0x8
    }

    return;
}
//---------------------------------------------------------------------------


