#pragma once
#include "CoreMinimal.h"
#include "EELEOSAnalyticsMatchingResult.generated.h"

UENUM(BlueprintType)
enum class EELEOSAnalyticsMatchingResult : uint8 {
    Success,
    Failure,
    Cancel,
};

