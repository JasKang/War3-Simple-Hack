//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

// ... -> IK3 source -> IK5 source -> this

DWORD   dwTemp;

FRAW void HPMP_MS()
{
    __asm
    {
        MOV     EAX, DWORD PTR DS:[ESP]
        MOV     dwTemp, EAX

        FLD     DWORD PTR SS:[ESP+0x90]
        SUB     ESP, 0x8
        FSTP    QWORD PTR SS:[ESP]
        LEA     EAX, _STR_speed
        PUSH    EAX
        PUSH    0x7
        PUSH    ECX
        CALL    hStorm578

        ADD     ESP, 0x18

        CALL    hStorm503
        PUSH    dwTemp

        RET
    }
}
//---------------------------------------------------------------------------

FRAW void HPMP_AS()
{
    __asm
    {
        MOV     EAX, DWORD PTR DS:[ESP]
        MOV     dwTemp, EAX

        FLD     DWORD PTR SS:[ESP+0x6C]
        SUB     ESP, 0x8
        FSTP    QWORD PTR SS:[ESP]
        LEA     EAX, _STR_speed
        PUSH    EAX
        PUSH    0x7
        PUSH    ECX
        CALL    hStorm578

        ADD     ESP, 0x18

        CALL    hStorm503
        PUSH    dwTemp

        RET
    }
}
//---------------------------------------------------------------------------

FRAW void HPMP_HP()
{
    __asm
    {
        LEA     EAX, DWORD PTR SS:[ESP+0x0D8]
        PUSH    EAX
        PUSH    ECX
        PUSH    ESI
        ADD     ECX, 0x98
        MOV     ECX, DWORD PTR DS:[ECX+0x8]
        MOV     ESI, DWORD PTR DS:[hGameAB7788]
        MOV     ESI, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[ESI+0x0C]
        MOV     ECX, DWORD PTR DS:[EAX+ECX*0x8+0x4]
        MOV     ECX, DWORD PTR DS:[ECX+0x7C]
        MOV     DWORD PTR DS:[hUnitHP], ECX
        POP     ESI
        POP     ECX
        POP     EAX
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void HPMP_MP()
{
    __asm
    {
        ADD     ECX, 0x0B8
        PUSH    EAX
        PUSH    ECX
        PUSH    ESI
        MOV     ECX, DWORD PTR DS:[ECX+0x8]
        MOV     ESI, DWORD PTR DS:[hGameAB7788]
        MOV     ESI, DWORD PTR DS:[ESI]
        MOV     EAX, DWORD PTR DS:[ESI+0x0C]
        MOV     ECX, DWORD PTR DS:[EAX+ECX*0x8+0x4]
        MOV     ECX, DWORD PTR DS:[ECX+0x7C]
        MOV     DWORD PTR DS:[hUnitMP], ECX
        POP     ESI
        POP     ECX
        POP     EAX
        RET
    }
}
//---------------------------------------------------------------------------

FRAW void HPMP_DRAW()
{
    __asm
    {
        PUSH    ECX
        LEA     ECX, DWORD PTR SS:[ESP+0x30]
        FLD     DWORD PTR DS:[hUnitMP]
        FLD     DWORD PTR DS:[hUnitHP]
        SUB     ESP, 0x10
        FSTP    QWORD PTR SS:[ESP]
        FSTP    QWORD PTR SS:[ESP+0x8]
        PUSH    ECX
        LEA     EAX, _STR_HPMPFMT
        PUSH    EAX
        PUSH    0x80
        PUSH    ECX
        CALL    hStorm578
        ADD     ESP, 0x20
        POP     ECX
        MOV     EDI, DWORD PTR DS:[EBP+0x134]
        RET
    }
}
//---------------------------------------------------------------------------


