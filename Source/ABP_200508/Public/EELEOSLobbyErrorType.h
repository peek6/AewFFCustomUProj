#pragma once
#include "CoreMinimal.h"
#include "EELEOSLobbyErrorType.generated.h"

UENUM(BlueprintType)
enum class EELEOSLobbyErrorType : uint8 {
    None,
    NotFoundConsole,
};

