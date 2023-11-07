#pragma once
#include "CoreMinimal.h"
#include "SingletonBase.h"
#include "ELSaveIconScreenExecutorBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSaveIconScreenExecutorBase : public USingletonBase {
    GENERATED_BODY()
public:
    UELSaveIconScreenExecutorBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetShowMinimumTime();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLoadingIconVisible_N(const bool bIsVisible);
    
};

