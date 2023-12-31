#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "ELInGameMenuInputEventActor.h"
#include "ELPauseMenuManagerBase.generated.h"

class APlayerController;
class UELPauseMenuBase;

UCLASS(Blueprintable)
class ABP_200508_API AELPauseMenuManagerBase : public AELInGameMenuInputEventActor {
    GENERATED_BODY()
public:
    AELPauseMenuManagerBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetTopPauseMenu(UELPauseMenuBase* InPauseMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_Up(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_Right(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_RB(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_Left(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_LB(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_FaceUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_FaceLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_Down(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_Decision_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_Decision_Pressed(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_Cancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MenuInputEvent_AnyKey(EInputEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    UELPauseMenuBase* GetTopPauseMenu();
    
};

