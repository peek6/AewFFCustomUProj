#pragma once
#include "CoreMinimal.h"
#include "EELTournamentState.generated.h"

UENUM(BlueprintType)
enum class EELTournamentState : uint8 {
    None,
    NextMatch,
    Exit,
    MiniGame,
    MiniGameEnd,
};

