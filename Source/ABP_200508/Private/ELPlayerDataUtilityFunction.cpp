#include "ELPlayerDataUtilityFunction.h"

void UELPlayerDataUtilityFunction::UpdateUnlockItemSaveData(FELUnlockItemSaveData _updateParam, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::UpdatePossessedItemSaveDataList(TArray<FPossessedItemSaveData> _updateDataList, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::SetSSModeKeyConfigData(int32 _localPlayerNo, TArray<FKeyMapSettingData> _keyMapSettingList, bool IsGamepad, bool IsSSMode, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::SetLocalAEWGoldNum(int32 _cashNum, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::SetKeyConfig(int32 _localPlayerNo, TArray<FKeyMapSettingData> _keyMapSettingList, bool IsGamepad, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::SetConfirmedEulaVer(UObject* _pWorldContextObject, int32 _targetVer, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::SetCareerModePlayerGUID(FGuid _guid, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::SetAEWCashNum(int32 _cashNum, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::SaveRequestPlayerData(uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::SaveRequestKeyConfigDataOnly(uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetUnlockItemSaveDataByIdMap(TArray<int32> _targetIdList, TMap<int32, FELUnlockItemSaveData>& _findParam, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetUnlockItemSaveDataByIdList(TArray<int32> _targetIdList, TArray<FELUnlockItemSaveData>& _findParam, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetUnlockItemSaveDataByCategory(EUnlockItemCategory _targetCategory, TArray<FELUnlockItemSaveData>& _findParam, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetUnlockItemSaveData(int32 _targetId, bool& _findParam, FELUnlockItemSaveData& _unlockItem, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetTitleHolderHistoryList(EELBelt _targetBelt, TArray<FELTitleHolderHistory_BP>& _outList, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetSSModeKeyConfigData(int32 _localPlayerNo, TArray<FKeyMapSettingData>& _outKeyMapSettingList, bool IsGamepad, bool IsSSMode, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetPossessedItemSaveDataListFromId(TArray<int32> _targetIdList, TArray<FPossessedItemSaveData>& outDataList, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetMiniGameScoreRankingItemList(EMiniGameID _miniGameType, TArray<FMiniGameScoreRankingItemInfo>& _outDataList, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetMatchScoreRankingItemList(EMatchScoreRankingsType _rankingType, TArray<FMatchScoreRankingItemInfo>& _outDataList, uint8 _saveDataAccessFlag) {
}

int32 UELPlayerDataUtilityFunction::GetLocalAEWGoldNum(bool& _Successed, uint8 _saveDataAccessFlag) {
    return 0;
}

void UELPlayerDataUtilityFunction::GetKeyConfig(int32 _localPlayerNo, TArray<FKeyMapSettingData>& _outKeyMapSettingList, bool IsGamepad, uint8 _saveDataAccessFlag) {
}

int32 UELPlayerDataUtilityFunction::GetCrateTicketNum(uint8 _saveDataAccessFlag) {
    return 0;
}

int32 UELPlayerDataUtilityFunction::GetConfirmedEulaVer(UObject* _pWorldContextObject, uint8 _saveDataAccessFlag) {
    return 0;
}

void UELPlayerDataUtilityFunction::GetCareerModePlayerGUID(FGuid& _outGuid, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetAllUnlockItemSaveData(TArray<FELUnlockItemSaveData>& _findItemList, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetAllPossessedItemSaveData(TArray<FPossessedItemSaveData>& _outDataList, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetAllMiniGameScoreRankingItemList(TArray<FMiniGameScoreRankingItemInfo>& _outDataList, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::GetAllMatchScoreRankingItemList(TArray<FMatchScoreRankingItemInfo>& _outDataList, uint8 _saveDataAccessFlag) {
}

int32 UELPlayerDataUtilityFunction::GetAEWCashNum(bool& _Successed, uint8 _saveDataAccessFlag) {
    return 0;
}

int32 UELPlayerDataUtilityFunction::GetAddEditSlotNumByWrestlerID(EWrestlerID_N _WrestlerID, uint8 _saveDataAccessFlag) {
    return 0;
}

int32 UELPlayerDataUtilityFunction::GetAddEditSlotNum(EPossessedItemExtendTarget _target, uint8 _saveDataAccessFlag) {
    return 0;
}

void UELPlayerDataUtilityFunction::EntryMiniGameScoreRanking(int32 _Score, EMiniGameID _miniGameType, TArray<FMatchScoreRankingWrestlerInfo> _usedWrestlers, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::EntryMatchScoreRanking(int32 _Score, EMatchScoreRankingsType _rankingType, TArray<FMatchScoreRankingWrestlerInfo> _usedWrestlers, float _starNum, int32 _optionValue, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::DeleteScoreRankingInvalidCAW() {
}

void UELPlayerDataUtilityFunction::DeleteMatchRecordsInvalidCAW(uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::DeleteMatchRecordsInvalidCAT(uint8 _saveDataAccessFlag) {
}

bool UELPlayerDataUtilityFunction::ApplyTmpPlayerDataToSaveData(uint8 _saveDataAccessFlag) {
    return false;
}

void UELPlayerDataUtilityFunction::ApplySSModeKeyConfig(APlayerController* _targetPlayerContorller, bool IsGamepad) {
}

void UELPlayerDataUtilityFunction::ApplySaveDataToPlayerData(UObject* _pWorldContextObject, USaveDataObject_PlayerData* _playerData) {
}

void UELPlayerDataUtilityFunction::ApplyKeyConfig(APlayerController* _targetPlayerContorller, int32 _localPlayerNo, bool IsGamepad) {
}

void UELPlayerDataUtilityFunction::ApplyDefaultToPlayerData(UObject* _pWorldContextObject, USaveDataObjectBase* _saveDataObject, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::AllUpdateUnlockItemSaveData(TArray<FELUnlockItemSaveData>& _updateParamList, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::AllUpdatePossessedItemSaveData(TArray<FPossessedItemSaveData>& _updateDataList, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::AddPossessedItemQuantity(TArray<FAddPossessItemQuantity> _updateDataList, uint8 _saveDataAccessFlag) {
}

void UELPlayerDataUtilityFunction::AddCrateTicketNum(int32 _addValue, uint8 _saveDataAccessFlag) {
}

UELPlayerDataUtilityFunction::UELPlayerDataUtilityFunction() {
}

