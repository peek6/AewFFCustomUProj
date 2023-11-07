#pragma once
#include "CoreMinimal.h"
#include "EUnlockItemCategory.generated.h"

UENUM(BlueprintType)
enum class EUnlockItemCategory : uint8 {
    Arena,
    ArenaParts,
    Attire,
    ChatStamp,
    EntranceAdvance,
    EntranceMotion,
    EntranceVideo,
    InGameMotion,
    LoadingScreen,
    MatchType,
    MiniGame,
    Option,
    Profile,
    Roster,
    SaveSlot,
    ShouhiItem,
    Sound,
    UserIcon,
    Weapon,
    WrestlerParts,
    TeamLogo,
    GameplaySystem,
    Team,
    None,
    Max,
};

