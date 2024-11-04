#include "ELSSUtility.h"
#include "Templates/SubclassOf.h"

bool UELSSUtility::TryYGS2ResumeRequests(const UObject* WorldContextObject) {
    return false;
}

void UELSSUtility::StopSSLoadingScreen() {
}

void UELSSUtility::SSPrintStringToLog(const FString& inString) {
}

bool UELSSUtility::SSNXShowApplicationError(const UObject* WorldContextObject, int32 inErrorCodeNumber, const FString& inDialogMessage, const FString& inFullScreenMessage) {
    return false;
}

void UELSSUtility::SSModeNetworkSetup(const bool isReset) {
}

void UELSSUtility::SSModeGameDataSetup(const UObject* WorldContextObject, const bool isReset) {
}

UYGS2Req_GetSSPlayerData* UELSSUtility::SSLoginRequest() {
    return NULL;
}

void UELSSUtility::SetVisibleFadeForChangeLevel(const UObject* WorldContextObject, bool inEnable, bool inWithLoadingIcon) {
}

void UELSSUtility::SetSSPlayerData(const UObject* WorldContextObject, const FYGS2SSPlayerData& dat) {
}

void UELSSUtility::SetSSInGamePlayFlag(const UObject* WorldContextObject, bool IsOn) {
}

void UELSSUtility::SetSSGameLiftObject(UGameLiftObjectBase* ssGameLiftParam) {
}

void UELSSUtility::SetSSDefaultMapToSSTop() {
}

void UELSSUtility::SetSSDefaultMapToMainMenu() {
}

void UELSSUtility::SetSSCheatDetected(const UObject* WorldContextObject, bool IsOn) {
}

void UELSSUtility::SetScreenUpdateCheck() {
}

void UELSSUtility::SetInputMode(APlayerController* pController) {
}

bool UELSSUtility::RestartYGS2SetupStep(const UObject* WorldContextObject, bool inForceExec, bool inResetRequest) {
    return false;
}

bool UELSSUtility::RequestDownloadSSModeServiceParam(const UObject* WorldContextObject, bool inSSModeOnly) {
    return false;
}

bool UELSSUtility::RegistYGS2Request(UYGS2RequestBase* Api, const EELYGS2RequestFunctionType apiType, bool checkRequestEnabled) {
    return false;
}

void UELSSUtility::PlaySSLoadingScreen(bool bPlayUntilStopped, float PlayTime) {
}

void UELSSUtility::OnExitSSMode(const UObject* WorldContextObject) {
}

void UELSSUtility::OnEnterSSMode(const UObject* WorldContextObject) {
}

void UELSSUtility::NotifySSGameStart(const UObject* WorldContextObject) {
}

void UELSSUtility::NotifySSGameEnd(const UObject* WorldContextObject, ESSEndGameReason inReason) {
}

bool UELSSUtility::NeedsRestartYGS2SetupStep(const UObject* WorldContextObject) {
    return false;
}

bool UELSSUtility::IsSSPlayableUser(const UObject* WorldContextObject) {
    return false;
}

bool UELSSUtility::IsSSMode(const UObject* WorldContextObject) {
    return false;
}

bool UELSSUtility::IsSSDisableSound(const UObject* WorldContextObject) {
    return false;
}

bool UELSSUtility::IsSSDevelopmentUser(const UObject* WorldContextObject) {
    return false;
}

bool UELSSUtility::IsSSDebugLocalCheckMode() {
    return false;
}

bool UELSSUtility::IsSSCheatDetected(const UObject* WorldContextObject) {
    return false;
}

bool UELSSUtility::IsExecuteYGS2SetupStep(const UObject* WorldContextObject) {
    return false;
}

bool UELSSUtility::IsEnableSSMasterData(const UObject* WorldContextObject) {
    return false;
}

bool UELSSUtility::IsDownloadingSSModeServiceParam(const UObject* WorldContextObject) {
    return false;
}

bool UELSSUtility::IsDevMode() {
    return false;
}

bool UELSSUtility::IsAccountLogin(const bool isMissed) {
    return false;
}

EYGS2Api UELSSUtility::GetYGS2RequestType(const int32 apiID) {
    return EYGS2Api::None;
}

EYGS2ErrorType UELSSUtility::GetYGS2ErrorType(const int32 errID) {
    return EYGS2ErrorType::NoRequest;
}

FSSErrorTextDataToYGS2API UELSSUtility::GetYGS2APIErrorData(const EYGS2ErrorType GetType) {
    return FSSErrorTextDataToYGS2API{};
}

ESSWrestlerType UELSSUtility::GetWrestlerType(const int32 WrestlerType) {
    return ESSWrestlerType::None;
}

FWrestlerSetupParam UELSSUtility::GetWrestlerSetupParam(const EWrestlerID_N WrestlerID) {
    return FWrestlerSetupParam{};
}

FSSWrestlerSetupParam UELSSUtility::GetWrestlerSetupData(const EWrestlerID_N WrestlerID) {
    return FSSWrestlerSetupParam{};
}

EWrestlerID_N UELSSUtility::GetWrestlerID(const int32 WrestlerID) {
    return EWrestlerID_N::None;
}

FSSErrorTextDataToUniqueError UELSSUtility::GetUniqueErrorData(const ESSOnlineErrorType Type) {
    return FSSErrorTextDataToUniqueError{};
}

FSSStampedeRankParam UELSSUtility::GetStampedeRankData(const int32 Exp, int32& expNext, float& expRate) {
    return FSSStampedeRankParam{};
}

bool UELSSUtility::GetSSServerEndpoint(TArray<FSSServerEndpoint>& SSServerEndpoints) {
    return false;
}

EWrestlerID_N UELSSUtility::GetSSSelectedWrestlerID(const UObject* WorldContextObject) {
    return EWrestlerID_N::None;
}

AELSSSaveDataManager* UELSSUtility::GetSSSaveDataManager(const UObject* WorldContextObject) {
    return NULL;
}

UELSSRootObject* UELSSUtility::GetSSRootObject(const UObject* WorldContextObject) {
    return NULL;
}

eErrorStatusType UELSSUtility::GetSSRequestErrorStatusType(const int32 errID) {
    return eErrorStatusType::eErrorStatusType_None;
}

bool UELSSUtility::GetSSPlayerData(const UObject* WorldContextObject, FYGS2SSPlayerData& outPlayerData) {
    return false;
}

ESSOnlineErrorType UELSSUtility::GetSSOnlineErrorType(const int32 errID) {
    return ESSOnlineErrorType::ESSOnlineErrorType_None;
}

FString UELSSUtility::GetSSModeUserName() {
    return TEXT("");
}

ESSModeServiceState UELSSUtility::GetSSModeServiceState(const UObject* WorldContextObject) {
    return ESSModeServiceState::None;
}

UELSSModeServiceParam* UELSSUtility::GetSSModeServiceParam(const UObject* WorldContextObject) {
    return NULL;
}

FString UELSSUtility::GetSSModeServerEnvName() {
    return TEXT("");
}

bool UELSSUtility::GetSSModeServerEnvData(FSSModeServerParam& getEnv) {
    return false;
}

int32 UELSSUtility::GetSSModeServerBuildVersion() {
    return 0;
}

eSSModeAPIType UELSSUtility::GetSSModeRequestType(const int32 apiID) {
    return eSSModeAPIType::eSSModeAPIType_None;
}

FString UELSSUtility::GetSSModePlayerID() {
    return TEXT("");
}

FSSErrorTextDataToNetworkConnect UELSSUtility::GetSSmodeNetworkErrorData(const int32 GetType) {
    return FSSErrorTextDataToNetworkConnect{};
}

UELSSModeConfigData* UELSSUtility::GetSSModeConfigData() {
    return NULL;
}

FSSErrorTextDataToSSAPI UELSSUtility::GetSSmodeAPIErrorData(const eErrorStatusType GetType) {
    return FSSErrorTextDataToSSAPI{};
}

int32 UELSSUtility::GetSSMasterDataVersion(const UObject* WorldContextObject) {
    return 0;
}

UELSSMasterDataRawData* UELSSUtility::GetSSMasterDataRawData(const UObject* WorldContextObject) {
    return NULL;
}

UELSSMasterData* UELSSUtility::GetSSMasterData(const UObject* WorldContextObject) {
    return NULL;
}

FText UELSSUtility::GetSSLocalizeText(const FString& stKey) {
    return FText::GetEmpty();
}

UELSSLevelTransitionEvent* UELSSUtility::GetSSLevelTransitionEvent(const UObject* WorldContextObject) {
    return NULL;
}

ESSEndGameReason UELSSUtility::GetSSLastEndGameReason(const UObject* WorldContextObject) {
    return ESSEndGameReason::None;
}

bool UELSSUtility::GetSSInGamePlayFlag(const UObject* WorldContextObject) {
    return false;
}

UGameLiftObjectBase* UELSSUtility::GetSSGameLiftObject() {
    return NULL;
}

UELSSGameModeDataManager* UELSSUtility::GetSSGameDataManager(const UObject* WorldContextObject) {
    return NULL;
}

FSSWrestlerSetupParam UELSSUtility::GetSSDebugEditWrestlerSetupParam(const FName inPresetName) {
    return FSSWrestlerSetupParam{};
}

bool UELSSUtility::GetSSCurrentStampedeLevelExp(const UObject* WorldContextObject, int32& outLevel) {
    return false;
}

bool UELSSUtility::GetSSCurrentStampedeLevel(const UObject* WorldContextObject, int32& outLevel) {
    return false;
}

bool UELSSUtility::GetSSCurrentPlayerRank(const UObject* WorldContextObject, int32& outRank) {
    return false;
}

APlayerController* UELSSUtility::GetSSControlledPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

bool UELSSUtility::GetSSCommandLineValue_SSServer(const UObject* WorldContextObject, FString& outEnvName) {
    return false;
}

bool UELSSUtility::GetSSCommandLineValue_SSMatchMakeGroupId(const UObject* WorldContextObject, int32& outGroupId) {
    return false;
}

bool UELSSUtility::GetSSCommandLineValue_SSFlags(const UObject* WorldContextObject, FString& outFlags) {
    return false;
}

bool UELSSUtility::GetSSCommandLineValue_SSDirect(const UObject* WorldContextObject, FString& outUserId) {
    return false;
}

bool UELSSUtility::GetSSCommandLineValue_SSBotClient(const UObject* WorldContextObject, FString& outUserId) {
    return false;
}

int32 UELSSUtility::GetSSBattlePassPoint(const FBattlePassPointRateParam& prm, const float StarNum, const int32 ssPlayCntToDay) {
    return 0;
}

bool UELSSUtility::GetScreenUpdateCheck() {
    return false;
}

FSSPlayerRankParam UELSSUtility::GetPlayerRankDataToRankPoint(const TArray<FSSPlayerRankParam>& Table, const int32 RankPoint, const int32 LeaderboardRank, int32& refIdx) {
    return FSSPlayerRankParam{};
}

FSSPlayerRankParam UELSSUtility::GetPlayerRankDataToRankId(const int32 rankId) {
    return FSSPlayerRankParam{};
}

FSSPlayerRankParam UELSSUtility::GetPlayerRankData(const int32 Exp, int32& expNext, float& expRate) {
    return FSSPlayerRankParam{};
}

EELNetworkStatus UELSSUtility::GetNetworkStatus(const UObject* WorldContextObject) {
    return EELNetworkStatus::Disabled;
}

eErrorID UELSSUtility::GetNetworkErrorID(const int32 errID) {
    return eErrorID::eErrorID_None;
}

int32 UELSSUtility::GetMatchSpectatorsMax() {
    return 0;
}

int32 UELSSUtility::GetMatchPlayerMax() {
    return 0;
}

FText UELSSUtility::GetLocalizeText(const FString& stNS, const FString& stKey) {
    return FText::GetEmpty();
}

FSSErrorTextDataToHTTPCode UELSSUtility::GetHTTPErrorData(const int32 GetId) {
    return FSSErrorTextDataToHTTPCode{};
}

FSSErrorTextLinkDialogMessage UELSSUtility::GetErrorTextLinkMessage(const EErrDialogType GetType) {
    return FSSErrorTextLinkDialogMessage{};
}

FString UELSSUtility::GetEOSAuthToken() {
    return TEXT("");
}

UELEOSManager* UELSSUtility::GetELEOSManager(const UObject* WorldContextObject) {
    return NULL;
}

float UELSSUtility::GetDefaultAPIPollingTime() {
    return 0.0f;
}

int32 UELSSUtility::GetDefaultAPIPollingLimit() {
    return 0;
}

FString UELSSUtility::GetBase64EncryptData(const FString& baseData, const bool isUniqueData) {
    return TEXT("");
}

FString UELSSUtility::GetBase64DecodeData(const FString& encryptData, const bool isUniqueData) {
    return TEXT("");
}

FSSErrorTextDataToAWS UELSSUtility::GetAWSErrorData(const int32 GetType) {
    return FSSErrorTextDataToAWS{};
}

void UELSSUtility::EOSForceUpdate() {
}

void UELSSUtility::EndWaitDownloadSSModeServiceParam(const UObject* WorldContextObject) {
}

void UELSSUtility::DestroySSRootObject(const UObject* WorldContextObject) {
}

void UELSSUtility::DestroySSMasterData(const UObject* WorldContextObject) {
}

void UELSSUtility::DestroySSLevelTransitionEvent(const UObject* WorldContextObject) {
}

UYGS2RequestBase* UELSSUtility::CreateYGS2Request(const EYGS2Api Api) {
    return NULL;
}

UELSSRootObject* UELSSUtility::CreateSSRootObject(const UObject* WorldContextObject, TSubclassOf<UELSSRootObject> inRootObjectClass) {
    return NULL;
}

UELSSMasterData* UELSSUtility::CreateSSMasterDataInstance(const UObject* WorldContextObject) {
    return NULL;
}

UELSSLevelTransitionEvent* UELSSUtility::CreateSSLevelTransitionEvent(const UObject* WorldContextObject) {
    return NULL;
}

int32 UELSSUtility::CreateShortErrorCodeNumber(const UObject* WorldContextObject, eErrorID inApiErrorCategory, int32 inApiErrorCode) {
    return 0;
}

FSSWrestlerSetupParam UELSSUtility::ConvertWrestlerSetupParamToSSParam(const FWrestlerSetupParam& inWrestlerSetupParam) {
    return FSSWrestlerSetupParam{};
}

FWrestlerSetupParam UELSSUtility::ConvertSSWrestlerSetupParamToBaseParam(const FSSWrestlerSetupParam& inSSWrestlerSetupParam) {
    return FWrestlerSetupParam{};
}

void UELSSUtility::CheckEOSMngTickable() {
}

bool UELSSUtility::CanUseSSMasterData(const UObject* WorldContextObject) {
    return false;
}

UELSSUtility::UELSSUtility() {
}

