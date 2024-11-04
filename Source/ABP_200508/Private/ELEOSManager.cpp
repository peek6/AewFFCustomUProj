#include "ELEOSManager.h"

void UELEOSManager::UpdateEOS() {
}

bool UELEOSManager::UnlinkConnectAccount() {
    return false;
}

void UELEOSManager::StartReconnectEOSTimer() {
}

void UELEOSManager::StartCheckEOSServicesTimer() {
}

bool UELEOSManager::ShowP2PPacketQueueInfo() {
    return false;
}

void UELEOSManager::SetUseEAS(bool bUse) {
}

bool UELEOSManager::Setup(uint8 InstanceId) {
    return false;
}

void UELEOSManager::SetRunningLoginFlowFlag(bool Flag) {
}

bool UELEOSManager::SetNetworkStatus(EEOSNetworkStatus Status) {
    return false;
}

void UELEOSManager::SetLoginUserDisplayName(const FString& DisplayName) {
}

void UELEOSManager::SetLoginExternalAccountId(const FString& AccountId) {
}

void UELEOSManager::SetLastResponseDateTime(const FDateTime& DateTime) {
}

void UELEOSManager::SetLastError(EELEOSApiType Type, int32 Value) {
}

bool UELEOSManager::SetCheatPenalty() {
    return false;
}

bool UELEOSManager::SetApplicationStatus(EEOSApplicationStatus Status) {
    return false;
}

void UELEOSManager::ResetLocalPlayerFirstLoggedin() {
}

bool UELEOSManager::RequestLinkEpicAccount() {
    return false;
}

bool UELEOSManager::RequestCheckEOSServer() {
    return false;
}

void UELEOSManager::ReleaseEOS() {
}

void UELEOSManager::ReconnectEOS() {
}

bool UELEOSManager::PostConnectedSetup() {
    return false;
}

bool UELEOSManager::PostCheckTitleStorageSetup(bool bTitleStorageResult) {
    return false;
}

void UELEOSManager::OnUserEvent(EEOSUserEvent InEOSUserEvent, UEOSUserBase* InEOSUserBase) {
}

void UELEOSManager::OnReadTitleStorageForServer(EEOSTitleStorageEvent EOSTitleStorageEvent, UEOSTitleStorageBase* EOSTitleStorageBase, const FEOSTitleStorageProgress& EOSTitleStorageProgress) {
}

void UELEOSManager::OnReadTitleStorage(EEOSTitleStorageEvent EOSTitleStorageEvent, UEOSTitleStorageBase* EOSTitleStorageBase, const FEOSTitleStorageProgress& EOSTitleStorageProgress) {
}

void UELEOSManager::OnPresenceEvent(EEOSPresenceEvent EOSPresenceEvent, UEOSPresenceBase* EOSPresenceBase, const FString& FriendEpicAccountID) {
}

bool UELEOSManager::OnNotifyPlatformAction(EELOnlineNotifyAction Action) {
    return false;
}

void UELEOSManager::OnIntenralIssueOccurredCallback(EEOSResult Result, EEOSObjectType Type, const UEOSCommon* COMMON, const FString& File, int32 Line) {
}

void UELEOSManager::OnGeneralEvent(EEOSGeneralEvent GeneralEvent, EEOSObjectType EOSObjectType, UEOSCommon* EOSCommon) {
}

void UELEOSManager::OnFriendEvent(EEOSFriendEvent FriendEvent, UEOSFriend* Friend, UEOSUserBase* FriendUser) {
}

void UELEOSManager::OnEOSAuthEvent(EEOSAuthEvent EAuthEvent, UEOSAuth* NewEOSAuth) {
}

void UELEOSManager::OnEOSAPIBaseEvent(bool Success, EEOSApiResult ApiResult) {
}

void UELEOSManager::OnAntiCheatIntegrityViolated(EEOSAntiCheatClientViolationType ViolationType, const FString& StatusMessage) {
}

void UELEOSManager::OnAntiCheatClientActionRequired(UEOSIDs* UserId, EEOSAntiCheatActionReason ActionReason, const FString& ActionReasonString) {
}

void UELEOSManager::NetworkTypeChanged(EELNetworkType NetworkType) {
}

void UELEOSManager::NetworkStatusChanged(EELNetworkStatus NetworkStatus) {
}

void UELEOSManager::NetworkConnectionStatusChanged(EELNetworkConnectionStatus NetworkConnectionStatus, EELServerType ServerType) {
}

void UELEOSManager::Logout() {
}

bool UELEOSManager::LoginPortal() {
    return false;
}

bool UELEOSManager::LoginExternalAuthWithBinaryToken(int32 LoginControllerId, EEOSExternalCredentialType Type, const TArray<uint8>& Token) {
    return false;
}

bool UELEOSManager::LoginExternalAuth(int32 LoginControllerId, EEOSExternalCredentialType Type, const FString& Token) {
    return false;
}

bool UELEOSManager::LoginDevAuthTool(const FString& Server, const FString& AuthName) {
    return false;
}

bool UELEOSManager::Login(const FString& Server, const FString& AuthName) {
    return false;
}

bool UELEOSManager::IsValidAntiCheatClient() const {
    return false;
}

bool UELEOSManager::IsValidAntiCheatAll() const {
    return false;
}

bool UELEOSManager::IsRunningLoginFlow() {
    return false;
}

bool UELEOSManager::IsOnline(bool bSkipEOS) const {
    return false;
}

bool UELEOSManager::IsLocalPlayerFirstLoggedin() const {
    return false;
}

bool UELEOSManager::IsExecuteSetupStep() const {
    return false;
}

bool UELEOSManager::IsEOSLogin() const {
    return false;
}

bool UELEOSManager::IsCompletedSetupStep() const {
    return false;
}

void UELEOSManager::InvokeEventP2PTimeout() {
}

void UELEOSManager::InvokeEventNoConnection() {
}

bool UELEOSManager::HasConnectableYGS2ServerParam() {
    return false;
}

FString UELEOSManager::GetTitleStorageOnlineVersion() {
    return TEXT("");
}

UELEOSTitleStorageDownloadProgress* UELEOSManager::GetTitleStorageDownloadProgress() const {
    return NULL;
}

UEOSTitleStorage* UELEOSManager::GetTitleStorage() const {
    return NULL;
}

bool UELEOSManager::GetQuitGameOnFailedEAC() {
    return false;
}

float UELEOSManager::GetP2PTimeoutLatency() const {
    return 0.0f;
}

UELOnlineRankCalculator* UELEOSManager::GetOnlineRankCalculator() const {
    return NULL;
}

UELOnlineNews* UELEOSManager::GetOnlineNews() const {
    return NULL;
}

EEOSNetworkStatus UELEOSManager::GetNetworkStatus() const {
    return EEOSNetworkStatus::Disabled;
}

UELNetworkObserverBase* UELEOSManager::GetNetworkObserver() {
    return NULL;
}

FString UELEOSManager::GetLoginExternalAccountId() {
    return TEXT("");
}

FString UELEOSManager::GetLastServerIDForYGS2() {
    return TEXT("");
}

FString UELEOSManager::GetLastServerIDForEOS() {
    return TEXT("");
}

bool UELEOSManager::GetLastResponseDateTime(FDateTime& DateTime) const {
    return false;
}

EEOSGeneralEvent UELEOSManager::GetLastGeneralEvent() const {
    return EEOSGeneralEvent::DisableDispatcher;
}

EEOSGeneralEvent UELEOSManager::GetLastGeneralErrorEvent() const {
    return EEOSGeneralEvent::DisableDispatcher;
}

int32 UELEOSManager::GetLastError(EELEOSApiType Type) {
    return 0;
}

UEOSVoice* UELEOSManager::GetEOSVoice() const {
    return NULL;
}

UEOSUserManager* UELEOSManager::GetEOSUserManager() const {
    return NULL;
}

UEOSUserContents* UELEOSManager::GetEOSUserContents() const {
    return NULL;
}

UEOSUser* UELEOSManager::GetEOSUser() const {
    return NULL;
}

UEOSStats* UELEOSManager::GetEOSStats() const {
    return NULL;
}

FString UELEOSManager::GetEOSServer() const {
    return TEXT("");
}

UEOSSanctions* UELEOSManager::GetEOSSanctions() const {
    return NULL;
}

UEOSReports* UELEOSManager::GetEOSReports() const {
    return NULL;
}

UEOSPresence* UELEOSManager::GetEOSPresence() const {
    return NULL;
}

UEOSManager* UELEOSManager::GetEOSManager() const {
    return NULL;
}

UEOSLeaderboard* UELEOSManager::GetEOSLeaderboard() const {
    return NULL;
}

UELEOSGameSession* UELEOSManager::GetEOSGameSession() const {
    return NULL;
}

UEOSFriend* UELEOSManager::GetEOSFriend() const {
    return NULL;
}

bool UELEOSManager::GetEOSAuthToken(FString& Token) {
    return false;
}

FString UELEOSManager::GetEOSAuthName() const {
    return TEXT("");
}

UEOSAuth* UELEOSManager::GetEOSAuth() const {
    return NULL;
}

UEOSAntiCheatDedicatedServer* UELEOSManager::GetEOSAntiCheatServer() const {
    return NULL;
}

UEOSAntiCheatClient* UELEOSManager::GetEOSAntiCheatClient() const {
    return NULL;
}

bool UELEOSManager::GetEnableCrossPlay() const {
    return false;
}

UELSSModeServiceParam* UELEOSManager::GetELSSModeServiceParam() {
    return NULL;
}

UObject* UELEOSManager::GetELEOSManagerUtilityBpIns() {
    return NULL;
}

UELEOSManagerUtility* UELEOSManager::GetELEOSManagerUtility() {
    return NULL;
}

UELEOSLobby* UELEOSManager::GetELEOSLobby() const {
    return NULL;
}

FELEOSGameSessionMatchingParam UELEOSManager::GetELEOSGameSessionMatchingParam() const {
    return FELEOSGameSessionMatchingParam{};
}

UELEOSGameSessionMatching* UELEOSManager::GetELEOSGameSessionMatching() const {
    return NULL;
}

UELEOSGameSession* UELEOSManager::GetELEOSGameSession() const {
    return NULL;
}

UELEOSGameChatSession* UELEOSManager::GetELEOSGameChatSession() const {
    return NULL;
}

UELEOSFriend* UELEOSManager::GetELEOSFriend() const {
    return NULL;
}

UELEOSDebug* UELEOSManager::GetELEOSDebug() const {
    return NULL;
}

int32 UELEOSManager::GetConfigPingUpdateInterval() {
    return 0;
}

int32 UELEOSManager::GetConfigMatchingTimeout() {
    return 0;
}

EEOSApplicationStatus UELEOSManager::GetApplicationStatus() const {
    return EEOSApplicationStatus::BackgroundConstrained;
}

bool UELEOSManager::ExternalConnectLogin() {
    return false;
}

void UELEOSManager::EventLogout() {
}

bool UELEOSManager::DeleteDedicatedServertoEasyAntiCheat() {
    return false;
}

bool UELEOSManager::CreateDedicatedServertoEasyAntiCheat() {
    return false;
}

EEOSGeneralEvent UELEOSManager::ClearLastGeneralErrorEvent() {
    return EEOSGeneralEvent::DisableDispatcher;
}

void UELEOSManager::ClearEOSParameter() {
}

bool UELEOSManager::ClearCheatPenalty() {
    return false;
}

bool UELEOSManager::CheckTitleStorage() {
    return false;
}

void UELEOSManager::CheckEOSServices() {
}

void UELEOSManager::CallLoginPortalAfterEOSAPIBaseEvent() {
}

void UELEOSManager::ApplicationStatusChanged(EELApplicationStatus AppStatus) {
}

UELEOSManager::UELEOSManager() {
    this->bRunningLoginFlow = false;
    this->EOSManager = NULL;
    this->EOSAuth = NULL;
    this->EOSUserManager = NULL;
    this->EOSUser = NULL;
    this->EOSUserContents = NULL;
    this->EOSInternalIssueNotify = NULL;
    this->EOSPresence = NULL;
    this->EOSLeaderboard = NULL;
    this->EOSStats = NULL;
    this->ELGameSession = NULL;
    this->ELEOSLobby = NULL;
    this->ELEOSGameChatSession = NULL;
    this->ELEOSFriend = NULL;
    this->EOSAntiCheatClient = NULL;
    this->EOSAntiCheatServer = NULL;
    this->EOSReports = NULL;
    this->EOSSanctions = NULL;
    this->EOSVoice = NULL;
    this->EOSTitleStorage = NULL;
    this->ELEOSTitleStorageProgress = NULL;
    this->ELEOSTitleStorageProgressRequireFiles = NULL;
    this->EOSApiBase = NULL;
    this->ELOnlineNews = NULL;
    this->ELEOSGameSessionMatching = NULL;
    this->RankCalculator = NULL;
    this->ELEOSManagerUtility = NULL;
    this->isLogin = false;
    this->IsLoggingin = false;
    this->LastGeneralEvent = EEOSGeneralEvent::Success;
    this->LastGeneralErrorEvent = EEOSGeneralEvent::Success;
    this->ExternalLoginUserControllerId = -1;
    this->bUseEAS = false;
    this->bAutoLinkEAS = false;
    this->NetworkObserver = NULL;
    this->ELEOSDebug = NULL;
    this->bEnabledCrossPlay = false;
    this->bEnabledCheckEOSServices = false;
    this->bSetLastResponseDateTime = false;
    this->ELYGS2SetupStep = EELYGS2SetupStep::None;
    this->ELEOSManagerUtility_Subclass = NULL;
    this->ELEOSManagerUtility_BpIns = NULL;
    this->SSModeServiceParam = NULL;
    this->OnlineNotifyAction_NextTick = EELOnlineNotifyAction::None;
    this->SSMode_EOSTitleStorageFileParams.AddDefaulted(2);
}

