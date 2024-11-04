#include "SaveDataObject_PlayerData.h"

void USaveDataObject_PlayerData::UpdateUnlockItemSaveData(FELUnlockItemSaveData _Param) {
}

void USaveDataObject_PlayerData::UpdatePossessedItemSaveData(TArray<FPossessedItemSaveData> _updateDataList) {
}

void USaveDataObject_PlayerData::UpdateOnlyNormalChallengeRecordSaveData(FOnlyNormalChallengeRecordSaveData _updateData) {
}

void USaveDataObject_PlayerData::UpdateMiniGameScoreRanking(TArray<FMiniGameScoreRankingSaveDataArray> _updateList) {
}

void USaveDataObject_PlayerData::UpdateMatchScoreRanking(TArray<FMatchScoreRankingSaveDataArray> _updateList) {
}

void USaveDataObject_PlayerData::UpdateChallengeRecordSaveDataList(TArray<FChallengeRecordSaveData> _updateDataList) {
}

void USaveDataObject_PlayerData::UpdateChallengeRecordSaveData(FChallengeRecordSaveData _updateData, EChallengeSaveDataType _dataType, bool _isResetRecord) {
}

void USaveDataObject_PlayerData::UpdateChallengeProgressSaveData(FChallengeProgressSaveData _updateData) {
}

void USaveDataObject_PlayerData::SetEpicAccountID(const FString& _strEpicAccountID) {
}

void USaveDataObject_PlayerData::SetConfirmedEULA_Version(int32 _version) {
}

void USaveDataObject_PlayerData::SetCareerModeWrestlerGUID(FGuid _guid) {
}

void USaveDataObject_PlayerData::SetAEWGold(const int32 _values) {
}

void USaveDataObject_PlayerData::SetAewCash(const int32 _values) {
}

void USaveDataObject_PlayerData::GetUnlockItemSaveDataByCategory(EUnlockItemCategory _targetCategory, TArray<FELUnlockItemSaveData>& _findParamList) {
}

FELUnlockItemSaveData USaveDataObject_PlayerData::GetUnlockItemSaveData(int32 _targetId, bool& _findParam) {
    return FELUnlockItemSaveData{};
}

FPossessedItemSaveData USaveDataObject_PlayerData::GetPossessedItemSaveDataFromID(int32 _targetId, bool& findParam) {
    return FPossessedItemSaveData{};
}

void USaveDataObject_PlayerData::GetPossessedItemSaveData(TArray<FPossessedItemSaveData>& _outDataList) {
}

void USaveDataObject_PlayerData::GetOnlyNormalChallengeRecordSaveData(FOnlyNormalChallengeRecordSaveData& _outData) {
}

void USaveDataObject_PlayerData::GetMiniGameScoreRanking(TArray<FMiniGameScoreRankingSaveDataArray>& _outDataList) {
}

void USaveDataObject_PlayerData::GetMatchScoreRanking(TArray<FMatchScoreRankingSaveDataArray>& _outDataList) {
}

FString USaveDataObject_PlayerData::GetEpicAccountID() const {
    return TEXT("");
}

void USaveDataObject_PlayerData::GetConfirmedEULA_Version(int32& _outVersion) {
}

void USaveDataObject_PlayerData::GetChallengeRecordSaveDataList(TArray<FChallengeRecordSaveData>& _outDataList) {
}

void USaveDataObject_PlayerData::GetChallengeRecordSaveData(FChallengeRecordSaveData& _outData, EChallengeSaveDataType _dataType) {
}

void USaveDataObject_PlayerData::GetChallengeProgressSaveData(FChallengeProgressSaveData& _outData) {
}

void USaveDataObject_PlayerData::GetCareerModeWrestlerGUID(FGuid& _outGuid) {
}

void USaveDataObject_PlayerData::GetAllUnlockItemSaveData(TArray<FELUnlockItemSaveData>& _findItemList) {
}

void USaveDataObject_PlayerData::GetAllPossessedItemSaveData(TArray<FPossessedItemSaveData>& _outDataList) {
}

int32 USaveDataObject_PlayerData::GetAEWGold() const {
    return 0;
}

int32 USaveDataObject_PlayerData::GetAewCash() const {
    return 0;
}

bool USaveDataObject_PlayerData::CreateUnlockItemSaveData(FELUnlockItemSaveData _Param) {
    return false;
}

bool USaveDataObject_PlayerData::CreatePossessedItemSaveData(FPossessedItemSaveData _createData) {
    return false;
}

bool USaveDataObject_PlayerData::ContainsAutoAddDlcTeamList(FGuid _teamId) const {
    return false;
}

void USaveDataObject_PlayerData::AllUpdateUnlockItemSaveData(TArray<FELUnlockItemSaveData>& _saveDataList) {
}

void USaveDataObject_PlayerData::AllUpdatePossessedItemSaveData(TArray<FPossessedItemSaveData>& _saveDataList, bool IsRequestUpdate) {
}

void USaveDataObject_PlayerData::AddPossessedItemQuantity(TArray<FAddPossessItemQuantity> _addDataList) {
}

void USaveDataObject_PlayerData::AddAutoAddDlcTeamList(FGuid _teamId) {
}

USaveDataObject_PlayerData::USaveDataObject_PlayerData() {
}

