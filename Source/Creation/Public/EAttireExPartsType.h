#pragma once
#include "CoreMinimal.h"
#include "EAttireExPartsType.generated.h"

UENUM(BlueprintType)
enum class EAttireExPartsType : uint8 {
    Unknown,
    Hats,
    Glasses,
    Masks,
    FaceAccessories,
    Elbows_L,
    Elbows_R,
    Hands_L,
    Hands_R,
    BodyAccessories,
    Bottoms,
    Knees_L,
    Knees_R,
    Shoes,
    Bodysuits,
    Brassieres,
    Tops,
    Jackets,
    Num,
};

