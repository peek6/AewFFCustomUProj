#pragma once
#include "CoreMinimal.h"
#include "ESaveDataType.generated.h"

UENUM(BlueprintType)
enum class ESaveDataType : uint8 {
    Unknown,
    GameSystem,
    PlayerData,
    OnlineInfo,
    JukeBox,
    Achievement,
    MiniGame,
    Jpeg = 0xA,
    PNG,
    UGC_Room = 0x32,
    UGC_Wrestler,
    UGC_Arena,
    UGC_Team = 0x36,
    CareerMode = 0x64,
    CareerModeSnapshot,
    CareerModeSystem,
    SSMode = 0x6E,
    Tournament = 0x73,
    Max = 0xFF,
    KindStart = 0x1,
    KindEnd = 0xA,
};

