#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "Engine/DataTable.h"
#include "StGuardBreakDetail.h"
#include "StActionSkillDetailParam.generated.h"

USTRUCT(BlueprintType)
struct FStActionSkillDetailParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> RestrictionQuickMount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStGuardBreakDetail GuardBreakSuccessRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SlidingList;
    
    ABP_200508_API FStActionSkillDetailParam();
};

