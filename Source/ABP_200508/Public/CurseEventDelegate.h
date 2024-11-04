#pragma once
#include "CoreMinimal.h"
#include "CurseEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurseEvent, float, InDuration);

