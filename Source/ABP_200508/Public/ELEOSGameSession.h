#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPlatformType.h"
#include "WrestlerNameText.h"
#include "EELOnlineModeType.h"
#include "EEOSCommunityEvent.h"
#include "EEOSNatP2PCachedTransferEvent.h"
#include "EEOSNatP2PEvent.h"
#include "EEOSSessionGameEventType.h"
#include "EEOSSessionP2PAFGameFlowStep.h"
#include "EEOSSessionP2PDataSharingEvent.h"
#include "EEOSSessionP2PEvent.h"
#include "EOSSessionSettings.h"
#include "EELActivityUpdateMatchStatus.h"
#include "EELEOSSessionEventResult.h"
#include "EELEOSSessionEventType.h"
#include "EELEOSSessionState.h"
#include "EELEOSSessionUserEventType.h"
#include "ELActivity_InitInfo.h"
#include "ELActivity_MatchPlayerInfo.h"
#include "ELActivity_MatchResultPlayerInfo.h"
#include "ELEOSSearchSettings.h"
#include "ELEOSSessionSearchResultWrapper.h"
#include "ELEOSSessionWrestlerData.h"
#include "ESessionPlayerStateNameType.h"
#include "ESessionPlayerStateType.h"
#include "SessionGamePlayerDataBP.h"
#include "SessionPlayerStateDataBP.h"
#include "UserProfileColorParam.h"
#include "ELEOSGameSession.generated.h"

class UELEOSGameChatSession;
class UEOSAntiCheatClient;
class UEOSAttribute;
class UEOSCommunityBase;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSManager;
class UEOSNatP2P;
class UEOSNatP2PBinary;
class UEOSNatP2PCachedTransfer;
class UEOSNatP2PSplitQueueTransfer;
class UEOSSearchResultsBase;
class UEOSSession;
class UEOSSessionInfo;
class UEOSSessionP2P;
class UEOSSessionP2PAFBindPlayers;
class UEOSSessionP2PAFDataSharing;
class UEOSSessionP2PAFGameFlowManager;
class UEOSSessionP2PMemberInfoPacket;
class UEOSSessionP2PSynchronizedPacketBase;
class UEOSSessionSearchResults;
class UEOSSessionUser;
class UEOSSessionUserPacketMap;
class UEOSUser;
class UEOSUserBase;

UCLASS(Blueprintable)
class UELEOSGameSession : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateNatP2PTransfer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionUpdate, UEOSCommunityInfoBase*, _CommunityInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionSearchStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionSearchResult, FELEOSSessionSearchResultWrapper, _Results);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionSearchEnd, FELEOSSessionSearchResultWrapper, _Results);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionSearchCancel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionP2PDestroyDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionMemberUpdate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSessionLeave, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _User);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionJoin, UEOSCommunityUserBase*, _User);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionGameStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionGameEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionDisconnectedPlayer, const FString&, _PUID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionDestroy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionCreate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReceivedPositionData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReceivedPartyData, UEOSUserBase*, _UserBase, UObject*, _Object);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReceivedNotify, UEOSUserBase*, _UserBase, UObject*, _Object);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNatP2PTimeout);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNatP2PCachedTransferDisconnectedUser, UEOSUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNatP2PCachedTransferConnectedUser, UEOSUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetNatP2PLatency, float, _Latency);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeStartableSessionSearch, bool, Startable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSSessionUserEvent, EELEOSSessionUserEventType, EventType, EELEOSSessionEventResult, EventResult, const FString&, ProductUserID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSSessionEvent, EELEOSSessionEventType, EventType, EELEOSSessionEventResult, EventResult);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSManager* EOSManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUser* EOSUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAntiCheatClient* EOSAntiCheatClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSession* EOSSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionInfo* EOSSessionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionSearchResults* EOSSessionSearchResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionP2P* EOSSessionP2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2P* EOSNatP2PSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2P* EOSNatP2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2PSplitQueueTransfer* EOSNatP2PTransfer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2PSplitQueueTransfer* EOSNatP2PTransferRPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionP2PAFBindPlayers* EOSSessionP2PAFBindPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionP2PAFDataSharing* EOSSessionP2PAFDataSharing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionP2PAFGameFlowManager* EOSSessionP2PAFGameFlowManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSGameChatSession* ELEOSGameChatSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELEOSSearchSettings SearchSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoCreateSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSearching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionSettings AutoCreateSessionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionSettings SessionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SessionAutoStartGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SessionSearchCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Cancelable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SessionRequestStartGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> SessionPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSessionGamePlayerDataBP> SessionPlayerDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSessionPlayerStateDataBP> SessionPlayerStateDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> SessionPlayerArenaDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FELEOSSessionWrestlerData> SessionPlayerWrestlerDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CurrentWrestlerDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> SessionPlayerMatchRuleDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SortedPlayerUserIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InitialPlayerUserIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DisconnectedPlayerUserIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionGamePlayerDataBP SessionGamePlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EOSSessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DirtyPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedsUpdatePlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EACSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSSessionUser*> EACRegisteredUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PlayerPositionRanked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ReceivePositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableBuildVersionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SelectNPCCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> PrivateMatchPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> PrivateMatchInitialPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlineModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELOnlineModeType ELOnlineModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredWrestlerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SendPlayerDataInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SessionRequestStartGameInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestStartGameSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResendPlayerDataFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResendPlayerStateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestResendPlayerDataFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestResendPlayerStateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestStartGameSessionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResendPlayerDataTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResendPlayerStateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestResendPlayerDataTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestResendPlayerStateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllReadyPlayerDataTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestUpateLatencyTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestUpateLatencyInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float P2PTimeoutLatency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 P2PTimeoutRetryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ResendPlayerStateTargetRemoteUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RequestResendPlayerStateTargetRemoteUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ResendPlayerDataTargetRemoteUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RequestResendPlayerDataTargetRemoteUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> SanitizeRequestWrestlerDataNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> SanitizeRequestWrestlerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELEOSSessionState SessionState;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionEvent OnSessionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionUserEvent OnSessionUserEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionCreate OnSessionCreate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionCreate OnSessionCreateErr;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionDestroy OnSessionDestroy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionP2PDestroyDelegate OnSessionP2PDestroyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionJoin OnSessionJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionJoin OnSessionJoinErr;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionJoin OnSessionJoinMember;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionLeave OnSessionLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionLeave OnSessionLeaveMember;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSearchStart OnSessionSearchStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSearchResult OnSessionSearchResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSearchEnd OnSessionSearchEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSearchCancel OnSessionSearchCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionGameStart OnSessionGameStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionGameStart OnSessionGameStartErr;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionGameEnd OnSessionGameEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionDisconnectedPlayer OnDisconnectedPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMemberUpdate OnSessionMemberUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionUpdate OnSessionUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedPartyData OnReceivedPartyData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedNotify OnReceivedNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNatP2PCachedTransferConnectedUser OnNatP2PCachedTransferConnectedUser;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNatP2PCachedTransferDisconnectedUser OnNatP2PCachedTransferDisconnectedUser;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateNatP2PTransfer OnUpdateNatP2PTransfer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedPositionData OnReceivedPositionData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetNatP2PLatency OnGetNatP2PLatency;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeStartableSessionSearch OnChangeStartableSessionSearch;
    
    UELEOSGameSession();
private:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerList(bool bRemove);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerData(const FSessionGamePlayerDataBP& PlayerData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMPARecentPlayer(const FString& _externalUserId);
    
    UFUNCTION(BlueprintCallable)
    bool ShowPacketQueueInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetWrestlerList(const TArray<UObject*>& WrestlerList);
    
    UFUNCTION(BlueprintCallable)
    void SetWrestlerData(UObject* WrestlerData);
    
    UFUNCTION(BlueprintCallable)
    bool SetWeaponDecalToPlayerData(int32 Decal, int32 DecalSymbol, const FUserProfileColorParam& ColorParam);
    
    UFUNCTION(BlueprintCallable)
    bool SetUsingMultiplayerFeature(bool bUsing);
    
    UFUNCTION(BlueprintCallable)
    bool SetTeamMembersToPlayerData(const TArray<FString>& TeamMemberPUIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectNPCCharacter(int32 _Number, UObject* _WrestlerSelectParam);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredWrestlerNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerWrestlerData(const FString& ProductUserID, UObject* WrestlerData, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerWinLoseCountToPlayerData(const TArray<int32>& Counts);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerRankToPlayerData(int32 PlayerRank, int32 PlayerRankPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerPositionRanked(TArray<int32> _Array);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerPosition(TArray<int32> _Array);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMatchRuleData(const FString& ProductUserID, UObject* MatchRuleData);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerIconToPlayerData(int32 PlayerIcon, int32 BGIcon, const FUserProfileColorParam& ColorParam);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerIconsToPlayerData(const TArray<int32>& Icons);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerData(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerArenaData(const FString& ProductUserID, UObject* ArenaData);
    
    UFUNCTION(BlueprintCallable)
    void SetP2PTimeoutRetryCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetP2PTimeoutLatency(float Latency);
    
    UFUNCTION(BlueprintCallable)
    void SetP2PTimeoutCheckInterval(float Interval);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineModeType(int32 _OnlineModeType);
    
    UFUNCTION(BlueprintCallable)
    void SetNPCPlayerData(int32 _NPCNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetNeedsUpdatePlayerList(bool NeedsUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPacketSize(int32 Size);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchRuleData(UObject* MatchRuleData);
    
    UFUNCTION(BlueprintCallable)
    bool SetGameVoiceChatEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBuildVersionCheck(bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetELOnlineModeType(EELOnlineModeType _OnlineModeType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWrestlerData(UObject* Data, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetArenaData(UObject* ArenaData);
    
private:
    UFUNCTION(BlueprintCallable)
    bool SendSessionGameFlowStep(EEOSSessionP2PAFGameFlowStep GameFlowStep);
    
    UFUNCTION(BlueprintCallable)
    bool SendSessionGameEvent(UEOSSessionP2P* InSessionP2P, EEOSSessionGameEventType InGameEventType);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SendPositionData();
    
private:
    UFUNCTION(BlueprintCallable)
    bool SendPlayerWrestlerData(UEOSSessionP2P* InSessionP2P);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SendPlayerStateData(ESessionPlayerStateNameType StateName, ESessionPlayerStateType State);
    
private:
    UFUNCTION(BlueprintCallable)
    bool SendPlayerMatchRuleData(UEOSSessionP2P* InSessionP2P);
    
    UFUNCTION(BlueprintCallable)
    bool SendPlayerData(UEOSSessionP2P* InSessionP2P);
    
    UFUNCTION(BlueprintCallable)
    bool SendPlayerArenaData(UEOSSessionP2P* InSessionP2P);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SendP2PLatencyPacket();
    
private:
    UFUNCTION(BlueprintCallable)
    bool SearchSessionInternal(const TArray<UEOSAttribute*>& Attributes, int32 MaxResults, bool AutoJoinSession, int32 RetryCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void SearchSessionInitParam();
    
    UFUNCTION(BlueprintCallable)
    bool SearchSession(const TArray<UEOSAttribute*>& Attributes, int32 MaxResults, bool AutoJoinSession, int32 RetryCount);
    
    UFUNCTION(BlueprintCallable)
    bool ResendPlayerData();
    
    UFUNCTION(BlueprintCallable)
    bool RequestStartGame();
    
    UFUNCTION(BlueprintCallable)
    bool RequestLeaveSession(const FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    bool RequestJoinSession(UEOSCommunityInfoBase* CommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RequestEndGame();
    
    UFUNCTION(BlueprintCallable)
    bool RequestDestroySession();
    
    UFUNCTION(BlueprintCallable)
    bool RequestCreateSession(const FEOSSessionSettings& Settings, bool _AutoGameStart);
    
    UFUNCTION(BlueprintCallable)
    void QuitMatch();
    
    UFUNCTION(BlueprintCallable)
    bool QuickMatchJoin(const FEOSSessionSettings& Settings, const TArray<UEOSAttribute*>& _SearchSettings, int32 MaxResults);
    
    UFUNCTION(BlueprintCallable)
    bool QuickMatchCreate(const FEOSSessionSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    bool QuickMatchCancel(bool _Force);
    
    UFUNCTION(BlueprintCallable)
    bool QuickMatch(const FEOSSessionSettings& _Settings, const TArray<UEOSAttribute*>& _SearchSettings, int32 MaxResults);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSessionSearchResultEvent(UEOSCommunityBase* CommunityBase, UEOSSearchResultsBase* SearchResultsBase);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionP2PEvent(EEOSSessionP2PEvent InSessionP2PEvent, UEOSSessionP2P* InSessionP2P, UEOSSessionUserPacketMap* InSessionUserPacketMap);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionP2PDestroy(UEOSSession* Session, UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionP2PDataShared(EEOSSessionP2PDataSharingEvent InDataSharingEvent, UEOSSessionP2P* InSessionP2P, UEOSSessionP2PSynchronizedPacketBase* InCurrent, UEOSSessionP2PSynchronizedPacketBase* InReceived, const FString& InProductUserID);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionP2PDataReceived(UEOSSessionP2P* InSessionP2P, UEOSSessionP2PSynchronizedPacketBase* InCurrent, UEOSSessionP2PSynchronizedPacketBase* InReceivedAndReply, const FString& ProductUserID, bool Overwrite);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionP2PCreated(UEOSSession* Session, UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionCommunityEvent(EEOSCommunityEvent CommunityEvent, UEOSCommunityBase* Community, UEOSCommunityInfoBase* CommunityInfoBase, UEOSCommunityUserBase* CommunityUserBase);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeTextWrestlerDataNPC(const FWrestlerNameText& WrestlerNameText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeTextWrestlerData(const FWrestlerNameText& WrestlerNameText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveSessionObject(UEOSNatP2PCachedTransfer* Transfer, UEOSUserBase* UserBase, UEOSNatP2PBinary* P2PBinary);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMemberUpdated(UEOSSessionP2P* InSessionP2P, UEOSSessionP2PMemberInfoPacket* InSessionP2PMemberInfoPacket);
    
    UFUNCTION(BlueprintCallable)
    void OnNatP2PEvent(EEOSNatP2PEvent InEOSP2PEvent, UEOSNatP2P* InEOSNatP2P, UEOSUserBase* InEOSUserBase);
    
    UFUNCTION(BlueprintCallable)
    void OnNatP2PCachedTransferEvent(EEOSNatP2PCachedTransferEvent _Event, UEOSNatP2PCachedTransfer* _CachedTransfer, UEOSUserBase* _UserBase);
    
public:
    UFUNCTION(BlueprintCallable)
    bool NeedToSelectNPCCharacter(int32 _SelectorPlayerIndex, int32 _Position, bool _SelectorIsHost);
    
    UFUNCTION(BlueprintCallable)
    void MarkRequestStartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPlayerIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingMultiplayerFeature();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectatorCharacterIndex(int32 CharacterIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionSearching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrivateMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatedOrJoinedSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerStateMatched(ESessionPlayerStateNameType StateName, ESessionPlayerStateType State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerStateGreaterOrEqual(ESessionPlayerStateNameType StateName, ESessionPlayerStateType State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllPlayerStateMatchedInList(ESessionPlayerStateNameType StateName, const TArray<ESessionPlayerStateType>& StateList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllPlayerStateMatched(ESessionPlayerStateNameType StateName, ESessionPlayerStateType State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllPlayerStateGreaterOrEqual(ESessionPlayerStateNameType StateName, ESessionPlayerStateType State) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasTimeoutSessionP2P();
    
    UFUNCTION(BlueprintCallable)
    bool GetWeaponDecal(const FString& ProductUserID, int32& Decal, int32& DecalSymbol, FUserProfileColorParam& ColorParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetVoiceChatMembers(const TArray<FString>& MemberProductIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUserIDByIndex(int32 PlayerIndex, FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUserIDByCharacterIndex(int32 CharacterIndex, FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpectatorUserID(TArray<FString>& ProductUserIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpectatorNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSSessionSearchResults* GetSessionSearchResults() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSessionP2PSocketID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSSessionP2P* GetSessionP2P() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSelectNPCCharacter(const FString& _PUID, int32 _Number, UObject* _SelectNPCCharacter);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerWrestlerNum(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerWrestlerList(const FString& ProductUserID, TArray<UObject*>& Array);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetPlayerWrestlerDataAtIndex(const FString& ProductUserID, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerWrestlerDataArray(TArray<UObject*>& Array);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetPlayerWrestlerData(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerWinLoseCounts(const FString& ProductUserID, TArray<int32>& Counts);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerValidWrestlerNum(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESessionPlayerStateType GetPlayerStateByIndex(int32 PlayerIndex, ESessionPlayerStateNameType StateName) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerRank(const FString& ProductUserID, int32& Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerRandomNumber(int32 PlayerIndex, int32 RandomNumberIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerPUIDByPlayerIndex(int32 _Index, FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPlayerPositionRankedArray();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerPositionArray(TArray<int32>& _PlayerPosition);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerPlatform(const FString& ProductUserID, EPlatformType& Platform);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerName(const FString& ProductUserID, FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetPlayerMatchRuleData(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerIndexToPlayerPosition(int32 _PlayerIndex, int32& _PlayerPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerIcons(const FString& ProductUserID, TArray<int32>& Icons);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerIcon(const FString& ProductUserID, int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerDataArraySortedByName(TArray<FSessionGamePlayerDataBP>& Array) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerDataArray(TArray<FSessionGamePlayerDataBP>& Array) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerData(FSessionGamePlayerDataBP& PlayerData);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerAllWrestlerDataArray(TArray<UObject*>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetP2PTimeoutRetryCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetP2PTimeoutLatency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwningPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwningCharacterIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnlineModeType() const;
    
    UFUNCTION(BlueprintCallable)
    void GetOnlineModePlayerPositionArray(TArray<int32>& _Array);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNPCCharacterSelectorPlayerIndex(int32 _Number, int32 _OwnerPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNeedsUpdatePlayerList() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMaxSessionP2PLatency();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxPacketSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInitialPlayerUserIDList(TArray<FString>& PlayerUserIDList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitialPlayerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEOSSortedPlayerUserIDList(TArray<FString>& PlayerUserIDList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEOSSessionPlayerMap(TMap<int32, FString>& PlayerMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEOSSessionPlayerDataMap(TMap<FString, FSessionGamePlayerDataBP>& PlayerDataMap) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEOSSessionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSSessionInfo* GetEOSSessionInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSSession* GetEOSSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSNatP2PSplitQueueTransfer* GetEOSNatP2PTransferRPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSNatP2PSplitQueueTransfer* GetEOSNatP2PTransfer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSNatP2P* GetEOSNatP2P() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSSessionP2PAFGameFlowManager* GetEOSGameFlowManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSCommunityInfoBase* GetEOSCommunityInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableBuildVersionCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELOnlineModeType GetELOnlineModeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDisconnectedPlayerUserIDList(TArray<FString>& PlayerUserIDList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetCurrentWrestlerData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPlayerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPlayerIndex(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentOwningPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentOwningManagementIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetCurrentMatchRuleData() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* GetCurrentArenaData(FString& SelectArenaUserPUID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterIndexByPlayerIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterIndex(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllMatchRuleData(TArray<UObject*>& Rules) const;
    
    UFUNCTION(BlueprintCallable)
    bool FindPlayerDataBP(const FString& ProductUserID, FSessionGamePlayerDataBP& PlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindPlayerData(const FString& ProductUserID, FSessionGamePlayerDataBP& PlayerData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsDisconnectedPlayerUserID(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerPosition();
    
    UFUNCTION(BlueprintCallable)
    void AddDisconnectedPlayerUserID(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    void Activity_UpdateMatchStatus(const EELActivityUpdateMatchStatus& _Status);
    
    UFUNCTION(BlueprintCallable)
    void Activity_RestartMatch(const TArray<FELActivity_MatchPlayerInfo>& _MatchPlayerInfos);
    
    UFUNCTION(BlueprintCallable)
    void Activity_LeaveMatch(const FString& _leaveProductUserId);
    
    UFUNCTION(BlueprintCallable)
    void Activity_JoinMatch(const FString& _joinProductUserId, const FString& _joinExternalUserId);
    
    UFUNCTION(BlueprintCallable)
    void Activity_DestroyMatch(const TArray<FELActivity_MatchResultPlayerInfo>& _productUsers);
    
    UFUNCTION(BlueprintCallable)
    void Activity_CreateMatch(const FELActivity_InitInfo& InActivityInfo);
    
};

