#pragma once
#include "CoreMinimal.h"
#include "AttireExData.h"
#include "EEditPartsSlot.h"
#include "EEditTexTarget.h"
#include "EditPaintData.h"
#include "EditPartsData.h"
#include "AttireData.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FAttireData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEditPartsSlot, FEditPartsData> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEditTexTarget, FEditPaintData> Paints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireExData AttireEx;
    
    FAttireData();
};

