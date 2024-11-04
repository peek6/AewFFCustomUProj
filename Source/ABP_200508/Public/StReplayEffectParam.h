#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StReplayEffectParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FStReplayEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    ABP_200508_API FStReplayEffectParam();
};

