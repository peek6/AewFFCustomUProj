#pragma once
#include "CoreMinimal.h"
#include "DialogBoxBeginResultDelegateDelegate.h"
#include "DialogBoxResultDelegateDelegate.h"
#include "yEnDialogBoxChoices.h"
#include "yEnMenuWidgetType.h"
#include "SingletonBase.h"
#include "DisplayDialogBoxStackInfo.h"
#include "ELDialogBoxManagerBase.generated.h"

class UELDialogBoxWidgetBase;
class UELOperationalWidgetBase;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class ELITE_API UELDialogBoxManagerBase : public USingletonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDisplayDialogBoxStackInfo> DisplayDialogStackList;
    
public:
    UELDialogBoxManagerBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenTutorialDialog(const FDialogBoxResultDelegate& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenThreePictureAndTextDialog(const TArray<UTexture2D*>& Texture, const FText& HeaderText, const TArray<FText>& MainTextList, const TArray<FText>& AskTexts, const FDialogBoxResultDelegate& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenTextEntryDialog(const FText& Title, const FString& Text, const int32 MaxNum, const FDialogBoxResultDelegate& ResultDelegate, const bool UseInfoText, bool IsSystemDialog, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenSinglePictureAndTextDialog(const UTexture2D* Texture, const FText& HeaderText, const FText& TargetText, const TArray<FText>& AskTexts, const FDialogBoxResultDelegate& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenSingleItemGetDialog(const TSoftObjectPtr<UTexture2D>& Texture, const FText& HeaderText, const FText& MainText, const TArray<FText>& AskTexts, const FDialogBoxResultDelegate& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenOnlyTextDialog(const FText& HeaderText, const FText& MainText, const TArray<FText>& AskTexts, const FDialogBoxResultDelegate& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenOnlyPictureDialog(const UTexture2D* Texture, const FText& HeaderText, const TArray<FText>& AskTexts, const FDialogBoxResultDelegate& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenMessageDialogNoResult(int32 MessageType, const FText& Text, const yEnDialogBoxChoices Choise, bool IsSystemDialog, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenMessageDialog(int32 MessageType, const FText& Text, const TArray<yEnDialogBoxChoices>& Choises, const FDialogBoxResultDelegate& ResultDelegate, const int32 DefaultIndex, bool IsSystemDialog, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOnlineNewsDialog(const UTexture2D* Texture, const FText& HeaderText, const FText& MainText, const FDialogBoxResultDelegate& ResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestForceCloseDialog(bool CloseALL);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestDisconnectedGamePadMessageDialog(int32 MessageType, const FText& Text, const TArray<yEnDialogBoxChoices>& Choises, bool IsSystemDialog, const FDialogBoxResultDelegate& ResultDelegate, const FDialogBoxBeginResultDelegate& BeginResultDelegate, UELDialogBoxWidgetBase*& ResultDialog, bool& ResultOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsStackedDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsOpenedDialogOrTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsOpenedDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    yEnMenuWidgetType GetCurrentDialogWidgetType() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisplayDialogBoxStackListPushItem(UELOperationalWidgetBase* Widget, FDialogBoxResultDelegate Delegate, FDialogBoxBeginResultDelegate BeginResultDelegate, yEnMenuWidgetType Type);
    
    UFUNCTION(BlueprintCallable)
    bool DisplayDialogBoxStackListPopItem(FDisplayDialogBoxStackInfo& ReturnItem);
    
    UFUNCTION(BlueprintCallable)
    bool DisplayDialogBoxStackListGetItem(FDisplayDialogBoxStackInfo& ReturnItem);
    
    UFUNCTION(BlueprintCallable)
    bool DisplayDialogBoxStackListFindItem(FDisplayDialogBoxStackInfo& ReturnItem, yEnMenuWidgetType Type);
    
    UFUNCTION(BlueprintCallable)
    void DisplayDialogBoxStackListEmpty();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallDialogResult(bool IsCancel);
    
};

