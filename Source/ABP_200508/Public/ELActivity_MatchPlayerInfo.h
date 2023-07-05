#pragma once
#include "CoreMinimal.h"
#include "ELActivity_MatchPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FELActivity_MatchPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PosNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNPC;
    
    ABP_200508_API FELActivity_MatchPlayerInfo();
};

