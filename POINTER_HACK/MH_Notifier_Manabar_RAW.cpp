//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

// ... -> IK3 source -> IK5 source -> this

FRAW void f00152750()
{
    __asm
    {
        PUSH    EBX
        MOV     EBX, a16FF64    // DS:[0016FF64]=6F606860 (GAME.6F606860)
        PUSH    EDI
        MOV     EDI, a16FF5C    // DS:[0016FF5C]=6F606370 (GAME.6F606370)
        PUSH    0
        PUSH    0
        PUSH    0
        XOR     EDX, EDX
        MOV     ECX, ESI
        CALL    a16FF58            // DS:[0016FF58]=6F35A740 (GAME.6F35A740)
        FLD     a1649D4            // DS:[001649D4]=0.03000000
        PUSH    0
        FSTP    DWORD PTR [ESI+0x58]
        XOR     EDX, EDX
        MOV     ECX, ESI
        CALL    EDI
        FLD     a1649D0            // DS:[001649D0]=0.004000000
        PUSH    0
        FSTP    DWORD PTR [ESI+0x5C]
        XOR     EDX, EDX
        MOV     ECX, ESI
        CALL    EDI
        FLD     a1649CC            // DS:[001649CC]=0.3000000
        PUSH    1
        SUB     ESP, 0x8
        FST     DWORD PTR [ESP+0x4]
        XOR     EDX, EDX
        FSTP    DWORD PTR [ESP]
        PUSH    1
        MOV     ECX, ESI
        CALL    EBX
        MOV     EAX, DWORD PTR [ESI]
        MOV     EAX, DWORD PTR [EAX+0x64]
        POP     EDI
        XOR     EDX, EDX
        MOV     ECX, ESI
        POP     EBX
        JMP     EAX
    }
}
//---------------------------------------------------------------------------

FRAW void f001527C0()
{
    __asm
    {
        POP     a16F08C
        POP     EAX
        ADD     EAX, EAX
        PUSH    EAX
        CALL    a16F088
        PUSHAD
        MOV     a16F004, EAX
        MOV     ESI, a16F004
        ADD     ESI, 158H
        CALL    f00152750
        POPAD
        PUSH    a16F08C
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f152950()
{
    __asm
    {
        MOV     EAX, a16F090
        MOV     EAX, DWORD PTR [EAX+0x64]
        PUSH    ESI
        PUSH    EDI
        MOV     ESI, EDX
        MOV     EDI, ECX
        CALL    EAX
        MOV     EAX, a16F090
        MOV     EAX, DWORD PTR [EAX+0x64]
        LEA     ECX, DWORD PTR [EDI+0x158]
        POP     EDI
        MOV     EDX, ESI
        POP     ESI
        JMP     EAX
    }
}
//---------------------------------------------------------------------------

FRAW void f152980()
{
    __asm
    {
        MOV     EAX, a16F090
        MOV     EAX, DWORD PTR [EAX+0x68]
        JMP     EAX
    }
}
//---------------------------------------------------------------------------

FRAW void f00152710()
{
    __asm
    {
        MOV     a16F090, ECX
        XOR     EAX, EAX
        JMP     L004
        LEA     EBX, DWORD PTR [EBX]
    L004:
        MOV     DL, BYTE PTR [EAX+ECX]
        MOV     BYTE PTR [EAX+a16F008], DL
        INC     EAX
        CMP     EAX, 0x80
        JB      L004
        PUSH    EAX
        PUSH    EBX
        LEA     EAX, a16F008
        ADD     EAX, 0x64
        LEA     EBX, f152950
        MOV     DWORD PTR [EAX], EBX
        LEA     EAX, a16F008
        ADD     EAX, 0x68
        LEA     EBX, f152980
        MOV     DWORD PTR [EAX], EBX
        POP     EBX
        POP     EAX
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f001527F0()
{
    __asm
    {
        SUB     ESP, 0x10
        CMP     a3000AC, 0
        PUSH    EDI
        MOV     EDI, a16F004
        JE      L093
        MOV     EAX, DWORD PTR [EDI+0x50]
        TEST    EAX, EAX
        JE      L093
        CMP     a3000B0, 0
        PUSH    EBX
        MOV     EBX, DWORD PTR [EAX+0x0C]
        PUSH    ESI
        LEA     ESI, DWORD PTR [EBX+0x158]
        JNZ     L017
        MOV     ECX, DWORD PTR [EBX]
        CALL    f00152710
        MOV     a3000B0, 1
    L017:
        PUSH    0
        LEA     EAX, DWORD PTR [ESP+0x10]
        PUSH    EAX
        XOR     EDX, EDX
        MOV     ECX, EDI
        PUSH    EAX
        LEA     EAX, a16F008
        MOV     DWORD PTR [EBX], EAX
        POP     EAX
        CALL    g16FF24
        FLDZ
        FCOMP   DWORD PTR [ESP+0x0C]
        FSTSW   AX
        TEST    AH, 1
        JE      L091
        PUSH    3
        LEA     ECX, DWORD PTR [ESP+0x10]
        PUSH    ECX
        XOR     EDX, EDX
        MOV     ECX, EDI
        CALL    g16FF24
        FLDZ
        FCOMP   DWORD PTR [ESP+0x0C]
        FSTSW   AX
        TEST    AH, 5
        JPE     L091
        MOV     EAX, DWORD PTR [ESI]
        MOV     EAX, DWORD PTR [EAX+0x74]
        PUSH    EBP
        PUSH    EDI
        XOR     EDX, EDX
        MOV     ECX, ESI
        CALL    EAX
        MOV     EBX, a16FF64
        MOV     EBP, a16FF5C
        LEA     ECX, DWORD PTR [ESP+0x1C]
        PUSH    ECX
        LEA     EDX, DWORD PTR [ESP+0x18]
        MOV     ECX, EDI
        CALL    g16FF68
        MOV     ECX, DWORD PTR [EDI+0x30]
        MOV     EAX, a16FF20
        LEA     EDX, a164684
        CALL    EAX
        TEST    EAX, EAX
        JNZ     L062
        FLD1
        JMP     L063
    L062:
        FLD     DWORD PTR [EAX+0x54]
    L063:
        FSTP    DWORD PTR [ESP+0x10]
        PUSH    0
        FLD     DWORD PTR [ESP+0x14]
        XOR     EDX, EDX
        FMUL    QWORD PTR [a164A18]
        MOV     ECX, ESI
        FMUL    QWORD PTR [a164A10]
        FSTP    DWORD PTR [ESI+0x58]
        CALL    EBP
        FLD     DWORD PTR [ESP+0x18]
        PUSH    1
        FSUB    QWORD PTR [a164A08]
        SUB     ESP, 8
        XOR     EDX, EDX
        MOV     ECX, ESI
        FSTP    DWORD PTR [ESP+0x24]
        FLD     DWORD PTR [ESP+0x24]
        FSTP    DWORD PTR [ESP+0x4]
        FLD     DWORD PTR [ESP+0x20]
        FSTP    DWORD PTR [ESP]
        PUSH    1
        CALL    EBX
        MOV     EAX, DWORD PTR [ESI]
        MOV     EAX, DWORD PTR [EAX+0x68]
        XOR     EDX, EDX
        MOV     ECX, ESI
        CALL    EAX
        POP     EBP
    L091:
        POP     ESI
        POP     EBX
    L093:
        POP     EDI
        ADD     ESP, 0x10
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void f00152930()
{
    __asm
    {
        PUSHAD
        MOV     a16F004, ECX
        CALL    f001527F0
        POPAD
        MOV     EAX, a2C7F10
        JMP     EAX
    }
}
//---------------------------------------------------------------------------


