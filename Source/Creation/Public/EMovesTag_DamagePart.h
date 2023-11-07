#pragma once
#include "CoreMinimal.h"
#include "EMovesTag_DamagePart.generated.h"

UENUM(BlueprintType)
enum class EMovesTag_DamagePart : uint8 {
    DEFAULT = 0x0,
    DP_Head = 0x1,
    DP_Body,
    DP_Arms = 0x4,
    DP_Legs = 0x8,
    DP_MAX UMETA(Hidden),
};

