#pragma once
#include "CoreMinimal.h"
#include "AttireExParam.h"
#include "SSAttirePaintPair.h"
#include "SSAttirePartPair.h"
#include "SSAttireParam.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FSSAttireParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAttirePartPair> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAttirePaintPair> Paints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireExParam AttireEx;
    
    FSSAttireParam();
};

