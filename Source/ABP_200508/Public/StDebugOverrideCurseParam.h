#pragma once
#include "CoreMinimal.h"
#include "ECurseType.h"
#include "StDebugOverrideCurseParam.generated.h"

USTRUCT(BlueprintType)
struct FStDebugOverrideCurseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntranceProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurseType CurseType;
    
    ABP_200508_API FStDebugOverrideCurseParam();
};

