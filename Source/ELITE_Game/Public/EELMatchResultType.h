#pragma once
#include "CoreMinimal.h"
#include "EELMatchResultType.generated.h"

UENUM(BlueprintType)
enum class EELMatchResultType : uint8 {
    None,
    PinFall,
    Submit,
    TimeOut,
    DQ,
    BattleRoyale,
    KO,
    Draw,
    Ladder,
    Quit,
};

