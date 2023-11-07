#pragma once
#include "CoreMinimal.h"
#include "ELobbyInviteError.generated.h"

UENUM(BlueprintType)
enum class ELobbyInviteError : uint8 {
    None,
    Timeout,
    OfflineLobbyOwner,
    PartyMemberIsFull,
    PartyUnableJoin,
    PartyJoinFailed,
    ConsoleLobbyNotFound,
};

