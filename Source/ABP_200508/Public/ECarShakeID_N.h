#pragma once
#include "CoreMinimal.h"
#include "ECarShakeID_N.generated.h"

UENUM(BlueprintType)
enum class ECarShakeID_N : uint8 {
    WeakShake,
    StrongShake,
    ECarShakeID_MAX UMETA(Hidden),
};

