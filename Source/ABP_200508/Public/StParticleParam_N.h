#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StParticleParam_N.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FStParticleParam_N : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SFXID;
    
    ABP_200508_API FStParticleParam_N();
};

