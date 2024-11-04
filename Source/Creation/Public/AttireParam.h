#pragma once
#include "CoreMinimal.h"
#include "AttireExParam.h"
#include "EEditPartsSlot.h"
#include "EEditTexTarget.h"
#include "EditPaintParam.h"
#include "EditPartsParam.h"
#include "AttireParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FAttireParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEditPartsSlot, FEditPartsParam> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEditTexTarget, FEditPaintParam> Paints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireExParam AttireEx;
    
    FAttireParam();
};

