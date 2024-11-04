#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StCurseMomtage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStCurseMomtage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage_Danhausen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage_Target;
    
    ABP_200508_API FStCurseMomtage();
};

