#include "ELSSGameMode.h"
#include "Templates/SubclassOf.h"

EWrestlerID_N AELSSGameMode::WrestlerIdToCastEnum(const int32 idx) {
    return EWrestlerID_N::None;
}

void AELSSGameMode::TickState_WaitStartGameSession_Implementation(float inDeltaSeconds) {
}






void AELSSGameMode::TickState_DownloadTitleStorage_Implementation(float inDeltaSeconds) {
}


void AELSSGameMode::TickState_Closing_Implementation(float inDeltaSeconds) {
}

void AELSSGameMode::TickLobby_Native(float inDeltaSeconds) {
}

bool AELSSGameMode::StartOfMatch_Implementation() {
    return false;
}

AActor* AELSSGameMode::SpawnManagerActor(TSubclassOf<AActor> InClass) {
    return NULL;
}

bool AELSSGameMode::SetupCharacterPlacement_Implementation() {
    return false;
}


bool AELSSGameMode::RequestDownloadTitleStorage() {
    return false;
}

void AELSSGameMode::PrintLog(const FString& Log) {
}

void AELSSGameMode::OnStartTipsLoading() {
}

void AELSSGameMode::OnStartReadyState() {
}

void AELSSGameMode::OnStartLobbyCountdown() {
}

void AELSSGameMode::OnStartHottestPlayer() {
}

void AELSSGameMode::OnReadTitleStorage() {
}

void AELSSGameMode::Notice_LobbyFinished() {
}

bool AELSSGameMode::IsServerState(ESSServerState inState) const {
    return false;
}

bool AELSSGameMode::IsLaunchType(const ESSModeLaunchType Type) {
    return false;
}

bool AELSSGameMode::IsDownloadingTitleStorage() const {
    return false;
}

bool AELSSGameMode::IsCompletedDownloadTitleStorage() const {
    return false;
}

bool AELSSGameMode::IsAcceptMatching() const {
    return false;
}

bool AELSSGameMode::InitializeManagerActors_Implementation() {
    return false;
}

bool AELSSGameMode::InitializeCharacterPlacement_Implementation(int32 playerStartID, bool isShuffle) {
    return false;
}

ESSServerState AELSSGameMode::GetServerState() const {
    return ESSServerState::None;
}

AELSSLocator* AELSSGameMode::GetReservedPlayerStartLocator(AELSSPlayerState* inPlayerState, bool inConsume) {
    return NULL;
}

bool AELSSGameMode::GetGameServerMatchingData() {
    return false;
}


void AELSSGameMode::ExitState_WaitStartGameSession_Implementation() {
}






void AELSSGameMode::ExitState_DownloadTitleStorage_Implementation() {
}


void AELSSGameMode::ExitState_Closing_Implementation() {
}

void AELSSGameMode::EnterState_WaitStartGameSession_Implementation() {
}






void AELSSGameMode::EnterState_DownloadTitleStorage_Implementation() {
}


void AELSSGameMode::EnterState_Closing_Implementation() {
}

bool AELSSGameMode::EndOfMatch_Implementation() {
    return false;
}

bool AELSSGameMode::DebugIsAIOnlyMode() const {
    return false;
}

int32 AELSSGameMode::DebugGetAIEditWrestlerNum() const {
    return 0;
}

bool AELSSGameMode::DebugForciblyEndMatch_Implementation() {
    return false;
}

void AELSSGameMode::ChangeServerState(ESSServerState inState) {
}

bool AELSSGameMode::CanStartOfMatch_Implementation() {
    return false;
}

bool AELSSGameMode::CanRequestDownloadTitleStorage() const {
    return false;
}

bool AELSSGameMode::CanLobbyStartHottestPlayer() const {
    return false;
}

bool AELSSGameMode::CanLobbyStartCountdown() const {
    return false;
}

bool AELSSGameMode::CanEndClosing_Implementation() const {
    return false;
}

TArray<EWrestlerID_N> AELSSGameMode::CalcRandomWrestlerIDs(int32 Amount) const {
    return TArray<EWrestlerID_N>();
}

AELSSGameMode::AELSSGameMode() {
    this->DataVersion = 0;
    this->GroupId = 0;
    this->ChangeList = 0;
    this->LaunchType = ESSModeLaunchType::DedicatedServer;
    this->NumberOfPlayersRequiredToStart = 0;
    this->NumberOfPlayersMax = 0;
    this->MatchLobbyTime = 0.00f;
    this->SSGameState = NULL;
    this->WaitJoinElapsedTime = 0.00f;
    this->SavingAnalyticsTimer = 60.00f;
    this->AnalyticsLog2YGS2Object = NULL;
    this->TitleStorageDownloadingTimeTotal = 0.00f;
    this->TitleStorageDownloadingTimeLimit = 60.00f;
    this->IsInitialized = false;
    this->IsMatchDataGetEnd = false;
}

