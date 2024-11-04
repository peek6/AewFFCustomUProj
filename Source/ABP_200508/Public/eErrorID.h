#pragma once
#include "CoreMinimal.h"
#include "eErrorID.generated.h"

UENUM(BlueprintType)
enum class eErrorID : uint8 {
    eErrorID_None,
    eErrorID_HTTP,
    eErrorID_SS,
    eErrorID_YGS2,
    eErrorID_AWS,
    eErrorID_ServerNET,
    eErrorID_EOS,
    eErrorID_Platform,
    eErrorID_Unique,
    eErrorID_Num,
};

