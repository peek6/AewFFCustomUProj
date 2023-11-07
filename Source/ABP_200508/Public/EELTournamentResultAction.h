#pragma once
#include "CoreMinimal.h"
#include "EELTournamentResultAction.generated.h"

UENUM(BlueprintType)
enum class EELTournamentResultAction : uint8 {
    Retry,
    NextMatch,
    Exit,
};

