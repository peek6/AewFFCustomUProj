#pragma once
#include "CoreMinimal.h"
#include "ChallengeProgressDetailInfo.h"
#include "ELMainMenuWidgetBase.h"
#include "ELBattlePassMenuChallengeWidgetBase.generated.h"

class AELGameCommonPlayerControllerBase;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELBattlePassMenuChallengeWidgetBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
    UELBattlePassMenuChallengeWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SortChallengeProgressDetailInfoList(TArray<FChallengeProgressDetailInfo> _In, TArray<FChallengeProgressDetailInfo>& _out);
    
    UFUNCTION(BlueprintCallable)
    void SetDispListNum(int32 _num);
    
    UFUNCTION(BlueprintCallable)
    void ResetMoveCursorType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedBackTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMainMenuCategory(AELGameCommonPlayerControllerBase* InInputPlayerController, int32 _addIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCategory(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelMenu();
    
};

