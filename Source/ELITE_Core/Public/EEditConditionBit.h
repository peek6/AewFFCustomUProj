#pragma once
#include "CoreMinimal.h"
#include "EEditConditionBit.generated.h"

UENUM(BlueprintType)
enum class EEditConditionBit : uint8 {
    DEFAULT = 0x0,
    BaseBody = 0x1,
    Ring,
    Entrance = 0x4,
    Plain = 0x8,
    Match = 0x6,
    EEditConditionBit_MAX = 0x9,
};

