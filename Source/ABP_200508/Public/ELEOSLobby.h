#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPlatformType.h"
#include "WrestlerNameText.h"
#include "EEOSCommunityEvent.h"
#include "EEOSCommunityPermission.h"
#include "EEOSLobbyUserAudioStatus.h"
#include "EEOSLobbyUserMuteFlag.h"
#include "EEOSNatP2PCachedTransferEvent.h"
#include "EEOSNatP2PEvent.h"
#include "LobbyInvite.h"
#include "ConsoleInviteEventHandlerDelegate.h"
#include "EELEOSEventResult.h"
#include "EELEOSEventType.h"
#include "EELEOSLobbyPacketRequestType.h"
#include "EELEOSLobbyPacketType.h"
#include "ELobbyCheckStepForHost.h"
#include "ELobbyInviteError.h"
#include "ELobbyMPAStatus.h"
#include "ELobbyPacketMenuInputType.h"
#include "ELobbyPacketNotifyType.h"
#include "ELobbyPacketPrivateMatchNotify.h"
#include "ELobbyPrivateMatchStatus.h"
#include "ELobbyProcStatus.h"
#include "ELobbyProcTypes.h"
#include "EOSLobbyEvent2Delegate.h"
#include "EOSLobbyJoinErrorDelegate.h"
#include "EOSLobbyReceiveMessageEventDelegate.h"
#include "EOSLobbyReceivePacketEventDelegate.h"
#include "LobbyCharacterData.h"
#include "LobbyChatLogData.h"
#include "LobbyPartyChatLog.h"
#include "LobbyPlayerIndex.h"
#include "LobbyWrestlerData.h"
#include "UserProfileColorParam.h"
#include "ELEOSLobby.generated.h"

class UELEOSGameSession;
class UELEOSLobbyEvent;
class UELEOSLobbyMiniGameInfo;
class UELEOSLobbyMiniGameOwnerSelectInfo;
class UELEOSLobbyWrestlerDataMap;
class UELNetworkObserverBase;
class UEOSAttribute;
class UEOSCommunityBase;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSLobby;
class UEOSLobbyInfo;
class UEOSManager;
class UEOSNatP2P;
class UEOSNatP2PBinary;
class UEOSNatP2PCachedTransfer;
class UEOSNatP2PSplitQueueTransfer;
class UEOSSearchResultsBase;
class UEOSUser;
class UEOSUserBase;

UCLASS(Blueprintable)
class UELEOSLobby : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatUnsupported, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatLeft, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatJoined, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatEnabled, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatDisconnected, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatDisabled, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatConnected, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnmuteVoice, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnblockVoice, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStopSpeaking, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStatusUpdatedOnJoinedStep, ELobbyCheckStepForHost, LobbyCheckStepForHost, UEOSCommunityInfoBase*, _CommunityInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartSpeaking, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSetMaxMember, UEOSCommunityInfoBase*, _CommunityInfo, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnQueryInviteResponse);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPromoteOther, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPromoteMe, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMuteVoiceErr, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMuteVoice, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyWrestlerDataReceive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbySearchError, const FLobbyInvite&, LobbyInvite, ELobbyInviteError, LobbyInviteError);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbySearch, UEOSSearchResultsBase*, _searchResults);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyMemberUpdate, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyMemberLeft, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyMemberJoin, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyMemberDisconnect, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyLeave, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyKickedOther, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyKickedMe, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyJoin, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInviteReject, UEOSCommunityInfoBase*, _CommunityInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyInviteReceive, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyDestroy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyCreate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyChangeOwner, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLeaderChange, const FString&, _lobbyID, const FString&, _ProductUserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetPlayerSessionUserID, const FString&, _ProductUserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlockVoiceErr, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlockVoice, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSManager* EOSManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLobby* EOSLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLobbyInfo* EOSLobbyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLobbyInfo* LastestInvite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUser* EOSUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSGameSession* EOSGameSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2P* EOSNatP2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2PSplitQueueTransfer* EOSNatP2PTransfer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SocketID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLobbyCharacterData> LobbyPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSCommunityInfoBase*> LobbyJoinRequestArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSCommunityInfoBase*> PendingInvitedLobbyArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLobbyInvite> LobbyInvites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyPartyChatLog PartyChatLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, ELobbyPrivateMatchStatus> LobbyPlayerStatusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyPlayerIndex LobbyPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SelectNPCWrestlerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FLobbyWrestlerData> NPCWrestlerDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SelectArenaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelectArenaDataUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SelectMinigameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSLobbyWrestlerDataMap* WrestlerDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLobbyWrestlerData> MatchupWrestlerDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyPlayerRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyBattlePassPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MyPlayerIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoiceChatStartMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSLobbyUserMuteFlag MuteFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestResendCurrentWrestlerDataFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestResendCurrentWrestlerDataTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSCommunityInfoBase*> PendingDiscardCommunityInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> SanitizeRequestWrestlerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> SanitizeRequestMatchupWrestlerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> SanitizeRequestNPCWrestlerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> SanitizeRequestSelectNPCWrestlerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UELEOSLobbyEvent*> PendingLobbyEventArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSCommunityInfoBase*> PendingJoinMemberCommunityInfoMapForHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSCommunityUserBase*> PendingJoinMemberLobbyUserMapForHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELobbyProcTypes, ELobbyProcStatus> LobbyProcStatusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyMPAStatus LobbyMPAStatus;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSLobbyEvent2 OnLobbyEvent2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSLobbyReceiveMessageEvent OnLobbyReceiveMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSLobbyReceivePacketEvent OnLobbyReceivePacket;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyCreate OnLobbyCreate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyDestroy OnLobbyDestroy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyJoin OnLobbyJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyLeave OnLobbyLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyInviteReceive OnLobbyInviteReceive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyInviteReject OnLobbyInviteReject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyKickedMe OnLobbyKickedMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyKickedOther OnLobbyKickedOther;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyMemberJoin OnLobbyMemberJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyMemberLeft OnLobbyMemberLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyMemberDisconnect OnLobbyMemberDisconnect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyWrestlerDataReceive OnLobbyWrestlerDataReceive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatConnected OnVoiceChatConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatDisconnected OnVoiceChatDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatJoined OnVoiceChatJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatLeft OnVoiceChatLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatEnabled OnVoiceChatEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatDisabled OnVoiceChatDisabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatUnsupported OnVoiceChatUnsupported;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartSpeaking OnStartSpeaking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopSpeaking OnStopSpeaking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMuteVoice OnMuteVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnmuteVoice OnUnmuteVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMuteVoiceErr OnMuteVoiceErr;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBlockVoice OnBlockVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnblockVoice OnUnblockVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBlockVoiceErr OnBlockVoiceErr;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQueryInviteResponse OnQueryInviteResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPromoteMe OnPromoteMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPromoteOther OnPromoteOther;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetMaxMember OnSetMaxMember;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyMemberUpdate OnLobbyMemberUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyChangeOwner OnLobbyChangeOwner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsoleInviteEventHandler OnConsoleInviteEventHandler;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSLobbyJoinError OnLobbyJoinError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbySearch OnLobbySearch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbySearchError OnLobbySearchError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeaderChange OnConsoleSessionLeaderChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetPlayerSessionUserID OnConsolePlayerSessionUserID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusUpdatedOnJoinedStep OnStatusUpdatedOnJoinedStep;
    
    UELEOSLobby();
private:
    UFUNCTION(BlueprintCallable)
    bool UpdateStepForStatusUpdatedOnJoined();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateMPARecentPlayer(const FString& _userIdStr);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateMemberAttributes();
    
    UFUNCTION(BlueprintCallable)
    bool Unmute(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool Unblock(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool ShowPacketQueueInfo();
    
    UFUNCTION(BlueprintCallable)
    bool SetVoiceChatStartMuted(bool _bMuted);
    
    UFUNCTION(BlueprintCallable)
    bool SetVoiceChatEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool Setup(UEOSLobby* _Lobby, UEOSManager* _NatP2P, UEOSUser* _User, UELEOSGameSession* _GameSession, UELNetworkObserverBase* NetworkObserver);
    
    UFUNCTION(BlueprintCallable)
    bool SetTextBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectNPCWrestler(int32 _Number, UObject* _WrestlerSelectParam);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetSelectMinigame(UObject* MinigameData);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectArenaData(UObject* ArenaData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPrivateMatchPlayerStatusAll(ELobbyPrivateMatchStatus _Status);
    
    UFUNCTION(BlueprintCallable)
    void SetPrivateMatchPlayerStatus(const FString& _PUID, ELobbyPrivateMatchStatus _Status);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyLastReadTime(const FDateTime& _DateTime);
    
    UFUNCTION(BlueprintCallable)
    void SetNPCWrestler(int32 _Number, int32 _Index, UObject* _SelectNPCWrestler);
    
    UFUNCTION(BlueprintCallable)
    void SetMyPlayerRank(int32 _Rank);
    
    UFUNCTION(BlueprintCallable)
    void SetMyPlayerIcons(TArray<int32> _Icons);
    
    UFUNCTION(BlueprintCallable)
    void SetMyPlayerIcon(int32 _PlayerIcon, int32 _BGIcon, const FUserProfileColorParam& _ColorParam);
    
    UFUNCTION(BlueprintCallable)
    void SetMyBattlePassPoint(int32 _Point);
    
    UFUNCTION(BlueprintCallable)
    bool SetMuteAll(EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SetMute(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPacketSize(int32 Size);
    
    UFUNCTION(BlueprintCallable)
    bool SetMaxMember(int32 MaxMember);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchupWrestlerData(const FString& _PUID, UObject* _WrestlerData, int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetLobbyAttributes(const TArray<UEOSAttribute*>& Attributes) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWrestlerData(UObject* _WrestlerData);
    
    UFUNCTION(BlueprintCallable)
    bool SetBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SendStampAll(int32 _StampID);
    
    UFUNCTION(BlueprintCallable)
    bool SendStamp(int32 _StampID);
    
    UFUNCTION(BlueprintCallable)
    bool SendSelectNPCWrestlerData();
    
private:
    UFUNCTION(BlueprintCallable)
    bool SendSelectMinigame();
    
    UFUNCTION(BlueprintCallable)
    bool SendSelectArenaData();
    
public:
    UFUNCTION(BlueprintCallable)
    bool SendRequest(EELEOSLobbyPacketRequestType Type, UObject* Data);
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchStart(int32 _OnlineModeType, int32 _MatchType, int32 _MatchParam);
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchReady();
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchNotifyToHost(ELobbyPacketPrivateMatchNotify _Notify);
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchNotify(ELobbyPacketPrivateMatchNotify _Notify);
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchMenuInputSync(UObject* _InputData);
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchMenuInputResult(int32 _PlayerIndex, ELobbyPacketMenuInputType _InputType);
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchMenuInput(ELobbyPacketMenuInputType _InputValue);
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchLeaveSession();
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchInviteResponse(bool _Accept);
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchInviteRequest(int32 _OnlineModeType, int32 _MatchType, int32 _MatchParam);
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMatchCancel();
    
    UFUNCTION(BlueprintCallable)
    bool SendPositionSelectInputResult(UObject* MenuInput);
    
    UFUNCTION(BlueprintCallable)
    bool SendPositionSelectInput(UObject* MenuInput);
    
    UFUNCTION(BlueprintCallable)
    bool SendPacketObject(UObject* InObject, EELEOSLobbyPacketType InType, int32 InID);
    
    UFUNCTION(BlueprintCallable)
    bool SendNPCWrestlerData();
    
    UFUNCTION(BlueprintCallable)
    bool SendNotifyToUser(ELobbyPacketNotifyType _Notify, const FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    bool SendNotifyToHost(ELobbyPacketNotifyType _Notify);
    
    UFUNCTION(BlueprintCallable)
    bool SendNotify(ELobbyPacketNotifyType _Notify, bool SendAllUser);
    
    UFUNCTION(BlueprintCallable)
    bool SendMiniGameOwnerSelectInfo(UELEOSLobbyMiniGameOwnerSelectInfo* MiniGameOwnerSelectInfo);
    
    UFUNCTION(BlueprintCallable)
    bool SendMiniGameInfo(UELEOSLobbyMiniGameInfo* MiniGameInfo);
    
    UFUNCTION(BlueprintCallable)
    bool SendMatchupWrestlerData();
    
    UFUNCTION(BlueprintCallable)
    bool SendLobbyStamp(int32 _StampID);
    
    UFUNCTION(BlueprintCallable)
    bool SendLobbyChat(const FString& _Message);
    
    UFUNCTION(BlueprintCallable)
    bool SendCurrentWrestlerData();
    
    UFUNCTION(BlueprintCallable)
    bool SendChatAll(const FString& _Message);
    
    UFUNCTION(BlueprintCallable)
    bool RequestInviteLobbyMember();
    
    UFUNCTION(BlueprintCallable)
    bool RequestInviteAllLobbyMember();
    
    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable)
    bool RejectInvite(UEOSCommunityInfoBase* InInfo);
    
    UFUNCTION(BlueprintCallable)
    bool QueryInvites();
    
    UFUNCTION(BlueprintCallable)
    bool PrivateMatchPlayerStatusUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool PrivateMatchPlayerStatusReset();
    
    UFUNCTION(BlueprintCallable)
    bool PrivateMatchPlayerStatusAll(ELobbyPrivateMatchStatus _Status);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSanitizeTextWrestlerDataSelectNPC(const FWrestlerNameText& WrestlerNameText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeTextWrestlerDataNPC(const FWrestlerNameText& WrestlerNameText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeTextWrestlerDataNormal(const FWrestlerNameText& WrestlerNameText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeTextWrestlerDataMatchup(const FWrestlerNameText& WrestlerNameText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeTextPartyChat(const FString& SanitizeText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivePrivateMatchNotify(UEOSUserBase* _UserBase, UObject* PacketObject, int32 PacketType, int32 PacketID);
    
    UFUNCTION(BlueprintCallable)
    void OnReceive(UEOSNatP2PCachedTransfer* _Transfer, UEOSUserBase* _UserBase, UEOSNatP2PBinary* _P2PBinary);
    
    UFUNCTION(BlueprintCallable)
    void OnNatP2PEvent(EEOSNatP2PEvent InEOSP2PEvent, UEOSNatP2P* InEOSNatP2P, UEOSUserBase* InEOSUserBase);
    
    UFUNCTION(BlueprintCallable)
    void OnNatP2PCachedTransferEvent(EEOSNatP2PCachedTransferEvent InEOSP2PCachedTransferEvent, UEOSNatP2PCachedTransfer* InEOSNatP2PCachedTransfer, UEOSUserBase* InEOSUserBase);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEOSEvent(EELEOSEventType EventType, EELEOSEventResult EventResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCommunitySearchResult(UEOSCommunityBase* _CommunityBase, UEOSSearchResultsBase* _SearchSessionResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCommunityEventForGameSession(EEOSCommunityEvent _CommunityEvent, UEOSCommunityBase* _CommunityBase, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _LobbyUser);
    
    UFUNCTION(BlueprintCallable)
    void OnCommunityEvent(EEOSCommunityEvent EOSCommunityEvent, UEOSCommunityBase* EOSCommunityBase, UEOSCommunityInfoBase* EOSCommunityInfo, UEOSCommunityUserBase* EOSLobbyUser);
    
    UFUNCTION(BlueprintCallable)
    bool NextStepForStatusUpdatedOnJoined(ELobbyCheckStepForHost OverwriteStepType);
    
public:
    UFUNCTION(BlueprintCallable)
    bool NeedToSelectNPCWrestler(int32 _SelectorPlayerIndex, int32 _Position, bool _SelectorIsHost);
    
    UFUNCTION(BlueprintCallable)
    bool Mute(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool LobbySearchedDispach(UEOSSearchResultsBase* _searchResults);
    
    UFUNCTION(BlueprintCallable)
    bool Leave();
    
    UFUNCTION(BlueprintCallable)
    void LeaderChangeRequest(const FString& _lobbyID, const FString& _leaderExternalAccountID);
    
    UFUNCTION(BlueprintCallable)
    bool Kick(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool JoinLatestInvite();
    
    UFUNCTION(BlueprintCallable)
    bool JoinByLobbyInvite(const FLobbyInvite& LobbyInvite);
    
    UFUNCTION(BlueprintCallable)
    bool Join(UEOSCommunityInfoBase* LobbyInfo);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingMultiplayerFeature();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeaking(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSolo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMuted(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyOwnerPUID(const FString& _PUID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyMemberFull(UEOSCommunityInfoBase* CommunityInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoinedPrivateMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoinedLobby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistInviteUser();
    
    UFUNCTION(BlueprintCallable)
    bool IsCompleteCurrentWrestler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocked(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString InviteLobbyID();
    
    UFUNCTION(BlueprintCallable)
    void InviteFromConsole(const FString& PlatformUserID);
    
    UFUNCTION(BlueprintCallable)
    bool Invite(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool HasPlayer(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLobbyUser(const FString& _PUID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserAudioStatus GetVoiceStatus(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatStartMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnreadPartyChatCount(const FDateTime& _UtcDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserMuteFlag GetTextBlockFlag(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSpeakingUsers(UEOSCommunityInfoBase*& EOSCommunityInfo, TArray<UEOSCommunityUserBase*>& SpeakingUsers);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelfPlayerIndex();
    
    UFUNCTION(BlueprintCallable)
    void GetSelectNPCWrestler(int32 _Number, UObject*& _SelectNPCWrestler);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetSelectMinigameData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetSelectArenaData() const;
    
public:
    UFUNCTION(BlueprintCallable)
    UObject* GetPlayerWrestlerDataAtIndex(const FString& _PUID, int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerNum() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetPlayerIndexToPUID(int32 _PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex(const FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    void GetPartyLastReadTime(FDateTime& _DateTime);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNPCWrestlerSelectorPlayerIndex(int32 _Number, int32 _OwnerPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetNPCWrestler(int32 _Number, int32 _Index, UObject*& _SelectNPCWrestler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserMuteFlag GetMuteFlag(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable)
    void GetMatchupWrestlerList(const FString& ProductUserID, TArray<UObject*>& Array);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetMatchupWrestlerData(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyUserRank(const FString& _PUID, int32& _Rank);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyUserPlatform(const FString& _PUID, EPlatformType& _Platform);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyUserName(const FString& _PUID, FString& _Name);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyUserIcons(const FString& _PUID, TArray<int32>& _Icons);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyUserIcon(const FString& _PUID, int32& _PlayerIcon, int32& _BGIcon, FUserProfileColorParam& _ColorParam);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyUserBattlePassPoint(const FString& _PUID, int32& _Point);
    
    UFUNCTION(BlueprintCallable)
    void GetLobbyPlayerUserIDs(TArray<FString>& Players, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void GetLobbyPlayers(TMap<FString, FLobbyCharacterData>& _Players);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLobbyPlayerProductIDs(TArray<FString>& PlayerProductIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLobbyOwnerPUID(FString& _PUID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLobbyOwnerPlayerIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSCommunityUserBase* GetLobbyCommunityUser(const FString& _PUID) const;
    
    UFUNCTION(BlueprintCallable)
    void GetLobbyChatLog(TArray<FLobbyChatLogData>& _ChatLog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLatestInvite(UEOSLobbyInfo*& NewInvite) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInvites(TMap<FString, UEOSCommunityInfoBase*>& Invites);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSLobbyInfo* GetEOSLobbyInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSLobby* GetEOSLobby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentWrestlerDataByPUID(UObject*& _Object, const FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentWrestlerData(UObject*& _Object, int32 _PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserMuteFlag GetBlockFlag(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable)
    bool FindUserIDByCharacterIndex(FString& _PUID, int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void FindPlayerSessionByFriend(const FString& _sessionOwnerExternalAccountID);
    
    UFUNCTION(BlueprintCallable)
    bool FindLobbyUserName(UEOSCommunityInfoBase* _CommunityInfo, const FString& _PUID, FString& _Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindLobbyPlayerByIndex(FLobbyCharacterData& _Data, int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    bool FindLobbyPlayer(FLobbyCharacterData& _Data, const FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    bool FindLobby(const FString& _CommunityID);
    
    UFUNCTION(BlueprintCallable)
    void ExecConsoleInviteEvent();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
    UFUNCTION(BlueprintCallable)
    void CreateMPASessionEvent();
    
    UFUNCTION(BlueprintCallable)
    bool CreateDefault();
    
    UFUNCTION(BlueprintCallable)
    bool Create(int32 MaxMember, EEOSCommunityPermission Permission, bool AllowInvite);
    
    UFUNCTION(BlueprintCallable)
    bool ClearTextBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectNPCWrestler();
    
    UFUNCTION(BlueprintCallable)
    void ClearNPCWrestler();
    
    UFUNCTION(BlueprintCallable)
    bool ClearMuteAll(EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    bool ClearMute(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    void ClearMatchupWrestlerData();
    
    UFUNCTION(BlueprintCallable)
    void ClearInvitedLobbyIDString();
    
    UFUNCTION(BlueprintCallable)
    bool ClearBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSearchResultGameMode(UEOSSearchResultsBase* _searchResults, const FString& Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckJoinable(UEOSCommunityInfoBase* CommunityInfo) const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeOwner(UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable)
    bool Block(const FString& ProductUserID);
    
};

