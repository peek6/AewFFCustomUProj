#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "EEOSAntiCheatActionReason.h"
#include "EEOSAntiCheatClientViolationType.h"
#include "EEOSApiResult.h"
#include "EEOSApplicationStatus.h"
#include "EEOSAuthEvent.h"
#include "EEOSExternalCredentialType.h"
#include "EEOSFriendEvent.h"
#include "EEOSGeneralEvent.h"
#include "EEOSNetworkStatus.h"
#include "EEOSObjectType.h"
#include "EEOSPresenceEvent.h"
#include "EEOSResult.h"
#include "EEOSTitleStorageEvent.h"
#include "EEOSUserEvent.h"
#include "EOSTitleStorageProgress.h"
#include "EELApplicationStatus.h"
#include "EELEOSApiType.h"
#include "EELNetworkConnectionStatus.h"
#include "EELNetworkStatus.h"
#include "EELNetworkType.h"
#include "EELOnlineNotifyAction.h"
#include "EELServerType.h"
#include "EELYGS2SetupStep.h"
#include "ELEOSGameSessionMatchingParam.h"
#include "EOSDisconnectEventDelegate.h"
#include "EOSEventDelegate.h"
#include "EOSTitleStorageSSModeServiceParamDispatcherDelegate.h"
#include "EOSUpdateResponseDateTimeDelegate.h"
#include "SSMode_EOSTitleStorageFileParam.h"
#include "Templates/SubclassOf.h"
#include "ELEOSManager.generated.h"

class UELEOSDebug;
class UELEOSFriend;
class UELEOSGameChatSession;
class UELEOSGameSession;
class UELEOSGameSessionMatching;
class UELEOSLobby;
class UELEOSManagerUtility;
class UELEOSTitleStorageDownloadProgress;
class UELNetworkObserverBase;
class UELOnlineNews;
class UELOnlineRankCalculator;
class UELSSModeServiceParam;
class UEOSAntiCheatClient;
class UEOSAntiCheatDedicatedServer;
class UEOSApiBase;
class UEOSAuth;
class UEOSCommon;
class UEOSFriend;
class UEOSIDs;
class UEOSInternalIssueNotify;
class UEOSLeaderboard;
class UEOSManager;
class UEOSPresence;
class UEOSPresenceBase;
class UEOSReports;
class UEOSSanctions;
class UEOSStats;
class UEOSTitleStorage;
class UEOSTitleStorageBase;
class UEOSUser;
class UEOSUserBase;
class UEOSUserContents;
class UEOSUserManager;
class UEOSVoice;

UCLASS(Blueprintable, Config=Game)
class UELEOSManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunningLoginFlow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSManager* EOSManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAuth* EOSAuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserManager* EOSUserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUser* EOSUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserContents* EOSUserContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSInternalIssueNotify* EOSInternalIssueNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSPresence* EOSPresence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLeaderboard* EOSLeaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSStats* EOSStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSGameSession* ELGameSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSLobby* ELEOSLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSGameChatSession* ELEOSGameChatSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSFriend* ELEOSFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAntiCheatClient* EOSAntiCheatClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAntiCheatDedicatedServer* EOSAntiCheatServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSReports* EOSReports;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSanctions* EOSSanctions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSVoice* EOSVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSTitleStorage* EOSTitleStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSTitleStorageDownloadProgress* ELEOSTitleStorageProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSTitleStorageDownloadProgress* ELEOSTitleStorageProgressRequireFiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSApiBase* EOSApiBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELOnlineNews* ELOnlineNews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSGameSessionMatching* ELEOSGameSessionMatching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELOnlineRankCalculator* RankCalculator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELEOSManagerUtility> ELEOSManagerUtilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSManagerUtility* ELEOSManagerUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoggingin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EOSAuthName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EOSServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PresenceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSGeneralEvent LastGeneralEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSGeneralEvent LastGeneralErrorEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckEOSServicesTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ReconnectEOSTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELEOSGameSessionMatchingParam ELEOSGameSessionMatchingParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExternalLoginUserControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLinkEAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELNetworkObserverBase* NetworkObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSDebug* ELEOSDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledCrossPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledCheckEOSServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetLastResponseDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastResponseDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELYGS2SetupStep ELYGS2SetupStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ELEOSManagerUtility_Subclass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ELEOSManagerUtility_BpIns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSModeServiceParam* SSModeServiceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELOnlineNotifyAction OnlineNotifyAction_NextTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> LastErrors;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSEvent OnEOSEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSDisconnectEvent OnEOSDisconnectEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSUpdateResponseDateTime OnUpdateResponseDateTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSTitleStorageSSModeServiceParamDispatcher OnUpdateSSModeServiceParamDispatcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMode_EOSTitleStorageFileParam> SSMode_EOSTitleStorageFileParams;
    
public:
    UELEOSManager();
    UFUNCTION(BlueprintCallable)
    void UpdateEOS();
    
    UFUNCTION(BlueprintCallable)
    bool UnlinkConnectAccount();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartReconnectEOSTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartCheckEOSServicesTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ShowP2PPacketQueueInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetUseEAS(bool bUse);
    
    UFUNCTION(BlueprintCallable)
    bool Setup(uint8 InstanceId);
    
    UFUNCTION(BlueprintCallable)
    void SetRunningLoginFlowFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SetNetworkStatus(EEOSNetworkStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void SetLoginUserDisplayName(const FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    void SetLoginExternalAccountId(const FString& AccountId);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetLastResponseDateTime(const FDateTime& DateTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLastError(EELEOSApiType Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetCheatPenalty();
    
    UFUNCTION(BlueprintCallable)
    bool SetApplicationStatus(EEOSApplicationStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void ResetLocalPlayerFirstLoggedin();
    
    UFUNCTION(BlueprintCallable)
    bool RequestLinkEpicAccount();
    
    UFUNCTION(BlueprintCallable)
    bool RequestCheckEOSServer();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseEOS();
    
private:
    UFUNCTION(BlueprintCallable)
    void ReconnectEOS();
    
    UFUNCTION(BlueprintCallable)
    bool PostConnectedSetup();
    
    UFUNCTION(BlueprintCallable)
    bool PostCheckTitleStorageSetup(bool bTitleStorageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnUserEvent(EEOSUserEvent InEOSUserEvent, UEOSUserBase* InEOSUserBase);
    
    UFUNCTION(BlueprintCallable)
    void OnReadTitleStorageForServer(EEOSTitleStorageEvent EOSTitleStorageEvent, UEOSTitleStorageBase* EOSTitleStorageBase, const FEOSTitleStorageProgress& EOSTitleStorageProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnReadTitleStorage(EEOSTitleStorageEvent EOSTitleStorageEvent, UEOSTitleStorageBase* EOSTitleStorageBase, const FEOSTitleStorageProgress& EOSTitleStorageProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnPresenceEvent(EEOSPresenceEvent EOSPresenceEvent, UEOSPresenceBase* EOSPresenceBase, const FString& FriendEpicAccountID);
    
public:
    UFUNCTION(BlueprintCallable)
    bool OnNotifyPlatformAction(EELOnlineNotifyAction Action);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnIntenralIssueOccurredCallback(EEOSResult Result, EEOSObjectType Type, const UEOSCommon* COMMON, const FString& File, int32 Line);
    
    UFUNCTION(BlueprintCallable)
    void OnGeneralEvent(EEOSGeneralEvent GeneralEvent, EEOSObjectType EOSObjectType, UEOSCommon* EOSCommon);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendEvent(EEOSFriendEvent FriendEvent, UEOSFriend* Friend, UEOSUserBase* FriendUser);
    
    UFUNCTION(BlueprintCallable)
    void OnEOSAuthEvent(EEOSAuthEvent EAuthEvent, UEOSAuth* NewEOSAuth);
    
    UFUNCTION(BlueprintCallable)
    void OnEOSAPIBaseEvent(bool Success, EEOSApiResult ApiResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAntiCheatIntegrityViolated(EEOSAntiCheatClientViolationType ViolationType, const FString& StatusMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnAntiCheatClientActionRequired(UEOSIDs* UserId, EEOSAntiCheatActionReason ActionReason, const FString& ActionReasonString);
    
public:
    UFUNCTION(BlueprintCallable)
    void NetworkTypeChanged(EELNetworkType NetworkType);
    
    UFUNCTION(BlueprintCallable)
    void NetworkStatusChanged(EELNetworkStatus NetworkStatus);
    
    UFUNCTION(BlueprintCallable)
    void NetworkConnectionStatusChanged(EELNetworkConnectionStatus NetworkConnectionStatus, EELServerType ServerType);
    
    UFUNCTION(BlueprintCallable)
    void Logout();
    
    UFUNCTION(BlueprintCallable)
    bool LoginPortal();
    
    UFUNCTION(BlueprintCallable)
    bool LoginExternalAuthWithBinaryToken(int32 LoginControllerId, EEOSExternalCredentialType Type, const TArray<uint8>& Token);
    
    UFUNCTION(BlueprintCallable)
    bool LoginExternalAuth(int32 LoginControllerId, EEOSExternalCredentialType Type, const FString& Token);
    
    UFUNCTION(BlueprintCallable)
    bool LoginDevAuthTool(const FString& Server, const FString& AuthName);
    
    UFUNCTION(BlueprintCallable)
    bool Login(const FString& Server, const FString& AuthName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAntiCheatClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAntiCheatAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningLoginFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnline(bool bSkipEOS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerFirstLoggedin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecuteSetupStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEOSLogin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompletedSetupStep() const;
    
    UFUNCTION(BlueprintCallable)
    void InvokeEventP2PTimeout();
    
    UFUNCTION(BlueprintCallable)
    void InvokeEventNoConnection();
    
    UFUNCTION(BlueprintCallable)
    bool HasConnectableYGS2ServerParam();
    
    UFUNCTION(BlueprintCallable)
    FString GetTitleStorageOnlineVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSTitleStorageDownloadProgress* GetTitleStorageDownloadProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSTitleStorage* GetTitleStorage() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetQuitGameOnFailedEAC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetP2PTimeoutLatency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELOnlineRankCalculator* GetOnlineRankCalculator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELOnlineNews* GetOnlineNews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSNetworkStatus GetNetworkStatus() const;
    
    UFUNCTION(BlueprintCallable)
    UELNetworkObserverBase* GetNetworkObserver();
    
    UFUNCTION(BlueprintCallable)
    FString GetLoginExternalAccountId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLastServerIDForYGS2();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLastServerIDForEOS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetLastResponseDateTime(FDateTime& DateTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSGeneralEvent GetLastGeneralEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSGeneralEvent GetLastGeneralErrorEvent() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastError(EELEOSApiType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSVoice* GetEOSVoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSUserManager* GetEOSUserManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSUserContents* GetEOSUserContents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSUser* GetEOSUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSStats* GetEOSStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEOSServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSSanctions* GetEOSSanctions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSReports* GetEOSReports() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSPresence* GetEOSPresence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSManager* GetEOSManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSLeaderboard* GetEOSLeaderboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSGameSession* GetEOSGameSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSFriend* GetEOSFriend() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEOSAuthToken(FString& Token);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEOSAuthName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSAuth* GetEOSAuth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSAntiCheatDedicatedServer* GetEOSAntiCheatServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSAntiCheatClient* GetEOSAntiCheatClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableCrossPlay() const;
    
    UFUNCTION(BlueprintCallable)
    UELSSModeServiceParam* GetELSSModeServiceParam();
    
    UFUNCTION(BlueprintCallable)
    UObject* GetELEOSManagerUtilityBpIns();
    
    UFUNCTION(BlueprintCallable)
    UELEOSManagerUtility* GetELEOSManagerUtility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSLobby* GetELEOSLobby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELEOSGameSessionMatchingParam GetELEOSGameSessionMatchingParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSGameSessionMatching* GetELEOSGameSessionMatching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSGameSession* GetELEOSGameSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSGameChatSession* GetELEOSGameChatSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSFriend* GetELEOSFriend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSDebug* GetELEOSDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConfigPingUpdateInterval();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConfigMatchingTimeout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSApplicationStatus GetApplicationStatus() const;
    
    UFUNCTION(BlueprintCallable)
    bool ExternalConnectLogin();
    
private:
    UFUNCTION(BlueprintCallable)
    void EventLogout();
    
public:
    UFUNCTION(BlueprintCallable)
    bool DeleteDedicatedServertoEasyAntiCheat();
    
    UFUNCTION(BlueprintCallable)
    bool CreateDedicatedServertoEasyAntiCheat();
    
    UFUNCTION(BlueprintCallable)
    EEOSGeneralEvent ClearLastGeneralErrorEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void ClearEOSParameter();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ClearCheatPenalty();
    
private:
    UFUNCTION(BlueprintCallable)
    bool CheckTitleStorage();
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckEOSServices();
    
    UFUNCTION(BlueprintCallable)
    void CallLoginPortalAfterEOSAPIBaseEvent();
    
    UFUNCTION(BlueprintCallable)
    void ApplicationStatusChanged(EELApplicationStatus AppStatus);
    
};

