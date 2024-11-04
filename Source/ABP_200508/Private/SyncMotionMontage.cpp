#include "SyncMotionMontage.h"

void ASyncMotionMontage::Setup(TArray<AELCharacter_Native*>& characters, const FVector& SyncLocation, const FRotator& SyncRotation, ESyncPosRotKind posSyncKind, ESyncPosRotKind rotSyncKind, float InterpolateTime, bool ignoreSweep, bool noSyncRotation, int32 Priority, bool useCharacterHeight) {
}

void ASyncMotionMontage::SetSyncOff() {
}

void ASyncMotionMontage::SetSkipCollisionResetForDestroy(int32 CharaIndex, bool bSkip) {
}

void ASyncMotionMontage::SetEnableUpdateTransform(int32 CharaIndex, bool bEnable) {
}

void ASyncMotionMontage::SetEnableSweepAfterSyncOff(int32 CharaIndex, bool bEnable) {
}

void ASyncMotionMontage::SetBasePointLocationAndRotation(const FVector& NewLocation, const FRotator& NewRotation) {
}

bool ASyncMotionMontage::IsUseCharacterHeight() const {
    return false;
}

bool ASyncMotionMontage::IsSyncOff() const {
    return false;
}

bool ASyncMotionMontage::IsNoSyncRotation() const {
    return false;
}

bool ASyncMotionMontage::IsEnableSweepAfterSyncOff(int32 CharaIndex) const {
    return false;
}

bool ASyncMotionMontage::IsEnableSweep() const {
    return false;
}

void ASyncMotionMontage::GetSyncChar(TArray<AELCharacter_Native*>& CharArray, AELCharacter_Native* IgnoreChar) {
}

int32 ASyncMotionMontage::GetSyncActorNum() const {
    return 0;
}

void ASyncMotionMontage::GetSyncActorIncludeSyncFinishedActor(TArray<AActor*>& SyncActors) {
}

void ASyncMotionMontage::GetSyncActor(TArray<ACharacter*>& SyncActors) {
}

int32 ASyncMotionMontage::GetPriority() const {
    return 0;
}

void ASyncMotionMontage::GetBasePointLocationAndRotation(FVector& Location, FRotator& Rotation) {
}

ASyncMotionMontage::ASyncMotionMontage() {
    this->DisableChannel = ECC_Pawn;
}

