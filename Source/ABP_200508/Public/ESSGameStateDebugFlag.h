#pragma once
#include "CoreMinimal.h"
#include "ESSGameStateDebugFlag.generated.h"

UENUM(BlueprintType)
enum class ESSGameStateDebugFlag : uint8 {
    None,
    AIPlayerAutoKill,
    AIPlayerNoDamage,
    StartAssemble,
    Profiling,
    AIAutoInput_MoveForward,
    AIAutoInput_MoveRotate,
    AIAutoInput_MoveToTarget,
    AIAutoInput_Guard,
    AIAutoInput_Jump,
    AIAutoInput_AirJump,
    AIAutoInput_Attack,
    AIAutoInput_AirAttack,
    CreateSituationForProfiling_TypeA,
    CreateSituationForProfiling_TypeB,
    CreateSituationForProfiling_TypeC,
    TimeoutDurationExtend,
    AIDisableAll,
    BlockSaveAnalyticsLog,
    OutputAnalyticsToUELog,
    Max,
};

