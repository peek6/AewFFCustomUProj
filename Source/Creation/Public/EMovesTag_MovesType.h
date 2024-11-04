#pragma once
#include "CoreMinimal.h"
#include "EMovesTag_MovesType.generated.h"

UENUM(BlueprintType)
enum class EMovesTag_MovesType : uint8 {
    DEFAULT = 0x0,
    MV_DDT = 0x1,
    MV_Powerbomb,
    MV_Hurricanerana = 0x4,
    MV_Suplex = 0x8,
    MV_Slam = 0x10,
    MV_Drop = 0x20,
    MV_Piledriver = 0x40,
    MV_Backbreaker = 0x80,
    MV_MAX UMETA(Hidden),
};

