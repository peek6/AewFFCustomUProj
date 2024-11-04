#include "ELNetCharacterMovementComponent.h"

void UELNetCharacterMovementComponent::SetNoReplication(bool flg) {
}

UELNetCharacterMovementComponent::UELNetCharacterMovementComponent() {
    this->ELNetCharacterOwner = NULL;
    this->NetworkDeltaTime = 0.00f;
    this->NetworkRootMotionPositionDiffThreshold = 0.10f;
    this->NetworkPositionDiffThreshold = 0.10f;
    this->NetworkPositionDiffAccelScale = 2.00f;
}

