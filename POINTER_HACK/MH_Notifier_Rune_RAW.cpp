//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

// ... -> IK3 source -> IK5 source -> this

FRAW void RuneNotifierFunc()
{
    __asm
    {
        PUSHAD

        CMP     DWORD PTR DS:[EAX], 0x44CE0000
        JE      TOP
        CMP     DWORD PTR DS:[EAX], 0xC5310000
        JE      BOT

        JMP     FIN

    TOP:
        CMP     ECX, 0x49303037
        JE      ILLUTOP
        CMP     ECX, 0x49303036
        JE      HASTETOP
        CMP     ECX, 0x4930304B
        JE      DDAMAGETOP
        CMP     ECX, 0x49303038
        JE      REGENTOP
        CMP     ECX, 0x4930304A
        JE      INVITOP
        JMP     FIN

    BOT:
        CMP     ECX, 0x49303037
        JE      ILLUBOT
        CMP     ECX, 0x49303036
        JE      HASTEBOT
        CMP     ECX, 0x4930304B
        JE      DDAMAGEBOT
        CMP     ECX, 0x49303038
        JE      REGENBOT
        CMP     ECX, 0x4930304A
        JE      INVIBOT
        JMP     FIN


    ILLUTOP:
        PUSH    0xFFFFFFFF
        PUSH    runeDuration
        LEA     EAX, sIT
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x01
        PUSH    0x0FC
        PUSH    0x0FF
        LEA     EAX, runeDuration
        PUSH    EAX
        LEA     EAX, runeYTop
        PUSH    EAX
        LEA     EAX, runeXTop
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

        JMP     FIN

    ILLUBOT:
        PUSH    0xFFFFFFFF
        PUSH    runeDuration
        LEA     EAX, sIB
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x01
        PUSH    0x0FC
        PUSH    0x0FF
        LEA     EAX, runeDuration
        PUSH    EAX
        LEA     EAX, runeYBot
        PUSH    EAX
        LEA     EAX, runeXBot
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

        JMP     FIN

    HASTETOP:
        PUSH    0xFFFFFFFF
        PUSH    runeDuration
        LEA     EAX, sHT
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x03
        PUSH    0x03
        PUSH    0x0FF
        LEA     EAX, runeDuration
        PUSH    EAX
        LEA     EAX, runeYTop
        PUSH    EAX
        LEA     EAX, runeXTop
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

        JMP     FIN

    HASTEBOT:
        PUSH    0xFFFFFFFF
        PUSH    runeDuration
        LEA     EAX, sHB
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x03
        PUSH    0x03
        PUSH    0x0FF
        LEA     EAX, runeDuration
        PUSH    EAX
        LEA     EAX, runeYBot
        PUSH    EAX
        LEA     EAX, runeXBot
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

        JMP     FIN

    DDAMAGETOP:
        PUSH    0xFFFFFFFF
        PUSH    runeDuration
        LEA     EAX, sDT
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x0FF
        PUSH    0x42
        PUSH    0x00
        LEA     EAX, runeDuration
        PUSH    EAX
        LEA     EAX, runeYTop
        PUSH    EAX
        LEA     EAX, runeXTop
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

        JMP     FIN

    DDAMAGEBOT:
        PUSH    0xFFFFFFFF
        PUSH    runeDuration
        LEA     EAX, sDB
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x0FF
        PUSH    0x42
        PUSH    0x00
        LEA     EAX, runeDuration
        PUSH    EAX
        LEA     EAX, runeYBot
        PUSH    EAX
        LEA     EAX, runeXBot
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

        JMP     FIN

    REGENTOP:
        PUSH    0xFFFFFFFF
        PUSH    runeDuration
        LEA     EAX, sRT
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x00
        PUSH    0x0FF
        PUSH    0x00
        LEA     EAX, runeDuration
        PUSH    EAX
        LEA     EAX, runeYTop
        PUSH    EAX
        LEA     EAX, runeXTop
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

        JMP     FIN

    REGENBOT:
        PUSH    0xFFFFFFFF
        PUSH    runeDuration
        LEA     EAX, sRB
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x00
        PUSH    0x0FF
        PUSH    0x00
        LEA     EAX, runeDuration
        PUSH    EAX
        LEA     EAX, runeYBot
        PUSH    EAX
        LEA     EAX, runeXBot
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

        JMP     FIN

    INVITOP:
        PUSH    0xFFFFFFFF
        PUSH    runeDuration
        LEA     EAX, sINT
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x0FF
        PUSH    0x0CC
        PUSH    0x99
        LEA     EAX, runeDuration
        PUSH    EAX
        LEA     EAX, runeYTop
        PUSH    EAX
        LEA     EAX, runeXTop
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

        JMP     FIN

    INVIBOT:
        PUSH    0xFFFFFFFF
        PUSH    runeDuration
        LEA     EAX, sINB
        PUSH    EAX
        CALL    MH_PrintOut

        PUSH    0x0
        PUSH    0x0FF
        PUSH    0x0CC
        PUSH    0x99
        LEA     EAX, runeDuration
        PUSH    EAX
        LEA     EAX, runeYBot
        PUSH    EAX
        LEA     EAX, runeXBot
        PUSH    EAX
        CALL    PingMinimapEx
        ADD     ESP, 0x1C

        JMP     FIN

    FIN:
        POPAD

        RET
    }
}
//---------------------------------------------------------------------------
