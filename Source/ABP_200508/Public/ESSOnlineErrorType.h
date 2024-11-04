#pragma once
#include "CoreMinimal.h"
#include "ESSOnlineErrorType.generated.h"

UENUM(BlueprintType)
enum class ESSOnlineErrorType : uint8 {
    ESSOnlineErrorType_None,
    ESSOnlineErrorType_NetworkOffline,
    ESSOnlineErrorType_ServerConnect,
    ESSOnlineErrorType_HttpRequestToYGS2,
    ESSOnlineErrorType_HttpRequestToSSMode,
    ESSOnlineErrorType_NetworkError,
    ESSOnlineErrorType_SignOut_EOS,
    ESSOnlineErrorType_SignOut_NX,
    ESSOnlineErrorType_SignOut_XB,
    ESSOnlineErrorType_SignOut_PS,
    ESSOnlineErrorType_Offline_NX,
    ESSOnlineErrorType_Offline_XB,
    ESSOnlineErrorType_Offline_PS,
    ESSOnlineErrorType_NeedsMasterDataUpdate,
    ESSOnlineErrorType_DataDownloadTimeout,
    ESSOnlineErrorType_MatchStopTimeout,
    ESSOnlineErrorType_PlacingTimeout,
    ESSOnlineErrorType_GameResultTimeout,
    ServiceParamIsNull,
    Maintenance,
    MaintenanceStart,
    Closed,
    DisconnectByCheat,
    BlockedByCheat,
    MovementTimeout,
    GetSSMasterDataTimeout,
    End = 0xFF,
};

