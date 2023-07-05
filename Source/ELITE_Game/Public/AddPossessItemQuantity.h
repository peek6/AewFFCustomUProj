#pragma once
#include "CoreMinimal.h"
#include "AddPossessItemQuantity.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FAddPossessItemQuantity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddValue;
    
    FAddPossessItemQuantity();
};

