#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StCurseMomentumRate.generated.h"

USTRUCT(BlueprintType)
struct FStCurseMomentumRate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Montage_Danhausen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Montage_Target;
    
    ABP_200508_API FStCurseMomentumRate();
};

