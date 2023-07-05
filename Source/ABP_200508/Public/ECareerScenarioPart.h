#pragma once
#include "CoreMinimal.h"
#include "ECareerScenarioPart.generated.h"

UENUM(BlueprintType)
enum class ECareerScenarioPart : uint8 {
    NONE,
    SP_PR_HERO,
    SP_PR_SHY,
    SP_PR_CONFIDENT,
    SP_PR_MONSTER,
    SP_PR_ENIGMA,
    SP_PR_JERK,
    SP_PR_CASSIDY,
    SP_PR_FEMALE,
    SP_1A_WEEK1,
    SP_1A_WEEK2_A,
    SP_1A_WEEK2_B,
    SP_1A_WEEK3_A,
    SP_1A_WEEK3_B,
    SP_1A_WEEK4_A,
    SP_1A_WEEK4_B,
    SP_1A_WEEK4_C,
    SP_1B_WEEK1,
    SP_1B_WEEK2,
    SP_1B_WEEK3,
    SP_1B_WEEK4,
    SP_1C_WEEK1,
    SP_1C_WEEK2_A,
    SP_1C_WEEK2_B,
    SP_1C_WEEK3,
    SP_1C_WEEK4_A,
    SP_1C_WEEK4_B,
    SP_1C_WEEK4_C,
    SP_2A_WEEK1,
    SP_2A_WEEK2,
    SP_2A_WEEK3_A,
    SP_2A_WEEK3_B,
    SP_2A_WEEK4,
    SP_2B_WEEK1,
    SP_2B_WEEK2,
    SP_2B_WEEK3,
    SP_2B_WEEK4,
    SP_2C_WEEK1,
    SP_2C_WEEK2,
    SP_2C_WEEK3,
    SP_2C_WEEK4,
    SP_3A_WEEK1,
    SP_3A_WEEK2,
    SP_3A_WEEK3,
    SP_3A_WEEK4_A,
    SP_3A_WEEK4_B,
    SP_3B_WEEK1,
    SP_3B_WEEK2,
    SP_3B_WEEK3,
    SP_3B_WEEK4,
    SP_3C_WEEK1,
    SP_3C_WEEK2,
    SP_3C_WEEK3,
    SP_3C_WEEK4,
    SP_4A_WEEK1,
    SP_4A_WEEK2,
    SP_4A_WEEK3,
    SP_4A_WEEK4,
    SP_4B_WEEK1,
    SP_4B_WEEK2,
    SP_4B_WEEK3,
    SP_4B_WEEK4,
    SP_4C_WEEK1,
    SP_4C_WEEK2,
    SP_4C_WEEK3,
    SP_4C_WEEK4,
    SP_ENDING,
    SP_1C_WEEK4_D,
    SP_2B_WEEK4_A,
    SP_2B_WEEK4_B,
    SP_3C_WEEK1_A,
    SP_3C_WEEK1_B,
    SP_4B_WEEK4_A,
    SP_4C_WEEK1_A,
    SP_4C_WEEK1_B,
    SP_4C_WEEK1_C,
    SP_4C_WEEK2_A,
    SP_4C_WEEK2_B,
    SP_4C_WEEK2_C,
    SP_4C_WEEK4_A,
    SP_4C_WEEK4_B,
    SP_4C_WEEK4_C,
    DARK_SINGLE,
    DARK_TAG,
    DARK_3WAY,
    DARK_4WAY,
    RAMPAGE_SINGLE,
    RAMPAGE_TAG,
    RAMPAGE_3WAY,
    RAMPAGE_4WAY,
    RAMPAGE_SINGLE_TBS,
    RAMPAGE_SINGLE_LADDER_TBS,
    MAX,
};
