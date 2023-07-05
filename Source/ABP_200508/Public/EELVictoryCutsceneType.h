#pragma once
#include "CoreMinimal.h"
#include "EELVictoryCutsceneType.generated.h"

UENUM(BlueprintType)
enum class EELVictoryCutsceneType : uint8 {
    Single_Male_Normal,
    Single_Female_Normal,
    Single_Male_Champion,
    Single_Female_Champion,
    Tag_Male_Normal,
    Tag_Female_Normal,
    Tag_Male_Champion,
    Tag_Female_Champion,
    Tag_Mixed_Normal,
    Tag_Mixed_Champion,
};

