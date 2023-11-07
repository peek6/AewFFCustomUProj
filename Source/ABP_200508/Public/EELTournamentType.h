#pragma once
#include "CoreMinimal.h"
#include "EELTournamentType.generated.h"

UENUM(BlueprintType)
enum class EELTournamentType : uint8 {
    Invalid,
    SingleTournament,
    TagTournament,
    Num,
};

