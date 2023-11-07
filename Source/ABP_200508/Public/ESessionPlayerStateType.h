#pragma once
#include "CoreMinimal.h"
#include "ESessionPlayerStateType.generated.h"

UENUM(BlueprintType)
enum class ESessionPlayerStateType : uint8 {
    None,
    Invalid,
    Busy,
    Ready,
    Skip,
    Wait,
    Quit,
    Timeout,
    Num_0 = 0x0,
    Num_1,
    Num_2,
    Num_3,
    Num_4,
    Num_5,
    Num_6,
    Num_7,
    Num_8,
    Num_9,
};

