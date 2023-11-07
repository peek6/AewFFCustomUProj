#include "ELEOSGameSession.h"

void UELEOSGameSession::UpdatePlayerList(bool bRemove) {
}

void UELEOSGameSession::UpdatePlayerData(const FSessionGamePlayerDataBP& PlayerData) {
}

void UELEOSGameSession::UpdateMPARecentPlayer(const FString& _externalUserId) {
}

bool UELEOSGameSession::ShowPacketQueueInfo() {
    return false;
}

void UELEOSGameSession::SetWrestlerList(const TArray<UObject*>& WrestlerList) {
}

void UELEOSGameSession::SetWrestlerData(UObject* WrestlerData) {
}

bool UELEOSGameSession::SetWeaponDecalToPlayerData(int32 Decal, int32 DecalSymbol, const FUserProfileColorParam& ColorParam) {
    return false;
}

bool UELEOSGameSession::SetUsingMultiplayerFeature(bool bUsing) {
    return false;
}

bool UELEOSGameSession::SetTeamMembersToPlayerData(const TArray<FString>& TeamMemberPUIDs) {
    return false;
}

void UELEOSGameSession::SetSelectNPCCharacter(int32 _Number, UObject* _WrestlerSelectParam) {
}

void UELEOSGameSession::SetRequiredWrestlerNum(int32 Num) {
}

void UELEOSGameSession::SetPlayerWrestlerData(const FString& ProductUserID, UObject* WrestlerData, int32 Index) {
}

bool UELEOSGameSession::SetPlayerWinLoseCountToPlayerData(const TArray<int32>& Counts) {
    return false;
}

bool UELEOSGameSession::SetPlayerRankToPlayerData(int32 PlayerRank, int32 PlayerRankPoint) {
    return false;
}

void UELEOSGameSession::SetPlayerPositionRanked(TArray<int32> _Array) {
}

void UELEOSGameSession::SetPlayerPosition(TArray<int32> _Array) {
}

void UELEOSGameSession::SetPlayerMatchRuleData(const FString& ProductUserID, UObject* MatchRuleData) {
}

bool UELEOSGameSession::SetPlayerIconToPlayerData(int32 PlayerIcon, int32 BGIcon, const FUserProfileColorParam& ColorParam) {
    return false;
}

bool UELEOSGameSession::SetPlayerIconsToPlayerData(const TArray<int32>& Icons) {
    return false;
}

void UELEOSGameSession::SetPlayerData(int32 Number) {
}

void UELEOSGameSession::SetPlayerArenaData(const FString& ProductUserID, UObject* ArenaData) {
}

void UELEOSGameSession::SetP2PTimeoutRetryCount(int32 Count) {
}

void UELEOSGameSession::SetP2PTimeoutLatency(float Latency) {
}

void UELEOSGameSession::SetP2PTimeoutCheckInterval(float Interval) {
}

void UELEOSGameSession::SetOnlineModeType(int32 _OnlineModeType) {
}

void UELEOSGameSession::SetNPCPlayerData(int32 _NPCNumber) {
}

void UELEOSGameSession::SetNeedsUpdatePlayerList(bool NeedsUpdate) {
}

void UELEOSGameSession::SetMaxPacketSize(int32 Size) {
}

void UELEOSGameSession::SetMatchRuleData(UObject* MatchRuleData) {
}

bool UELEOSGameSession::SetGameVoiceChatEnabled(bool bEnabled) {
    return false;
}

void UELEOSGameSession::SetEnableBuildVersionCheck(bool _Enable) {
}

void UELEOSGameSession::SetELOnlineModeType(EELOnlineModeType _OnlineModeType) {
}

void UELEOSGameSession::SetCurrentWrestlerData(UObject* Data, int32 Index) {
}

void UELEOSGameSession::SetArenaData(UObject* ArenaData) {
}

bool UELEOSGameSession::SendSessionGameFlowStep(EEOSSessionP2PAFGameFlowStep GameFlowStep) {
    return false;
}

bool UELEOSGameSession::SendSessionGameEvent(UEOSSessionP2P* InSessionP2P, EEOSSessionGameEventType InGameEventType) {
    return false;
}

bool UELEOSGameSession::SendPositionData() {
    return false;
}

bool UELEOSGameSession::SendPlayerWrestlerData(UEOSSessionP2P* InSessionP2P) {
    return false;
}

bool UELEOSGameSession::SendPlayerStateData(ESessionPlayerStateNameType StateName, ESessionPlayerStateType State) {
    return false;
}

bool UELEOSGameSession::SendPlayerMatchRuleData(UEOSSessionP2P* InSessionP2P) {
    return false;
}

bool UELEOSGameSession::SendPlayerData(UEOSSessionP2P* InSessionP2P) {
    return false;
}

bool UELEOSGameSession::SendPlayerArenaData(UEOSSessionP2P* InSessionP2P) {
    return false;
}

bool UELEOSGameSession::SendP2PLatencyPacket() {
    return false;
}

bool UELEOSGameSession::SearchSessionInternal(const TArray<UEOSAttribute*>& Attributes, int32 MaxResults, bool AutoJoinSession, int32 RetryCount) {
    return false;
}

void UELEOSGameSession::SearchSessionInitParam() {
}

bool UELEOSGameSession::SearchSession(const TArray<UEOSAttribute*>& Attributes, int32 MaxResults, bool AutoJoinSession, int32 RetryCount) {
    return false;
}

bool UELEOSGameSession::ResendPlayerData() {
    return false;
}

bool UELEOSGameSession::RequestStartGame() {
    return false;
}

bool UELEOSGameSession::RequestLeaveSession(const FString& _PUID) {
    return false;
}

bool UELEOSGameSession::RequestJoinSession(UEOSCommunityInfoBase* CommunityInfo) {
    return false;
}

bool UELEOSGameSession::RequestEndGame() {
    return false;
}

bool UELEOSGameSession::RequestDestroySession() {
    return false;
}

bool UELEOSGameSession::RequestCreateSession(const FEOSSessionSettings& Settings, bool _AutoGameStart) {
    return false;
}

void UELEOSGameSession::QuitMatch() {
}

bool UELEOSGameSession::QuickMatchJoin(const FEOSSessionSettings& Settings, const TArray<UEOSAttribute*>& _SearchSettings, int32 MaxResults) {
    return false;
}

bool UELEOSGameSession::QuickMatchCreate(const FEOSSessionSettings& Settings) {
    return false;
}

bool UELEOSGameSession::QuickMatchCancel(bool _Force) {
    return false;
}

bool UELEOSGameSession::QuickMatch(const FEOSSessionSettings& _Settings, const TArray<UEOSAttribute*>& _SearchSettings, int32 MaxResults) {
    return false;
}

void UELEOSGameSession::OnSessionSearchResultEvent(UEOSCommunityBase* CommunityBase, UEOSSearchResultsBase* SearchResultsBase) {
}

void UELEOSGameSession::OnSessionP2PEvent(EEOSSessionP2PEvent InSessionP2PEvent, UEOSSessionP2P* InSessionP2P, UEOSSessionUserPacketMap* InSessionUserPacketMap) {
}

void UELEOSGameSession::OnSessionP2PDestroy(UEOSSession* Session, UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P) {
}

void UELEOSGameSession::OnSessionP2PDataShared(EEOSSessionP2PDataSharingEvent InDataSharingEvent, UEOSSessionP2P* InSessionP2P, UEOSSessionP2PSynchronizedPacketBase* InCurrent, UEOSSessionP2PSynchronizedPacketBase* InReceived, const FString& InProductUserID) {
}

void UELEOSGameSession::OnSessionP2PDataReceived(UEOSSessionP2P* InSessionP2P, UEOSSessionP2PSynchronizedPacketBase* InCurrent, UEOSSessionP2PSynchronizedPacketBase* InReceivedAndReply, const FString& ProductUserID, bool Overwrite) {
}

void UELEOSGameSession::OnSessionP2PCreated(UEOSSession* Session, UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P) {
}

void UELEOSGameSession::OnSessionCommunityEvent(EEOSCommunityEvent CommunityEvent, UEOSCommunityBase* Community, UEOSCommunityInfoBase* CommunityInfoBase, UEOSCommunityUserBase* CommunityUserBase) {
}

void UELEOSGameSession::OnSanitizeTextWrestlerDataNPC(const FWrestlerNameText& WrestlerNameText, UObject* UserData) {
}

void UELEOSGameSession::OnSanitizeTextWrestlerData(const FWrestlerNameText& WrestlerNameText, UObject* UserData) {
}

void UELEOSGameSession::OnReceiveSessionObject(UEOSNatP2PCachedTransfer* Transfer, UEOSUserBase* UserBase, UEOSNatP2PBinary* P2PBinary) {
}

void UELEOSGameSession::OnPlayerMemberUpdated(UEOSSessionP2P* InSessionP2P, UEOSSessionP2PMemberInfoPacket* InSessionP2PMemberInfoPacket) {
}

void UELEOSGameSession::OnNatP2PEvent(EEOSNatP2PEvent InEOSP2PEvent, UEOSNatP2P* InEOSNatP2P, UEOSUserBase* InEOSUserBase) {
}

void UELEOSGameSession::OnNatP2PCachedTransferEvent(EEOSNatP2PCachedTransferEvent _Event, UEOSNatP2PCachedTransfer* _CachedTransfer, UEOSUserBase* _UserBase) {
}

bool UELEOSGameSession::NeedToSelectNPCCharacter(int32 _SelectorPlayerIndex, int32 _Position, bool _SelectorIsHost) {
    return false;
}

void UELEOSGameSession::MarkRequestStartGame() {
}

bool UELEOSGameSession::IsValidPlayerIndex(int32 PlayerIndex) const {
    return false;
}

bool UELEOSGameSession::IsUsingMultiplayerFeature() {
    return false;
}

bool UELEOSGameSession::IsStartMatch() const {
    return false;
}

bool UELEOSGameSession::IsSpectatorCharacterIndex(int32 CharacterIndex) const {
    return false;
}

bool UELEOSGameSession::IsSessionSearching() const {
    return false;
}

bool UELEOSGameSession::IsSessionOwner() const {
    return false;
}

bool UELEOSGameSession::IsPrivateMatch() const {
    return false;
}

bool UELEOSGameSession::IsInSession() const {
    return false;
}

bool UELEOSGameSession::IsCreatedOrJoinedSession() const {
    return false;
}

bool UELEOSGameSession::IsAnyPlayerStateMatched(ESessionPlayerStateNameType StateName, ESessionPlayerStateType State) const {
    return false;
}

bool UELEOSGameSession::IsAnyPlayerStateGreaterOrEqual(ESessionPlayerStateNameType StateName, ESessionPlayerStateType State) const {
    return false;
}

bool UELEOSGameSession::IsAllPlayerStateMatchedInList(ESessionPlayerStateNameType StateName, const TArray<ESessionPlayerStateType>& StateList) const {
    return false;
}

bool UELEOSGameSession::IsAllPlayerStateMatched(ESessionPlayerStateNameType StateName, ESessionPlayerStateType State) const {
    return false;
}

bool UELEOSGameSession::IsAllPlayerStateGreaterOrEqual(ESessionPlayerStateNameType StateName, ESessionPlayerStateType State) const {
    return false;
}

bool UELEOSGameSession::HasTimeoutSessionP2P() {
    return false;
}

bool UELEOSGameSession::GetWeaponDecal(const FString& ProductUserID, int32& Decal, int32& DecalSymbol, FUserProfileColorParam& ColorParam) {
    return false;
}

TArray<FString> UELEOSGameSession::GetVoiceChatMembers(const TArray<FString>& MemberProductIDs) const {
    return TArray<FString>();
}

bool UELEOSGameSession::GetUserIDByIndex(int32 PlayerIndex, FString& ProductUserID) const {
    return false;
}

bool UELEOSGameSession::GetUserIDByCharacterIndex(int32 CharacterIndex, FString& ProductUserID) const {
    return false;
}

void UELEOSGameSession::GetSpectatorUserID(TArray<FString>& ProductUserIDs) const {
}

int32 UELEOSGameSession::GetSpectatorNum() const {
    return 0;
}

UEOSSessionSearchResults* UELEOSGameSession::GetSessionSearchResults() const {
    return NULL;
}

FString UELEOSGameSession::GetSessionP2PSocketID() const {
    return TEXT("");
}

UEOSSessionP2P* UELEOSGameSession::GetSessionP2P() const {
    return NULL;
}

void UELEOSGameSession::GetSelectNPCCharacter(const FString& _PUID, int32 _Number, UObject* _SelectNPCCharacter) {
}

int32 UELEOSGameSession::GetPlayerWrestlerNum(const FString& ProductUserID) {
    return 0;
}

void UELEOSGameSession::GetPlayerWrestlerList(const FString& ProductUserID, TArray<UObject*>& Array) {
}

UObject* UELEOSGameSession::GetPlayerWrestlerDataAtIndex(const FString& ProductUserID, int32 Index) {
    return NULL;
}

void UELEOSGameSession::GetPlayerWrestlerDataArray(TArray<UObject*>& Array) {
}

UObject* UELEOSGameSession::GetPlayerWrestlerData(const FString& ProductUserID) {
    return NULL;
}

bool UELEOSGameSession::GetPlayerWinLoseCounts(const FString& ProductUserID, TArray<int32>& Counts) {
    return false;
}

int32 UELEOSGameSession::GetPlayerValidWrestlerNum(const FString& ProductUserID) {
    return 0;
}

ESessionPlayerStateType UELEOSGameSession::GetPlayerStateByIndex(int32 PlayerIndex, ESessionPlayerStateNameType StateName) const {
    return ESessionPlayerStateType::Num_0;
}

bool UELEOSGameSession::GetPlayerRank(const FString& ProductUserID, int32& Rank) {
    return false;
}

int32 UELEOSGameSession::GetPlayerRandomNumber(int32 PlayerIndex, int32 RandomNumberIndex) const {
    return 0;
}

void UELEOSGameSession::GetPlayerPUIDByPlayerIndex(int32 _Index, FString& _PUID) {
}

TArray<int32> UELEOSGameSession::GetPlayerPositionRankedArray() {
    return TArray<int32>();
}

void UELEOSGameSession::GetPlayerPositionArray(TArray<int32>& _PlayerPosition) {
}

bool UELEOSGameSession::GetPlayerPlatform(const FString& ProductUserID, EPlatformType& Platform) {
    return false;
}

bool UELEOSGameSession::GetPlayerName(const FString& ProductUserID, FString& Name) {
    return false;
}

UObject* UELEOSGameSession::GetPlayerMatchRuleData(const FString& ProductUserID) const {
    return NULL;
}

bool UELEOSGameSession::GetPlayerIndexToPlayerPosition(int32 _PlayerIndex, int32& _PlayerPosition) const {
    return false;
}

int32 UELEOSGameSession::GetPlayerIndex(const FString& ProductUserID) const {
    return 0;
}

bool UELEOSGameSession::GetPlayerIcons(const FString& ProductUserID, TArray<int32>& Icons) {
    return false;
}

bool UELEOSGameSession::GetPlayerIcon(const FString& ProductUserID, int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam) {
    return false;
}

void UELEOSGameSession::GetPlayerDataArraySortedByName(TArray<FSessionGamePlayerDataBP>& Array) const {
}

void UELEOSGameSession::GetPlayerDataArray(TArray<FSessionGamePlayerDataBP>& Array) const {
}

void UELEOSGameSession::GetPlayerData(FSessionGamePlayerDataBP& PlayerData) {
}

void UELEOSGameSession::GetPlayerAllWrestlerDataArray(TArray<UObject*>& Array) {
}

int32 UELEOSGameSession::GetP2PTimeoutRetryCount() const {
    return 0;
}

float UELEOSGameSession::GetP2PTimeoutLatency() const {
    return 0.0f;
}

int32 UELEOSGameSession::GetOwningPlayerIndex() const {
    return 0;
}

int32 UELEOSGameSession::GetOwningCharacterIndex() const {
    return 0;
}

int32 UELEOSGameSession::GetOnlineModeType() const {
    return 0;
}

void UELEOSGameSession::GetOnlineModePlayerPositionArray(TArray<int32>& _Array) {
}

int32 UELEOSGameSession::GetNPCCharacterSelectorPlayerIndex(int32 _Number, int32 _OwnerPlayerIndex) {
    return 0;
}

bool UELEOSGameSession::GetNeedsUpdatePlayerList() const {
    return false;
}

float UELEOSGameSession::GetMaxSessionP2PLatency() {
    return 0.0f;
}

int32 UELEOSGameSession::GetMaxPacketSize() {
    return 0;
}

void UELEOSGameSession::GetInitialPlayerUserIDList(TArray<FString>& PlayerUserIDList) const {
}

int32 UELEOSGameSession::GetInitialPlayerNum() const {
    return 0;
}

void UELEOSGameSession::GetEOSSortedPlayerUserIDList(TArray<FString>& PlayerUserIDList) const {
}

void UELEOSGameSession::GetEOSSessionPlayerMap(TMap<int32, FString>& PlayerMap) {
}

void UELEOSGameSession::GetEOSSessionPlayerDataMap(TMap<FString, FSessionGamePlayerDataBP>& PlayerDataMap) const {
}

FString UELEOSGameSession::GetEOSSessionName() const {
    return TEXT("");
}

UEOSSessionInfo* UELEOSGameSession::GetEOSSessionInfo() const {
    return NULL;
}

UEOSSession* UELEOSGameSession::GetEOSSession() const {
    return NULL;
}

UEOSNatP2PSplitQueueTransfer* UELEOSGameSession::GetEOSNatP2PTransferRPC() const {
    return NULL;
}

UEOSNatP2PSplitQueueTransfer* UELEOSGameSession::GetEOSNatP2PTransfer() const {
    return NULL;
}

UEOSNatP2P* UELEOSGameSession::GetEOSNatP2P() const {
    return NULL;
}

UEOSSessionP2PAFGameFlowManager* UELEOSGameSession::GetEOSGameFlowManager() const {
    return NULL;
}

UEOSCommunityInfoBase* UELEOSGameSession::GetEOSCommunityInfo() const {
    return NULL;
}

bool UELEOSGameSession::GetEnableBuildVersionCheck() const {
    return false;
}

EELOnlineModeType UELEOSGameSession::GetELOnlineModeType() const {
    return EELOnlineModeType::OnlineModeType_RANKED;
}

void UELEOSGameSession::GetDisconnectedPlayerUserIDList(TArray<FString>& PlayerUserIDList) const {
}

UObject* UELEOSGameSession::GetCurrentWrestlerData(int32 Index) const {
    return NULL;
}

int32 UELEOSGameSession::GetCurrentPlayerNum() const {
    return 0;
}

int32 UELEOSGameSession::GetCurrentPlayerIndex(const FString& ProductUserID) const {
    return 0;
}

int32 UELEOSGameSession::GetCurrentOwningPlayerIndex() const {
    return 0;
}

int32 UELEOSGameSession::GetCurrentOwningManagementIndex() const {
    return 0;
}

UObject* UELEOSGameSession::GetCurrentMatchRuleData() const {
    return NULL;
}

UObject* UELEOSGameSession::GetCurrentArenaData(FString& SelectArenaUserPUID) {
    return NULL;
}

int32 UELEOSGameSession::GetCharacterIndexByPlayerIndex(int32 PlayerIndex) const {
    return 0;
}

int32 UELEOSGameSession::GetCharacterIndex(const FString& ProductUserID) const {
    return 0;
}

void UELEOSGameSession::GetAllMatchRuleData(TArray<UObject*>& Rules) const {
}

bool UELEOSGameSession::FindPlayerDataBP(const FString& ProductUserID, FSessionGamePlayerDataBP& PlayerData) {
    return false;
}

bool UELEOSGameSession::FindPlayerData(const FString& ProductUserID, FSessionGamePlayerDataBP& PlayerData) const {
    return false;
}

bool UELEOSGameSession::ContainsDisconnectedPlayerUserID(const FString& ProductUserID) const {
    return false;
}

void UELEOSGameSession::ClearPlayerPosition() {
}

void UELEOSGameSession::AddDisconnectedPlayerUserID(const FString& ProductUserID) {
}

void UELEOSGameSession::Activity_UpdateMatchStatus(const EELActivityUpdateMatchStatus& _Status) {
}

void UELEOSGameSession::Activity_RestartMatch(const TArray<FELActivity_MatchPlayerInfo>& _MatchPlayerInfos) {
}

void UELEOSGameSession::Activity_LeaveMatch(const FString& _leaveProductUserId) {
}

void UELEOSGameSession::Activity_JoinMatch(const FString& _joinProductUserId, const FString& _joinExternalUserId) {
}

void UELEOSGameSession::Activity_DestroyMatch(const TArray<FELActivity_MatchResultPlayerInfo>& _productUsers) {
}

void UELEOSGameSession::Activity_CreateMatch(const FELActivity_InitInfo& InActivityInfo) {
}

UELEOSGameSession::UELEOSGameSession() {
    this->EOSManager = NULL;
    this->EOSUser = NULL;
    this->EOSAntiCheatClient = NULL;
    this->EOSSession = NULL;
    this->EOSSessionInfo = NULL;
    this->EOSSessionSearchResults = NULL;
    this->EOSSessionP2P = NULL;
    this->EOSNatP2PSession = NULL;
    this->EOSNatP2P = NULL;
    this->EOSNatP2PTransfer = NULL;
    this->EOSNatP2PTransferRPC = NULL;
    this->EOSSessionP2PAFBindPlayers = NULL;
    this->EOSSessionP2PAFDataSharing = NULL;
    this->EOSSessionP2PAFGameFlowManager = NULL;
    this->ELEOSGameChatSession = NULL;
    this->IsAutoCreateSession = false;
    this->IsSearching = false;
    this->SessionAutoStartGame = false;
    this->SessionSearchCancel = false;
    this->StartMatch = false;
    this->Cancelable = true;
    this->SessionRequestStartGame = false;
    this->DirtyPlayerData = false;
    this->NeedsUpdatePlayerList = false;
    this->EACSession = false;
    this->PlayerPositionRanked.AddDefaulted(4);
    this->EnableBuildVersionCheck = true;
    this->SelectNPCCharacter.AddDefaulted(4);
    this->OnlineModeType = 0;
    this->ELOnlineModeType = EELOnlineModeType::OnlineModeType_RANKED;
    this->RequiredWrestlerNum = 1;
    this->SendPlayerDataInterval = 0.00f;
    this->SessionRequestStartGameInterval = 0.00f;
    this->RequestStartGameSession = false;
    this->ResendPlayerDataFlag = false;
    this->ResendPlayerStateFlag = false;
    this->RequestResendPlayerDataFlag = false;
    this->RequestResendPlayerStateFlag = false;
    this->RequestStartGameSessionTimer = 3.00f;
    this->ResendPlayerDataTimer = 3.00f;
    this->ResendPlayerStateTimer = 3.00f;
    this->RequestResendPlayerDataTimer = 3.00f;
    this->RequestResendPlayerStateTimer = 3.00f;
    this->AllReadyPlayerDataTimer = 0.00f;
    this->RequestUpateLatencyTimer = 0.00f;
    this->RequestUpateLatencyInterval = 20.00f;
    this->P2PTimeoutLatency = 5.00f;
    this->P2PTimeoutRetryCount = 3;
    this->SessionState = EELEOSSessionState::STATE_SESSION_NONE;
}

