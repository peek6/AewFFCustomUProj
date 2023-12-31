#pragma once
#include "CoreMinimal.h"
#include "EELEOSSessionAttributeTypes.generated.h"

UENUM(BlueprintType)
enum class EELEOSSessionAttributeTypes : uint8 {
    NONE,
    SESSION_BUCKET_ID,
    SESSION_NAME,
    SESSION_PUID,
    SESSION_EPICID,
    SESSION_CREATETIME,
    DISPNAME,
    BUILDVERSION,
    SERVER_NAME,
    SERVER_PING,
    MATCHRULE_OPTIONS,
    MATCHRULE_OPTIONS_LIGHTSOUTMATCH,
    MATCHRULE_OPTIONS_FALLSCOUNTANYWHERE,
    MATCHRULE_OPTIONS_EXPLODINGBARBEDWIRE,
    MATCHRULE_OPTIONS_LADDERMATCH,
    PLATFORM,
    RANK,
    RANK_POINT,
    RANK_NAME,
    RANK_GROUPNAME,
};

