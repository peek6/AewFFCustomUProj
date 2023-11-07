#include "ELSSPlayer.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "ELSSActionStatePlayerComponent.h"
#include "ELSSAttackerComponent.h"
#include "ELSSDamageComponent.h"
#include "ELSSTargetComponent.h"
#include "Net/UnrealNetwork.h"

void AELSSPlayer::UseCurrentItem_Server_Implementation() {
}

bool AELSSPlayer::UseCurrentItem() {
    return false;
}

void AELSSPlayer::UseAbility_Server_Implementation(int32 inSlotIndex) {
}

void AELSSPlayer::UseAbility(int32 inSlotIndex) {
}

bool AELSSPlayer::UsableCurrentWeaponMove() {
    return false;
}

AActor* AELSSPlayer::UpdateTargetOnLocalAttack() {
    return NULL;
}

void AELSSPlayer::UpdateSlipFlag(float InDeltaTime) {
}

void AELSSPlayer::UpdateMoveCollisionSize() {
}

void AELSSPlayer::UpdateKoFinisherTarget() {
}

void AELSSPlayer::UpdateInventoryUI() {
}

void AELSSPlayer::UpdateInventoryPositionUI(int32 NewCurrentInventoryIndex) {
}

void AELSSPlayer::UpdateInventoryIconValueUI(AELSSPickupBase* Pickup) {
}

void AELSSPlayer::UpdateInteractUIIfInteract() {
}

void AELSSPlayer::UpdateInteractUI(AActor* inInteractTarget) {
}

void AELSSPlayer::UpdateInteractTarget() {
}

void AELSSPlayer::UpdateCurrentVehicleDurabilityUI(APawn* VehiclePawn) {
}

void AELSSPlayer::UpdateCurrentShieldDurabilityUI(AELSSShieldBase* shield) {
}

void AELSSPlayer::UpdateCarrotUI() {
}

void AELSSPlayer::UpdateAutonomousSyncRotate() {
}

void AELSSPlayer::TryKoFinisher_Server_Implementation(AELSSPlayer* Target) {
}

void AELSSPlayer::TryGetOnVehicle_Server_Implementation(APawn* VehiclePawn) {
}

void AELSSPlayer::TickVehiclePhysics(float inDeltaSeconds) {
}

void AELSSPlayer::TickUseItem(float DeltaSeconds) {
}

void AELSSPlayer::TickReviveArea(float DeltaSeconds) {
}

void AELSSPlayer::TickOperationGuideExecute(bool isForceUpdate) {
}

void AELSSPlayer::TickKoDamageCycle(float DeltaSeconds) {
}

void AELSSPlayer::TickKo(float DeltaSeconds) {
}

void AELSSPlayer::TickInteract(float inDeltaSeconds) {
}

void AELSSPlayer::TickHoldTime(float DeltaTime) {
}

void AELSSPlayer::TeleportToPlayerStartLocator_Implementation() {
}

void AELSSPlayer::SyncOffReceiver() {
}

void AELSSPlayer::SyncGunAimState_Server_Implementation(const FVector_NetQuantize& inActorLocation, const FVector_NetQuantize& inAimTargetLocation, float inGameplayTime) {
}

void AELSSPlayer::SwapShield(AELSSShieldBase* shield) {
}

void AELSSPlayer::Suicide_Implementation() {
}

void AELSSPlayer::SuccessKoFinisher_Multicast_Implementation(AELSSPlayer* Target) {
}

void AELSSPlayer::StickPickupToOtherActor(AELSSWeaponBase* inWeapon, int32 inRequiredStateId, AELSSPlayer* inTarget, const FName& inAttachParamRowName) {
}

AELSSWeaponThrowProjectile_Pushpin* AELSSPlayer::SteppingOnPushpin() const {
    return NULL;
}

void AELSSPlayer::StartSyncMotionForPreview(AELSSPlayer* inAttacker, AELSSPlayer* inReceiver, UAnimMontage* inReceiverMontage, const FVector& inSyncLocation, const FRotator& inSyncRotation) {
}

void AELSSPlayer::StartSyncMotion(UAnimMontage* inReceiverMontage) {
}

void AELSSPlayer::StartHold(ESSButtonHold holdButton) {
}

void AELSSPlayer::SpawnGunBullet_Server_Implementation(const FVector_NetQuantize& InLocation, const FRotator& InRotation, int32 inMoveId, int32 inStateHash) {
}

void AELSSPlayer::SetWalkSpeedScale(float Scale) {
}


void AELSSPlayer::SetupMoveCollisionSize() {
}

void AELSSPlayer::SetupInventory() {
}

void AELSSPlayer::SetThrowWeaponAimMode_Server_Implementation(bool inEnable) {
}

void AELSSPlayer::SetTarget(AActor* inTarget) {
}

void AELSSPlayer::SetSyncTarget(AELSSPlayer* inAttacker, AELSSPlayer* inReceiver) {
}

void AELSSPlayer::SetStickedWeapon(AELSSWeaponBase* inWeapon) {
}

void AELSSPlayer::SetStationalCameraInitialBaseTransform(const FTransform& inOwnerTransform, const FTransform& inReceiverTransform) {
}

void AELSSPlayer::SetStationalCameraBaseTransform(const FTransform& InTransform) {
}

void AELSSPlayer::SetStandbyKoFinisher(bool NewIsStandbyKoFinisher) {
}

void AELSSPlayer::SetReserveRequestDurationDefault() {
}

void AELSSPlayer::SetReserveRequestDuration(float Duration) {
}

void AELSSPlayer::SetPutTrapAimMode_Server_Implementation(bool inEnable) {
}

void AELSSPlayer::SetPickupedCarrot(AELSSPickupBase* newPickup, AELSSPickupBase* lastPickup) {
}

void AELSSPlayer::SetMoveCollisionHeightScale(float inHeightScale, float inRadiusScale) {
}

void AELSSPlayer::SetKoHP(int32 NewHP) {
}

void AELSSPlayer::SetInteractTarget(AActor* inNewInteractTarget) {
}

void AELSSPlayer::SetHP(int32 NewHP) {
}

void AELSSPlayer::SetHeatLevel(int32 inNewHeatLevel, bool isInitialize) {
}

void AELSSPlayer::SetGunAimMode_Server_Implementation(bool inEnable) {
}

void AELSSPlayer::SetForceDefaultMoveCollision(bool flg) {
}

void AELSSPlayer::SetFlag_Server_Implementation(ESSPlayerFlag Type, bool IsOn) {
}

void AELSSPlayer::SetFlag(ESSPlayerFlag Flag, bool IsOn) {
}

void AELSSPlayer::SetExternalStationalCamera(AELSSStationalCamera* inStationalCamera) {
}

void AELSSPlayer::SetEnableSyncMove(bool Enable) {
}

void AELSSPlayer::SetDownFaceUpType(ESSActionDownFaceUpType inFaceUpType) {
}

void AELSSPlayer::SetDisableStickAttach(bool inDisableStickAttach) {
}

void AELSSPlayer::SetDisableShieldVisible(bool inDisableShieldVisible) {
}

void AELSSPlayer::SetDebugFlag_Server_Implementation(ESSPlayerDebugFlag Type, bool IsOn) {
}

void AELSSPlayer::SetCurrentShield(AELSSShieldBase* newShield, AELSSShieldBase* lastShield) {
}

void AELSSPlayer::SetCurrentPickupHideFlagByActionState(bool isHide) {
}

void AELSSPlayer::SetCurrentPickup(AELSSPickupBase* newPickup, AELSSPickupBase* lastPickup) {
}

void AELSSPlayer::ServerUpdateSyncRotation_Implementation(float inYaw) {
}

AELSSSituationMoveTrigger* AELSSPlayer::SearchSituationMoveTrigger(const FVector& inHitLocation) const {
    return NULL;
}

void AELSSPlayer::Revive_Multicast_Implementation(float inHpRecoverRate) {
}

bool AELSSPlayer::Revive(float inRecoverHpRate) {
    return false;
}

void AELSSPlayer::ResponseSyncRotationMulticast_Implementation(float inYaw) {
}

void AELSSPlayer::ResetStationalCamera(float InDuration) {
}

void AELSSPlayer::ResetRestrictWaitSituationMove() {
}

void AELSSPlayer::ResetInteractStateLocalInfo() {
}

void AELSSPlayer::ResetDownStateValue() {
}

void AELSSPlayer::ReserveTransformOnNotifyCamera(const FTransform& inDistTrans) {
}

void AELSSPlayer::ReserveAddToInventory(AELSSPickupBase* Pickup) {
}

void AELSSPlayer::ReserveAddShield(AELSSShieldBase* shield) {
}

void AELSSPlayer::RequestKo_Multicast_Implementation() {
}

bool AELSSPlayer::RequestKo(float killingDamage, AController* killerController, ESSLogIconType LogIcon) {
    return false;
}

void AELSSPlayer::RequestDie_Multicast_Implementation() {
}

bool AELSSPlayer::RequestDie(float killingDamage, AController* killerController, ESSLogIconType LogIcon) {
    return false;
}

void AELSSPlayer::ReplaceMontageOnChangeCurrentPickup() {
}

void AELSSPlayer::RemoveStickedWeapon(AELSSWeaponBase* inWeapon) {
}

bool AELSSPlayer::RemovePickupFromInventory(AELSSPickupBase* Pickup, bool isResetCurrentIndex, bool ignoreCheckAuthority) {
    return false;
}

TArray<AELSSPickupBase*> AELSSPlayer::RemoveAllFromInventory() {
    return TArray<AELSSPickupBase*>();
}

void AELSSPlayer::ReleaseHold(ESSButtonHold holdButton) {
}

void AELSSPlayer::RefreshCurrentPickupVisibility() {
}

void AELSSPlayer::RecoveryShieldByItem(float RecoveryRate, int32 itemDatabaseId) {
}

void AELSSPlayer::RecoveryHpByItem(float RecoveryRate, int32 itemDatabaseId) {
}

void AELSSPlayer::PutTrap_Server_Implementation(const FVector_NetQuantize& InLocation, float inTargetYaw, int32 inMoveId, int32 inStateHash) {
}

void AELSSPlayer::ProgressActionCamera(ESSActionCameraID inActionCameraID, int32 inStep) {
}

void AELSSPlayer::PlayHitGroundSE(ESSHitGroundSE inHitGroundSE, UMeshComponent* inMeshComponent, bool inPlay2D) {
}


void AELSSPlayer::PlayDamageSE(ESSDamageSE inDamageSE, UMeshComponent* inMeshComponent, bool inPlay2D) {
}

void AELSSPlayer::PlayDamageImpact(const FSSAttackParam& inAttackParam, AELSSPlayer* attackPlayer, float atkHitTimeStamp) {
}

void AELSSPlayer::PlayCameraShake(ESSCameraShakeType InType, float inScale) {
}

void AELSSPlayer::Play3DSEAttached_ForString(const FString& CueName) {
}

void AELSSPlayer::PickupShield(AELSSShieldBase* shield) {
}

bool AELSSPlayer::PickupObject(AELSSPickupBase* Pickup) {
    return false;
}

bool AELSSPlayer::PickupCarrot(AELSSPickupBase* Pickup) {
    return false;
}

void AELSSPlayer::PerformDamage(const FSSAttackParam& inAttackParam, const FSSDamageResult& damageResult) {
}

void AELSSPlayer::OnTryKoFinisher() {
}


void AELSSPlayer::OnTickInteractState(float inDeltaSeconds) {
}

void AELSSPlayer::OnSuccessKoFinisher(AELSSPlayer* Target) {
}

void AELSSPlayer::OnSuccessInteractTreasureBox(AELSSItemBox* inOpenedItemBox) {
}

void AELSSPlayer::OnSuccessCauseDamage(AELSSPlayer* damagedPlayer) {
}

void AELSSPlayer::OnRep_VehicleStateParam() {
}

void AELSSPlayer::OnRep_UseItemBeginTimeRep() {
}

void AELSSPlayer::OnRep_PlayerFlags() {
}

void AELSSPlayer::OnRep_PlayerDebugFlags() {
}

void AELSSPlayer::OnRep_PickupedCarrot(AELSSPickupBase* lastPickup) {
}

void AELSSPlayer::OnRep_KoHP() {
}

void AELSSPlayer::OnRep_Inventory() {
}

void AELSSPlayer::OnRep_InteractHoldBeginTime() {
}

void AELSSPlayer::OnRep_HP() {
}

void AELSSPlayer::OnRep_ForceThinMode() {
}

void AELSSPlayer::OnRep_Exp() {
}

void AELSSPlayer::OnRep_CurrentShield(AELSSShieldBase* lastShield) {
}

void AELSSPlayer::OnRep_CurrentPickup(AELSSPickupBase* lastPickup) {
}

void AELSSPlayer::OnRep_CurrentInventoryIndex() {
}

void AELSSPlayer::OnRep_AbilityUsedTime3() {
}

void AELSSPlayer::OnRep_AbilityUsedTime2() {
}

void AELSSPlayer::OnRep_AbilityUsedTime1() {
}

void AELSSPlayer::OnPostDamaged_Implementation(const FSSDamageResult& damageResult) {
}

void AELSSPlayer::OnNotifyRunEnd() {
}

void AELSSPlayer::OnNotifyRunBegin() {
}

void AELSSPlayer::OnNotifyGravityScaleEnd() {
}

void AELSSPlayer::OnNotifyGravityScaleBegin(float inGravityScale) {
}

void AELSSPlayer::OnMomentOfKo() {
}

void AELSSPlayer::OnMomentOfDeath() {
}

void AELSSPlayer::OnKoDropPickups() {
}

void AELSSPlayer::OnHitKoFinisher() {
}

void AELSSPlayer::OnHeatLevelUp_Client_Implementation(int32 inNewLevel, int32 inNewHP) {
}

void AELSSPlayer::OnFailedKoFinisher(AELSSPlayer* Target) {
}

void AELSSPlayer::OnExitInteractArea(AActor* Other) {
}

void AELSSPlayer::OnEnterInteractArea(AActor* Other) {
}

void AELSSPlayer::OnEndInteractState() {
}

void AELSSPlayer::OnEndDownStandUp() {
}

void AELSSPlayer::OnEndAttack() {
}

void AELSSPlayer::OnDownDropPickups() {
}


void AELSSPlayer::OnDeathDropPickups() {
}

void AELSSPlayer::OnDeactivateAttack() {
}

void AELSSPlayer::OnCompletedDownStandUp() {
}


void AELSSPlayer::OnBeginWaitSituationMove() {
}

void AELSSPlayer::OnBeginJump(bool inDoubleJump) {
}

void AELSSPlayer::OnBeginInteractState() {
}

void AELSSPlayer::OnBeginAttack() {
}

void AELSSPlayer::OnAnimNotify_Camera(const UELSSAnimNotify_Camera* inAnimNotify, bool isWatching) {
}

void AELSSPlayer::NotifyRecoveredShield_Multicast_Implementation(int32 itemDatabaseId) {
}

void AELSSPlayer::NotifyRecoveredHp_Multicast_Implementation(int32 itemDatabaseId) {
}

void AELSSPlayer::NotifyAddExp_Client_Implementation(int32 itemDatabaseId) {
}

void AELSSPlayer::MoveCurrentInventory_Server_Implementation(bool isRightMove) {
}

void AELSSPlayer::MoveCurrentInventory(bool isRightMove) {
}

void AELSSPlayer::LostWeaponIfBrokeAll() {
}

void AELSSPlayer::LostWeaponIfBroke(AELSSWeaponBase* Weapon) {
}

void AELSSPlayer::LostShield() {
}

void AELSSPlayer::LostCurrentWeaponIfBroke() {
}

void AELSSPlayer::LostCurrentWeapon() {
}

void AELSSPlayer::LostCurrentItemIfUsed() {
}

void AELSSPlayer::LostCurrentItem() {
}

void AELSSPlayer::LaunchThrowWeaponProjectile_Server_Implementation(const FRotator& InRotation) {
}

bool AELSSPlayer::KoFinisher() {
    return false;
}

bool AELSSPlayer::IsTargetable() const {
    return false;
}

bool AELSSPlayer::IsRestrictWaitSituationMove() const {
    return false;
}

bool AELSSPlayer::IsPlayingSyncMotionAfterSyncOff() const {
    return false;
}

bool AELSSPlayer::IsPlayingSyncMotion() const {
    return false;
}

bool AELSSPlayer::IsPlayingSituationMove() const {
    return false;
}

bool AELSSPlayer::IsNearlyIdle() const {
    return false;
}

bool AELSSPlayer::IsLocallyPlayerControlled(bool isCheckAssociated) const {
    return false;
}

bool AELSSPlayer::IsKo() const {
    return false;
}

bool AELSSPlayer::IsGuard() const {
    return false;
}

bool AELSSPlayer::IsFullHP() const {
    return false;
}

bool AELSSPlayer::IsForceDown() const {
    return false;
}

bool AELSSPlayer::IsEnableSlip() const {
    return false;
}

bool AELSSPlayer::IsEnableSafeLanding() const {
    return false;
}

bool AELSSPlayer::IsDown() const {
    return false;
}

bool AELSSPlayer::IsDead() const {
    return false;
}

bool AELSSPlayer::IsAIPlayerForServer() const {
    return false;
}

int32 AELSSPlayer::HitResultToSurfaceType(const FHitResult& inHitResult) const {
    return 0;
}

bool AELSSPlayer::HasFlag(ESSPlayerFlag Flag) const {
    return false;
}

bool AELSSPlayer::HasDebugFlag(ESSPlayerDebugFlag Flag) const {
    return false;
}

bool AELSSPlayer::HasCarrot() const {
    return false;
}

bool AELSSPlayer::HasAnyWeaponInInventory(ESSWeaponType WeaponType) const {
    return false;
}

bool AELSSPlayer::HasAnyPickupInInventory() const {
    return false;
}

void AELSSPlayer::Guard(bool IsOn) {
}

ESSWrestlerType AELSSPlayer::GetWrestlerType() const {
    return ESSWrestlerType::None;
}

EWrestlerID_N AELSSPlayer::GetWrestlerID() const {
    return EWrestlerID_N::None;
}

AELSSPlayerController* AELSSPlayer::GetWatcherPlayerController() const {
    return NULL;
}

UELSSTargetComponent* AELSSPlayer::GetTargetComponent() const {
    return NULL;
}

AActor* AELSSPlayer::GetTargetActor() const {
    return NULL;
}



AELSSPlayer* AELSSPlayer::GetSyncTargetPlayer() const {
    return NULL;
}

float AELSSPlayer::GetStormReduceDamageRate() const {
    return 0.0f;
}

AActor* AELSSPlayer::GetStationalCameraLocatorOwner() {
    return NULL;
}

FVector AELSSPlayer::GetStationalCameraLocatorOffset() {
    return FVector{};
}

bool AELSSPlayer::GetStationalCameraDisable() {
    return false;
}

FTransform AELSSPlayer::GetStationalCameraBaseTransformReceiverInitial() {
    return FTransform{};
}

FTransform AELSSPlayer::GetStationalCameraBaseTransformOwnerInitial() {
    return FTransform{};
}

FTransform AELSSPlayer::GetStationalCameraBaseTransform() {
    return FTransform{};
}

FSSWrestlerSetupParam AELSSPlayer::GetSSWrestlerSetupParam() const {
    return FSSWrestlerSetupParam{};
}

AELSSPlayerController* AELSSPlayer::GetSSPlayerControllerForUIUpdate() const {
    return NULL;
}

float AELSSPlayer::GetSpeedRate() const {
    return 0.0f;
}

float AELSSPlayer::GetSlipGroundFriction() const {
    return 0.0f;
}

float AELSSPlayer::GetSlipBrakingFrictionFactor() const {
    return 0.0f;
}

float AELSSPlayer::GetSlipBrakingFriction() const {
    return 0.0f;
}

float AELSSPlayer::GetSlipBrakingDecelerationWalking() const {
    return 0.0f;
}

float AELSSPlayer::GetSeeThroughDistance() const {
    return 0.0f;
}

float AELSSPlayer::GetReduceDamageRate() const {
    return 0.0f;
}

int32 AELSSPlayer::GetRandomBadgeId() const {
    return 0;
}

void AELSSPlayer::GetOnVehicle_Multicast_Implementation(const FSSReplicatedVehicleStateParam& Param) {
}

void AELSSPlayer::GetOnVehicle(APawn* VehiclePawn) {
}

void AELSSPlayer::GetOffVehicle(APawn* VehiclePawn, bool damaged) {
}

int32 AELSSPlayer::GetMoveId(ESSMoveCommand inMoveCommand) {
    return 0;
}

int32 AELSSPlayer::GetMaxHP() const {
    return 0;
}

ESSInteractExecute AELSSPlayer::GetLastInteractExecute() const {
    return ESSInteractExecute::None;
}

int32 AELSSPlayer::GetKoMaxHP() const {
    return 0;
}

float AELSSPlayer::GetKoHPRatio() const {
    return 0.0f;
}

int32 AELSSPlayer::GetKoHP() const {
    return 0;
}

float AELSSPlayer::GetJumpPowerRate() const {
    return 0.0f;
}

float AELSSPlayer::GetItemVisibleDistance() const {
    return 0.0f;
}

bool AELSSPlayer::GetIsInReviveArea() const {
    return false;
}

AActor* AELSSPlayer::GetInvolveInstigator() const {
    return NULL;
}

float AELSSPlayer::GetInvolveDamageFeedback() const {
    return 0.0f;
}

float AELSSPlayer::GetInvolveDamage() const {
    return 0.0f;
}

AActor* AELSSPlayer::GetInventoryActorAt(int32 Index) const {
    return NULL;
}

AActor* AELSSPlayer::GetInteractTarget() const {
    return NULL;
}

FVector AELSSPlayer::GetHudHpGaugeOffset() const {
    return FVector{};
}

float AELSSPlayer::GetHPRatio() const {
    return 0.0f;
}

int32 AELSSPlayer::GetHP() const {
    return 0;
}

float AELSSPlayer::GetGuardReduceDamageRate() const {
    return 0.0f;
}

int32 AELSSPlayer::GetGuardLevel() const {
    return 0;
}

float AELSSPlayer::GetGravityScaleByNotify() const {
    return 0.0f;
}


AELSSStationalCamera* AELSSPlayer::GetExternalStationalCamera() const {
    return NULL;
}

float AELSSPlayer::GetExpRateToNext() const {
    return 0.0f;
}

float AELSSPlayer::GetEnemyVisibleDistance() const {
    return 0.0f;
}

UELSSCharacterMovementComponent* AELSSPlayer::GetELSSCharacterMovement() const {
    return NULL;
}

float AELSSPlayer::GetElapsedTime() const {
    return 0.0f;
}

FVector AELSSPlayer::GetDamageVector() const {
    return FVector{};
}

UELSSDamageComponent* AELSSPlayer::GetDamageComponent() const {
    return NULL;
}

AELSSWeaponBase* AELSSPlayer::GetCurrentWeapon() const {
    return NULL;
}

int32 AELSSPlayer::GetCurrentWallPhysicalSurfaceType(float inCheckYaw, bool inFlipIfBackDamage) const {
    return 0;
}

bool AELSSPlayer::GetCurrentWallHitResult(FHitResult& outHitResult, float inCheckYaw, bool inFlipIfBackDamage) const {
    return false;
}

APawn* AELSSPlayer::GetCurrentVehiclePawn() const {
    return NULL;
}

AELSSSituationMoveTrigger* AELSSPlayer::GetCurrentSituationMoveTrigger() const {
    return NULL;
}

float AELSSPlayer::GetCurrentShieldDurabilityRatio() const {
    return 0.0f;
}

AELSSShieldBase* AELSSPlayer::GetCurrentShield() const {
    return NULL;
}

AELSSPickupBase* AELSSPlayer::GetCurrentPickup() const {
    return NULL;
}

AELSSItemBase* AELSSPlayer::GetCurrentItem() const {
    return NULL;
}

int32 AELSSPlayer::GetCurrentFloorPhysicalSurfaceType(bool inUseLineTrace, bool inUseSoundLineTrace) const {
    return 0;
}

int32 AELSSPlayer::GetCostumeID() const {
    return 0;
}

USkeletalMeshComponent* AELSSPlayer::GetClonedMesh_Implementation() const {
    return NULL;
}

TArray<int32> AELSSPlayer::GetAvailableAbilitiyIndices() const {
    return TArray<int32>();
}

float AELSSPlayer::GetAutoHpRecoverRate() const {
    return 0.0f;
}

float AELSSPlayer::GetAttackPower(ESSMoveCommand inMoveCommand, ESSWeaponType inWeaponType) const {
    return 0.0f;
}

UELSSAttackerComponent* AELSSPlayer::GetAttackerComponent() const {
    return NULL;
}

AELSSPlayerState* AELSSPlayer::GetAssociatedSSPlayerState() const {
    return NULL;
}

AController* AELSSPlayer::GetAssociatedController() const {
    return NULL;
}

float AELSSPlayer::GetAirAttackMinHeight() {
    return 0.0f;
}


float AELSSPlayer::GetAddExpRate() const {
    return 0.0f;
}

FVector AELSSPlayer::GetActorCenterLocation() const {
    return FVector{};
}

FVector AELSSPlayer::GetActorCameraBasisLocation() const {
    return FVector{};
}

FVector AELSSPlayer::GetActorBottomLocation() const {
    return FVector{};
}

float AELSSPlayer::GetActionSpeedRate(ESSMoveCommand inCommand, ESSWeaponType inWeaponType) const {
    return 0.0f;
}

FVector AELSSPlayer::GetActionDesiredInputVec() const {
    return FVector{};
}

int32 AELSSPlayer::FindInventoryIndex(AELSSPickupBase* Pickup) const {
    return 0;
}

AActor* AELSSPlayer::FindFirstInventoryActor() const {
    return NULL;
}

int32 AELSSPlayer::FindEmptyInventoryIndex() const {
    return 0;
}

void AELSSPlayer::FailedUseItem_Client_Implementation() {
}

void AELSSPlayer::FailedUseAbility_Client_Implementation(int32 inSlotIndex) {
}

void AELSSPlayer::FailedPutTrapMove_Client_Implementation() {
}

void AELSSPlayer::FailedKoFinisher_Client_Implementation(AELSSPlayer* Target) {
}

void AELSSPlayer::ExecuteInteractEffect_Server_Implementation(AActor* inInteractTarget) {
}

void AELSSPlayer::ExecuteAbility_Multicast_Implementation(int32 inSlotIndex) {
}

void AELSSPlayer::EndVehicleCameraAndUI(AELSSPlayerController* InPlayerController) {
}

void AELSSPlayer::EndTickUseItem_Client_Implementation() {
}

void AELSSPlayer::EndSyncMotion() {
}

void AELSSPlayer::EndReviveArea() {
}

void AELSSPlayer::EndHoldInteract_Server_Implementation() {
}

void AELSSPlayer::EndHoldInteract_Client_Implementation() {
}

void AELSSPlayer::EndActionCamera(ESSActionCameraID inActionCameraID) {
}

AELSSShieldBase* AELSSPlayer::DropShield() {
    return NULL;
}

void AELSSPlayer::DropFromInventory() {
}

void AELSSPlayer::DropCurrentPickup_Server_Implementation() {
}

AELSSPickupBase* AELSSPlayer::DropCurrentPickup(bool ignoreCheckAuthority, bool isIgnoreCheckState) {
    return NULL;
}

AELSSPickupBase* AELSSPlayer::DropCarrot() {
    return NULL;
}

TArray<AELSSPickupBase*> AELSSPlayer::DropAllPickupsFromInventory() {
    return TArray<AELSSPickupBase*>();
}

void AELSSPlayer::DoInteract_Server_Implementation(AActor* inInteractTargetActor) {
}

bool AELSSPlayer::DoInteract() {
    return false;
}

void AELSSPlayer::DetachStunEffect() {
}

void AELSSPlayer::DetachReviveEffect() {
}

void AELSSPlayer::DetachFeverEffect() {
}

void AELSSPlayer::DetachEffectAllFromMesh() {
}

void AELSSPlayer::DebugUnlimitedUseItemAndWeapon_Server_Implementation(bool IsOn) {
}

void AELSSPlayer::DebugToggleGuardToTarget_Implementation() {
}

void AELSSPlayer::DebugTeleportToSelectPlayerStartLocator_Implementation(ESSPlayerStartLocatorType inLocatorType, ESSPlayerStartLocatorAreaId inAreaId, int32 inFilterID, const FString& inActorName) {
}

void AELSSPlayer::DebugSetNearKo_Implementation() {
}

void AELSSPlayer::DebugSetMoveIdOverride_Implementation(const FSSDebugMoveIdOverrideParam& inOverrideParam) {
}

void AELSSPlayer::DebugSetHP_Implementation(float Ratio) {
}

void AELSSPlayer::DebugSetHeatLevel_Multicast_Implementation(int32 inHeatLevel) {
}

void AELSSPlayer::DebugRotationThemAll_Implementation(float degree) {
}

void AELSSPlayer::DebugPlayerTeleport_Implementation(const FVector& Pos) {
}

void AELSSPlayer::DebugForceGuardToTarget_Implementation(float guardTime) {
}

void AELSSPlayer::DebugDispDamage_Implementation(const FVector& inHitLocation, ESSDamageReason inDamageReason, const FSSDamageResult& inDamageResult) {
}

void AELSSPlayer::DebugDispAttention_Implementation(ESSAttentionReason inAttentionReason, int32 inPointValue) {
}

void AELSSPlayer::DebugDestroyThemAll_Implementation(bool excludeMyself) {
}

void AELSSPlayer::DebugDelayKill_Implementation(float inTimer) {
}

void AELSSPlayer::DebugCall_UnreliableServerRPC_Implementation(int32 inSendId) {
}

void AELSSPlayer::DebugCall_UnreliableClientRPC_Implementation(int32 inSendId) {
}

void AELSSPlayer::DebugCall_ReliableServerRPC_Implementation(int32 inSendId) {
}

void AELSSPlayer::DebugCall_ReliableClientRPC_Implementation(int32 inSendId) {
}

void AELSSPlayer::DebugAssembleThemAll_Implementation() {
}

void AELSSPlayer::DeactivateBadStatus_Multicast_Implementation(ESSBadStatus InType, float inSyncTime) {
}

FWrestlerSetupParam AELSSPlayer::CreateWrestlerSetupParam(const FSSWrestlerSetupParam& inSSWrestlerSetupParam) const {
    return FWrestlerSetupParam{};
}

void AELSSPlayer::ConsumeCarrot() {
}

void AELSSPlayer::ClearReservedTransformOnNotifyCamera() {
}

void AELSSPlayer::ClearHold() {
}

void AELSSPlayer::ClearAttack() {
}

AELSSWeaponThrowProjectile_Pushpin* AELSSPlayer::CheckPushpinUnderfoot() const {
    return NULL;
}

bool AELSSPlayer::CheckInteractDegree(AActor* inInteractTarget) const {
    return false;
}

bool AELSSPlayer::CheckInSight(AActor* inCheckActor) const {
    return false;
}

bool AELSSPlayer::CheckHitCollision(UPrimitiveComponent* comp) {
    return false;
}

bool AELSSPlayer::CheckForSpecialCaseDoInteract() const {
    return false;
}

bool AELSSPlayer::CheckAttackedLocalPlayer() const {
    return false;
}

bool AELSSPlayer::CheckAlreadyHitKoFinisher() const {
    return false;
}

bool AELSSPlayer::CheckAllowCharacterControll(bool inForMove) const {
    return false;
}

bool AELSSPlayer::ChangeToPickupObject(AELSSPickupBase* Pickup) {
    return false;
}

bool AELSSPlayer::CanUseCurrentItem() const {
    return false;
}

bool AELSSPlayer::CanUseAbility(int32 inSlotIndex) const {
    return false;
}

bool AELSSPlayer::CanRevive() const {
    return false;
}

bool AELSSPlayer::CanPutTrap(bool inCheckLocation) {
    return false;
}

bool AELSSPlayer::CanPickupShield(const AELSSShieldBase* shield) const {
    return false;
}

bool AELSSPlayer::CanPickupObject(bool isStockToInventory, bool& out_reasonIsFullInventory) const {
    return false;
}

bool AELSSPlayer::CanKoFinisher(const AELSSPlayer* Target) const {
    return false;
}

bool AELSSPlayer::CanKo(float killingDamage) const {
    return false;
}

bool AELSSPlayer::CanInteract(AActor* inInteractTarget, bool ignoreActionState) const {
    return false;
}

bool AELSSPlayer::CanHitKoFinisher() const {
    return false;
}

bool AELSSPlayer::CanDropShield() const {
    return false;
}

bool AELSSPlayer::CanDropPickup(bool isIgnoreCheckState) const {
    return false;
}

bool AELSSPlayer::CanDie(float killingDamage) const {
    return false;
}

bool AELSSPlayer::CanControllInventory() const {
    return false;
}

void AELSSPlayer::CancelHold(ESSButtonHold holdButton) {
}

bool AELSSPlayer::CanBeEffectedFromReviveArea() const {
    return false;
}

bool AELSSPlayer::CanApplyCurrentInventory() const {
    return false;
}

bool AELSSPlayer::CanAddToInventory() const {
    return false;
}

int32 AELSSPlayer::CalcInventoryAvailableCount() const {
    return 0;
}

int32 AELSSPlayer::CalcHeatLevelFromExp(int32 inExp) {
    return 0;
}

int32 AELSSPlayer::CalcCurrentInventoryIndex(int32 origIndex, bool isRightMove) {
    return 0;
}

void AELSSPlayer::BeginVehicleCameraAndUI() {
}

void AELSSPlayer::BeginThrowWeaponMove_Server_Implementation(int32 inMoveId) {
}

void AELSSPlayer::BeginSyncRotate() {
}

void AELSSPlayer::BeginSyncMoveOnServer(AELSSPlayer* inReceiver, int32 inAttackerMoveId, const FVector& InLocation, float inYaw, bool inIsFinisher, AELSSSituationMoveTrigger* inTrigger) {
}

void AELSSPlayer::BeginSyncMoveMulticast_Implementation(AELSSPlayer* inAttacker, AELSSPlayer* inReceiver, int32 inAttackerMoveId, const FVector_NetQuantize& InLocation, float inYaw, bool inIsFinisher, AELSSSituationMoveTrigger* inTrigger) {
}

void AELSSPlayer::BeginSyncMoveForPreview(AELSSPlayer* inAttacker, AELSSPlayer* inReceiver, const FVector& InLocation, float inYaw, bool inIsFinisher, AELSSSituationMoveTrigger* inTrigger, const FSSMoveParam& inMoveParam, const TArray<FSSAttackParam>& inAttackParams) {
}

void AELSSPlayer::BeginReviveArea(float hpRecoverRateFromArea, float RecoveryKoHPCycle, float RecoveryKoHPRate) {
}

void AELSSPlayer::BeginPutTrapMove_Server_Implementation(int32 inMoveId) {
}

void AELSSPlayer::BeginGunFireMove_Server_Implementation(int32 inMoveId) {
}

void AELSSPlayer::BeginActionCamera(ESSActionCameraID inActionCameraID) {
}

void AELSSPlayer::AttachStunEffect() {
}

void AELSSPlayer::AttachReviveEffect() {
}

void AELSSPlayer::AttachFeverEffect() {
}

void AELSSPlayer::ApplyWatchTargetStatusToUI(AELSSPlayerController* inLocalPlayerController) {
}

void AELSSPlayer::ApplyStatusToUIFirst(AELSSPlayerController* inLocalPlayerController) {
}

void AELSSPlayer::ApplyCurrentInventoryIfUpdate() {
}

void AELSSPlayer::ApplyCurrentInventory() {
}

void AELSSPlayer::ApplyAdjustParam_Implementation() {
}

bool AELSSPlayer::AddPickupToInventoryAt(AELSSPickupBase* Pickup, int32 Index) {
    return false;
}

bool AELSSPlayer::AddPickupToInventory(AELSSPickupBase* Pickup) {
    return false;
}

int32 AELSSPlayer::AddKoHPByRate(float inRate) {
    return 0;
}

int32 AELSSPlayer::AddKoHP(float Value) {
    return 0;
}

void AELSSPlayer::AddIgnoreVehiclePhysics(UPrimitiveComponent* ignoreComponent, UPrimitiveComponent* overlapDetectionComponent) {
}

int32 AELSSPlayer::AddHPByRate(float inRate) {
    return 0;
}

int32 AELSSPlayer::AddHP(float Value) {
    return 0;
}

void AELSSPlayer::AddExpByItem(int32 inExp, int32 itemDatabaseId) {
}

void AELSSPlayer::AddExp(int32 inExp) {
}

void AELSSPlayer::AddAttentionPoint(ESSAttentionReason inReason, bool inUseOverrideAddPoint, int32 inOverrideAddPoint) {
}

void AELSSPlayer::ActivateBadStatus_Multicast_Implementation(ESSBadStatus InType, float InValue, int32 inMoveId, int32 inAttackHitId, float InDuration, AELSSPlayer* inInstigator, float inSyncTime) {
}

void AELSSPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSPlayer, ForceThinMode);
    DOREPLIFETIME(AELSSPlayer, SSPlayerProfileForInGame);
    DOREPLIFETIME(AELSSPlayer, WrestlerID);
    DOREPLIFETIME(AELSSPlayer, Exp);
    DOREPLIFETIME(AELSSPlayer, SSWrestlerSetupParam);
    DOREPLIFETIME(AELSSPlayer, UseDefaultUserSettings);
    DOREPLIFETIME(AELSSPlayer, HP);
    DOREPLIFETIME(AELSSPlayer, KoHP);
    DOREPLIFETIME(AELSSPlayer, AbilityUsedTime1_Rep);
    DOREPLIFETIME(AELSSPlayer, AbilityUsedTime2_Rep);
    DOREPLIFETIME(AELSSPlayer, AbilityUsedTime3_Rep);
    DOREPLIFETIME(AELSSPlayer, EquippedAbilityId_1);
    DOREPLIFETIME(AELSSPlayer, EquippedAbilityId_2);
    DOREPLIFETIME(AELSSPlayer, EquippedAbilityId_3);
    DOREPLIFETIME(AELSSPlayer, UseItemBeginTimeRep);
    DOREPLIFETIME(AELSSPlayer, CurrentShield);
    DOREPLIFETIME(AELSSPlayer, Inventory);
    DOREPLIFETIME(AELSSPlayer, currentInventoryIndex);
    DOREPLIFETIME(AELSSPlayer, CurrentPickup);
    DOREPLIFETIME(AELSSPlayer, ReplicatedVehicleStateParam);
    DOREPLIFETIME(AELSSPlayer, PickupedCarrot);
    DOREPLIFETIME(AELSSPlayer, InteractHoldBeginTimeRep);
    DOREPLIFETIME(AELSSPlayer, MoveSetSettings);
    DOREPLIFETIME(AELSSPlayer, equipSettings);
    DOREPLIFETIME(AELSSPlayer, ReplicatedSyncMotionPlayState);
    DOREPLIFETIME(AELSSPlayer, PlayerFlags);
    DOREPLIFETIME(AELSSPlayer, PlayerDebugFlags);
    DOREPLIFETIME(AELSSPlayer, DebugReceivedServerRPCReliable);
    DOREPLIFETIME(AELSSPlayer, DebugReceivedServerRPCUnreliable);
}

AELSSPlayer::AELSSPlayer() {
    this->LastFallReason = ESSFallReason::None;
    this->LandingFrameCount = 0;
    this->ForceThinMode = false;
    this->CostumeID = 0;
    this->WrestlerID = EWrestlerID_N::None;
    this->HeatLevel = 0;
    this->Exp = 0;
    this->DefaultMaxWalkSpeed = 0.00f;
    this->UseDefaultUserSettings = true;
    this->FootIKComp = NULL;
    this->HP = 0;
    this->maxHP = 0;
    this->KoHP = 0;
    this->KoMaxHP = 0;
    this->AttackPowerBase = 0;
    this->AbilityUsedTime1_Rep = -1.00f;
    this->AbilityUsedTime2_Rep = -1.00f;
    this->AbilityUsedTime3_Rep = -1.00f;
    this->EquippedAbilityId_1 = 0;
    this->EquippedAbilityId_2 = 0;
    this->EquippedAbilityId_3 = 0;
    this->AbilitySpeedupParticleEffectIntervalTime = 0.10f;
    this->SilhouetteActorManager = NULL;
    this->SilhouetteActorManagerClass = NULL;
    this->SilhouetteActor = NULL;
    this->ClonedMeshComp = NULL;
    this->MeshMode = ESSPlayerMeshMode::Default;
    this->HeatSkillValue_AttentionBoostAll = 0.00f;
    this->MaxLandingLevelWhenSafeLanding = 1;
    this->IsTickUsingItem = false;
    this->UseItemNeedTime = 0.00f;
    this->UseItemBeginTimeRep = -1.00f;
    this->UseItemBeginTimePrev = -1.00f;
    this->UseItemBeginTimeLocal = -1.00f;
    this->CurrentShield = NULL;
    this->ReserveAddShieldObject = NULL;
    this->LaunchLostShieldSpeed = 300.00f;
    this->LaunchLostShieldGravityScale = 0.80f;
    this->LaunchDropObjectSpeed = 300.00f;
    this->LaunchDropObjectGravityScale = 0.80f;
    this->LaunchDropObjectSpeedOnKo = 300.00f;
    this->LaunchDropObjectGravityScaleOnKo = 0.80f;
    this->AimOffsetInterpSpeed = 10.00f;
    this->GunAimTarget_LineTraceChannel = TraceTypeQuery1;
    this->GunFireMoveCommand = ESSMoveCommand::Punch1;
    this->ThrowWeaponMoveCommand = ESSMoveCommand::Punch1;
    this->ThrowPrediction = NULL;
    this->ThrowPredictionClass = NULL;
    this->ThrowPredictionSimFrequency = 25.00f;
    this->DirectionalThrow_PredictionSimFrequency = 30.00f;
    this->DirectionalThrow_BlowPowerScale = 1.30f;
    this->StickedWeapon = NULL;
    this->InventoryAvailableLocalCount = 0;
    this->currentInventoryIndex = 0;
    this->IsDirtyCurrentInventoryIndex = false;
    this->CurrentPickup = NULL;
    this->StatePlayer = CreateDefaultSubobject<UELSSActionStatePlayerComponent>(TEXT("StatePlayer"));
    this->IsRunning = false;
    this->GravityScaleByNotify = 1.00f;
    this->DownFaceUpType = ESSActionDownFaceUpType::FaceUp;
    this->UnderfootCheckTraceDistance = 10.00f;
    this->SlipBrakingFriction = 0.01f;
    this->SlipBrakingFrictionFactor = 1.00f;
    this->SlipBrakingDecelerationWalking = 256.00f;
    this->SlipGroundFriction = 0.01f;
    this->EnableSlipFlag = false;
    this->SlipSETriggerWaitTimeCount = 0.00f;
    this->DamageComponent = CreateDefaultSubobject<UELSSDamageComponent>(TEXT("DmgComp"));
    this->ReservedSuicideTimeByDisconnect = 0.10f;
    this->KoFinisherTarget = NULL;
    this->TargetInteractAttackType = ESSInteractExecute::None;
    this->AliveType = ESSAliveStateType::Default;
    this->IsAlreadyHitKoFinisher = false;
    this->isStandbyKoFinisher = false;
    this->KoFinisherSearchLength = 150.00f;
    this->KoFinisherSearchAngle = 60.00f;
    this->KoFinisherSearchZ = 50.00f;
    this->KoFinisherSearchTraceChannel = TraceTypeQuery1;
    this->KoStunEffect = NULL;
    this->KoStunLoopSEUniqueId = 0;
    this->IsKoTick = false;
    this->KoDamageCycleTimer = 0.00f;
    this->ReviveEffect = NULL;
    this->IsInReviveArea = false;
    this->ReviveTimer = 0.00f;
    this->ReviveHpRecoverRateFromArea = 0.00f;
    this->ReviveRecoveryKoHPCycle = 0.00f;
    this->ReviveRecoveryKoHPRate = 0.00f;
    this->DeadTimeCount = 0.00f;
    this->DisappearTimeCount = 0.00f;
    this->AttackerComponent = CreateDefaultSubobject<UELSSAttackerComponent>(TEXT("AtkComp"));
    this->CharaBaseSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CharaBase"));
    this->HitCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HitCollision"));
    this->PhysicsCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PhysicsCollision"));
    this->CurrentVehiclePawn = NULL;
    this->PickupedCarrot = NULL;
    this->InteractTarget = NULL;
    this->LastInteractExecute = ESSInteractExecute::None;
    this->InteractHoldBeginTimeRep = -1.00f;
    this->InteractHoldDuration = 0.00f;
    this->IsLockInteractTarget = false;
    this->InteractDegree = 90.00f;
    this->InteractSoundCue = NULL;
    this->FeverEffect = NULL;
    this->FeverLoopSEUniqueID = 0;
    this->FeverLoopSEIsPlaying = false;
    this->SyncAttacker = NULL;
    this->SyncReceiver = NULL;
    this->SyncInterpTime = 0.50f;
    this->CurrentSituationMoveTrigger = NULL;
    this->CurrentSyncReceiverFloorHeight = 0.00f;
    this->SyncReceiverFloorHeightAdjustRate = 0.85f;
    this->SyncReceiverFloorHeightAdjustInterpSpeed = 10.00f;
    this->SyncReceiverFloorHeightAdjustLowerMax = 100.00f;
    this->bBeginSync = false;
    this->StationalCameraDisable = false;
    this->StationalCameraLocatorOwner = NULL;
    this->SSSyncMotion = NULL;
    this->ActionAreaClass = NULL;
    this->ActionArea = NULL;
    this->ExternalStationalCamera = NULL;
    this->bDisableSyncMotionFloorCheck = false;
    this->ServerSyncRotationYaw = 0.00f;
    this->ClientDesiredSyncRotationYaw = 0.00f;
    this->MinSocketCollisionCheckDistance = 0.00f;
    this->SituationMoveTriggerTraceChannel = TraceTypeQuery1;
    this->DefaultMoveCollisionHalfHeight = 0.00f;
    this->DefaultMoveCollisionRadius = 0.00f;
    this->NotifiedMoveCollisionHeightScale = 0.00f;
    this->NotifiedMoveCollisionRadiusScale = 0.00f;
    this->ForceDefaultMoveCollision = false;
    this->ShrinkedHalfHeightDiff = 0.00f;
    this->TargetComponent = CreateDefaultSubobject<UELSSTargetComponent>(TEXT("TargetComp"));
    this->ActionDesiredInputFlg = 0.00f;
    this->ActionDesiredInputYaw = 0.00f;
    this->HitStopDuration = 0.00f;
    this->CameraNearCullingDistance = 50.00f;
    this->CameraCullingRate = 0.00f;
    this->CameraBasisLocationSocketName = TEXT("J_Head");
    this->CameraBasisLocationSocketRate = 0.25f;
    this->CameraBasisLocationInterpSpeed = 5.00f;
    this->CurrentFloorCheckMaxDistance = 150.00f;
    this->CurrentWallCheckMaxDistance = 100.00f;
    this->CurrentFloorCheck_SoundTraceChannel = TraceTypeQuery1;
    this->CurrentMapAreaId = 0;
    this->CurrentMiniMapId = 0;
    this->ChangeAreaCheckIntervalTime = 0.50f;
    this->CurrentCameraPlaceType = ESSCameraPlaceType::Default;
    this->PlayerFlags = 0;
    this->HudHpGaugeOffsetZ = 120.00f;
    this->HudHpGaugeOffsetZOnVehicle = 30.00f;
    this->Purpose = ESSPlayerPurpose::GamePlay;
    this->WalkSpeedScale = 0.50f;
    this->ForceNoCombineMovement = false;
    this->LastSavedMoveId = 0;
    this->TrampedTimeCount = 0.00f;
    this->TrampedDuration = 0.00f;
    this->RawOptimizeLevel = 0;
    this->OptimizeLevel = 0;
    this->NotRenderedFrameCount = 0;
    this->LatestOptimizeFrameCount = 0;
    this->bForceSimulatedTick = false;
    this->OptimizeTargetId = 0;
    this->CurrentSimulatedTickFrameCycle = 0;
    this->AccumulatedPendingSimulatedTickTime = 0.00f;
    this->bDisableLocalAttack = false;
    this->bDisableSimulateMove = false;
    this->bDisableMoveCollision = false;
    this->bDisableMoveSmoothing = false;
    this->bDisableSound = false;
    this->bDisableSlipTrace = false;
    this->bDisableSyncMotionCollision = false;
    this->bDisableSyncMotionFloorTrace = false;
    this->bForceSilhouette = false;
    this->bForceInvisible = false;
    this->Insignificance = 0.00f;
    this->CameraToActorDistanceSqr = 0.00f;
    this->PlayerDebugFlags = 0;
    this->DebugTickAutoInputPressInterval = 0.15f;
}

