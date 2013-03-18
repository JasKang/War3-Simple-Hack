//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

FRAW void f_356240()
{
    __asm
    {
        SUB     ESP, 0x44
        PUSH    ESI
        MOV     ESI, ECX
        CMP     DWORD PTR DS:[ESI+0x624], 0x0
        JE      @L00000029
        PUSH    EBX
        PUSH    EBP
        PUSH    EDI
        MOV     EDI, DWORD PTR DS:[v_AB65F4]
        MOV     EDI, DWORD PTR DS:[EDI]
        MOV     EBP, DWORD PTR DS:[EDI+0x34]
        MOV     EAX, DWORD PTR SS:[EBP+0x14]
        TEST    EAX, EAX
        MOV     EBX, DWORD PTR SS:[EBP+0x10]
        MOV     DWORD PTR SS:[ESP+0x34], EDI
        MOV     DWORD PTR SS:[ESP+0x38], EBP
        MOV     DWORD PTR SS:[ESP+0x1C], EAX
        JNZ     SHORT @L00000002
        TEST    EBX, EBX
        JE      @L00000028

    @L00000002:
        CALL    DWORD PTR DS:[v_53F160]
        TEST    EAX, EAX
        JE      SHORT @L00000003
        TEST    BYTE PTR SS:[EBP+0x24], 0x1
        JNZ     @L00000028

    @L00000003:
        CMP     DWORD PTR DS:[EDI+0x3C0], 0x0
        JE      SHORT @L00000004
        MOV     DL, BYTE PTR DS:[ESI+0x7E4]
        JMP     SHORT @L00000005

    @L00000004:
        MOV     DL, BYTE PTR DS:[ESI+0x7E0]

    @L00000005:
        TEST    EBX, EBX
        MOV     CL, BYTE PTR DS:[ESI+0x7E8]
        MOV     AL, BYTE PTR DS:[ESI+0x7EC]
        JE      @L00000013
        MOV     BYTE PTR SS:[ESP+0x14], DL

    @L00000006:
        CMP     DWORD PTR SS:[ESP+0x1C], 0x0
        JNZ     SHORT @L00000008

    @L00000007:
        MOV     CL, AL

    @L00000008:
        MOV     BYTE PTR SS:[ESP+0x16], AL
        MOV     AL, BYTE PTR DS:[ESI+0xAC]
        CMP     AL, 0x0FF
        MOV     BYTE PTR SS:[ESP+0x15], CL
        JE      SHORT @L00000010
        MOV     DL, AL
        SHR     DL, 0x1
        CMP     DL, CL
        JNB     SHORT @L00000009
        MOV     CL, AL
        SHR     CL, 0x1

    @L00000009:
        MOV     BYTE PTR SS:[ESP+0x15], CL
        MOV     BYTE PTR SS:[ESP+0x16], AL

    @L00000010:
        MOV     ECX, DWORD PTR SS:[ESP+0x34]
        MOVZX   EDX, WORD PTR DS:[ECX+0x28]
        MOV     EDI, DWORD PTR DS:[ESI+0x224]
        MOV     EBX, DWORD PTR DS:[ESI+0x230]
        SUB     EDI, DWORD PTR DS:[ESI+0x228]
        SUB     EBX, DWORD PTR DS:[ESI+0x22C]
        PUSH    EDX
        CALL    DWORD PTR DS:[v_3A1650]
        MOVZX   EAX, WORD PTR SS:[EBP+0x3C]
        MOV     ECX, DWORD PTR DS:[ESI+0x218]
        MOV     DWORD PTR SS:[ESP+0x20], EAX
        LEA     EDX, DWORD PTR DS:[ECX+ECX]
        MOV     EAX, 0x0FF
        SUB     EAX, EDX
        TEST    EBX, EBX
        MOV     DWORD PTR SS:[ESP+0x4C], EBX
        MOV     DWORD PTR SS:[ESP+0x18], 0x0
        FILD    DWORD PTR SS:[ESP+0x4C]
        JGE     SHORT @L00000011
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB8]
        FADD    DWORD PTR DS:[EAX]
        POP     EAX

    @L00000011:
        MOV     EBX, EAX
        FSTCW   WORD PTR SS:[ESP+0x12]
        MOVZX   EAX, WORD PTR SS:[ESP+0x12]
        OR      EAX, 0x0C00
        MOV     DWORD PTR SS:[ESP+0x34], EAX
        XOR     EDX, EDX
        MOV     DWORD PTR SS:[ESP+0x44], EDI
        FLDCW   WORD PTR SS:[ESP+0x34]
        FISTP   QWORD PTR SS:[ESP+0x4C]
        MOV     EAX, DWORD PTR SS:[ESP+0x4C]
        SHL     EAX, 0x10
        DIV     EBX
        FLDCW   WORD PTR SS:[ESP+0x12]
        FILD    DWORD PTR SS:[ESP+0x44]
        MOV     EBX, DWORD PTR DS:[ESI+0x214]
        MOV     EDX, 0x0FF
        MOV     DWORD PTR SS:[ESP+0x4C], EAX
        LEA     EAX, DWORD PTR DS:[EBX+EBX]
        SUB     EDX, EAX
        TEST    EDI, EDI
        JGE     SHORT @L00000012
        PUSH    EAX
        MOV     EAX, DWORD PTR DS:[v_875AB8]
        FADD    DWORD PTR DS:[EAX]
        POP     EAX

    @L00000012:
        FSTCW   WORD PTR SS:[ESP+0x12]
        MOVZX   EAX, WORD PTR SS:[ESP+0x12]
        OR      EAX, 0x0C00
        MOV     DWORD PTR SS:[ESP+0x34], EAX
        FLDCW   WORD PTR SS:[ESP+0x34]
        MOV     EDI, EDX
        XOR     EDX, EDX
        FISTP   QWORD PTR SS:[ESP+0x44]
        MOV     EAX, DWORD PTR SS:[ESP+0x44]
        SHL     EAX, 0x10
        DIV     EDI
        FLDCW   WORD PTR SS:[ESP+0x12]
        MOV     EDX, DWORD PTR DS:[ESI+0x22C]
        MOV     DWORD PTR SS:[ESP+0x1C], EDX
        MOV     DWORD PTR SS:[ESP+0x44], EAX
        MOV     EAX, 0x0FF
        SUB     EAX, EBX
        MOV     DWORD PTR SS:[ESP+0x3C], EAX
        MOV     EAX, 0x0FF
        SUB     EAX, ECX
        CMP     EAX, ECX
        MOV     DWORD PTR SS:[ESP+0x30], EAX
        JL      @L00000028
        MOV     ECX, EBX
        MOV     EBX, EAX
        SHL     EBX, 0x8
        MOV     DWORD PTR SS:[ESP+0x34], EBX
        JMP     SHORT @L00000016

    @L00000013:
        CMP     DWORD PTR SS:[ESP+0x1C], 0x0
        JE      SHORT @L00000014
        MOV     BYTE PTR SS:[ESP+0x14], CL
        JMP     @L00000006

    @L00000014:
        MOV     BYTE PTR SS:[ESP+0x14], AL
        JMP     @L00000007
        JMP     SHORT @L00000015
        LEA     ESP, DWORD PTR SS:[ESP]
        LEA     ECX, DWORD PTR DS:[ECX]

    @L00000015:
        MOV     EBP, DWORD PTR SS:[ESP+0x38]

    @L00000016:
        MOV     EDX, DWORD PTR SS:[ESP+0x18]
        CMP     EDX, 0x10000
        JL      SHORT @L00000017
        MOV     EAX, EDX
        SHR     EAX, 0x10
        MOV     EDI, EAX
        IMUL    EDI, EDI, 0xFFFF0000
        ADD     EDX, EDI
        ADD     DWORD PTR SS:[ESP+0x1C], EAX
        MOV     DWORD PTR SS:[ESP+0x18], EDX

    @L00000017:
        MOV     EAX, DWORD PTR SS:[EBP+0x64]
        IMUL    EAX, DWORD PTR SS:[ESP+0x1C]
        ADD     EAX, DWORD PTR DS:[ESI+0x228]
        MOV     EDI, DWORD PTR SS:[EBP+0x2C]
        MOV     EBP, DWORD PTR SS:[EBP+0x30]
        ADD     EAX, EAX
        ADD     EDI, EAX
        ADD     EBP, EAX
        MOV     EAX, DWORD PTR DS:[ESI+0x1D8]
        ADD     EBX, ECX
        LEA     EDX, DWORD PTR DS:[EAX+EBX*0x4+0x3]
        MOV     DWORD PTR SS:[ESP+0x28], EDX
        MOV     EDX, DWORD PTR SS:[ESP+0x3C]
        XOR     AL, AL
        CMP     EDX, ECX
        MOV     DWORD PTR SS:[ESP+0x24], 0x10000
        MOV     BYTE PTR SS:[ESP+0x12], 0x0
        MOV     DWORD PTR SS:[ESP+0x2C], EDX
        JLE     @L00000027
        MOV     EBX, DWORD PTR SS:[ESP+0x24]

    @L00000018:
        CMP     EBX, 0x10000
        JL      SHORT @L00000026
        MOV     EAX, EBX
        SHR     EAX, 0x10
        MOV     DWORD PTR SS:[ESP+0x24], EAX
        IMUL    EAX, EAX, 0xFFFF0000
        ADD     EBX, EAX
        LEA     ECX, DWORD PTR DS:[ECX]

    @L00000019:
        MOV     AX, WORD PTR SS:[EBP]
        MOV     EDX, DWORD PTR SS:[ESP+0x20]
        AND     AX, DX
        ADD     EBP, 0x2
        TEST    AX, AX
        JBE     SHORT @L00000020
        MOV     CL, 0x1
        JMP     SHORT @L00000021

    @L00000020:
        XOR     CL, CL

    @L00000021:
        MOVZX   EAX, WORD PTR DS:[EDI]
        NOT     EAX
        MOV     DWORD PTR SS:[ESP+0x40], EAX
        MOVZX   EAX, DX
        MOV     EDX, DWORD PTR SS:[ESP+0x40]
        AND     EDX, EAX
        ADD     EDI, 0x2
        TEST    EDX, EDX
        JLE     SHORT @L00000022
        MOV     AL, 0x1
        JMP     SHORT @L00000023

    @L00000022:
        XOR     AL, AL

    @L00000023:
        MOVZX   EDX, AL
        MOVZX   EAX, CL
        LEA     ECX, DWORD PTR SS:[ESP+EAX+0x14]
        MOV     CL, BYTE PTR DS:[ECX+EDX]
        MOV     DL, BYTE PTR SS:[ESP+0x12]
        CMP     CL, DL
        JNZ     SHORT @L00000024
        MOV     AL, CL
        JMP     SHORT @L00000025

    @L00000024:
        MOVZX   EDX, DL
        MOVZX   EAX, CL
        ADD     EAX, EDX
        CDQ
        SUB     EAX, EDX
        SAR     EAX, 0x1
        MOV     BYTE PTR SS:[ESP+0x12], CL

    @L00000025:
        SUB     DWORD PTR SS:[ESP+0x24], 0x1
        JNZ     SHORT @L00000019

    @L00000026:
        MOV     ECX, DWORD PTR SS:[ESP+0x28]
        MOV     EDX, DWORD PTR SS:[ESP+0x2C]
        ADD     EBX, DWORD PTR SS:[ESP+0x44]
    // FEAT FMINI
        CMP     BYTE PTR DS:[bFMINI], 0
        JNE     @L_FMINI_G
        MOV     BYTE PTR DS:[ECX], AL                   //MOV     BYTE PTR DS:[ECX], AL
    @L_FMINI_G:

        ADD     ECX, 0x4
        MOV     DWORD PTR SS:[ESP+0x28], ECX
        MOV     ECX, DWORD PTR DS:[ESI+0x214]
        SUB     EDX, 0x1
        CMP     EDX, ECX
        MOV     DWORD PTR SS:[ESP+0x2C], EDX
        JG      @L00000018

    @L00000027:
        MOV     EAX, DWORD PTR SS:[ESP+0x4C]
        ADD     DWORD PTR SS:[ESP+0x18], EAX
        MOV     EAX, DWORD PTR SS:[ESP+0x30]
        MOV     EBX, DWORD PTR SS:[ESP+0x34]
        SUB     EAX, 0x1
        SUB     EBX, 0x100
        CMP     EAX, DWORD PTR DS:[ESI+0x218]
        MOV     DWORD PTR SS:[ESP+0x30], EAX
        MOV     DWORD PTR SS:[ESP+0x34], EBX
        JGE     @L00000015

    @L00000028:
        POP     EDI
        POP     EBP
        POP     EBX

    @L00000029:
        POP     ESI
        ADD     ESP, 0x44
        RET
    }
}
//---------------------------------------------------------------------------


