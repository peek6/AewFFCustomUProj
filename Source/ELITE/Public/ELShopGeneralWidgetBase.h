#pragma once
#include "CoreMinimal.h"
#include "ELMainMenuWidgetBase.h"
#include "EShopDisplayCategory.h"
#include "ShopDisplayParam.h"
#include "EShopGeneralListScrollDirectionType.h"
#include "ShopGeneralItemDisplayData.h"
#include "ShopGeneralItemManageData.h"
#include "ELShopGeneralWidgetBase.generated.h"

class AELGameCommonPlayerControllerBase;

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELShopGeneralWidgetBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FShopDisplayParam> m_shopDisplayUnlockableItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShopGeneralItemManageData> m_itemManageDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FShopGeneralItemDisplayData> m_itemDisplayDataMap;
    
public:
    UELShopGeneralWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateParameter(EShopDisplayCategory _targetCategory);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNormalDisplayCursorIndex(int32 _Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDisplayListNum(int32 _num);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentListScrollDirectionType(EShopGeneralListScrollDirectionType _type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PurchasedPostProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveTab(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedBackTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveUpDownCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCategory(AELGameCommonPlayerControllerBase* _InputPlayerController, int32 _addIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPurchasedItem(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovedCursorLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemSaleState();
    
    UFUNCTION(BlueprintCallable)
    void InitializeParameter(TArray<FShopDisplayParam> _targetShopDisplayParamList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNormalDisplayCursorIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDisplayItemNum() const;
    
    UFUNCTION(BlueprintCallable)
    FShopGeneralItemDisplayData GetDisplayDataFromIndex(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EShopGeneralListScrollDirectionType GetCurrentListScrollDirectionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FShopGeneralItemManageData GetCurrentItemManageData();
    
    UFUNCTION(BlueprintCallable)
    void CheckValidNormalDisplayCursorIndex();
    
    UFUNCTION(BlueprintCallable)
    void ChangeListViewType(bool IsTextType);
    
};

