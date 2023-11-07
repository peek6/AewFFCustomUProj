#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "StWeaponAttachDetailParam.generated.h"

USTRUCT(BlueprintType)
struct FStWeaponAttachDetailParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FVector> AttachOffset;
    
    ABP_200508_API FStWeaponAttachDetailParam();
};

