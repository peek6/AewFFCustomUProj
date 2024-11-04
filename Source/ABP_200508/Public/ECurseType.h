#pragma once
#include "CoreMinimal.h"
#include "ECurseType.generated.h"

UENUM(BlueprintType)
enum class ECurseType : uint8 {
    Nothing,
    Success,
    Failed,
};

