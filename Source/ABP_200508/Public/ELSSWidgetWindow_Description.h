#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetWindow_Description.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetWindow_Description : public UELSSWidgetBase {
    GENERATED_BODY()
public:
    UELSSWidgetWindow_Description();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsShow();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsDoneWork();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetInput();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

