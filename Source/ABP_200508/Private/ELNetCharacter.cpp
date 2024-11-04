#include "ELNetCharacter.h"
#include "Net/UnrealNetwork.h"

bool AELNetCharacter::SetELNetTemporaryAuthorityBP(bool bEnabled) {
    return false;
}

void AELNetCharacter::SetELNetModeBP(bool bEnabled) {
}

void AELNetCharacter::SetELNetAuthorityBP(bool bEnabled) {
}

bool AELNetCharacter::IsSyncMotionActive_Implementation() const {
    return false;
}

bool AELNetCharacter::IsInELNetModeBP() const {
    return false;
}

bool AELNetCharacter::IsDebugLogEnabled(int32 DebugLogLevel) const {
    return false;
}

bool AELNetCharacter::HasELNetExecAuthorityBP() const {
    return false;
}

bool AELNetCharacter::HasELNetAuthorityBP() const {
    return false;
}

int32 AELNetCharacter::GetSyncMotionPriority_Implementation() const {
    return 0;
}

int32 AELNetCharacter::GetSyncMotionIndex_Implementation() const {
    return 0;
}

FELNetworkGUID AELNetCharacter::GetNextReplicationGuid() {
    return FELNetworkGUID{};
}

FELNetworkGUID AELNetCharacter::GetNextGuid(const FELNetworkGUID BaseGuid) {
    return FELNetworkGUID{};
}

void AELNetCharacter::ELClientMoveOld_Implementation(float OldTimeStamp, FVector OldAccel, FVector OldVelocity, uint8 OldMoveFlags) {
}

void AELNetCharacter::ELClientMoveNoBase_Implementation(float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
}

void AELNetCharacter::ELClientMoveDualNoBase_Implementation(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
}

void AELNetCharacter::ELClientMoveDualHybridRootMotion_Implementation(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}

void AELNetCharacter::ELClientMoveDual_Implementation(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}

void AELNetCharacter::ELClientMove_Implementation(float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}

int32 AELNetCharacter::AddComponentsToReplication_Implementation(UELReplicationManager* ReplicationManager, const FELNetworkGUID BaseGuid) {
    return 0;
}

void AELNetCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELNetCharacter, RandomStream);
}

AELNetCharacter::AELNetCharacter() {
    this->GuidOffset = 0;
    this->ELNetRole = EELNetRole::ROLE_None;
}

