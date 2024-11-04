#include "ELYGS2Manager.h"

bool UELYGS2Manager::SetServerListData(const FString& Data) {
    return false;
}

void UELYGS2Manager::SetNetworkObserver(UELNetworkObserverBase* _pNetworkObserver) {
}

void UELYGS2Manager::SetDisplayName(const FString& DisplayName) {
}

bool UELYGS2Manager::RequestSetDisplayName() {
    return false;
}

bool UELYGS2Manager::RequestPingToAllServers() {
    return false;
}

bool UELYGS2Manager::RequestGetInfo() {
    return false;
}

void UELYGS2Manager::RequestCancelForDebug(UYGS2RequestBase* Request, EYGS2ErrorType ErrorType) {
}

bool UELYGS2Manager::RequestAuth() {
    return false;
}

void UELYGS2Manager::RemoveRequests(EYGS2Api inApiType) {
}

void UELYGS2Manager::OnYGS2Response(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request) {
}

void UELYGS2Manager::NetworkTypeChanged(EELNetworkType NetworkType) {
}

void UELYGS2Manager::NetworkStatusChanged(EELNetworkStatus NetworkStatus) {
}

bool UELYGS2Manager::IsNetworkError() const {
    return false;
}

bool UELYGS2Manager::IsMaintenance() const {
    return false;
}

bool UELYGS2Manager::IsEndAuth() {
    return false;
}

bool UELYGS2Manager::IsBanned() const {
    return false;
}

bool UELYGS2Manager::IsAuthFailed() const {
    return false;
}

bool UELYGS2Manager::HasConnectableServerParam() {
    return false;
}

FString UELYGS2Manager::GetYGS2ServerVersion() const {
    return TEXT("");
}

FString UELYGS2Manager::GetYGS2ServerName() const {
    return TEXT("");
}

FString UELYGS2Manager::GetYGS2ServerID() const {
    return TEXT("");
}

int32 UELYGS2Manager::GetYGS2Permission() const {
    return 0;
}

FString UELYGS2Manager::GetYGS2EnvName() const {
    return TEXT("");
}

bool UELYGS2Manager::GetSSServerEndpointListData(TArray<FSSServerEndpoint>& SSServerDatas) {
    return false;
}

bool UELYGS2Manager::GetSSModeServerEnvData(FSSModeServerParam& SSServerData) {
    return false;
}

int32 UELYGS2Manager::GetPingMs() {
    return 0;
}

FYGS2ClientCacheParam UELYGS2Manager::GetClientCacheParam() {
    return FYGS2ClientCacheParam{};
}

bool UELYGS2Manager::GetBaseURLByArea(const FString& Area, FString& root_url, int32& api_ver) {
    return false;
}

bool UELYGS2Manager::FindNearestServerPing(FString& Name, float& Ping) {
    return false;
}

void UELYGS2Manager::EmptyRequests() {
}

void UELYGS2Manager::ClearNetworkErrorFlag() {
}

void UELYGS2Manager::ApplicationStatusChanged(EELApplicationStatus AppStatus) {
}

UELYGS2Manager::UELYGS2Manager() {
    this->m_pNetworkObserver = NULL;
}

