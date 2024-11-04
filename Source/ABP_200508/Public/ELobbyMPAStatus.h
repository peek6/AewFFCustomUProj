#pragma once
#include "CoreMinimal.h"
#include "ELobbyMPAStatus.generated.h"

UENUM(BlueprintType)
enum class ELobbyMPAStatus : uint8 {
    MPA_Create,
    MPA_Destroy,
    MPA_MAX UMETA(Hidden),
};

