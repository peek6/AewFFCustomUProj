#pragma once
#include "CoreMinimal.h"
#include "ERA_Slot_Intro.generated.h"

UENUM(BlueprintType)
enum class ERA_Slot_Intro : uint8 {
    RA_INTRO_FIRST,
    RA_INTRO_FIRST_MALE,
    RA_INTRO_FIRST_FEMALE,
    RA_INTRO_FIRST_TEAM,
    RA_INTRO_OPPONENT_MALE,
    RA_INTRO_OPPONENT_FEMALE,
    RA_INTRO_2ND_TEAM,
    RA_INTRO_PARTNER_MALE,
    RA_INTRO_PARTNER_FEMALE,
    RA_INTRO_NEXT,
    RA_INTRO_CHALLENGER,
    RA_INTRO_CHAMPION,
    RA_INTRO_CHAMPIONS_FIRST,
    RA_INTRO_CHALLENGERS_FIRST,
    RA_INTRO_MAX UMETA(Hidden),
};

