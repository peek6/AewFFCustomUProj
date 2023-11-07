#include "ELSSWidgetHUD_AttentionGauge.h"

void UELSSWidgetHUD_AttentionGauge::UpdateAttentionValue(float InDeltaTime) {
}

void UELSSWidgetHUD_AttentionGauge::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_AttentionGauge::SetVisibleFeverEffect(bool inIsVisible, bool InPlayStartSE, bool InPlayEndSE) {
}

void UELSSWidgetHUD_AttentionGauge::SetAttentionPointToStack(int32 InAddValue, ESSAttentionReason InActType) {
}

void UELSSWidgetHUD_AttentionGauge::ResetAttentionGauge() {
}

void UELSSWidgetHUD_AttentionGauge::OnStartFeverAnim(bool InPlaySound) {
}

void UELSSWidgetHUD_AttentionGauge::OnEndFeverAnim(bool InPlaySound) {
}

void UELSSWidgetHUD_AttentionGauge::MovePointArray() {
}


FString UELSSWidgetHUD_AttentionGauge::GetBoostText(float InAttentionBoostValue) {
    return TEXT("");
}

void UELSSWidgetHUD_AttentionGauge::GetAttentionPointFromStack() {
}

void UELSSWidgetHUD_AttentionGauge::ApplyMaxAttentionValue(int32 InMaxAttentionValue) {
}


void UELSSWidgetHUD_AttentionGauge::ApplyAttentionValue(int32 InAttentionValue, int32 InAddValue, ESSAttentionReason InActType, bool InGaugeTransition) {
}

void UELSSWidgetHUD_AttentionGauge::ApplyAttentionPts(int32 InAttentionValue) {
}

void UELSSWidgetHUD_AttentionGauge::ApplyAttentionBoostValue(float InAttentionBoostValue) {
}

UELSSWidgetHUD_AttentionGauge::UELSSWidgetHUD_AttentionGauge() {
    this->FeverEndAnim = NULL;
    this->FeverStartAnim = NULL;
    this->FeverLoopAnim = NULL;
    this->BuffInAnim = NULL;
    this->BuffOutAnim = NULL;
    this->PtsVerticalBox = NULL;
    this->IsCompleteDuration = true;
    this->IsFeverTime = false;
    this->IsBoostTextShow = false;
    this->AttentionElapsed = 0.00f;
    this->MaxAttentionValue = 0;
    this->AttentionDuration = 0;
    this->AttentionValue = 0;
    this->IdealAttentionValue = 0;
    this->StackIndex = 0;
    this->BaseDigits = 0;
}

