#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETipsLoadingCategory.h"
#include "TipsLoadingExecCountInfo_Ref.h"
#include "TipsLoadingResourceInfo.h"
#include "TipsLoadingCompleteDelegateDelegate.h"
#include "ELTipsLoadingManager.generated.h"

class AELTipsLoadingExecutorBase;

UCLASS(Blueprintable)
class ABP_200508_API UELTipsLoadingManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOverrideNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideNextLevelOption;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsLoadingCompleteDelegate CompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETipsLoadingCategory, FTipsLoadingExecCountInfo_Ref> m_ExecCountInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELTipsLoadingExecutorBase* m_pLoadingExecuteActor;
    
public:
    UELTipsLoadingManager();
    UFUNCTION(BlueprintCallable)
    bool StartScreen(ETipsLoadingCategory _displayCategory, FTipsLoadingCompleteDelegate _completeDelegate, bool _isFadeInStart);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideNextLevel(const FName& _nextLevel, const FString& _optionString);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoading();
    
    UFUNCTION(BlueprintCallable)
    bool GetResourceInfo(ETipsLoadingCategory _displayCategory, int32 _targetIndex, FTipsLoadingResourceInfo& _outResourceInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndScreen();
    
    UFUNCTION(BlueprintCallable)
    bool Debug_StartScreen(ETipsLoadingCategory _displayCategory, int32 _selectTipsIndex, FTipsLoadingCompleteDelegate _completeDelegate);
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideNextLevel();
    
};

