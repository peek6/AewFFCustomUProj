#pragma once
#include "CoreMinimal.h"
#include "DamageChallengeShowAnnounceTimeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDamageChallengeShowAnnounceTime, bool, IsEnableDisplay);

