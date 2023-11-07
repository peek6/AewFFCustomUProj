#include "ELSSPlayerState.h"
#include "Net/UnrealNetwork.h"

void AELSSPlayerState::UpdateSyncStatusForWatch() {
}



void AELSSPlayerState::SyncStatusForWatch_ServerToWatcher_Client_Implementation(const FSSSyncStatusForWatch_Replicated& inSendData) {
}

void AELSSPlayerState::SyncStatusForWatch_ServerToWatcher() {
}

void AELSSPlayerState::SyncStatusForWatch_Server_Implementation(const FSSSyncStatusForWatch_Owner& inSendData) {
}

void AELSSPlayerState::SyncStatusForWatch_ClientToServer_Server_Implementation() {
}

void AELSSPlayerState::SyncPlayerProfileForInGame_Server_Implementation(const FSSPlayerProfileForInGame& inProfile) {
}

void AELSSPlayerState::SyncMatchMakeInfo_Server_Implementation(const FSSMatchMakeInfoForAnalytics& inMatchMakeInfo, const FSSClientInfoForAnalytics& inClientInfo) {
}

void AELSSPlayerState::SyncClientFPS_Server_Implementation(float inClientFPS) {
}

void AELSSPlayerState::SyncChallengeCount_Clent_Implementation(FSSChallengeCountData inSyncData) {
}

void AELSSPlayerState::SSAntiCheatServerNotifyMessage_ToClient_Implementation(const FSSModeMessageData& dat) {
}

void AELSSPlayerState::SSAntiCheatServerNotifyAddClientAction_ToClient_Implementation(const int32 resClientActionState, const int32 resActionCode, const FString& resActionDetails) {
}

void AELSSPlayerState::SSAntiCheatClientNotifyMessage_ToServer_Implementation(const FSSModeMessageData& dat) {
}

void AELSSPlayerState::SetWrestlerSetupParamByBaseStruct(const FWrestlerSetupParam& NewWrestlerSetupParam) {
}

void AELSSPlayerState::SetWrestlerSetupParam(const FSSWrestlerSetupParam& NewWrestlerSetupParam) {
}

void AELSSPlayerState::SetWrestlerPresetParam(const FSSWrestlerMovePresetParam& wrestlerPreset) {
}

void AELSSPlayerState::SetResultTallyData(const FString& tallyData) {
}

void AELSSPlayerState::SetProgressFlag_Server_Implementation(ESSPlayerProgress Type, bool IsOn) {
}

void AELSSPlayerState::SetProgressFlag(ESSPlayerProgress Type, bool IsOn) {
}

void AELSSPlayerState::SetPlayerSpawnPointIdResult_Client_Implementation(const bool isChange) {
}

void AELSSPlayerState::SetPlayerSpawnPointId_Server_Implementation(const int32 spawnId) {
}

void AELSSPlayerState::SetPlayerEquipSettings_Ability(int32 inAbility1, int32 inAbility2, int32 inAbility3) {
}

void AELSSPlayerState::SetPlayerEquipSettings(const FSSPlayerEquipSettings& equipSettings) {
}


void AELSSPlayerState::SetIgnoreAnalytics_Server_Implementation(bool IsOn) {
}

void AELSSPlayerState::SetDefaultPlayerEquipSettings_HeatSkill(int32 inDefaultPlayerEquipSettingsId) {
}

void AELSSPlayerState::SetDefaultPlayerEquipSettings_Ability(int32 inDefaultPlayerEquipSettingsId) {
}

void AELSSPlayerState::SetDefaultPlayerEquipSettings(int32 inDefaultPlayerEquipSettingsId) {
}

void AELSSPlayerState::SetAttentionPointForWatcher_Client_Implementation(AELSSPlayerState* inWatchedPlayer, int32 inAttentionUpdateId, ESSAttentionReason inReason, int32 inAttentionPoint, int32 inAddPoint) {
}

void AELSSPlayerState::SetAttentionPoint_Client_Implementation(int32 inAttentionUpdateId, ESSAttentionReason inReason, int32 inAttentionPoint, int32 inAddPoint) {
}

void AELSSPlayerState::SetAttentionPoint(ESSAttentionReason inReason, int32 inAttentionPoint, int32 inPrevPoint, int32 inAddPointForHUD) {
}

void AELSSPlayerState::SendPlayerInfoSyncData_Server_Implementation(const FELSSLobbyPlayerInfo& inInfoSyncData) {
}

void AELSSPlayerState::RetryErrorAPIEvent(const FRequest_ErrSetupData& apiErrData, const int32 errRetryCnt) {
}


void AELSSPlayerState::ReserveExpItem(int32 inExpItemLotGroupID) {
}




bool AELSSPlayerState::RequestYGS2_SessionResult() {
    return false;
}

bool AELSSPlayerState::RequestYGS2_GameStart() {
    return false;
}

bool AELSSPlayerState::RequestYGS2_GameResult() {
    return false;
}

void AELSSPlayerState::RegisterLog_VendingUseCount() {
}

void AELSSPlayerState::RegisterLog_SlotMachineUseCount() {
}

void AELSSPlayerState::OnYGS2Response_SessionResult(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request) {
}

void AELSSPlayerState::OnYGS2Response_GameStart(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request) {
}

void AELSSPlayerState::OnYGS2Response_GameResult(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request) {
}

void AELSSPlayerState::OnYGS2Error_SessionResult(const bool isYES, const FRequest_ErrSetupData errDialogData) {
}

void AELSSPlayerState::OnYGS2Error_GameStart(const bool isYES, const FRequest_ErrSetupData errDialogData) {
}

void AELSSPlayerState::OnYGS2Error_GameResult(const bool isYES, const FRequest_ErrSetupData errDialogData) {
}

void AELSSPlayerState::OnRep_WrestlerSetupParam() {
}

void AELSSPlayerState::OnRep_WatchedPlayerNum() {
}

void AELSSPlayerState::OnRep_SurvivorRanking() {
}

void AELSSPlayerState::OnRep_ResultTallyData() {
}

void AELSSPlayerState::OnRep_ReplicatedClientResultData() {
}

void AELSSPlayerState::OnRep_PlayerDataSync() {
}

void AELSSPlayerState::OnRep_KillCount() {
}

void AELSSPlayerState::OnRep_FeverTimeBeginTime() {
}

void AELSSPlayerState::OnRep_EndGameReasonOnServer() {
}

void AELSSPlayerState::OnRep_ChallengeCountData() {
}

void AELSSPlayerState::OnRep_AttentionPoint_Impl() {
}

void AELSSPlayerState::OnRep_AttentionPoint() {
}


bool AELSSPlayerState::IsResultTallyEnd() {
    return false;
}

bool AELSSPlayerState::IsPlayerResultEnable() {
    return false;
}

bool AELSSPlayerState::IsLocalPlayer() const {
    return false;
}

bool AELSSPlayerState::IsLocallyControlled() const {
    return false;
}

bool AELSSPlayerState::IsDoneSyncResult() const {
    return false;
}

bool AELSSPlayerState::IsDoneSyncChallengeCount() const {
    return false;
}

bool AELSSPlayerState::IsDoneResultAPI() const {
    return false;
}

bool AELSSPlayerState::IsAfterFeverTime() const {
    return false;
}

bool AELSSPlayerState::HasProgressFlag(ESSPlayerProgress Type) const {
    return false;
}

int32 AELSSPlayerState::GetWeaponDecalSymbolId() const {
    return 0;
}

int32 AELSSPlayerState::GetWeaponDecalId() const {
    return 0;
}

int32 AELSSPlayerState::GetWeaponColorUniqueId() const {
    return 0;
}

int32 AELSSPlayerState::GetWeaponColorListIndex() const {
    return 0;
}

AELSSPlayerController* AELSSPlayerState::GetSSPlayerControllerForUIUpdate() const {
    return NULL;
}

int32 AELSSPlayerState::GetResultPlayerEXP() {
    return 0;
}

int32 AELSSPlayerState::GetRandomBadgeId() const {
    return 0;
}

AELSSPlayerController* AELSSPlayerState::GetOwnerPlayerController() const {
    return NULL;
}

AELSSPlayerController* AELSSPlayerState::GetOwnerLocalPlayerController() const {
    return NULL;
}

AELSSAIController* AELSSPlayerState::GetOwnerAIController() const {
    return NULL;
}

int32 AELSSPlayerState::GetLeaderboardRank() const {
    return 0;
}

int32 AELSSPlayerState::GetKillCount() const {
    return 0;
}

float AELSSPlayerState::GetFeverTimeRemainRate() const {
    return 0.0f;
}

int32 AELSSPlayerState::GetFeverCount() const {
    return 0;
}

ESSClientFlowState AELSSPlayerState::GetClientFlowStateOnServer() const {
    return ESSClientFlowState::None;
}


int32 AELSSPlayerState::GetAttentionPoint() const {
    return 0;
}

int32 AELSSPlayerState::GetAttentionLevel() const {
    return 0;
}

AELSSPlayer* AELSSPlayerState::GetAssociatedSSPlayer() const {
    return NULL;
}

float AELSSPlayerState::GetAfterFeverTimeRemainRate() const {
    return 0.0f;
}

void AELSSPlayerState::ForceEndFeverTime() {
}

void AELSSPlayerState::DoneUIPrepare() {
}

void AELSSPlayerState::DoneOpenGamePlayScreen() {
}

void AELSSPlayerState::DoneDescription() {
}


void AELSSPlayerState::DebugSetCopyWrestlerSetupParamToAI_Server_Implementation() {
}

void AELSSPlayerState::DebugSendGameStateDebugFlag_Server_Implementation(ESSGameStateDebugFlag inDebugFlag) {
}

void AELSSPlayerState::DebugResetAttention_Implementation() {
}

int32 AELSSPlayerState::CalcAttentionLevelFromPoint() const {
    return 0;
}

void AELSSPlayerState::BeginFeverTime_Multicast_Implementation(int32 inNewAttentionLevel, float inBeginTime) {
}

void AELSSPlayerState::ApplyMasterData() {
}

void AELSSPlayerState::ApplyLastPlayRecordToSaveData() {
}

void AELSSPlayerState::ApplyDebugMenuParam() {
}

void AELSSPlayerState::ApplyChallengeCountToSaveData(int32 InRanking) {
}

void AELSSPlayerState::AddKillCount_Server_Implementation() {
}

void AELSSPlayerState::AddKillCount() {
}

void AELSSPlayerState::AddAttentionPoint(ESSAttentionReason inReason, int32 inAddPoint) {
}

void AELSSPlayerState::Activity_UpdateMatchStatusOnClient_Implementation(const FString& MatchID, EELActivityUpdateMatchStatus inStatus) {
}

void AELSSPlayerState::Activity_SendResultUpdateMatchStatus_Implementation(EELActivityUpdateMatchStatus inStatus) {
}

void AELSSPlayerState::Activity_SendResultReport_Implementation() {
}

void AELSSPlayerState::Activity_SendResultLeaveMatch_Implementation() {
}

void AELSSPlayerState::Activity_SendResultCreateMatch_Implementation(const FString& MatchID) {
}

void AELSSPlayerState::Activity_ReportOnClient_Implementation(const FString& MatchID, const FSSActivityMatchResult& Result) {
}

void AELSSPlayerState::Activity_LeaveMatchOnClient_Implementation(const FString& MatchID, const FString& ExternalAccountId, const FString& Reason) {
}

void AELSSPlayerState::Activity_CreateMatchOnClient_Implementation() {
}

void AELSSPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSPlayerState, KillCountRep);
    DOREPLIFETIME(AELSSPlayerState, WatchedPlayerNum);
    DOREPLIFETIME(AELSSPlayerState, AttentionPoint);
    DOREPLIFETIME(AELSSPlayerState, FeverTimeBeginTime);
    DOREPLIFETIME(AELSSPlayerState, SurvivorRanking);
    DOREPLIFETIME(AELSSPlayerState, ExpItemPoint);
    DOREPLIFETIME(AELSSPlayerState, ExpItemPointLoopCount);
    DOREPLIFETIME(AELSSPlayerState, WrestlerSetupParamRep);
    DOREPLIFETIME(AELSSPlayerState, ProgressFlags);
    DOREPLIFETIME(AELSSPlayerState, EndGameReasonOnServer);
    DOREPLIFETIME(AELSSPlayerState, ChallengeCountDataRep);
    DOREPLIFETIME(AELSSPlayerState, ServerPlayerStateIndex);
    DOREPLIFETIME(AELSSPlayerState, ssResultTallyData);
    DOREPLIFETIME(AELSSPlayerState, ReplicatedClientResultData);
    DOREPLIFETIME(AELSSPlayerState, ssPlayerInfoSyncData);
}

AELSSPlayerState::AELSSPlayerState() {
    this->MasterData = NULL;
    this->KillCountRep = 0;
    this->KillCountLocal = 0;
    this->WatcherLocal = NULL;
    this->WatchedPlayerNum = 0;
    this->SyncStatus_InteractTarget = NULL;
    this->AttentionPoint = 0;
    this->AttentionGaugeState = ESSAttentionGaugeState::Default;
    this->FeverTimeBeginTime = -1.00f;
    this->NegativeTimer = 0.00f;
    this->ExpItemSpawnDelayTime = 0.20f;
    this->AfterFeverTimeDuration = 0.50f;
    this->SurvivorRanking = 0;
    this->ExpItemPoint = 0;
    this->ExpItemPointLoopCount = 0;
    this->SettingAbilityId_1 = 0;
    this->SettingAbilityId_2 = 0;
    this->SettingAbilityId_3 = 0;
    this->UseDefaultUserSettings = true;
    this->ProgressFlags = 0;
    this->Log_HeatLevel = 1;
    this->Log_TotalAttack = 0;
    this->Log_TotalDamage = 0;
    this->Log_Mileage = 0.00f;
    this->Log_ReviveFromKoCount = 0;
    this->Log_StrikeCount = 0;
    this->Log_GrappleCount = 0;
    this->Log_WeaponAttackCount = 0;
    this->Log_FinisherId = 0;
    this->Log_FinisherCount = 0;
    this->Log_VehicleRideCount = 0;
    this->Log_AbilityUseCount.AddDefaulted(3);
    this->Log_VendingUseCount = 0;
    this->Log_SlotMachineUseCount = 0;
    this->EndGameReasonOnServer = ESSEndGameReason::None;
    this->WrestlerID = EWrestlerID_N::None;
    this->ServerPlayerStateIndex = -1;
    this->KillerPlayerIndex = -1;
    this->ClientIPForServer = TEXT("0.0.0.0");
    this->isResultTallyState = EResultTallyState::EResultTally_None;
    this->SelectSpawnPointId = -1;
    this->LeaderboardRank = 0;
}

