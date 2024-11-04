#pragma once
#include "CoreMinimal.h"
#include "StReplayEffectParam.h"
#include "StReplayEmitterRecorder.generated.h"

USTRUCT(BlueprintType)
struct FStReplayEmitterRecorder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStReplayEffectParam> Effects;
    
    ABP_200508_API FStReplayEmitterRecorder();
};

