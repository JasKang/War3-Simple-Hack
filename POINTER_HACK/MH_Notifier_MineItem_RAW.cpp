//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

// ... -> IK3 source -> IK5 source -> this

FRAW void MineWardNotifierFunc()
{
    __asm
    {
        PUSHAD

        MOV     EAX, pGameGS
        MOV     EAX, DWORD PTR DS:[EAX]
        CMP     EAX, 0x4
        JNE     @ENDF

        XOR     EAX, EAX

        CMP     EDX, 0x6F303034
        JNE     @L1
        LEA     EAX, sOWARD
        JMP     @LE
    @L1:
        CMP     EDX, 0x6F657965
        JNE     @L2
        LEA     EAX, sSWARD
        JMP     @LE
    @L2:
        CMP     EDX, 0x6E30304F
        JNE     @L3
        LEA     EAX, sMINE
        JMP     @LE
    @L3:
        CMP     EDX, 0x6E303050
        JNE     @L4
        LEA     EAX, sMINE
        JMP     @LE
    @L4:
        CMP     EDX, 0x6E303051
        JNE     @L5
        LEA     EAX, sMINE
        JMP     @LE
    @L5:
        CMP     EDX, 0x6E30304E
        JNE     @L6
        LEA     EAX, sMINE
        JMP     @LE
    @L6:
        CMP     EDX, 0x6F746F74
        JNE     @L7
        LEA     EAX, sSTASIS
        JMP     @LE
    @L7:
        CMP     EDX, 0x6F303138
        JNE     @L8
        LEA     EAX, sREMOTE
        JMP     @LE
    @L8:
        CMP     EDX, 0x6F303032
        JNE     @L9
        LEA     EAX, sREMOTE
        JMP     @LE
    @L9:
        CMP     EDX, 0x6F303042
        JNE     @L10
        LEA     EAX, sREMOTE
        JMP     @LE
    @L10:
        CMP     EDX, 0x6F303142
        JNE     @L11
        LEA     EAX, sREMOTE
        JMP     @LE
    @L11:
        CMP     EDX, 0x68303243
        JNE     @L12
        LEA     EAX, sBOWARD
        JMP     @LE
    @L12:
        CMP     EDX, 0x68303244
        JNE     @L13
        LEA     EAX, sBSWARD
        JMP     @LE
    @L13:
        CMP     EDX, 0x68303736
        JNE     @L14
        LEA     EAX, sBDUST
        JMP     @LE
    @L14:
        CMP     EDX, 0x68303147
        JNE     @LE
        LEA     EAX, sBGEM
        JMP     @LE

    @LE:
        TEST    EAX, EAX
        JE      @ENDF

        PUSH    0xFFFFFFFF
        PUSH    minewardDuration
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x0FF
        PUSH    0x0FF
        PUSH    0x0FF
        LEA     EAX, minewardDuration
        PUSH    EAX
        PUSH    DWORD PTR SS:[ESP+0x40]
        PUSH    DWORD PTR SS:[ESP+0x40]
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

    @ENDF:
        POPAD

        RET
    }
}
//---------------------------------------------------------------------------
