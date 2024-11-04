#pragma once
#include "CoreMinimal.h"
#include "EMovesTag_Function.generated.h"

UENUM(BlueprintType)
enum class EMovesTag_Function : uint8 {
    DEFAULT = 0x0,
    FC_Pincombo = 0x1,
    FC_DirectionalThrow,
    FC_DelayedGrapple = 0x4,
    FC_Whip = 0x8,
    FC_Atk_Ringout = 0x10,
    FC_Def_Ringout = 0x20,
    FC_Submission = 0x40,
    FC_Blood = 0x80,
    FC_Injury = 0x81, //0x100,
    FC_WeightDetection = 0x82, //0x200,
    FC_Etc = 0x84, //0x400,
    FC_MAX UMETA(Hidden),
};

