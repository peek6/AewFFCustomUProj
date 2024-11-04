#pragma once
#include "CoreMinimal.h"
#include "ELUserWidget.h"
#include "InputCoreTypes.h"
#include "ELPauseMenuBase.generated.h"

class APlayerController;
class UELPauseMenuBase;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELPauseMenuBase : public UELUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPadPause;
    
public:
    UELPauseMenuBase();
    UFUNCTION(BlueprintCallable)
    void TabRight(bool Repeat);
    
    UFUNCTION(BlueprintCallable)
    void TabLeft(bool Repeat);
    
    UFUNCTION(BlueprintCallable)
    void SpecialRight();
    
    UFUNCTION(BlueprintCallable)
    void SecondTabRight();
    
    UFUNCTION(BlueprintCallable)
    void SecondTabLeft();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestCloseChildMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestClose();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenChildMenu(UELPauseMenuBase* Child);
    
public:
    UFUNCTION(BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabRight(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabLeft(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSecondTabRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSecondTabLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveUp(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveRight(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveLeft(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveDown(bool Repeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFaceButtonUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFaceButtonLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecision(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnyKey(FKey InKey);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveUp(bool Repeat);
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(bool Repeat);
    
    UFUNCTION(BlueprintCallable)
    void MoveLeft(bool Repeat);
    
    UFUNCTION(BlueprintCallable)
    void MoveDown(bool Repeat);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex(int32 ControllerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindPlayer(bool& Find) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FaceButtonUp();
    
    UFUNCTION(BlueprintCallable)
    void FaceButtonLeft();
    
    UFUNCTION(BlueprintCallable)
    void Decision(APlayerController* PlayerController);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void CursorLoopWithRepeat(int32 Now, int32 Move, int32 ListMax, bool Repeat, int32& NewCursor, bool& Moved);
    
    UFUNCTION(BlueprintCallable)
    void ClearChildMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
    UFUNCTION(BlueprintCallable)
    void AnyKey(FKey InKey);
    
};

