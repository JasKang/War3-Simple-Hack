//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

// ... -> IK3 source -> IK5 source -> this

FRAW void RoshanNotifierFunc()
{
    __asm
    {
        PUSHAD

        //MOV     EAX, DWORD PTR DS:[ESP+0x50]
        CMP     EAX, 0x6E30304C
        JNE     RBACK

        MOV     EAX, pGameGS
        MOV     EAX, DWORD PTR DS:[EAX]
        CMP     EAX, 0x4
        JNE     RBACK

        PUSH    0xFFFFFFFF
        PUSH    roshanDuration
        LEA     EAX, sRoshan
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x0FF
        PUSH    0x0FF
        PUSH    0x0FF
        LEA     EAX, roshanDuration
        PUSH    EAX
        LEA     EAX, roshanY
        PUSH    EAX
        LEA     EAX, roshanX
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

    RBACK:
        POPAD

        RET
    }
}
//---------------------------------------------------------------------------
