#pragma once
#include "CoreMinimal.h"
#include "MeterValuePenaltyEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMeterValuePenaltyEvent, float, PenaltyRate);

