#include "ELIngameHUDHPGaugeBase.h"

void UELIngameHUDHPGaugeBase::UpdateGaugeColor_Native(UImage* HUDGauge, UImage* HUDGaugeDiff, UImage* SpecialTex, UImage* RingtimeTex) {
}

void UELIngameHUDHPGaugeBase::UpdateDynamicParam_N() {
}



void UELIngameHUDHPGaugeBase::SetTargetCharacterNative(AELCharacter_Native* Character, float InStatusInAnimTime, float InStatusOutAnimTime, float InActionSkillAnimTime, float InDamagePartAnimTime, float InReversalAnimTime, float InMeterValuePenaltyAnimTime) {
}

void UELIngameHUDHPGaugeBase::SetNativeParam(UELGaugeRoster* CurrentHUDRoster, UELGaugeStatusIcon* StatusIcon, UELGaugeFire* GaugeFire, UCanvasPanel* GaugeMain, UCanvasPanel* GaugeDiff, UImage* HUDgaugeTex, UImage* HUDgaugeDiffTex, UImage* SpecialTex, UImage* RingtimeTex, UWidgetAnimation* ColorDefault, UWidgetAnimation* ColorGrayout, const FVector2D& GaugeMainDefaultSize, const FVector2D& GaugeDiffDefaultSize) {
}

void UELIngameHUDHPGaugeBase::OnReverseDirection(bool InReverse) {
}

void UELIngameHUDHPGaugeBase::OnReversal(bool Reversal, ESpecialMovesType SpecialMovesType) {
}

void UELIngameHUDHPGaugeBase::OnRemoveGloveBuff(float InDuration) {
}

void UELIngameHUDHPGaugeBase::OnPlayPassiveSkillEffect(const FStPassiveSkillData& PassiveSkillData) {
}











void UELIngameHUDHPGaugeBase::OnPlayActionSkill(int32 ActionSkillNo) {
}

void UELIngameHUDHPGaugeBase::OnMeterValuePenalty(float PenaltyRate) {
}




void UELIngameHUDHPGaugeBase::OnFinishedAnimation_StatusText() {
}

void UELIngameHUDHPGaugeBase::OnCurseEvent(float InDuration) {
}




void UELIngameHUDHPGaugeBase::OnChangedTouchLeaveRingFlag(bool Flag) {
}



void UELIngameHUDHPGaugeBase::OnAnimationFinishedEvent_SpecialStart() {
}

void UELIngameHUDHPGaugeBase::OnAnimationFinishedEvent_RingTime() {
}

void UELIngameHUDHPGaugeBase::OnAnimationFinishedEvent_GuageMaxStart() {
}

void UELIngameHUDHPGaugeBase::OnAnimationFinishedEvent_DangerStart() {
}

bool UELIngameHUDHPGaugeBase::IsSpecialState() const {
    return false;
}

bool UELIngameHUDHPGaugeBase::IsExciteState() const {
    return false;
}

bool UELIngameHUDHPGaugeBase::IsDangerState() const {
    return false;
}

UTexture2D* UELIngameHUDHPGaugeBase::GetGaugeTexture(bool NewIsExciteState, bool NewIsSpecialState, bool NewIsDangerState, bool IsKo) {
    return NULL;
}

void UELIngameHUDHPGaugeBase::GetGaugeMaterialParameter(float& MainParam, float& DiffParam, bool& IsPlus) {
}

UELIngameHUDHPGaugeBase::UELIngameHUDHPGaugeBase() {
    this->NormalGaugeTexture = NULL;
    this->MaxGaugeTexture = NULL;
    this->SpecialGaugeTexture = NULL;
    this->DangerGaugeTexture = NULL;
    this->KOGaugeTexture = NULL;
    this->OwnerPlayerIndex = -1;
    this->ParameterDataTable = NULL;
    this->GaugeAnimation_DelayTime = 0.00f;
    this->GaugeAnimation_AnimationSpeed = 1.00f;
    this->bUseTagActiveIcon_N = false;
    this->UseEliminateCount_N = false;
}

