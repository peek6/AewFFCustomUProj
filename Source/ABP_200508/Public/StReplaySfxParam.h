#pragma once
#include "CoreMinimal.h"
#include "StReplaySfxParam.generated.h"

USTRUCT(BlueprintType)
struct FStReplaySfxParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SfxName;
    
    ABP_200508_API FStReplaySfxParam();
};

