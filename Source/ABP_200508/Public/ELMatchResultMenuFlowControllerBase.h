#pragma once
#include "CoreMinimal.h"
#include "ELInGameMenuInputEventActor.h"
#include "Templates/SubclassOf.h"
#include "ELMatchResultMenuFlowControllerBase.generated.h"

class UELMatchResultMenuBase;

UCLASS(Blueprintable)
class ABP_200508_API AELMatchResultMenuFlowControllerBase : public AELInGameMenuInputEventActor {
    GENERATED_BODY()
public:
    AELMatchResultMenuFlowControllerBase();
    UFUNCTION(BlueprintCallable)
    UELMatchResultMenuBase* StartExtraMenuSequence(TSubclassOf<UELMatchResultMenuBase> InMenuClass);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetMenuSequence(TArray<TSubclassOf<UELMatchResultMenuBase>> InSeqeuence);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuBG(TSubclassOf<UELMatchResultMenuBase> InMenuBGClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOpenedDisconnectedDialog();
    
    UFUNCTION(BlueprintCallable)
    void OnClosedDisconnectedDialog();
    
public:
    UFUNCTION(BlueprintCallable)
    UELMatchResultMenuBase* GetCurrentMenu();
    
    UFUNCTION(BlueprintCallable)
    void EndExtraMenuSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddToCommonLayout(UELMatchResultMenuBase* ResultMenuBase);
    
};

