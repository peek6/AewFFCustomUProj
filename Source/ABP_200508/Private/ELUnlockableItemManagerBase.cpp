#include "ELUnlockableItemManagerBase.h"

void UELUnlockableItemManagerBase::UnlockingItemList(TArray<int32> _targetIdList) {
}

void UELUnlockableItemManagerBase::UnlockingItem(int32 _targetId) {
}

void UELUnlockableItemManagerBase::SortUnlockItemParamMap(TMap<int32, int32>& _SortedMap) {
}

void UELUnlockableItemManagerBase::SetupUnlockableItemDataTable(TSoftObjectPtr<UDataTable> _itemDT, UObject* _pWorldContextObject) {
}

void UELUnlockableItemManagerBase::SetCurrentAEW_GOLD(int32 _newNum) {
}

void UELUnlockableItemManagerBase::RequestUnlockableItemPurchase(TArray<int32> _targetItemIdList, FItemPurchaseCompleteDelegate OnResultDelegate) {
}

bool UELUnlockableItemManagerBase::RequestQueryEntitlements(FQueryEntitlementCompleteDelegate _completeDelegate) {
    return false;
}

void UELUnlockableItemManagerBase::RequestInstalledDlcItemCheck(const TArray<FText> CheckDlcItemNames, FCheckInstalledDlcItemCompleteDelegate OnResultDelegate) {
}

void UELUnlockableItemManagerBase::OnUploadPossessedGold(bool _Successed) {
}

void UELUnlockableItemManagerBase::OnDownloadPossessedGold(bool _Successed, int32 _goldNum) {
}

void UELUnlockableItemManagerBase::OnConsumeGold(bool _Successed) {
}

void UELUnlockableItemManagerBase::OnCheckedQueryEntitlements(bool Successed) {
}

void UELUnlockableItemManagerBase::OnAutoQueryEntitlementsComplete() {
}

void UELUnlockableItemManagerBase::LockingItemList(TArray<int32> _targetIdList) {
}

void UELUnlockableItemManagerBase::LockingItem(int32 _targetId) {
}

bool UELUnlockableItemManagerBase::IsUpdatedUnlockData() {
    return false;
}

bool UELUnlockableItemManagerBase::IsUnlockingItem(int32 _targetId) const {
    return false;
}

void UELUnlockableItemManagerBase::GetUnlockableItemSaveDataFromIdList(TArray<int32> _targetItemIdList, TArray<FELUnlockItemSaveData>& ResultList) {
}

void UELUnlockableItemManagerBase::GetUnlockableItemSaveDataFromID(int32 _targetItemId, FELUnlockItemSaveData& Result) {
}

void UELUnlockableItemManagerBase::GetUnlockableItemMapFromID(TArray<int32> _targetItemIdList, TMap<int32, FUnlockableItemParam>& ResultList) {
}

void UELUnlockableItemManagerBase::GetUnlockableItemListFromID(TArray<int32> _targetItemIdList, TArray<FUnlockableItemParam>& ResultList) {
}

void UELUnlockableItemManagerBase::GetUnlockableItemListFromCategory(EUnlockItemCategory _targetItemCategory, TArray<FUnlockableItemParam>& ResultList) {
}

void UELUnlockableItemManagerBase::GetUnlockableItemList(TArray<FUnlockableItemParam>& ResultList) {
}

void UELUnlockableItemManagerBase::GetUnlockableItemInfoFromIdList(TArray<int32> _targetItemIdList, TArray<FUnlockableItemParam>& ItemParamList, TArray<FELUnlockItemSaveData>& ItemSaveDataList) {
}

void UELUnlockableItemManagerBase::GetUnlockableItemInfoFromID(int32 _targetItemId, FUnlockableItemParam& ItemParam, FELUnlockItemSaveData& ItemSaveData) {
}

void UELUnlockableItemManagerBase::GetUnlockableItemInfoFromFromCategory(EUnlockItemCategory _targetItemCategory, TArray<FUnlockableItemParam>& ItemParamList, TArray<FELUnlockItemSaveData>& ItemSaveDataList) {
}

void UELUnlockableItemManagerBase::GetUnavailableDlcData(FUnavailableDlcData& Result) {
}

EUnlockableItemPurchaseResult UELUnlockableItemManagerBase::GetPurchaseLastResult() {
    return EUnlockableItemPurchaseResult::None;
}

void UELUnlockableItemManagerBase::GetHotItemListFromID(TArray<int32> _targetItemIdList, TArray<FUnlockableItemParam>& ResultList) {
}

void UELUnlockableItemManagerBase::GetHotItemListFromCategory(EUnlockItemCategory _targetItemCategory, TArray<FUnlockableItemParam>& ResultList) {
}

void UELUnlockableItemManagerBase::GetHotItemListFromAll(TArray<FUnlockableItemParam>& ResultList) {
}

int32 UELUnlockableItemManagerBase::GetCurrentAEW_GOLD() {
    return 0;
}

int32 UELUnlockableItemManagerBase::GetCurrentAEW_CASH() {
    return 0;
}

void UELUnlockableItemManagerBase::GetAllUnlockableItemSaveData(TArray<FELUnlockItemSaveData>& ResultList) {
}

void UELUnlockableItemManagerBase::CheckEntitlementedDlc(TArray<FText>& ReleasedItemName, TArray<FText>& ShortageGameVersionItemName, TArray<FText>& NotFoundItemName) {
}

UELUnlockableItemManagerBase::UELUnlockableItemManagerBase() {
}

