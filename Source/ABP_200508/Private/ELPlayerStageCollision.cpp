#include "ELPlayerStageCollision.h"

void UELPlayerStageCollision::ResetAlreadyInterpolateFlag() {
}

void UELPlayerStageCollision::MoveCapsule(AActor* Actor, const FVector& Location, const FTransform& Transform, FHitResult& HitResult, bool bSweep) {
}

bool UELPlayerStageCollision::IsTargetMovesStageCollisionValue_Implementation() {
    return false;
}

bool UELPlayerStageCollision::IsMyMovesStageCollisionValue_Implementation() {
    return false;
}

bool UELPlayerStageCollision::IsCompletedInterpolation() {
    return false;
}

bool UELPlayerStageCollision::IsAlreadyHit_Implementation(const FName& Tag) {
    return false;
}

UELPlayerStageCollision::UELPlayerStageCollision() {
    this->Player_Native = NULL;
    this->Enable = false;
    this->OldEnableState = false;
}

