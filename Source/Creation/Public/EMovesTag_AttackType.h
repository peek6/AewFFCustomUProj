#pragma once
#include "CoreMinimal.h"
#include "EMovesTag_AttackType.generated.h"

UENUM(BlueprintType)
enum class EMovesTag_AttackType : uint8 {
    DEFAULT = 0x0,
    AT_Fist = 0x1,
    AT_Chop,
    AT_Elbow = 0x4,
    AT_Clothesline = 0x8,
    AT_Kick = 0x10,
    AT_Knee = 0x20,
    AT_Head = 0x40,
    AT_Springboard = 0x80,
    AT_CornerDive = 0x11, //0x100,
    AT_Impact = 0x12, //0x200,
    AT_RunAtk = 0x14, //0x400,
    AT_BreakFeet = 0x18, //0x800,
    AT_BreakArm = 0x21, //0x1000,
    AT_Dirty = 0x22, //0x2000,
    AT_MAX UMETA(Hidden),
};

