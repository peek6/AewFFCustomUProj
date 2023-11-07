#include "ELEOSUtility.h"

void UELEOSUtility::YGS2AnlyticsLobbyParams(const UObject* WorldContextObject, FYGS2AnalyticsData& AnalyticsData) {
}

bool UELEOSUtility::YGS2AnalyticsSessionParams(const UObject* WorldContextObject, FYGS2AnalyticsData& AnalyticsDatac, EELEOSAnalyticsMatchingResult MatchingResult) {
    return false;
}

void UELEOSUtility::ToggleDebugELEOSUser(const UObject* WorldContextObject) {
}

void UELEOSUtility::ToggleDebugELEOSLobby(const UObject* WorldContextObject) {
}

void UELEOSUtility::ToggleDebugELEOSGameSession(const UObject* WorldContextObject) {
}

void UELEOSUtility::ToggleDebugELEOSFriend(const UObject* WorldContextObject) {
}

FDateTime UELEOSUtility::TimeStampToDateTime(int64 _UnixTimeStamp) {
    return FDateTime{};
}

bool UELEOSUtility::SortIDListByResultScore(const UObject* WorldContextObject, const TArray<FString>& LeaderboardNames, TArray<FString>& IDList, TArray<float>& ScoreList) {
    return false;
}

bool UELEOSUtility::ShouldUseExternalDisplayName(const UObject* WorldContextObject, EPlatformType Platform) {
    return false;
}

bool UELEOSUtility::SetProductIdPresence(UEOSUser* User) {
    return false;
}

bool UELEOSUtility::SetPresencePlayerIcons(UEOSUser* User, TArray<int32>& Icons) {
    return false;
}

bool UELEOSUtility::SetPlatformPresence(UEOSUser* User) {
    return false;
}

void UELEOSUtility::SetPatchUpdateAvailable(bool bPatchUpdateAvailable) {
}

void UELEOSUtility::SetPartyAttributeJoinable(const UObject* WorldContextObject, bool Joinable) {
}

bool UELEOSUtility::SetOnlineVersionPresence(UEOSUser* User) {
    return false;
}

bool UELEOSUtility::SetMyPresencePlayerIcon(const UObject* WorldContextObject, int32 PlayerIcon, int32 BGIcon, const FUserProfileColorParam& ColorParam) {
    return false;
}

bool UELEOSUtility::SetMyPresence(const UObject* WorldContextObject, const FString& PresenceText) {
    return false;
}

bool UELEOSUtility::SetMyGameStatusPresence(const UObject* WorldContextObject, EELEOSGameStatus Status) {
    return false;
}

bool UELEOSUtility::SetGameStatusPresence(UEOSUser* User, EELEOSGameStatus Status) {
    return false;
}

void UELEOSUtility::SetEnableOnlineVersionCheck(const UObject* WorldContextObject, bool Enable) {
}

bool UELEOSUtility::SetDisplayNamePresence(UEOSUser* User, const FString& DisplayName) {
    return false;
}

bool UELEOSUtility::SendLobbyPacketPositionSelectMenuInputResult(const UObject* WorldContextObject, UObject* MenuInput) {
    return false;
}

bool UELEOSUtility::SendLobbyPacketPositionSelectMenuInput(const UObject* WorldContextObject, UObject* MenuInput) {
    return false;
}

bool UELEOSUtility::SendLobbyPacketMiniGameOwnerSelectInfo(const UObject* WorldContextObject, int32 InNextCursor, bool InDecide, bool InCancel) {
    return false;
}

bool UELEOSUtility::SendLobbyPacketMiniGameInfo(const UObject* WorldContextObject, UELEOSLobbyMiniGameInfo* Info) {
    return false;
}

void UELEOSUtility::RequestYGS2AnalyticsMatchmake(const UObject* WorldContextObject, EELEOSAnalyticsMatchingResult MatchingResult, TMap<FString, UEOSAttribute*> Attributes) {
}

void UELEOSUtility::RequestYGS2AnalyticsMatchBeginEnd(const UObject* WorldContextObject, EELEOSAnalyticsMatchingBeginEnd BeginEnd, TMap<FString, UEOSAttribute*> Attributes) {
}

void UELEOSUtility::RequestYGS2Analytics(const UObject* WorldContextObject, EELEOSAnalyticsMatchingResult MatchingResult) {
}

bool UELEOSUtility::RequestSanitizeWrestlerName(const UObject* WorldContextObject, FEOSSanitizeWrestlerNameTextEvent Delegate, UELEOSSanitizeTextWrestlerData* UserData) {
    return false;
}

void UELEOSUtility::RequestSanitizePartyChat(const UObject* WorldContextObject, FEOSSanitizePartyChatEvent Delegate, UELEOSSanitizeTextPartyChat* UserData) {
}

bool UELEOSUtility::RequestInviteLobbyMember(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::RejectLobbyInvite(const UObject* WorldContextObject, UEOSCommunityInfoBase* CommunityInfo) {
    return false;
}

bool UELEOSUtility::QueryLobbyInvites(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::OnlineConnectionCheck(const UObject* WorldContextObject) {
    return false;
}

FDateTime UELEOSUtility::MakeUndefinedDateTime() {
    return FDateTime{};
}

void UELEOSUtility::Logout(const UObject* WorldContextObject) {
}

void UELEOSUtility::LoginPortal(const UObject* WorldContextObject) {
}

void UELEOSUtility::Login(const UObject* WorldContextObject, const FString& _Name) {
}

bool UELEOSUtility::LeaveSession(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::LeaveLobby(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::JoinLobbyByLobbyInvite(const UObject* WorldContextObject, const FLobbyInvite& LobbyInvite) {
    return false;
}

bool UELEOSUtility::JoinLobby(const UObject* WorldContextObject, UEOSCommunityInfoBase* CommunityInfo) {
    return false;
}

bool UELEOSUtility::IsValidOnlineWrestlerData(const UObject* WorldContextObject, UObject* OnlineWrestlerData) {
    return false;
}

bool UELEOSUtility::IsSessionSearching(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::IsQuickMatchAble(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::IsPatchUpdateAvailable() {
    return false;
}

bool UELEOSUtility::IsPartyAttributeJoinable(const UObject* WorldContextObject, UEOSCommunityInfoBase* CommunityInfo) {
    return false;
}

bool UELEOSUtility::IsOnlineProcessing_ExhibitionMatch(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::IsLobbyOwner(const UObject* WorldContextObject) {
    return false;
}

void UELEOSUtility::IsInviteError(const UObject* WorldContextObject, const FLobbyInvite& Invite, ELobbyInviteError& Reason, bool _bCheckCommunityUser) {
}

bool UELEOSUtility::IsInSession(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::IsFriendUserPlayingThisGameOrNotFriend(const UObject* WorldContextObject, const FString& PUID) {
    return false;
}

bool UELEOSUtility::IsFriendPlayingThisGame(UEOSFriendPresence* Presence) {
    return false;
}

bool UELEOSUtility::IsEOSLogin(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::IsEnableOnlineVersionCheck(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::IsEnabledFriendChat(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::IsEnabledCrossPlay(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::IsEASLogin(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSUtility::IsCompleteCurrentWrestler(const UObject* WorldContextObject) {
    return false;
}

int32 UELEOSUtility::GetYGS2PingMs(const UObject* WorldContextObject) {
    return 0;
}

UELYGS2Manager* UELEOSUtility::GetYGS2Manager(const UObject* WorldContextObject) {
    return NULL;
}

bool UELEOSUtility::GetWrestlerNameText(const UObject* WorldContextObject, UObject* OnlineWrestlerData, FWrestlerNameText& WrestlerName) {
    return false;
}

int64 UELEOSUtility::GetTimeStamp() {
    return 0;
}

void UELEOSUtility::GetSessionGamePlayerWeaponDecal(const FSessionGamePlayerDataBP& PlayerData, int32& Decal, int32& DecalSymbol, FUserProfileColorParam& ColorParam) {
}

void UELEOSUtility::GetSessionGamePlayerIcon(const FSessionGamePlayerDataBP& PlayerData, int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam) {
}

void UELEOSUtility::GetSessionGamePlayerDisplayName(const FSessionGamePlayerDataBP& PlayerData, FString& DisplayName) {
}

bool UELEOSUtility::GetPresencePlayerIcons(UEOSUser* User, TArray<int32>& Icons) {
    return false;
}

bool UELEOSUtility::GetPresenceFriendPlayerIcons(UEOSPresenceBase* Presence, TArray<int32>& Icons) {
    return false;
}

bool UELEOSUtility::GetPresenceFriendPlayerIcon(UEOSPresenceBase* Presence, int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam) {
    return false;
}

int32 UELEOSUtility::GetPlatformAttibuteValue(const UObject* WorldContextObject, EPlatformType Platform) {
    return 0;
}

FString UELEOSUtility::GetPlatformAttibuteName(const UObject* WorldContextObject, EPlatformType Platform) {
    return TEXT("");
}

void UELEOSUtility::GetOnlineNewsFilename(FString& NewsFilename) {
}

int32 UELEOSUtility::GetNowPlayerCount(const UObject* WorldContextObject) {
    return 0;
}

UELNetworkObserverBase* UELEOSUtility::GetNetworkObserver(const UObject* WorldContextObject) {
    return NULL;
}

bool UELEOSUtility::GetNearestServerPing(const UObject* WorldContextObject, FString& ServerName, int32& Ping) {
    return false;
}

EELEOSGameStatus UELEOSUtility::GetMyGameStatusPresence(const UObject* WorldContextObject) {
    return EELEOSGameStatus::None;
}

int32 UELEOSUtility::GetMaxPlayerCount(const UObject* WorldContextObject) {
    return 0;
}

void UELEOSUtility::GetLobbyInvites(const UObject* WorldContextObject, TMap<FString, FLobbyInvite>& Invites) {
}

bool UELEOSUtility::GetLastSyncServerUtc(const UObject* WorldContextObject, FDateTime& DateTime) {
    return false;
}

EELEOSGameStatus UELEOSUtility::GetGameStatusPresence(UEOSUser* User) {
    return EELEOSGameStatus::None;
}

bool UELEOSUtility::GetFriendProductIDList(const UObject* WorldContextObject, TArray<FString>& IDList) {
    return false;
}

bool UELEOSUtility::GetFriendPlayerIcon(UEOSFriendUser* FriendUser, int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam) {
    return false;
}

EPlatformType UELEOSUtility::GetFriendPlatformPresence(UEOSPresenceBase* Presence) {
    return EPlatformType::PLATFORM_TYPE_WINDOWS;
}

FString UELEOSUtility::GetFriendOnlineVersionPresence(UEOSPresenceBase* Presence) {
    return TEXT("");
}

EELEOSGameStatus UELEOSUtility::GetFriendGameStatusPresence(UEOSPresenceBase* Presence) {
    return EELEOSGameStatus::None;
}

bool UELEOSUtility::GetFriendEnabledCrossplayPresence(UEOSPresenceBase* Presence) {
    return false;
}

UEOSVoice* UELEOSUtility::GetEOSVoice(const UObject* WorldContextObject) {
    return NULL;
}

UEOSUserManager* UELEOSUtility::GetEOSUserManager(const UObject* WorldContextObject) {
    return NULL;
}

UEOSUserContents* UELEOSUtility::GetEOSUserContents(const UObject* WorldContextObject) {
    return NULL;
}

UEOSUser* UELEOSUtility::GetEOSUser(const UObject* WorldContextObject) {
    return NULL;
}

UEOSStats* UELEOSUtility::GetEOSStats(const UObject* WorldContextObject) {
    return NULL;
}

UEOSSanctions* UELEOSUtility::GetEOSSanctions(const UObject* WorldContextObject) {
    return NULL;
}

UEOSReports* UELEOSUtility::GetEOSReports(const UObject* WorldContextObject) {
    return NULL;
}

UELOnlineRankCalculator* UELEOSUtility::GetEOSRankCalculator(const UObject* WorldContextObject) {
    return NULL;
}

FString UELEOSUtility::GetEOSProductID(const UObject* WorldContextObject) {
    return TEXT("");
}

UEOSPresence* UELEOSUtility::GetEOSPresence(const UObject* WorldContextObject) {
    return NULL;
}

UEOSManager* UELEOSUtility::GetEOSManager(const UObject* WorldContextObject) {
    return NULL;
}

UEOSLeaderboard* UELEOSUtility::GetEOSLeaderboard(const UObject* WorldContextObject) {
    return NULL;
}

UEOSSessionP2PAFGameFlowManager* UELEOSUtility::GetEOSGameFlowManager(const UObject* WorldContextObject) {
    return NULL;
}

UEOSFriend* UELEOSUtility::GetEOSFriend(const UObject* WorldContextObject) {
    return NULL;
}

bool UELEOSUtility::GetEOSAuthToken(const UObject* WorldContextObject, FString& Token) {
    return false;
}

UEOSAuth* UELEOSUtility::GetEOSAuth(const UObject* WorldContextObject) {
    return NULL;
}

UELEOSManager* UELEOSUtility::GetELEOSManager(const UObject* WorldContextObject) {
    return NULL;
}

UELEOSLobby* UELEOSUtility::GetELEOSLobby(const UObject* WorldContextObject) {
    return NULL;
}

UELEOSGameSessionMatching* UELEOSUtility::GetELEOSGameSessionMatching(const UObject* WorldContextObject) {
    return NULL;
}

UEOSCommunityInfoBase* UELEOSUtility::GetELEOSGameSessionInfo(const UObject* WorldContextObject) {
    return NULL;
}

UELEOSGameSession* UELEOSUtility::GetELEOSGameSession(const UObject* WorldContextObject) {
    return NULL;
}

UELEOSGameChatSession* UELEOSUtility::GetELEOSGameChatSession(const UObject* WorldContextObject) {
    return NULL;
}

UELEOSFriend* UELEOSUtility::GetELEOSFriend(const UObject* WorldContextObject) {
    return NULL;
}

bool UELEOSUtility::GetDisplayNamePresence(UEOSPresenceBase* Presence, FString& DisplayName) {
    return false;
}

void UELEOSUtility::GetCurrentWrestlerDataByPUID(const UObject* WorldContextObject, UObject* OutObject, const FString& InPUID) {
}

int32 UELEOSUtility::GetConfigPingUpdateInterval(const UObject* WorldContextObject) {
    return 0;
}

bool UELEOSUtility::GetCommunityUserDisplayName(const UObject* WorldContextObject, UEOSCommunityUserBase* User, FString& DisplayName) {
    return false;
}

UEOSAntiCheatClient* UELEOSUtility::GetAntiCheatClient(const UObject* WorldContextObject) {
    return NULL;
}

bool UELEOSUtility::FindLobbyInviteByPUID(const UObject* WorldContextObject, const FString& PUID, FLobbyInvite& Invite) {
    return false;
}

bool UELEOSUtility::FindLobbyInvite(const UObject* WorldContextObject, const FString& CommunityID, FLobbyInvite& Invite) {
    return false;
}

bool UELEOSUtility::FindExternalDisplayName(EExternalAccountType AccountType, const TArray<FEOSExternalAccountId>& ExternalAccountIds, FString& DisplayName) {
    return false;
}

bool UELEOSUtility::FindExternalAccountId(EExternalAccountType AccountType, const TArray<FEOSExternalAccountId>& ExternalAccountIds, FString& AccountId) {
    return false;
}

bool UELEOSUtility::EOSOnlineVersionCheck(const UObject* WorldContextObject) {
    return false;
}

void UELEOSUtility::DispDebugELEOSUser(const UObject* WorldContextObject, bool Disp) {
}

void UELEOSUtility::DispDebugELEOSLobby(const UObject* WorldContextObject, bool Disp) {
}

void UELEOSUtility::DispDebugELEOSGameSession(const UObject* WorldContextObject, bool Disp) {
}

void UELEOSUtility::DispDebugELEOSFriend(const UObject* WorldContextObject, bool Disp) {
}

void UELEOSUtility::DeleteSanitizeWrestlerData(const UObject* WorldContextObject, UELEOSSanitizeTextWrestlerData* Obj) {
}

void UELEOSUtility::DeleteSanitizePartyChat(const UObject* WorldContextObject, UELEOSSanitizeTextPartyChat* Obj) {
}

void UELEOSUtility::Debug_SetSkipPatchCheck(bool bSkip) {
}

bool UELEOSUtility::Debug_IsSkipPatchUpdate() {
    return false;
}

UELEOSSanitizeTextWrestlerData* UELEOSUtility::CreateSanitizeTextWrestlerData(const UObject* WorldContextObject) {
    return NULL;
}

UELEOSSanitizeTextPartyChat* UELEOSUtility::CreateSanitizeTextPartyChat(const UObject* WorldContextObject) {
    return NULL;
}

bool UELEOSUtility::CreateLobby(const UObject* WorldContextObject) {
    return false;
}

EExternalAccountType UELEOSUtility::ConvertPlatformTypeToExternalAccountType(EPlatformType ELPlatform) {
    return EExternalAccountType::Unknown;
}

void UELEOSUtility::CheckUsingMultiplayerFeatures(const UObject* WorldContextObject) {
}

bool UELEOSUtility::CheckPartyAttributeGameMode(const UObject* WorldContextObject, UEOSCommunityInfoBase* CommunityInfo, const FString& Mode) {
    return false;
}

void UELEOSUtility::ApplyWrestlerNameText(const UObject* WorldContextObject, UObject* OnlineWrestlerData, const FWrestlerNameText& WrestlerName) {
}

UELEOSUtility::UELEOSUtility() {
}

