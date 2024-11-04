#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StParticleParam_N.h"
#include "ArenaVFXInfo_N.generated.h"

USTRUCT(BlueprintType)
struct FArenaVFXInfo_N : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStParticleParam_N DownVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStParticleParam_N SpecialVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThreshouldSpecialVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStParticleParam_N FootStep;
    
    ABP_200508_API FArenaVFXInfo_N();
};

