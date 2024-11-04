#pragma once
#include "CoreMinimal.h"
#include "EActionSkillType.generated.h"

UENUM(BlueprintType)
enum class EActionSkillType : uint8 {
    SpringboardOffense,
    TopeOffense,
    GuardrailDiveOffense,
    AntiAirDefense,
    KipUp,
    QuickMount,
    GimmickInfringement,
    GuardBreak,
    GrappleCombo,
    SlothStyle,
    PinDexterity,
    ReboundRecoilAttack,
    CornerRecoilAttack,
    Juggernaut,
    Recuperability,
    AgileBackStep,
    RunningSetup,
    StrikeCombo,
    CancelStartOfMatch,
    HeelMove,
    Escape,
    GloveRemove,
    KneePadRemove,
    ChopBattle,
    Curse,
};

