#include "ELSSOnlineError.h"

void UELSSOnlineError::YGS2API_RequestResult(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request) {
}

void UELSSOnlineError::Update() {
}

void UELSSOnlineError::Stop() {
}

void UELSSOnlineError::Startup() {
}

void UELSSOnlineError::StartUniqueErrorEvent(const ESSOnlineErrorType callType) {
}

void UELSSOnlineError::StartPlatformErrorEvent(const ESSOnlineErrorType callType, bool setupErrorData) {
}

void UELSSOnlineError::StartErrorEvent(FSSPlatformNetworkData& errData) {
}

bool UELSSOnlineError::StartErrorCorrespond() {
    return false;
}

void UELSSOnlineError::SSMode_RequestResult(const int32 responseCode, const FString& responseData, const FString& apiUniqueID, eSSRequestResultType resultType) {
}

void UELSSOnlineError::SetDialogReserveMode(bool IsOn) {
}

void UELSSOnlineError::Reset(bool excludedNetworkErrorData) {
}

void UELSSOnlineError::ReserveUniqueError(ESSOnlineErrorType inErrorType) {
}

void UELSSOnlineError::ReserveErrorDialog(const FSSPlatformNetworkData& inErrorData) {
}

void UELSSOnlineError::Release() {
}

void UELSSOnlineError::OpenReservedUniqueErrorDialog() {
}

void UELSSOnlineError::OpenReservedDialog() {
}

void UELSSOnlineError::NetworkTypeChanged(EELNetworkType NetworkType) {
}

void UELSSOnlineError::NetworkStatusChanged(EELNetworkStatus NetworkStatus) {
}

void UELSSOnlineError::NetworkErrorReset() {
}

void UELSSOnlineError::NetworkConnectionStatusChange(EELNetworkConnectionStatus NewNetworkConnectionStatus, EELServerType ServerType) {
}

bool UELSSOnlineError::IsReservedUniqueError() {
    return false;
}

bool UELSSOnlineError::IsReservedDialog() const {
    return false;
}

bool UELSSOnlineError::IsNetworkErrorEnable() const {
    return false;
}

bool UELSSOnlineError::IsErrorProcessStop() const {
    return false;
}

void UELSSOnlineError::Init() {
}

bool UELSSOnlineError::GetErrDialogData(FSSPlatformNetworkData& dat, const FString& tmpID, const bool isClear) {
    return false;
}

FString UELSSOnlineError::GetAllNetworkErrorText(int32& outErrorType) {
    return TEXT("");
}

void UELSSOnlineError::FilteringNetworkError() {
}

void UELSSOnlineError::ErrorProcessEnd() {
}

bool UELSSOnlineError::EndErrDialogData(const FString& tmpID, const bool retDialog) {
    return false;
}

void UELSSOnlineError::ClearReservedUniqueError() {
}

void UELSSOnlineError::ClearReservedDialog() {
}

void UELSSOnlineError::ApplicationStatusChanged(EELApplicationStatus AppStatus) {
}

bool UELSSOnlineError::AddErrDialogData(const FSSPlatformNetworkData& dat, FString& tmpID) {
    return false;
}

UELSSOnlineError::UELSSOnlineError() {
    this->isErrorProcess = false;
    this->EnableNetworkStatus = false;
    this->CurrentNetworkStatus = EELNetworkStatus::Disabled;
}

