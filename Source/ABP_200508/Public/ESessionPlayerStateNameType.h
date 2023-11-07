#pragma once
#include "CoreMinimal.h"
#include "ESessionPlayerStateNameType.generated.h"

UENUM(BlueprintType)
enum class ESessionPlayerStateNameType : uint8 {
    Initialize,
    Map,
    Entrance,
    Start,
    Match,
    Restart,
    Assets,
    NextMatch,
    Widget,
    Referee,
    Max,
};

