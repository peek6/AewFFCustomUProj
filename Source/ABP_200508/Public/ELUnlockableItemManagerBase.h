#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELRefUnlockableItemInfo.h"
#include "ELUnlockItemSaveData.h"
#include "EUnlockItemCategory.h"
#include "EUnlockableItemPurchaseResult.h"
#include "UnavailableDlcData.h"
#include "UnlockableItemParam.h"
#include "Engine/EngineTypes.h"
#include "CheckInstalledDlcItemCompleteDelegateDelegate.h"
#include "ItemPurchaseCompleteDelegateDelegate.h"
#include "QueryEntitlementCompleteDelegateDelegate.h"
#include "ELUnlockableItemManagerBase.generated.h"

class UDataTable;
class UELGoldCoinPossessManager;

UCLASS(Blueprintable)
class ABP_200508_API UELUnlockableItemManagerBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AutoQueryEntitlementsCompleteTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockableItemParam> m_UnlockableItemParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_RequestPurchaseItemIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockableItemParam> m_ConsumeGoldCoinItemList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UELGoldCoinPossessManager> m_ptrGoldCoinPossessManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FELRefUnlockableItemInfo> m_ItemInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> m_BadgeIdSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_CheckInstalledDlcItemNames;
    
public:
    UELUnlockableItemManagerBase();
    UFUNCTION(BlueprintCallable)
    void UnlockingItemList(TArray<int32> _targetIdList);
    
    UFUNCTION(BlueprintCallable)
    void UnlockingItem(int32 _targetId);
    
    UFUNCTION(BlueprintCallable)
    void SortUnlockItemParamMap(UPARAM(Ref) TMap<int32, int32>& _SortedMap);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    void SetupUnlockableItemDataTable(TSoftObjectPtr<UDataTable> _itemDT, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAEW_GOLD(int32 _newNum);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnlockableItemPurchase(TArray<int32> _targetItemIdList, FItemPurchaseCompleteDelegate OnResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryEntitlements(FQueryEntitlementCompleteDelegate _completeDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RequestInstalledDlcItemCheck(const TArray<FText> CheckDlcItemNames, FCheckInstalledDlcItemCompleteDelegate OnResultDelegate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUploadPossessedGold(bool _Successed);
    
    UFUNCTION(BlueprintCallable)
    void OnDownloadPossessedGold(bool _Successed, int32 _goldNum);
    
    UFUNCTION(BlueprintCallable)
    void OnConsumeGold(bool _Successed);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckedQueryEntitlements(bool Successed);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoQueryEntitlementsComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockingItemList(TArray<int32> _targetIdList);
    
    UFUNCTION(BlueprintCallable)
    void LockingItem(int32 _targetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdatedUnlockData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockingItem(int32 _targetId) const;
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockableItemSaveDataFromIdList(TArray<int32> _targetItemIdList, TArray<FELUnlockItemSaveData>& ResultList);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockableItemSaveDataFromID(int32 _targetItemId, FELUnlockItemSaveData& Result);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockableItemMapFromID(TArray<int32> _targetItemIdList, TMap<int32, FUnlockableItemParam>& ResultList);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockableItemListFromID(TArray<int32> _targetItemIdList, TArray<FUnlockableItemParam>& ResultList);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockableItemListFromCategory(EUnlockItemCategory _targetItemCategory, TArray<FUnlockableItemParam>& ResultList);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockableItemList(TArray<FUnlockableItemParam>& ResultList);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockableItemInfoFromIdList(TArray<int32> _targetItemIdList, TArray<FUnlockableItemParam>& ItemParamList, TArray<FELUnlockItemSaveData>& ItemSaveDataList);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockableItemInfoFromID(int32 _targetItemId, FUnlockableItemParam& ItemParam, FELUnlockItemSaveData& ItemSaveData);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockableItemInfoFromFromCategory(EUnlockItemCategory _targetItemCategory, TArray<FUnlockableItemParam>& ItemParamList, TArray<FELUnlockItemSaveData>& ItemSaveDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnavailableDlcData(FUnavailableDlcData& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUnlockableItemPurchaseResult GetPurchaseLastResult();
    
    UFUNCTION(BlueprintCallable)
    void GetHotItemListFromID(TArray<int32> _targetItemIdList, TArray<FUnlockableItemParam>& ResultList);
    
    UFUNCTION(BlueprintCallable)
    void GetHotItemListFromCategory(EUnlockItemCategory _targetItemCategory, TArray<FUnlockableItemParam>& ResultList);
    
    UFUNCTION(BlueprintCallable)
    void GetHotItemListFromAll(TArray<FUnlockableItemParam>& ResultList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAEW_GOLD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAEW_CASH();
    
    UFUNCTION(BlueprintCallable)
    void GetAllUnlockableItemSaveData(TArray<FELUnlockItemSaveData>& ResultList);
    
    UFUNCTION(BlueprintCallable)
    void CheckEntitlementedDlc(TArray<FText>& ReleasedItemName, TArray<FText>& ShortageGameVersionItemName, TArray<FText>& NotFoundItemName);
    
};

