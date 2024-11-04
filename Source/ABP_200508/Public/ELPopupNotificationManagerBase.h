#pragma once
#include "CoreMinimal.h"
#include "SingletonBase.h"
#include "EPopupOnlineStatusType.h"
#include "PopupOnlineChatMessage.h"
#include "PopupOnlineStatus.h"
#include "ELPopupNotificationManagerBase.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API UELPopupNotificationManagerBase : public USingletonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PopupWidget_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder_N;
    
public:
    UELPopupNotificationManagerBase();
    UFUNCTION(BlueprintCallable)
    void RequestPopup_Online(EPopupOnlineStatusType _statusType, const FString& _execUserName, TArray<FString> _targetUserName);
    
    UFUNCTION(BlueprintCallable)
    void RequestPopup_ChatMessage(const FString& _userName, const FString& _dispMessage);
    
    UFUNCTION(BlueprintCallable)
    void RequestPopup_ChallengeCompleted(int32 _challengeId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReadytoStartPopupLayout_N();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartOnlinePopup(const FPopupOnlineStatus& _onlineStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartChatMessagePopup(const FPopupOnlineChatMessage& _chatMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecutePopup() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckNextPopup();
    
    UFUNCTION(BlueprintCallable)
    void CheckLayoutViewport_N();
    
    UFUNCTION(BlueprintCallable)
    void ChangeExecutePopup(bool _state);
    
};

