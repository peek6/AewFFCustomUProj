#pragma once
#include "CoreMinimal.h"
#include "EELTournamentDifficulty.generated.h"

UENUM(BlueprintType)
enum class EELTournamentDifficulty : uint8 {
    Easy,
    Normal,
    Hard,
    Elite,
};

