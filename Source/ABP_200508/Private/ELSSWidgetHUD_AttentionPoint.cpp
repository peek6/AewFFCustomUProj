#include "ELSSWidgetHUD_AttentionPoint.h"

void UELSSWidgetHUD_AttentionPoint::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_AttentionPoint::SetupTextInfo(int32 InAddValue, ESSAttentionReason InActType) {
}

void UELSSWidgetHUD_AttentionPoint::SetupPlayInAnimationState() {
}


void UELSSWidgetHUD_AttentionPoint::Reset() {
}

void UELSSWidgetHUD_AttentionPoint::PlayOut() {
}

void UELSSWidgetHUD_AttentionPoint::PlayIn(int32 InAddValue, ESSAttentionReason InActType) {
}

bool UELSSWidgetHUD_AttentionPoint::IsEmpty() {
    return false;
}


FString UELSSWidgetHUD_AttentionPoint::GetPointText(int32 InAddValue) {
    return TEXT("");
}

FString UELSSWidgetHUD_AttentionPoint::GetActText(ESSAttentionReason InActType) {
    return TEXT("");
}

UELSSWidgetHUD_AttentionPoint::UELSSWidgetHUD_AttentionPoint() {
    this->PlayInAnim = NULL;
    this->PlayOutAnim = NULL;
    this->FontPoint = NULL;
    this->HorizonalBox = NULL;
    this->ShowAttentionPointTime = 0.00f;
    this->IsDoneStartPlayOutPoint = false;
}

