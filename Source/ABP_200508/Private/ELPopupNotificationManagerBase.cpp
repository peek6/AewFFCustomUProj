#include "ELPopupNotificationManagerBase.h"

void UELPopupNotificationManagerBase::RequestPopup_Online(EPopupOnlineStatusType _statusType, const FString& _execUserName, TArray<FString> _targetUserName) {
}

void UELPopupNotificationManagerBase::RequestPopup_ChatMessage(const FString& _userName, const FString& _dispMessage) {
}

void UELPopupNotificationManagerBase::RequestPopup_ChallengeCompleted(int32 _challengeId) {
}

void UELPopupNotificationManagerBase::ReadytoStartPopupLayout_N() {
}



bool UELPopupNotificationManagerBase::IsExecutePopup() const {
    return false;
}

void UELPopupNotificationManagerBase::CheckNextPopup() {
}

void UELPopupNotificationManagerBase::CheckLayoutViewport_N() {
}

void UELPopupNotificationManagerBase::ChangeExecutePopup(bool _state) {
}

UELPopupNotificationManagerBase::UELPopupNotificationManagerBase() {
    this->PopupWidget_N = NULL;
    this->ZOrder_N = 310;
}

