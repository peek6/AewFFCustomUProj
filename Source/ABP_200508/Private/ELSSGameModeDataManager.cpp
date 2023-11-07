#include "ELSSGameModeDataManager.h"

void UELSSGameModeDataManager::SetSSUserDataToDummy() {
}

void UELSSGameModeDataManager::SetSSUserData(const FYGS2SSPlayerData& dat) {
}

void UELSSGameModeDataManager::SetSSTempPlayerNetworkID(const FString& pid) {
}

void UELSSGameModeDataManager::SetSSRankingData(int32 InRank) {
}

void UELSSGameModeDataManager::SetPlayerEquipSettings(const FSSPlayerEquipSettings& inEquipData) {
}

UELSSUserData* UELSSGameModeDataManager::GetSSUserData() {
    return NULL;
}

FString UELSSGameModeDataManager::GetSSTempPlayerNetworkID() {
    return TEXT("");
}

TArray<FSSStampedeRankParam> UELSSGameModeDataManager::GetSSStampedeRankTable() {
    return TArray<FSSStampedeRankParam>();
}

TArray<FSSPlayerRankParam> UELSSGameModeDataManager::GetSSPlayerRankTable() {
    return TArray<FSSPlayerRankParam>();
}

USSMenuWrestlerSelectData* UELSSGameModeDataManager::GetSSMenuWrestlerSelectData() {
    return NULL;
}

EWrestlerID_N UELSSGameModeDataManager::GetSelectedWrestlerID() const {
    return EWrestlerID_N::None;
}

ESSWrestlerType UELSSGameModeDataManager::GetSelectedEditWrestlerType() const {
    return ESSWrestlerType::None;
}

void UELSSGameModeDataManager::GetPlayerEquipSettings(FSSPlayerEquipSettings& outEquipData) const {
}

void UELSSGameModeDataManager::CheckSelectedWrestlerIsValid(bool inUGCLimit) {
}

UELSSGameModeDataManager::UELSSGameModeDataManager() {
    this->ssUserData = NULL;
    this->selectWrestlerData = NULL;
}

