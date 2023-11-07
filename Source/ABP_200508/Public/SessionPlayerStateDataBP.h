#pragma once
#include "CoreMinimal.h"
#include "ESessionPlayerStateType.h"
#include "SessionPlayerStateDataBP.generated.h"

USTRUCT(BlueprintType)
struct FSessionPlayerStateDataBP {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESessionPlayerStateType StateArray[10];
    
    ABP_200508_API FSessionPlayerStateDataBP();
};

