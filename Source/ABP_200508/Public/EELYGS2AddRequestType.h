#pragma once
#include "CoreMinimal.h"
#include "EELYGS2AddRequestType.generated.h"

UENUM(BlueprintType)
enum class EELYGS2AddRequestType : uint8 {
    Default,
    First,
    AfterUserAuth,
};

