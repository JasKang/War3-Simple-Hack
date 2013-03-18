//---------------------------------------------------------------------------
#include    "MH_Main.h"
//---------------------------------------------------------------------------

// ... -> IK3 source -> IK5 source -> this

FRAW void jGetDamageEvent()
{
    __asm
    {
        PUSHAD

        LEA     EAX, DWORD PTR DS:[EAX+0x30]
        CMP     DWORD PTR DS:[EAX], 0
        JE      @PROC_END
        PUSH    EAX                         //DMG VAL
        LEA     ESI, _WT_tt
        CALL    pGame_jCreateTextTag
        PUSH    EAX                         //TEXTTAG

        MOV     ECX, DWORD PTR DS:[pGameP]
        ADD     ECX, 0x0ADA848
        MOV     ECX, DWORD PTR DS:[ECX]
        MOV     ECX, DWORD PTR DS:[ECX+0x14]
        MOV     ECX, DWORD PTR DS:[ECX+0x0C]
        MOV     ECX, DWORD PTR DS:[ECX]

        MOV     ESI, ECX
        MOV     EBX, EAX
        LEA     EDI, _STR_CTT
        PUSH    EDI
        CALL    pGame_p459150


        LEA     ESI, _WT_u
        CALL    pGame_jGetTriggerUnit       //GET THE UNIT
        PUSH    EAX

        SUB     ESP, 0x100
        MOV     EDI, ESP
        PUSH    EDI                         //STRBUF

        PUSH    0
        PUSH    0
        MOV     EAX, DWORD PTR SS:[ESP+0x100+0x14]
        FLD     DWORD PTR SS:[EAX]
        FSTP    QWORD PTR SS:[ESP]
        LEA     EAX, _STR_spFLOAT
        PUSH    EAX
        PUSH    EDI
        CALL    fpSprintf
        ADD     ESP, 0x10

        POP     EDI                             //RESTORE STRBUF POINTER

        SUB     ESP, 0x20                       //FUCK THAT
        MOV     DWORD PTR SS:[ESP+0x1C], EDI    //FUCK THAT
        LEA     EDI, DWORD PTR SS:[ESP+0x1C]    //FUCK THAT
        MOV     DWORD PTR SS:[ESP+0x8], ESP     //FUCK THAT
        MOV     EDI, ESP                        //FUCK THAT

        LEA     EAX, float_003
        PUSH    EAX                             //SIZE
        PUSH    EDI                             //STRBUF
        PUSH    DWORD PTR SS:[ESP+0x100+0x0C+0x20]  //TAGTEXT
        LEA     EDI, _STR_w3WTF1
        LEA     ESI, _WT_v
        CALL    pGame_jSetTextTagText
        ADD     ESP, 0x0C

        ADD     ESP, 0x20                    //RESTORE THE STACK

        ADD     ESP, 0x100                   //RESTORE THE ST

        LEA     EAX, float_0
        PUSH    EAX                         //ZOFFSET
        PUSH    DWORD PTR SS:[ESP+0x4]       //HUNIT
        PUSH    DWORD PTR SS:[ESP+0x0C]      //TAGTEXT
        LEA     ESI, _WT_v
        CALL    pGame_jSetTextTagPosUnit
        ADD     ESP, 0x10

        PUSH    0x0FF
        PUSH    0x0
        PUSH    0x0
        PUSH    0x0FF
        PUSH    DWORD PTR SS:[ESP+0x10]
        LEA     ESI, _WT_v
        CALL    pGame_jSetTextTagColor
        ADD     ESP, 0x14

        LEA     EAX, float_05
        PUSH    EAX                         //FLOAT1
        PUSH    EAX                         //FLOAT2
        PUSH    DWORD PTR SS:[ESP+0x8]       //TAGTEXT
        LEA     ESI, _WT_v
        CALL    pGame_jSetTextTagVelocity
        ADD     ESP, 0x0C

        LEA     EAX, float_1
        PUSH    EAX                         //FLOAT1
        PUSH    DWORD PTR SS:[ESP+0x4]       //TAGTEXT
        LEA     ESI, _WT_v
        CALL    pGame_jSetTextTagFadepoint
        ADD     ESP, 0x8

        LEA     EAX, float_2
        PUSH    EAX                         //FLOAT1
        PUSH    DWORD PTR SS:[ESP+0x4]       //TAGTEXT
        LEA     ESI, _WT_v
        CALL    pGame_jSetTextTagLifespan
        ADD     ESP, 0x8

        PUSH    0x0                           //FALSE
        PUSH    DWORD PTR SS:[ESP+0x4]       //TAGTEXT
        LEA     ESI, _WT_v
        CALL    pGame_jSetTextTagPermanent
        ADD     ESP, 0x8

        PUSH    0x0                           //FALSE
        PUSH    DWORD PTR SS:[ESP+0x4]       //TEXTTAG
        LEA     ESI, _WT_v
        CALL    pGame_jSetTextTagVisibility
        ADD     ESP, 0x8

        PUSH    0x1                           //TRUE
        PUSH    DWORD PTR SS:[ESP+0x4]       //TEXTTAG
        LEA     ESI, _WT_v
        CALL    pGame_jSetTextTagVisibility
        ADD     ESP, 0x8

        PUSH    0x0                           //FALSE
        PUSH    DWORD PTR SS:[ESP+0x4]       //TEXTTAG
        LEA     ESI, _WT_v
        CALL    pGame_jSetTextTagSuspended
        ADD     ESP, 0x8

        ADD     ESP, 0x8

    @PROC_END:
        POPAD                             //RESTORE REGISTERS

        RET
    }
}
//---------------------------------------------------------------------------
