#pragma once
#include "CoreMinimal.h"
#include "EnCatSubMenu.generated.h"

UENUM(BlueprintType)
enum class EnCatSubMenu : uint8 {
    None,
    Top,
    TeamSelect,
    Loadout,
    Profile,
    Member,
    AddReleasedTeam,
};

