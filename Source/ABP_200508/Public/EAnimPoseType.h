#pragma once
#include "CoreMinimal.h"
#include "EAnimPoseType.generated.h"

UENUM(BlueprintType)
enum class EAnimPoseType : uint8 {
    None,
    Stand,
    Walk,
    Run,
    FaceUp,
    FaceDown,
    Groggy,
    CornerGroggyFront,
    CornerGroggyRear,
    TreeOfWoe,
    RopeGroggy,
    MiddleRope,
    ApronStand,
    ApronGroggy,
    CornerTopWait,
    StandUp,
    Whip,
    SitDown,
    FenceDown,
    FenceSit,
    AirDamage,
    StandUpFU,
    StandUpFD,
    Table,
    Ladder,
    SteelStep,
};

