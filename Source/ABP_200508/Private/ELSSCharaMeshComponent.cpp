#include "ELSSCharaMeshComponent.h"

UELSSCharaMeshComponent::UELSSCharaMeshComponent() {
    this->bUpdatingAnimation = false;
    this->bActiveInterpMove = false;
    this->InterpMoveTimeCount = 0.00f;
    this->InterpTargetSetTime = 0.00f;
    this->InterpTargetVelo = 0.00f;
    this->InterpMoving = false;
    this->InterpMoveMode = false;
    this->bDisableInterpMove = false;
    this->bInitializingInterpMove = false;
    this->bPerformCharacterMovement = false;
}

