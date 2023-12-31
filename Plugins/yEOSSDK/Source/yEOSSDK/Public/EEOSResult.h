#pragma once
#include "CoreMinimal.h"
#include "EEOSResult.generated.h"

UENUM(BlueprintType)
enum class EEOSResult : uint8 {
    Success,
    AlreadyStarted,
    AlreadyStoped,
    AlreadyContaintsData,
    AlreadyContaintsUser,
    AlreadyContaintsInstance,
    AlreadyRegistered,
    AlreadyInitialized,
    AlreadyReleased,
    ContainsNoData,
    ContainsNoUser,
    ContainsNoInstance,
    WrongHandle,
    WrongEOSHandle,
    WrongInstance,
    WrongArgument,
    WrongFormat,
    WrongType,
    WrongString,
    WrongTargetUser,
    WrongInternalStatus,
    QueryResultIsError,
    InternalStateError,
    EOSSDKInternalError,
    IncommoingNotAcceptSocketID,
    UnknownChannelID,
    PermissionDeniedByDevPortal,
    ConvertStringFailed,
    InsufficientMemory,
    NeedsEpicAccountID,
    NeedsEpicLocalAccountID,
    NeedsProductUserID,
    NeedsInvitedID,
    WrongPermission,
    TargetUserIsOwn,
    NotSessionOwner,
    RequestSendPacketFailed,
    NeedsImplementation,
    MaxRetry,
    LockedTheList,
    ReplyPacketIsEmpty,
    FileNotFound,
    FileIsEmpty,
    FileOpenFailed,
    FileReadFailed,
    FileWriteFailed,
    CreateDirectoryFailed,
    FatalError,
};

