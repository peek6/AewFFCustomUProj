#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "CloseLoginUIEventHandleDelegate.h"
#include "EELEOSEventResult.h"
#include "EELEOSEventType.h"
#include "EELFriendsListType.h"
#include "ELFriendInfo.h"
#include "ELOSSFriendStatus.h"
#include "EUserPrivilegeBit.h"
#include "LoginCancelEventHandleDelegate.h"
#include "OnCanPlayOnlinePrivilegeDelegate.h"
#include "OnQueryBlockedListUpdatedDelegate.h"
#include "OnQueryPrivilegeDelegate.h"
#include "OnQueryPrivilegesDelegate.h"
#include "OnReadOSSFriendsListDelegate.h"
#include "ReadFriendsListEventHandleDelegate.h"
#include "ELOSSLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class UELOSSLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseLoginUIEventHandle OnCloseLoginUIEventHandler;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoginCancelEventHandle OnLoginCancelEventHandler;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadFriendsListEventHandle OnReadFriendsListEventHandler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnQueryPrivileges> OnQueryPrivileges;
    
public:
    UELOSSLocalPlayer();
    UFUNCTION(BlueprintCallable)
    void UnlockOSSAchievement(const FName AchievementName);
    
    UFUNCTION(BlueprintCallable)
    void ShowLoginUI(const int32 _controllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOSSStats(const FName StatsName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOSSRichPresence(const FString& PresenceString);
    
    UFUNCTION(BlueprintCallable)
    void ResetOSSFirstLoggedin();
    
    UFUNCTION(BlueprintCallable)
    void RefreshPlayOnlinePrivilege();
    
    UFUNCTION(BlueprintCallable)
    void ReadOSSFriendsList();
    
    UFUNCTION(BlueprintCallable)
    bool QueryBlockedPlayersWithDelegate(const FOnQueryBlockedListUpdated& OnQueryBlockedListUpdated);
    
    UFUNCTION(BlueprintCallable)
    bool QueryBlockedPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnWindowFocusChanged(bool _bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void OnEOSEvent(EELEOSEventType EventType, EELEOSEventResult EventResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlatformLoggedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOSSFirstLoggedin() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBlockedUser(const FString& ProductID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredPatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOnlineAgeRestriction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanUseUserCrossPlayPrivilegeError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanUseUserCrossPlayPrivilege(const bool ShowWarningUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanUseUGCPrivilegeError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanUseUGCPrivilege(const bool ShowWarningUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanPlayPrivilege();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanPlayOnlinePrivilegeError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanPlayOnlinePrivilege(const bool ShowWarningUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanJoinPartyPrivilege(const bool ShowWarningUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanCommunicateOnlinePrivilegeError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanCommunicateOnlinePrivilege(const bool ShowWarningUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCanAccessOnlinePrivilege() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyPrivilegeError();
    
    UFUNCTION(BlueprintCallable)
    ELOSSFriendStatus GetOSSFriendStatusByProductUserId(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    void GetOSSFriendsProductUserIdList(TArray<FString>& OutFriendArray);
    
    UFUNCTION(BlueprintCallable)
    void GetOSSFriendsList(TArray<FELFriendInfo>& OutFriendArray, EELFriendsListType FriendsListType, int32 SortFlag);
    
    UFUNCTION(BlueprintCallable)
    bool GetOSSFriendNameByProductUserId(const FString& ProductUserID, FString& FriendName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOSSAccountNickName();
    
    UFUNCTION(BlueprintCallable)
    bool GetBlockedPlayers(TMap<FString, FString>& OutBlockedMap);
    
    UFUNCTION(BlueprintCallable)
    void AsyncReadOSSFriendsList(const FOnReadOSSFriendsList& OnReadOSSFriendsList);
    
    UFUNCTION(BlueprintCallable)
    void AsyncQueryUserPrivileges(const FOnQueryPrivileges& OnQueryUserPrivileges, EUserPrivilegeBit UserPrivilegeBit);
    
    UFUNCTION(BlueprintCallable)
    void AsyncQueryCanOnlinePlayPrivilege(const FOnQueryPrivilege& OnQueryPrivilege, bool CheckPSPlus);
    
    UFUNCTION(BlueprintCallable)
    void AsyncHasCanPlayOnlinePrivilege(const FOnCanPlayOnlinePrivilege& OnCanPlayOnlinePrivilege, const bool ShowWarningUI);
    
    UFUNCTION(BlueprintCallable)
    void AsyncHasCanCommunicateOnlinePrivilege(const FOnCanPlayOnlinePrivilege& OnCanCommunicateOnlinePrivilege);
    
};

