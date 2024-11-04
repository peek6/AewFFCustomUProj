#include "ELSSTargetComponent.h"
#include "Components/SphereComponent.h"

void UELSSTargetComponent::UpdateTargetOnAttack() {
}

AActor* UELSSTargetComponent::SearchTargetInteractAttack(const FVector& inDirection, float inMaxLength, float inAngleLimit, float inDiffZLimit) const {
    return NULL;
}

AActor* UELSSTargetComponent::SearchTargetFromDirection(const FVector& inDirection, bool inNewutral) const {
    return NULL;
}

void UELSSTargetComponent::OnEndOverlapTargetRange(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UELSSTargetComponent::OnBeginOverlapTargetRange(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AActor* UELSSTargetComponent::GetTargetActor() const {
    return NULL;
}

void UELSSTargetComponent::EndCameraHoming(bool inApplyRemainTime) {
}

void UELSSTargetComponent::BeginCameraHoming(const FSSCameraHomingParam& inHomingParam, float InDuration) {
}

UELSSTargetComponent::UELSSTargetComponent() {
    this->TargetRangeCollision = CreateDefaultSubobject<USphereComponent>(TEXT("TargetRangeCollision"));
    this->TargetVectorKeepTime = 0.00f;
    this->SearchTargetDistance = 500.00f;
    this->SearchTargetAngleNeutral = 360.00f;
    this->SearchTargetAngleDirectional = 180.00f;
    this->SearchTargetHeight = 200.00f;
    this->SearchTargetDistanceDifficultyScale = 0.50f;
    this->SearchTargetAngleDifficultyScale = 1.00f;
    this->SearchTargetPriorityDifficultyScale = 0.10f;
    this->TargetActor = NULL;
}

