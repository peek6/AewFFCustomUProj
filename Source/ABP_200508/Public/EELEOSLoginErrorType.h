#pragma once
#include "CoreMinimal.h"
#include "EELEOSLoginErrorType.generated.h"

UENUM(BlueprintType)
enum class EELEOSLoginErrorType : uint8 {
    None,
    Offline,
    OSS,
    Auth,
    Connect,
    ExternalConnect,
    Setup,
    TitleStorage,
    LinkAccount,
    Token,
};

