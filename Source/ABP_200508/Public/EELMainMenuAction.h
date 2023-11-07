#pragma once
#include "CoreMinimal.h"
#include "EELMainMenuAction.generated.h"

UENUM(BlueprintType)
enum class EELMainMenuAction : uint8 {
    None,
    New,
    Edit,
    Add,
};

