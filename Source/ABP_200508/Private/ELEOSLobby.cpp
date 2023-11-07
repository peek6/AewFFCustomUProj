#include "ELEOSLobby.h"

bool UELEOSLobby::UpdateStepForStatusUpdatedOnJoined() {
    return false;
}

void UELEOSLobby::UpdateMPARecentPlayer(const FString& _userIdStr) {
}

bool UELEOSLobby::UpdateMemberAttributes() {
    return false;
}

bool UELEOSLobby::Unmute(const FString& ProductUserID) {
    return false;
}

bool UELEOSLobby::Unblock(const FString& ProductUserID) {
    return false;
}

bool UELEOSLobby::ShowPacketQueueInfo() {
    return false;
}

bool UELEOSLobby::SetVoiceChatStartMuted(bool _bMuted) {
    return false;
}

bool UELEOSLobby::SetVoiceChatEnabled(bool _bEnabled) {
    return false;
}

bool UELEOSLobby::Setup(UEOSLobby* _Lobby, UEOSManager* _NatP2P, UEOSUser* _User, UELEOSGameSession* _GameSession, UELNetworkObserverBase* NetworkObserver) {
    return false;
}

bool UELEOSLobby::SetTextBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

void UELEOSLobby::SetSelectNPCWrestler(int32 _Number, UObject* _WrestlerSelectParam) {
}

void UELEOSLobby::SetSelectMinigame(UObject* MinigameData) {
}

void UELEOSLobby::SetSelectArenaData(UObject* ArenaData) {
}

void UELEOSLobby::SetPrivateMatchPlayerStatusAll(ELobbyPrivateMatchStatus _Status) {
}

void UELEOSLobby::SetPrivateMatchPlayerStatus(const FString& _PUID, ELobbyPrivateMatchStatus _Status) {
}

void UELEOSLobby::SetPartyLastReadTime(const FDateTime& _DateTime) {
}

void UELEOSLobby::SetNPCWrestler(int32 _Number, int32 _Index, UObject* _SelectNPCWrestler) {
}

void UELEOSLobby::SetMyPlayerRank(int32 _Rank) {
}

void UELEOSLobby::SetMyPlayerIcons(TArray<int32> _Icons) {
}

void UELEOSLobby::SetMyPlayerIcon(int32 _PlayerIcon, int32 _BGIcon, const FUserProfileColorParam& _ColorParam) {
}

void UELEOSLobby::SetMyBattlePassPoint(int32 _Point) {
}

bool UELEOSLobby::SetMuteAll(EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSLobby::SetMute(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

void UELEOSLobby::SetMaxPacketSize(int32 Size) {
}

bool UELEOSLobby::SetMaxMember(int32 MaxMember) {
    return false;
}

void UELEOSLobby::SetMatchupWrestlerData(const FString& _PUID, UObject* _WrestlerData, int32 _Index) {
}

bool UELEOSLobby::SetLobbyAttributes(const TArray<UEOSAttribute*>& Attributes) const {
    return false;
}

void UELEOSLobby::SetCurrentWrestlerData(UObject* _WrestlerData) {
}

bool UELEOSLobby::SetBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSLobby::SendStampAll(int32 _StampID) {
    return false;
}

bool UELEOSLobby::SendStamp(int32 _StampID) {
    return false;
}

bool UELEOSLobby::SendSelectNPCWrestlerData() {
    return false;
}

bool UELEOSLobby::SendSelectMinigame() {
    return false;
}

bool UELEOSLobby::SendSelectArenaData() {
    return false;
}

bool UELEOSLobby::SendRequest(EELEOSLobbyPacketRequestType Type, UObject* Data) {
    return false;
}

bool UELEOSLobby::SendPrivateMatchStart(int32 _OnlineModeType, int32 _MatchType, int32 _MatchParam) {
    return false;
}

bool UELEOSLobby::SendPrivateMatchReady() {
    return false;
}

bool UELEOSLobby::SendPrivateMatchNotifyToHost(ELobbyPacketPrivateMatchNotify _Notify) {
    return false;
}

bool UELEOSLobby::SendPrivateMatchNotify(ELobbyPacketPrivateMatchNotify _Notify) {
    return false;
}

bool UELEOSLobby::SendPrivateMatchMenuInputSync(UObject* _InputData) {
    return false;
}

bool UELEOSLobby::SendPrivateMatchMenuInputResult(int32 _PlayerIndex, ELobbyPacketMenuInputType _InputType) {
    return false;
}

bool UELEOSLobby::SendPrivateMatchMenuInput(ELobbyPacketMenuInputType _InputValue) {
    return false;
}

bool UELEOSLobby::SendPrivateMatchLeaveSession() {
    return false;
}

bool UELEOSLobby::SendPrivateMatchInviteResponse(bool _Accept) {
    return false;
}

bool UELEOSLobby::SendPrivateMatchInviteRequest(int32 _OnlineModeType, int32 _MatchType, int32 _MatchParam) {
    return false;
}

bool UELEOSLobby::SendPrivateMatchCancel() {
    return false;
}

bool UELEOSLobby::SendPositionSelectInputResult(UObject* MenuInput) {
    return false;
}

bool UELEOSLobby::SendPositionSelectInput(UObject* MenuInput) {
    return false;
}

bool UELEOSLobby::SendPacketObject(UObject* InObject, EELEOSLobbyPacketType InType, int32 InID) {
    return false;
}

bool UELEOSLobby::SendNPCWrestlerData() {
    return false;
}

bool UELEOSLobby::SendNotifyToUser(ELobbyPacketNotifyType _Notify, const FString& _PUID) {
    return false;
}

bool UELEOSLobby::SendNotifyToHost(ELobbyPacketNotifyType _Notify) {
    return false;
}

bool UELEOSLobby::SendNotify(ELobbyPacketNotifyType _Notify, bool SendAllUser) {
    return false;
}

bool UELEOSLobby::SendMiniGameOwnerSelectInfo(UELEOSLobbyMiniGameOwnerSelectInfo* MiniGameOwnerSelectInfo) {
    return false;
}

bool UELEOSLobby::SendMiniGameInfo(UELEOSLobbyMiniGameInfo* MiniGameInfo) {
    return false;
}

bool UELEOSLobby::SendMatchupWrestlerData() {
    return false;
}

bool UELEOSLobby::SendLobbyStamp(int32 _StampID) {
    return false;
}

bool UELEOSLobby::SendLobbyChat(const FString& _Message) {
    return false;
}

bool UELEOSLobby::SendCurrentWrestlerData() {
    return false;
}

bool UELEOSLobby::SendChatAll(const FString& _Message) {
    return false;
}

bool UELEOSLobby::RequestInviteLobbyMember() {
    return false;
}

bool UELEOSLobby::RequestInviteAllLobbyMember() {
    return false;
}

void UELEOSLobby::Release() {
}

bool UELEOSLobby::RejectInvite(UEOSCommunityInfoBase* InInfo) {
    return false;
}

bool UELEOSLobby::QueryInvites() {
    return false;
}

bool UELEOSLobby::PrivateMatchPlayerStatusUpdate() {
    return false;
}

bool UELEOSLobby::PrivateMatchPlayerStatusReset() {
    return false;
}

bool UELEOSLobby::PrivateMatchPlayerStatusAll(ELobbyPrivateMatchStatus _Status) {
    return false;
}

void UELEOSLobby::OnSanitizeTextWrestlerDataSelectNPC(const FWrestlerNameText& WrestlerNameText, UObject* UserData) {
}

void UELEOSLobby::OnSanitizeTextWrestlerDataNPC(const FWrestlerNameText& WrestlerNameText, UObject* UserData) {
}

void UELEOSLobby::OnSanitizeTextWrestlerDataNormal(const FWrestlerNameText& WrestlerNameText, UObject* UserData) {
}

void UELEOSLobby::OnSanitizeTextWrestlerDataMatchup(const FWrestlerNameText& WrestlerNameText, UObject* UserData) {
}

void UELEOSLobby::OnSanitizeTextPartyChat(const FString& SanitizeText, UObject* UserData) {
}

void UELEOSLobby::OnReceivePrivateMatchNotify(UEOSUserBase* _UserBase, UObject* PacketObject, int32 PacketType, int32 PacketID) {
}

void UELEOSLobby::OnReceive(UEOSNatP2PCachedTransfer* _Transfer, UEOSUserBase* _UserBase, UEOSNatP2PBinary* _P2PBinary) {
}

void UELEOSLobby::OnNatP2PEvent(EEOSNatP2PEvent InEOSP2PEvent, UEOSNatP2P* InEOSNatP2P, UEOSUserBase* InEOSUserBase) {
}

void UELEOSLobby::OnNatP2PCachedTransferEvent(EEOSNatP2PCachedTransferEvent InEOSP2PCachedTransferEvent, UEOSNatP2PCachedTransfer* InEOSNatP2PCachedTransfer, UEOSUserBase* InEOSUserBase) {
}

void UELEOSLobby::OnEOSEvent(EELEOSEventType EventType, EELEOSEventResult EventResult) {
}

void UELEOSLobby::OnCommunitySearchResult(UEOSCommunityBase* _CommunityBase, UEOSSearchResultsBase* _SearchSessionResult) {
}

void UELEOSLobby::OnCommunityEventForGameSession(EEOSCommunityEvent _CommunityEvent, UEOSCommunityBase* _CommunityBase, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _LobbyUser) {
}

void UELEOSLobby::OnCommunityEvent(EEOSCommunityEvent EOSCommunityEvent, UEOSCommunityBase* EOSCommunityBase, UEOSCommunityInfoBase* EOSCommunityInfo, UEOSCommunityUserBase* EOSLobbyUser) {
}

bool UELEOSLobby::NextStepForStatusUpdatedOnJoined(ELobbyCheckStepForHost OverwriteStepType) {
    return false;
}

bool UELEOSLobby::NeedToSelectNPCWrestler(int32 _SelectorPlayerIndex, int32 _Position, bool _SelectorIsHost) {
    return false;
}

bool UELEOSLobby::Mute(const FString& ProductUserID) {
    return false;
}

bool UELEOSLobby::LobbySearchedDispach(UEOSSearchResultsBase* _searchResults) {
    return false;
}

bool UELEOSLobby::Leave() {
    return false;
}

void UELEOSLobby::LeaderChangeRequest(const FString& _lobbyID, const FString& _leaderExternalAccountID) {
}

bool UELEOSLobby::Kick(const FString& ProductUserID) {
    return false;
}

bool UELEOSLobby::JoinLatestInvite() {
    return false;
}

bool UELEOSLobby::JoinByLobbyInvite(const FLobbyInvite& LobbyInvite) {
    return false;
}

bool UELEOSLobby::Join(UEOSCommunityInfoBase* LobbyInfo) {
    return false;
}

bool UELEOSLobby::IsUsingMultiplayerFeature() {
    return false;
}

bool UELEOSLobby::IsSpeaking(const FString& ProductUserID) const {
    return false;
}

bool UELEOSLobby::IsSolo() const {
    return false;
}

bool UELEOSLobby::IsMuted(const FString& ProductUserID) const {
    return false;
}

bool UELEOSLobby::IsLobbyOwnerPUID(const FString& _PUID) const {
    return false;
}

bool UELEOSLobby::IsLobbyOwner() const {
    return false;
}

bool UELEOSLobby::IsLobbyMemberFull(UEOSCommunityInfoBase* CommunityInfo) {
    return false;
}

bool UELEOSLobby::IsJoinedPrivateMatch() {
    return false;
}

bool UELEOSLobby::IsJoinedLobby() const {
    return false;
}

bool UELEOSLobby::IsExistInviteUser() {
    return false;
}

bool UELEOSLobby::IsCompleteCurrentWrestler() {
    return false;
}

bool UELEOSLobby::IsBlocked(const FString& ProductUserID) const {
    return false;
}

FString UELEOSLobby::InviteLobbyID() {
    return TEXT("");
}

void UELEOSLobby::InviteFromConsole(const FString& PlatformUserID) {
}

bool UELEOSLobby::Invite(const FString& ProductUserID) {
    return false;
}

bool UELEOSLobby::HasPlayer(const FString& ProductUserID) {
    return false;
}

bool UELEOSLobby::HasLobbyUser(const FString& _PUID) const {
    return false;
}

EEOSLobbyUserAudioStatus UELEOSLobby::GetVoiceStatus(const FString& ProductUserID) const {
    return EEOSLobbyUserAudioStatus::Unsupported;
}

bool UELEOSLobby::GetVoiceChatStartMuted() const {
    return false;
}

bool UELEOSLobby::GetVoiceChatEnabled() const {
    return false;
}

int32 UELEOSLobby::GetUnreadPartyChatCount(const FDateTime& _UtcDateTime) {
    return 0;
}

EEOSLobbyUserMuteFlag UELEOSLobby::GetTextBlockFlag(const FString& ProductUserID) const {
    return EEOSLobbyUserMuteFlag::None;
}

bool UELEOSLobby::GetSpeakingUsers(UEOSCommunityInfoBase*& EOSCommunityInfo, TArray<UEOSCommunityUserBase*>& SpeakingUsers) {
    return false;
}

int32 UELEOSLobby::GetSelfPlayerIndex() {
    return 0;
}

void UELEOSLobby::GetSelectNPCWrestler(int32 _Number, UObject*& _SelectNPCWrestler) {
}

UObject* UELEOSLobby::GetSelectMinigameData() const {
    return NULL;
}

UObject* UELEOSLobby::GetSelectArenaData() const {
    return NULL;
}

UObject* UELEOSLobby::GetPlayerWrestlerDataAtIndex(const FString& _PUID, int32 _Index) {
    return NULL;
}

int32 UELEOSLobby::GetPlayerNum() const {
    return 0;
}

FString UELEOSLobby::GetPlayerIndexToPUID(int32 _PlayerIndex) {
    return TEXT("");
}

int32 UELEOSLobby::GetPlayerIndex(const FString& _PUID) {
    return 0;
}

void UELEOSLobby::GetPartyLastReadTime(FDateTime& _DateTime) {
}

int32 UELEOSLobby::GetNPCWrestlerSelectorPlayerIndex(int32 _Number, int32 _OwnerPlayerIndex) {
    return 0;
}

void UELEOSLobby::GetNPCWrestler(int32 _Number, int32 _Index, UObject*& _SelectNPCWrestler) {
}

EEOSLobbyUserMuteFlag UELEOSLobby::GetMuteFlag(const FString& ProductUserID) const {
    return EEOSLobbyUserMuteFlag::None;
}

void UELEOSLobby::GetMatchupWrestlerList(const FString& ProductUserID, TArray<UObject*>& Array) {
}

UObject* UELEOSLobby::GetMatchupWrestlerData(const FString& ProductUserID) {
    return NULL;
}

bool UELEOSLobby::GetLobbyUserRank(const FString& _PUID, int32& _Rank) {
    return false;
}

bool UELEOSLobby::GetLobbyUserPlatform(const FString& _PUID, EPlatformType& _Platform) {
    return false;
}

bool UELEOSLobby::GetLobbyUserName(const FString& _PUID, FString& _Name) {
    return false;
}

bool UELEOSLobby::GetLobbyUserIcons(const FString& _PUID, TArray<int32>& _Icons) {
    return false;
}

bool UELEOSLobby::GetLobbyUserIcon(const FString& _PUID, int32& _PlayerIcon, int32& _BGIcon, FUserProfileColorParam& _ColorParam) {
    return false;
}

bool UELEOSLobby::GetLobbyUserBattlePassPoint(const FString& _PUID, int32& _Point) {
    return false;
}

void UELEOSLobby::GetLobbyPlayerUserIDs(TArray<FString>& Players, bool bIncludeSelf) {
}

void UELEOSLobby::GetLobbyPlayers(TMap<FString, FLobbyCharacterData>& _Players) {
}

void UELEOSLobby::GetLobbyPlayerProductIDs(TArray<FString>& PlayerProductIDs) {
}

bool UELEOSLobby::GetLobbyOwnerPUID(FString& _PUID) {
    return false;
}

int32 UELEOSLobby::GetLobbyOwnerPlayerIndex() {
    return 0;
}

UEOSCommunityUserBase* UELEOSLobby::GetLobbyCommunityUser(const FString& _PUID) const {
    return NULL;
}

void UELEOSLobby::GetLobbyChatLog(TArray<FLobbyChatLogData>& _ChatLog) {
}

void UELEOSLobby::GetLatestInvite(UEOSLobbyInfo*& NewInvite) const {
}

void UELEOSLobby::GetInvites(TMap<FString, UEOSCommunityInfoBase*>& Invites) {
}

UEOSLobbyInfo* UELEOSLobby::GetEOSLobbyInfo() const {
    return NULL;
}

UEOSLobby* UELEOSLobby::GetEOSLobby() const {
    return NULL;
}

void UELEOSLobby::GetCurrentWrestlerDataByPUID(UObject*& _Object, const FString& _PUID) {
}

void UELEOSLobby::GetCurrentWrestlerData(UObject*& _Object, int32 _PlayerIndex) {
}

EEOSLobbyUserMuteFlag UELEOSLobby::GetBlockFlag(const FString& ProductUserID) const {
    return EEOSLobbyUserMuteFlag::None;
}

bool UELEOSLobby::FindUserIDByCharacterIndex(FString& _PUID, int32 _Index) {
    return false;
}

void UELEOSLobby::FindPlayerSessionByFriend(const FString& _sessionOwnerExternalAccountID) {
}

bool UELEOSLobby::FindLobbyUserName(UEOSCommunityInfoBase* _CommunityInfo, const FString& _PUID, FString& _Name) {
    return false;
}

bool UELEOSLobby::FindLobbyPlayerByIndex(FLobbyCharacterData& _Data, int32 _Index) {
    return false;
}

bool UELEOSLobby::FindLobbyPlayer(FLobbyCharacterData& _Data, const FString& _PUID) {
    return false;
}

bool UELEOSLobby::FindLobby(const FString& _CommunityID) {
    return false;
}

void UELEOSLobby::ExecConsoleInviteEvent() {
}

void UELEOSLobby::Destroy() {
}

void UELEOSLobby::CreateMPASessionEvent() {
}

bool UELEOSLobby::CreateDefault() {
    return false;
}

bool UELEOSLobby::Create(int32 MaxMember, EEOSCommunityPermission Permission, bool AllowInvite) {
    return false;
}

bool UELEOSLobby::ClearTextBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

void UELEOSLobby::ClearSelectNPCWrestler() {
}

void UELEOSLobby::ClearNPCWrestler() {
}

bool UELEOSLobby::ClearMuteAll(EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSLobby::ClearMute(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

void UELEOSLobby::ClearMatchupWrestlerData() {
}

void UELEOSLobby::ClearInvitedLobbyIDString() {
}

bool UELEOSLobby::ClearBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSLobby::CheckSearchResultGameMode(UEOSSearchResultsBase* _searchResults, const FString& Mode) {
    return false;
}

bool UELEOSLobby::CheckJoinable(UEOSCommunityInfoBase* CommunityInfo) const {
    return false;
}

bool UELEOSLobby::ChangeOwner(UEOSCommunityUserBase* _CommunityUser) {
    return false;
}

bool UELEOSLobby::Block(const FString& ProductUserID) {
    return false;
}

UELEOSLobby::UELEOSLobby() {
    this->EOSManager = NULL;
    this->EOSLobby = NULL;
    this->EOSLobbyInfo = NULL;
    this->LastestInvite = NULL;
    this->EOSUser = NULL;
    this->EOSGameSession = NULL;
    this->EOSNatP2P = NULL;
    this->EOSNatP2PTransfer = NULL;
    this->SocketID = TEXT("Party");
    this->LobbyPlayerNum = 0;
    this->SelectNPCWrestlerArray.AddDefaulted(4);
    this->SelectArenaData = NULL;
    this->SelectArenaDataUpdate = false;
    this->SelectMinigameData = NULL;
    this->MyPlayerRank = 0;
    this->MyBattlePassPoint = 0;
    this->bVoiceChatStartMuted = false;
    this->MuteFlag = EEOSLobbyUserMuteFlag::None;
    this->RequestResendCurrentWrestlerDataFlag = false;
    this->RequestResendCurrentWrestlerDataTimer = 0.00f;
    this->LobbyMPAStatus = ELobbyMPAStatus::MPA_Destroy;
}

