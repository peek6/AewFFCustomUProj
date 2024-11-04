#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPlatformType.h"
#include "WrestlerNameText.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EExternalAccountType.h"
#include "EOSExternalAccountId.h"
#include "LobbyInvite.h"
#include "YGS2AnalyticsData.h"
#include "EELEOSAnalyticsMatchingBeginEnd.h"
#include "EELEOSAnalyticsMatchingResult.h"
#include "EELEOSGameStatus.h"
#include "ELobbyInviteError.h"
#include "EOSSanitizePartyChatEventDelegate.h"
#include "EOSSanitizeWrestlerNameTextEventDelegate.h"
#include "SessionGamePlayerDataBP.h"
#include "UserProfileColorParam.h"
#include "ELEOSUtility.generated.h"

class UELEOSFriend;
class UELEOSGameChatSession;
class UELEOSGameSession;
class UELEOSGameSessionMatching;
class UELEOSLobby;
class UELEOSLobbyMiniGameInfo;
class UELEOSManager;
class UELEOSSanitizeTextPartyChat;
class UELEOSSanitizeTextWrestlerData;
class UELNetworkObserverBase;
class UELOnlineRankCalculator;
class UELYGS2Manager;
class UEOSAntiCheatClient;
class UEOSAttribute;
class UEOSAuth;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSFriend;
class UEOSFriendPresence;
class UEOSFriendUser;
class UEOSLeaderboard;
class UEOSManager;
class UEOSPresence;
class UEOSPresenceBase;
class UEOSReports;
class UEOSSanctions;
class UEOSSessionP2PAFGameFlowManager;
class UEOSStats;
class UEOSUser;
class UEOSUserContents;
class UEOSUserManager;
class UEOSVoice;
class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELEOSUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELEOSUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void YGS2AnlyticsLobbyParams(const UObject* WorldContextObject, FYGS2AnalyticsData& AnalyticsData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool YGS2AnalyticsSessionParams(const UObject* WorldContextObject, FYGS2AnalyticsData& AnalyticsDatac, EELEOSAnalyticsMatchingResult MatchingResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleDebugELEOSUser(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleDebugELEOSLobby(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleDebugELEOSGameSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleDebugELEOSFriend(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FDateTime TimeStampToDateTime(int64 _UnixTimeStamp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SortIDListByResultScore(const UObject* WorldContextObject, const TArray<FString>& LeaderboardNames, UPARAM(Ref) TArray<FString>& IDList, TArray<float>& ScoreList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShouldUseExternalDisplayName(const UObject* WorldContextObject, EPlatformType Platform);
    
    UFUNCTION(BlueprintCallable)
    static bool SetProductIdPresence(UEOSUser* User);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPresencePlayerIcons(UEOSUser* User, TArray<int32>& Icons);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPlatformPresence(UEOSUser* User);
    
    UFUNCTION(BlueprintCallable)
    static void SetPatchUpdateAvailable(bool bPatchUpdateAvailable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPartyAttributeJoinable(const UObject* WorldContextObject, bool Joinable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetOnlineVersionPresence(UEOSUser* User);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetMyPresencePlayerIcon(const UObject* WorldContextObject, int32 PlayerIcon, int32 BGIcon, const FUserProfileColorParam& ColorParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetMyPresence(const UObject* WorldContextObject, const FString& PresenceText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetMyGameStatusPresence(const UObject* WorldContextObject, EELEOSGameStatus Status);
    
    UFUNCTION(BlueprintCallable)
    static bool SetGameStatusPresence(UEOSUser* User, EELEOSGameStatus Status);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnableOnlineVersionCheck(const UObject* WorldContextObject, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDisplayNamePresence(UEOSUser* User, const FString& DisplayName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SendLobbyPacketPositionSelectMenuInputResult(const UObject* WorldContextObject, UObject* MenuInput);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SendLobbyPacketPositionSelectMenuInput(const UObject* WorldContextObject, UObject* MenuInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool SendLobbyPacketMiniGameOwnerSelectInfo(const UObject* WorldContextObject, int32 InNextCursor, bool InDecide, bool InCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool SendLobbyPacketMiniGameInfo(const UObject* WorldContextObject, UELEOSLobbyMiniGameInfo* Info);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestYGS2AnalyticsMatchmake(const UObject* WorldContextObject, EELEOSAnalyticsMatchingResult MatchingResult, TMap<FString, UEOSAttribute*> Attributes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestYGS2AnalyticsMatchBeginEnd(const UObject* WorldContextObject, EELEOSAnalyticsMatchingBeginEnd BeginEnd, TMap<FString, UEOSAttribute*> Attributes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestYGS2Analytics(const UObject* WorldContextObject, EELEOSAnalyticsMatchingResult MatchingResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RequestSanitizeWrestlerName(const UObject* WorldContextObject, FEOSSanitizeWrestlerNameTextEvent Delegate, UELEOSSanitizeTextWrestlerData* UserData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestSanitizePartyChat(const UObject* WorldContextObject, FEOSSanitizePartyChatEvent Delegate, UELEOSSanitizeTextPartyChat* UserData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RequestInviteLobbyMember(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RejectLobbyInvite(const UObject* WorldContextObject, UEOSCommunityInfoBase* CommunityInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool QueryLobbyInvites(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool OnlineConnectionCheck(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime MakeUndefinedDateTime();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Logout(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoginPortal(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Login(const UObject* WorldContextObject, const FString& _Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LeaveSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LeaveLobby(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool JoinLobbyByLobbyInvite(const UObject* WorldContextObject, const FLobbyInvite& LobbyInvite);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool JoinLobby(const UObject* WorldContextObject, UEOSCommunityInfoBase* CommunityInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsValidOnlineWrestlerData(const UObject* WorldContextObject, UObject* OnlineWrestlerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSessionSearching(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsQuickMatchAble(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPatchUpdateAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPartyAttributeJoinable(const UObject* WorldContextObject, UEOSCommunityInfoBase* CommunityInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOnlineProcessing_ExhibitionMatch(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLobbyOwner(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IsInviteError(const UObject* WorldContextObject, const FLobbyInvite& Invite, ELobbyInviteError& Reason, bool _bCheckCommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsFriendUserPlayingThisGameOrNotFriend(const UObject* WorldContextObject, const FString& PUID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFriendPlayingThisGame(UEOSFriendPresence* Presence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEOSLogin(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsEnableOnlineVersionCheck(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEnabledFriendChat(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEnabledCrossPlay(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEASLogin(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCompleteCurrentWrestler(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetYGS2PingMs(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELYGS2Manager* GetYGS2Manager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetWrestlerNameText(const UObject* WorldContextObject, UObject* OnlineWrestlerData, FWrestlerNameText& WrestlerName);
    
    UFUNCTION(BlueprintPure)
    static int64 GetTimeStamp();
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionGamePlayerWeaponDecal(const FSessionGamePlayerDataBP& PlayerData, int32& Decal, int32& DecalSymbol, FUserProfileColorParam& ColorParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionGamePlayerIcon(const FSessionGamePlayerDataBP& PlayerData, int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionGamePlayerDisplayName(const FSessionGamePlayerDataBP& PlayerData, FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPresencePlayerIcons(UEOSUser* User, TArray<int32>& Icons);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPresenceFriendPlayerIcons(UEOSPresenceBase* Presence, TArray<int32>& Icons);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPresenceFriendPlayerIcon(UEOSPresenceBase* Presence, int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlatformAttibuteValue(const UObject* WorldContextObject, EPlatformType Platform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetPlatformAttibuteName(const UObject* WorldContextObject, EPlatformType Platform);
    
    UFUNCTION(BlueprintCallable)
    static void GetOnlineNewsFilename(FString& NewsFilename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNowPlayerCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELNetworkObserverBase* GetNetworkObserver(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetNearestServerPing(const UObject* WorldContextObject, FString& ServerName, int32& Ping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EELEOSGameStatus GetMyGameStatusPresence(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMaxPlayerCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetLobbyInvites(const UObject* WorldContextObject, TMap<FString, FLobbyInvite>& Invites);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLastSyncServerUtc(const UObject* WorldContextObject, FDateTime& DateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EELEOSGameStatus GetGameStatusPresence(UEOSUser* User);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetFriendProductIDList(const UObject* WorldContextObject, TArray<FString>& IDList);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFriendPlayerIcon(UEOSFriendUser* FriendUser, int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlatformType GetFriendPlatformPresence(UEOSPresenceBase* Presence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFriendOnlineVersionPresence(UEOSPresenceBase* Presence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EELEOSGameStatus GetFriendGameStatusPresence(UEOSPresenceBase* Presence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFriendEnabledCrossplayPresence(UEOSPresenceBase* Presence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSVoice* GetEOSVoice(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSUserManager* GetEOSUserManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSUserContents* GetEOSUserContents(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSUser* GetEOSUser(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSStats* GetEOSStats(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSSanctions* GetEOSSanctions(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSReports* GetEOSReports(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELOnlineRankCalculator* GetEOSRankCalculator(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetEOSProductID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSPresence* GetEOSPresence(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSManager* GetEOSManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSLeaderboard* GetEOSLeaderboard(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSSessionP2PAFGameFlowManager* GetEOSGameFlowManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSFriend* GetEOSFriend(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetEOSAuthToken(const UObject* WorldContextObject, FString& Token);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSAuth* GetEOSAuth(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELEOSManager* GetELEOSManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELEOSLobby* GetELEOSLobby(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELEOSGameSessionMatching* GetELEOSGameSessionMatching(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSCommunityInfoBase* GetELEOSGameSessionInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELEOSGameSession* GetELEOSGameSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELEOSGameChatSession* GetELEOSGameChatSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELEOSFriend* GetELEOSFriend(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDisplayNamePresence(UEOSPresenceBase* Presence, FString& DisplayName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCurrentWrestlerDataByPUID(const UObject* WorldContextObject, UObject* OutObject, const FString& InPUID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetConfigPingUpdateInterval(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetCommunityUserDisplayName(const UObject* WorldContextObject, UEOSCommunityUserBase* User, FString& DisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEOSAntiCheatClient* GetAntiCheatClient(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindLobbyInviteByPUID(const UObject* WorldContextObject, const FString& PUID, FLobbyInvite& Invite);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindLobbyInvite(const UObject* WorldContextObject, const FString& CommunityID, FLobbyInvite& Invite);
    
    UFUNCTION(BlueprintCallable)
    static bool FindExternalDisplayName(EExternalAccountType AccountType, const TArray<FEOSExternalAccountId>& ExternalAccountIds, FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    static bool FindExternalAccountId(EExternalAccountType AccountType, const TArray<FEOSExternalAccountId>& ExternalAccountIds, FString& AccountId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool EOSOnlineVersionCheck(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DispDebugELEOSUser(const UObject* WorldContextObject, bool Disp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DispDebugELEOSLobby(const UObject* WorldContextObject, bool Disp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DispDebugELEOSGameSession(const UObject* WorldContextObject, bool Disp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DispDebugELEOSFriend(const UObject* WorldContextObject, bool Disp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeleteSanitizeWrestlerData(const UObject* WorldContextObject, UELEOSSanitizeTextWrestlerData* Obj);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeleteSanitizePartyChat(const UObject* WorldContextObject, UELEOSSanitizeTextPartyChat* Obj);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetSkipPatchCheck(bool bSkip);
    
    UFUNCTION(BlueprintCallable)
    static bool Debug_IsSkipPatchUpdate();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELEOSSanitizeTextWrestlerData* CreateSanitizeTextWrestlerData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELEOSSanitizeTextPartyChat* CreateSanitizeTextPartyChat(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CreateLobby(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static EExternalAccountType ConvertPlatformTypeToExternalAccountType(EPlatformType ELPlatform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheckUsingMultiplayerFeatures(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckPartyAttributeGameMode(const UObject* WorldContextObject, UEOSCommunityInfoBase* CommunityInfo, const FString& Mode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyWrestlerNameText(const UObject* WorldContextObject, UObject* OnlineWrestlerData, const FWrestlerNameText& WrestlerName);
    
};

