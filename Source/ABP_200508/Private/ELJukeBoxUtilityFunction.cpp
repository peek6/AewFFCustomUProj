#include "ELJukeBoxUtilityFunction.h"

void UELJukeBoxUtilityFunction::UpdateJukeboxSaveData(uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::SortJukeBoxAtoZ(TArray<FJukeBoxMenuInfo_N>& Params) {
}

void UELJukeBoxUtilityFunction::SetRandomPlaybackCore(FELTmpJukeboxSaveData& _stJukebox, bool _random) {
}

void UELJukeBoxUtilityFunction::SetRandomPlayback(bool _random, bool isTmp, uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::SetNextPlayIDForRandomCore(FELTmpJukeboxSaveData& _stJukebox) {
}

void UELJukeBoxUtilityFunction::SetNextPlayIDForRandom(bool isTmp, uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::SetNextPlayIDCore(FELTmpJukeboxSaveData& _stJukebox) {
}

void UELJukeBoxUtilityFunction::SetNextPlayID(bool isTmp, uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::SetJukeBoxSortListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, int32 _sortNo, bool _Enable) {
}

void UELJukeBoxUtilityFunction::SetJukeBoxSortListForID(int32 _targetId, int32 _sortNo, bool _Enable, bool isTmp, uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::SetJukeBoxPlayedListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, bool _Enable) {
}

void UELJukeBoxUtilityFunction::SetJukeBoxPlayedListForID(int32 _targetId, bool _Enable, bool isTmp, uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::SetJukeBoxCheckListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, bool _Enable) {
}

void UELJukeBoxUtilityFunction::SetJukeBoxCheckListForID(int32 _targetId, bool _Enable, bool isTmp, uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::SetCurrentPlayIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _id) {
}

void UELJukeBoxUtilityFunction::SetCurrentPlayID(int32 _id, bool isTmp, uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::SetCreateSavedataCore(FELTmpJukeboxSaveData& _stJukebox, bool _create) {
}

void UELJukeBoxUtilityFunction::SetCreateSavedata(bool _create, bool isTmp, uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::SaveRequestJukeBoxData(uint8 _saveDataAccessFlag) {
}

bool UELJukeBoxUtilityFunction::IsRandomPlaybackCore(FELTmpJukeboxSaveData& _stJukebox) {
    return false;
}

bool UELJukeBoxUtilityFunction::IsRandomPlayback(bool isTmp, uint8 _saveDataAccessFlag) {
    return false;
}

bool UELJukeBoxUtilityFunction::IsCreateSavedataCore(FELTmpJukeboxSaveData& _stJukebox) {
    return false;
}

bool UELJukeBoxUtilityFunction::IsCreateSavedata(bool isTmp, uint8 _saveDataAccessFlag) {
    return false;
}

void UELJukeBoxUtilityFunction::InitJukeBoxSortListCore(FELTmpJukeboxSaveData& _stJukebox) {
}

void UELJukeBoxUtilityFunction::InitJukeBoxSortList(bool isTmp, uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::InitJukeBoxPlayedListCore(FELTmpJukeboxSaveData& _stJukebox) {
}

void UELJukeBoxUtilityFunction::InitJukeBoxPlayedList(bool isTmp, uint8 _saveDataAccessFlag) {
}

void UELJukeBoxUtilityFunction::InitJukeBoxDataForDLC() {
}

int32 UELJukeBoxUtilityFunction::GetNextPlayIDCore(FELTmpJukeboxSaveData& _stJukebox) {
    return 0;
}

int32 UELJukeBoxUtilityFunction::GetNextPlayID(bool isTmp, uint8 _saveDataAccessFlag) {
    return 0;
}

USoundAtomCue* UELJukeBoxUtilityFunction::GetNextJukeBoxPlayCueCore(bool _inGameFlg) {
    return NULL;
}

USoundAtomCue* UELJukeBoxUtilityFunction::GetNextJukeBoxPlayCue(bool _inGameFlg) {
    return NULL;
}

int32 UELJukeBoxUtilityFunction::GetJukeBoxSortListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, bool& _findParam) {
    return 0;
}

int32 UELJukeBoxUtilityFunction::GetJukeBoxSortListForID(int32 _targetId, bool& _findParam, bool isTmp, uint8 _saveDataAccessFlag) {
    return 0;
}

TArray<int32> UELJukeBoxUtilityFunction::GetJukeBoxSortListCore(FELTmpJukeboxSaveData& _stJukebox) {
    return TArray<int32>();
}

TArray<int32> UELJukeBoxUtilityFunction::GetJukeBoxSortList(bool isTmp, uint8 _saveDataAccessFlag) {
    return TArray<int32>();
}

bool UELJukeBoxUtilityFunction::GetJukeBoxPlayListCore(FELTmpJukeboxSaveData& _stJukebox, TArray<int32>& _listArray) {
    return false;
}

TArray<int32> UELJukeBoxUtilityFunction::GetJukeBoxPlayList(bool isTmp, uint8 _saveDataAccessFlag) {
    return TArray<int32>();
}

bool UELJukeBoxUtilityFunction::GetJukeBoxPlayedListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, bool& _Successed) {
    return false;
}

bool UELJukeBoxUtilityFunction::GetJukeBoxPlayedListForID(int32 _targetId, bool& _Successed, bool isTmp, uint8 _saveDataAccessFlag) {
    return false;
}

TArray<int32> UELJukeBoxUtilityFunction::GetJukeBoxPlayedListCore(FELTmpJukeboxSaveData& _stJukebox) {
    return TArray<int32>();
}

TArray<int32> UELJukeBoxUtilityFunction::GetJukeBoxPlayedList(bool isTmp, uint8 _saveDataAccessFlag) {
    return TArray<int32>();
}

USoundAtomCue* UELJukeBoxUtilityFunction::GetJukeBoxPlayCueCore(int32 _targetId, bool _inGameFlg) {
    return NULL;
}

USoundAtomCue* UELJukeBoxUtilityFunction::GetJukeBoxPlayCue(int32 _targetId, bool _inGameFlg) {
    return NULL;
}

UELGameInstance* UELJukeBoxUtilityFunction::GetJukeboxGameInstance() {
    return NULL;
}

bool UELJukeBoxUtilityFunction::GetJukeBoxDataTableRowFromName(UDataTable* Table, FName RowName, FJukeBoxParam& OutRow) {
    return false;
}

bool UELJukeBoxUtilityFunction::GetJukeBoxCheckListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, bool& _Successed) {
    return false;
}

bool UELJukeBoxUtilityFunction::GetJukeBoxCheckListForID(int32 _targetId, bool& _Successed, bool isTmp, uint8 _saveDataAccessFlag) {
    return false;
}

TArray<int32> UELJukeBoxUtilityFunction::GetJukeBoxCheckListCore(FELTmpJukeboxSaveData& _stJukebox) {
    return TArray<int32>();
}

TArray<int32> UELJukeBoxUtilityFunction::GetJukeBoxCheckList(bool isTmp, uint8 _saveDataAccessFlag) {
    return TArray<int32>();
}

int32 UELJukeBoxUtilityFunction::GetCurrentPlayIDCore(FELTmpJukeboxSaveData& _stJukebox) {
    return 0;
}

int32 UELJukeBoxUtilityFunction::GetCurrentPlayID(bool isTmp, uint8 _saveDataAccessFlag) {
    return 0;
}

USoundAtomCue* UELJukeBoxUtilityFunction::GetCurrentJukeBoxPlayCueCore() {
    return NULL;
}

USoundAtomCue* UELJukeBoxUtilityFunction::GetCurrentJukeBoxPlayCue() {
    return NULL;
}

bool UELJukeBoxUtilityFunction::ConvertJukeboxSaveData(bool tmpUpdate, uint8 _saveDataAccessFlag) {
    return false;
}

UELJukeBoxUtilityFunction::UELJukeBoxUtilityFunction() {
}

