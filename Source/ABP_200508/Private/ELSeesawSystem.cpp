#include "ELSeesawSystem.h"

void UELSeesawSystem::SetBuffType_N(ESeesawBuffType_N NewBuffType) {
}

ESeesawStateType_N UELSeesawSystem::GetStateType_N() const {
    return ESeesawStateType_N::Normal;
}

void UELSeesawSystem::GetRelationType_N(AELCharacter_Native* TargetChar, ESeesawRelationType_N& SelfType, ESeesawRelationType_N& TargetType) const {
}

ESeesawBuffType_N UELSeesawSystem::GetBuffType_N() const {
    return ESeesawBuffType_N::None;
}

float UELSeesawSystem::CalSeesawValue_N(ESeesawRelationType_N RelationType, bool bAddMode, float SrcValue) const {
    return 0.0f;
}

UELSeesawSystem::UELSeesawSystem() {
    this->StateType_N = ESeesawRelationType_N::Neutral;
    this->BuffType_N = ESeesawBuffType_N::None;
    this->BuffActiveSec_N = 0.00f;
    this->bPenaltyBuff_N = false;
}

