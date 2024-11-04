#include "ELMomentumMeterBase.h"
#include "Net/UnrealNetwork.h"



void UELMomentumMeterBase::SetParam(float inHandsInPocketAddRate, float inHandsInPocketDuration) {
}



bool UELMomentumMeterBase::IsSpecialState_N() const {
    return false;
}

bool UELMomentumMeterBase::IsRemoveState_N() const {
    return false;
}

bool UELMomentumMeterBase::IsExciteState_N() const {
    return false;
}

bool UELMomentumMeterBase::IsDangerState_N() const {
    return false;
}

EEliteMeterStateType_N UELMomentumMeterBase::GetState_N() const {
    return EEliteMeterStateType_N::Neutral;
}

float UELMomentumMeterBase::GetRemoveSec_N() const {
    return 0.0f;
}

float UELMomentumMeterBase::GetMeterValue_N() const {
    return 0.0f;
}

float UELMomentumMeterBase::GetMeterRate_N() const {
    return 0.0f;
}

float UELMomentumMeterBase::GetMeterPercent_N() const {
    return 0.0f;
}



void UELMomentumMeterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UELMomentumMeterBase, MeterValue_N);
    DOREPLIFETIME(UELMomentumMeterBase, bExciteState);
    DOREPLIFETIME(UELMomentumMeterBase, bSpecialState);
    DOREPLIFETIME(UELMomentumMeterBase, bDangerState);
    DOREPLIFETIME(UELMomentumMeterBase, EliteMeterState_N);
    DOREPLIFETIME(UELMomentumMeterBase, UnlimitedState_N);
    DOREPLIFETIME(UELMomentumMeterBase, RemoveState_N);
}

UELMomentumMeterBase::UELMomentumMeterBase() {
    this->MeterValue_N = 0.00f;
    this->MeterDefaultValue_N = 0.00f;
    this->bExciteState = false;
    this->bSpecialState = false;
    this->bDangerState = false;
    this->EliteMeterState_N = EEliteMeterStateType_N::Neutral;
    this->UnlimitedState_N = false;
    this->RemoveState_N = false;
    this->RemoveSec_N = 0.00f;
    this->RemoveValue_N = 0.00f;
    this->RemoveEndPercent_N = 0.00f;
}

