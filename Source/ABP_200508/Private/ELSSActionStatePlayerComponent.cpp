#include "ELSSActionStatePlayerComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool UELSSActionStatePlayerComponent::UpdateLanding() {
    return false;
}

void UELSSActionStatePlayerComponent::UpdateInterpolateIdealTransform(float DeltaSeconds) {
}

void UELSSActionStatePlayerComponent::UpdateDamageReactionParam(const FName& inReactionRowName, bool inBackDamage, bool inIsKo, bool inIsDead, ESSReactionParamCategory inReactionParamCategory) {
}

void UELSSActionStatePlayerComponent::StartInterpIdealTransform(float InDuration, bool inSweep) {
}

bool UELSSActionStatePlayerComponent::ShouldDisableAcceleration() {
    return false;
}

void UELSSActionStatePlayerComponent::SetupReplacedMontageParam() {
}

void UELSSActionStatePlayerComponent::SetMovementAdjust(uint32 inStateHash, const FELSSActionStateMovementAdjust& inMovementAdjust) {
}

void UELSSActionStatePlayerComponent::SetInterpIdealTransform(FTransform inIdealTransform) {
}

void UELSSActionStatePlayerComponent::SetDisableStateMulticast(bool flg) {
}

void UELSSActionStatePlayerComponent::SetDisablePendingTransit(bool flg) {
}

void UELSSActionStatePlayerComponent::SetDisableBlendOut(bool Disable) {
}

void UELSSActionStatePlayerComponent::SetDamageReactionParam(const FName& inRowName, const FSSDamageReactionParam& InParam, bool inBackDamage) {
}

void UELSSActionStatePlayerComponent::RestartIfReplaced() {
}

void UELSSActionStatePlayerComponent::RequestTransit(ESSActionTransitTrigger inTrigger) {
}

UAnimMontage* UELSSActionStatePlayerComponent::ReplaceReceiverMontageByMove(UAnimMontage* inMontage) {
    return NULL;
}

UAnimMontage* UELSSActionStatePlayerComponent::ReplaceMontageByPlayer(UAnimMontage* inMontage) {
    return NULL;
}

UAnimMontage* UELSSActionStatePlayerComponent::ReplaceMontageByPickup(UAnimMontage* inMontage) {
    return NULL;
}

UAnimMontage* UELSSActionStatePlayerComponent::ReplaceMontageByMove(UAnimMontage* inMontage) {
    return NULL;
}

UAnimMontage* UELSSActionStatePlayerComponent::ReplaceMontage(UAnimMontage* inMontage) {
    return NULL;
}

void UELSSActionStatePlayerComponent::PerformWallHitReaction(const FVector& inHitNormal, bool inWallOver, bool inHitSituation) {
}

void UELSSActionStatePlayerComponent::OnRep_BeginStateMulticastParam() {
}

void UELSSActionStatePlayerComponent::LandMultiCast_Implementation(uint32 inStateHash, uint32 inServerTransitId) {
}

bool UELSSActionStatePlayerComponent::IsWaitSituationState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsUseItemState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsRunJumpState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsReactionState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsPickupVisible() {
    return false;
}

bool UELSSActionStatePlayerComponent::IsNearlyIdleState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsLandState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsKoIdleState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsJumpState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsInteractState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsInAir() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsIdleState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsGuardState(bool inCheckGuardStop) const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsDrivingWheeledVehicleState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsDrivingState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsDrivingHorseVehicleState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsDownState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsCompleteUseItemState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsBackDamage() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsAttackState() const {
    return false;
}

bool UELSSActionStatePlayerComponent::IsActiveInterpIdeal() const {
    return false;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetWaitSituationState() const {
    return NULL;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetTauntState() const {
    return NULL;
}

float UELSSActionStatePlayerComponent::GetStateTimeCount() const {
    return 0.0f;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetRunJumpState() const {
    return NULL;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetRunJumpLandState() const {
    return NULL;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetReviveState() const {
    return NULL;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetReceiverState() const {
    return NULL;
}

int32 UELSSActionStatePlayerComponent::GetPlayableMove(ESSActionTransitTrigger Trigger, ESSMoveCommand& outMoveCommand) {
    return 0;
}

FELSSActionStateMovementAdjust UELSSActionStatePlayerComponent::GetMovementAdjust() const {
    return FELSSActionStateMovementAdjust{};
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetLandState() const {
    return NULL;
}

FName UELSSActionStatePlayerComponent::GetKoDamageReactionRowName() const {
    return NAME_None;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetJumpState() const {
    return NULL;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetIdleState() const {
    return NULL;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetGuardStopState() const {
    return NULL;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetGuardState() const {
    return NULL;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetDoubleJumpState() const {
    return NULL;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetDoubleJumpLandState() const {
    return NULL;
}

FName UELSSActionStatePlayerComponent::GetDefaultReactionRowName(ESSReactionParamCategory inReactionParamCategory) const {
    return NAME_None;
}

UCharacterMovementComponent* UELSSActionStatePlayerComponent::GetDefaultCharaMovement() const {
    return NULL;
}

FName UELSSActionStatePlayerComponent::GetDeadDamageReactionRowName() const {
    return NAME_None;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetDamageState() const {
    return NULL;
}

FName UELSSActionStatePlayerComponent::GetDamageReactionRowName() {
    return NAME_None;
}

FSSDamageReactionParam UELSSActionStatePlayerComponent::GetDamageReactionParam() {
    return FSSDamageReactionParam{};
}

UELSSActionStateBase* UELSSActionStatePlayerComponent::GetCurrentState() const {
    return NULL;
}

int32 UELSSActionStatePlayerComponent::GetCurrentMoveId() {
    return 0;
}

ESSMoveCommand UELSSActionStatePlayerComponent::GetCurrentMoveCommand() const {
    return ESSMoveCommand::None;
}

TSubclassOf<UELSSActionStateBase> UELSSActionStatePlayerComponent::GetAirDamageState() const {
    return NULL;
}

void UELSSActionStatePlayerComponent::FlushReservedTransit(float inTimeStamp) {
}

void UELSSActionStatePlayerComponent::FinishMovementAdjust() {
}

UELSSActionStateBase* UELSSActionStatePlayerComponent::FindStateByHash(uint32 StateHash) const {
    return NULL;
}

bool UELSSActionStatePlayerComponent::ExecuteTrigger(uint32 inRequestId, ESSActionTransitTrigger inTrigger, AActor* inTargetActor, bool inInputFlg, float inInputYaw, bool isReservedTrigger) {
    return false;
}

void UELSSActionStatePlayerComponent::ExecuteLand() {
}

bool UELSSActionStatePlayerComponent::CheckLocallyControlled() const {
    return false;
}

void UELSSActionStatePlayerComponent::ChangeReactionParamWallOver() {
}

void UELSSActionStatePlayerComponent::ChangeReactionParamWallHit() {
}

void UELSSActionStatePlayerComponent::ChangeReactionParamWaitSituation() {
}

void UELSSActionStatePlayerComponent::ChangeReactionParamSpecify(const FName& inReactionRowName) {
}

void UELSSActionStatePlayerComponent::BeginSyncReceiverState() {
}

void UELSSActionStatePlayerComponent::BeginStateOnTrigger(TSubclassOf<UELSSActionStateBase> inStateCls, int32 inMoveId, uint32 inRequestId, ESSMoveCommand inMoveCommand) {
}

void UELSSActionStatePlayerComponent::BeginStateMulticast_Implementation(const FSSStateTransitParam& transitParam) {
}

void UELSSActionStatePlayerComponent::BeginStateByClassNative(TSubclassOf<UELSSActionStateBase> inStateCls, int32 inMoveId, uint32 inRequestId, ESSMoveCommand inMoveCommand) {
}

void UELSSActionStatePlayerComponent::BeginStateByClass(TSubclassOf<UELSSActionStateBase> stateCls, bool keepMove) {
}

void UELSSActionStatePlayerComponent::BeginMoveByExternalParam(const FSSMoveParam& inMoveParam, const TArray<FSSAttackParam>& inAttackParams, ESSMoveCommand inMoveCommand) {
}

void UELSSActionStatePlayerComponent::BeginMove(int32 MoveId, uint32 RequestID, ESSMoveCommand moveCoomand) {
}

void UELSSActionStatePlayerComponent::BeginIdleState() {
}

void UELSSActionStatePlayerComponent::BeginDownState(ESSActionDownFaceUpType faceUpType) {
}

void UELSSActionStatePlayerComponent::BeginDamageStateForceKo() {
}

void UELSSActionStatePlayerComponent::BeginDamageStateForceDead() {
}

void UELSSActionStatePlayerComponent::BeginDamageState() {
}

void UELSSActionStatePlayerComponent::BeginBlowState() {
}

void UELSSActionStatePlayerComponent::BeginAirDamageState() {
}

void UELSSActionStatePlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UELSSActionStatePlayerComponent, ReplicatedBeginStateMulticastParam);
}

UELSSActionStatePlayerComponent::UELSSActionStatePlayerComponent() {
    this->DonePrepare = false;
    this->IdleState = NULL;
    this->JumpState = NULL;
    this->HighFlyJumpState = NULL;
    this->RunJumpState = NULL;
    this->HighFlyRunJumpState = NULL;
    this->DoubleJumpState = NULL;
    this->LandState = NULL;
    this->RunJumpLandState = NULL;
    this->DoubleJumpLandState = NULL;
    this->SyncReceiverState = NULL;
    this->DamageState = NULL;
    this->AirDamageState = NULL;
    this->BlowState = NULL;
    this->DownState = NULL;
    this->WallHitState = NULL;
    this->WallOverState = NULL;
    this->WaitSituationState = NULL;
    this->KoIdleState = NULL;
    this->InteractState = NULL;
    this->UseItemState = NULL;
    this->CompleteUseItemState = NULL;
    this->DrivingState = NULL;
    this->HorseState = NULL;
    this->GunAimState = NULL;
    this->ThrowWeaponAimState = NULL;
    this->PutTrapAimState = NULL;
    this->GuardState = NULL;
    this->GuardStopState = NULL;
    this->TauntState = NULL;
    this->ReviveState = NULL;
    this->LocalState = NULL;
    this->StateTimeCount = 0.00f;
    this->PrevInAir = false;
    this->LastLandStateHash = 0;
    this->LastLandServerTransitId = 0;
    this->LastRequestId = 0;
    this->LastServerTransitId = 0;
    this->LastExecutedServerTransitId = 0;
    this->ExecutedBeginStateMulticastParamTransitId = 0;
    this->bPendingExpired = false;
    this->PendingDamageReaction = false;
    this->DisableStateMulticast = true;
    this->DisablePendingTransit = false;
    this->DefaultMovementObj = NULL;
    this->MovementAdjustStateHash = 0;
    this->MovementAdjustPlayTime = 0.00f;
    this->DisableRepMoveDuration = 0.00f;
    this->StartedMove = 0;
    this->CurrentMove = 0;
    this->CurrentMoveCommand = ESSMoveCommand::None;
    this->DefaultIdleMontage = NULL;
    this->DefaultIdleMontageFemale = NULL;
    this->UseExternalParams = false;
    this->PrevUnmovable = false;
    this->WaitingSituationMoveTrigger = NULL;
    this->BackDamage = false;
    this->ActionSpeedRate = 1.00f;
}

