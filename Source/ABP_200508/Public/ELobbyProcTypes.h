#pragma once
#include "CoreMinimal.h"
#include "ELobbyProcTypes.generated.h"

UENUM(BlueprintType)
enum class ELobbyProcTypes : uint8 {
    PROC_LOBBY_CREATE,
    PROC_LOBBY_JOIN,
    PROC_CONSOLE_PARTYJOIN,
    PROC_MAX UMETA(Hidden),
};

