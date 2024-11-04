#include "ELCharacter_Native.h"
#include "ELBuildBody.h"
#include "ELCostume.h"
#include "CharacterBasicProfiles.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"


void AELCharacter_Native::UpdateUpperBodyBlend(TArray<FStUpperBodyBlendUpdateInfo>& InfoArray, const TArray<FStFEquipPassiveSkillData>& EquipArray, const FStPassiveSkillSrcParam& SrcParam, const float TickDeltaSeconds, const bool CanMotion, const float CoreHP, const float HeadHP, const float ArmHP, const float BodyHP, const float LegHP, const float Momentum, const bool SpecialState, const bool DiveSkill, const bool FenceSkill, const bool TopeconSkill, const bool ExplodingMatch, const bool CanNaviOperate, const bool RingInOutOperate, const bool EnviromentOperate, const bool TargetRing, const bool SelfRing, const bool DirectionReverse, int32& InLastUseUpperBodyBlendIndex, bool& Enable) const {
}

void AELCharacter_Native::UpdateTutorialHitReachCount() {
}


void AELCharacter_Native::UpdateReserveReversal_N(const int32 AtkPlayerIndex, const float DeltaTime) {
}




void AELCharacter_Native::UpdateBothAOnHit_N(const FStAOnDamage& AOnDamage, TArray<AELCharacter_Native*>& DefPlayer) {
}

void AELCharacter_Native::TutorialEndEvent() {
}

void AELCharacter_Native::TriggerPassiveSkill_N(const TArray<EPassiveSkillTriggerType>& Triggers, const AELCharacter_Native* FromPlayer, const float DeltaTime) {
}

void AELCharacter_Native::TickUpdateReserveReversal_N(const float DeltaTime) {
}




void AELCharacter_Native::TickUpdateLiftState_N(float DeltaTime) {
}

void AELCharacter_Native::TickUpdateInterpolateLocationandRotation_N(const float DeltaTime) {
}

void AELCharacter_Native::TickUpdateInterpolateCharaMeshLocation_N(const float DeltaTime) {
}

void AELCharacter_Native::TickUpdateinGameDuration_N(const float DeltaTime) {
}

void AELCharacter_Native::TickUpdateHipOffset_N(float DeltaTime) {
}

void AELCharacter_Native::TickUpdateAnimScaleZ_N(float DeltaTime) {
}



void AELCharacter_Native::TickHomingOn_N(const float DeltaTime) {
}



void AELCharacter_Native::Tick_UpdateUpperBodyBlend_N(const float DeltaTime) {
}












































void AELCharacter_Native::Tick_UpdateBodyHoming_N(const float DeltaTime) {
}













void AELCharacter_Native::Tick_ObserveTagRingInAuthority_N_Implementation() {
}




















void AELCharacter_Native::SpawnSyncMotionMontage(TEnumAsByte<ECollisionChannel> Channel, TArray<AELCharacter_Native*>& SyncCharArray, const FVector& SyncLocation, const FRotator& SyncRotation, const ESyncPosRotKind SyncPosKind, const ESyncPosRotKind SyncRotKind, float Interpolate, bool bIgnoreSweep, bool bNoSyncRotation, int32 Priority, bool useCharacterHeight) {
}

void AELCharacter_Native::SpawnCurseEmitter(UParticleSystem* CurseEmitter) {
}

void AELCharacter_Native::ShowSkeletalMeshMaterials_Implementation(USkeletalMeshComponent* Target, const TArray<FName>& TargetMaterialNames, const bool bShow) {
}

void AELCharacter_Native::SetWrestlerProfile(const FELWrestlerProfile& InWrestlerProfile) {
}

void AELCharacter_Native::SetWorkHipOffsetForCutscene(bool Flag) {
}


void AELCharacter_Native::SetupPreset(EBasicFunctionResult& Result, const FPersonParam& PersonParam, const FPresetParam& PresetParam, const FAttireParam ExtraParts, const bool bEntrance) {
}


bool AELCharacter_Native::SetupCurseSystemParam(bool NoCheckUnlock) {
    return false;
}

void AELCharacter_Native::SetupCharacter(EBasicFunctionResult& Result, const FWrestlerSetupParam& SetupParam, const FAttireParam ExtraParts, const bool bEntrance, const bool bSpecificEntrance) {
}

void AELCharacter_Native::SetupBarrierCollisionOverlapEventBind() {
}

void AELCharacter_Native::SetTouchLeaveRing(bool Flag) {
}

void AELCharacter_Native::SetSyncMotionAnyChar_N(TArray<AELCharacter_Native*>& SyncCharArray, ASyncMotionMontage*& NewSyncMotion) {
}

void AELCharacter_Native::SetScalarParameterForMID(const FName ParameterName, const float NewValue, const FName Specific) {
}

void AELCharacter_Native::SetPlayerBarrierCollisionSetting_N(bool NoCollision, bool Block, bool Overlap, bool IgnoreOverlapHand, bool IgnoreBlockHead, bool IgnoreWorld) {
}

void AELCharacter_Native::SetPinMontage(UAnimMontage* Montage) {
}

void AELCharacter_Native::SetOtherCharaHitInApron_N(bool Flag) {
}

void AELCharacter_Native::SetOldAIController(bool Flag) {
}

void AELCharacter_Native::SetLadderMiniGameForceSuccess(bool Flag) {
}

void AELCharacter_Native::SetIsThreadTickAsync(bool isThread) {
}

void AELCharacter_Native::SetHipOffsetForCutscene(FVector Offset) {
}



void AELCharacter_Native::SetEnableSyncBarrierCollision(bool Enabled) {
}

void AELCharacter_Native::SetEditAttireExParam(const FAttireExParam Param) {
}

void AELCharacter_Native::SetDeferredUpdateYaw(float Yaw, UAnimMontage* targetMontage) {
}

void AELCharacter_Native::SetDeferredUpdateDeltaLocation(const FVector& Delta, UAnimMontage* targetMontage) {
}

void AELCharacter_Native::SetDebugCurseParam_Apply(const FStDebugOverrideCurseParam& DebugCurseParam, bool bNoCheckDLC) {
}

void AELCharacter_Native::SetDeadReason(EELMatchResultType Type) {
}

void AELCharacter_Native::SetDamageReaction_CurrentMontage_N() {
}

void AELCharacter_Native::SetCurseSystemParam(FName RowName) {
}

void AELCharacter_Native::SetCollisionsEnabled(const TArray<UPrimitiveComponent*>& Targets, TEnumAsByte<ECollisionEnabled::Type> NewEnabled) {
}

void AELCharacter_Native::SetCharacterMesh_Implementation(USkeletalMesh* NewMesh, const TArray<FName>& InvisibleMaterialNames) {
}

void AELCharacter_Native::SetBodyMask_N(USkeletalMeshComponent* SkeletalMeshComponent, const TSet<FName>& MaskMaterialSlotNames, UMaterialInterface* MaskedMaterial) {
}

void AELCharacter_Native::SetBodyHoming_N(const EBodyHomingType Type, const float Angle, const float Range, const bool QuickStart, const bool OpponentTagPartner, const bool bBackHoming, const bool NearHoming) {
}

void AELCharacter_Native::SetBattleRoyaleRingInRun_N(bool bNewState) {
}

void AELCharacter_Native::SetAttackCollisionListScale_N(const float Scale) {
}

void AELCharacter_Native::SetAttackCollisionEnable_N(const int32 Type, const bool Enable) {
}


void AELCharacter_Native::S_StopUpperBodyBlendMotion_N_Implementation() {
}

void AELCharacter_Native::S_SetTick_N_Implementation(float LS_Forward, float LS_Right, float RS_Forward, float RS_Right, const FVector& InOut, float WalkSpeed, float Yaw) {
}

void AELCharacter_Native::S_PlayUpperBodyBlendMotion_N_Implementation(UAnimSequence* AnimSequence) {
}

void AELCharacter_Native::S_AddActorWorldRotation_N_Implementation(const FRotator& AddRotation, const bool bSweep, const bool bTeleport) {
}

void AELCharacter_Native::S_AddActorWorldOffset_N_Implementation(const FVector& AddLocation, const bool bSweep, const bool bTeleport) {
}




bool AELCharacter_Native::ResetForceSyncMovement_Implementation() {
    return false;
}

void AELCharacter_Native::ResetCostume() {
}


void AELCharacter_Native::RequestTutorial_N(FName TutorialName) {
}




void AELCharacter_Native::PlayMontageCore_N(UAnimMontage*& Montage, const FString& Section, float InTimeToStartMontageAt, bool bInitMovementMode, float DelayClearMoveIgnoreActors) {
}




void AELCharacter_Native::OnTakeControlBtn_N(AELCharacter_Native* AtkPlayer) {
}

bool AELCharacter_Native::OnSetupProfiles_Implementation(const FWrestlerSetupParam& SetupParam) {
    return false;
}

bool AELCharacter_Native::OnSetupPreset_Implementation(const FPersonParam& PersonParam, const FPresetParam& PresetParam, const FAttireParam& ExtraParts, const bool bEntrance) {
    return false;
}

bool AELCharacter_Native::OnSetupCharacter_Implementation(const FWrestlerSetupParam& SetupParam, const bool bEntrance, const bool bSpecificEntrance) {
    return false;
}

void AELCharacter_Native::OnReverseDirectionEvent_N(bool InReverse) {
}

void AELCharacter_Native::OnReversalEvent_N(bool Reversal, ESpecialMovesType SpecialMovesType) {
}


void AELCharacter_Native::OnRemoveGloveBuffEvent_N(float InDuration) {
}

void AELCharacter_Native::OnPlayPassiveSkillEffectEvent_N(const FStPassiveSkillData& PassiveSkillData) {
}

void AELCharacter_Native::OnPlayNormalTauntEvent_N(EStickinputDir InputDir) {
}

void AELCharacter_Native::OnPlayActionSkillEvent_N(int32 ActionSkillNo) {
}

void AELCharacter_Native::OnMeterValuePenaltyEvent_N(float PenaltyRate) {
}

void AELCharacter_Native::OnDamageHPEvent_N(AELCharacter_Native* AtkPlayer, float DamageHead, float DamageArm, float DamageBody, float DamageLeg) {
}

void AELCharacter_Native::OnCurseEvent_N(float InDuration) {
}



void AELCharacter_Native::OnChangedTrainingReversalKind(ETrainingReversalKind Kind) {
}

void AELCharacter_Native::OnChangedLastHitMovesSituationIndex(int32 MovesSituationIndex) {
}

void AELCharacter_Native::OnApplyAttireExToSkin_Implementation(USkeletalMeshComponent* SkeletalMesh, int32 MaterialIndex, FName MaterialSlotName, bool bApplyMaterial, UMaterialInterface* SourceMaterial, bool bApplyDarkSkinMode) {
}

void AELCharacter_Native::OnApplyAttireExToHair_Implementation(USkeletalMeshComponent* SkeletalMesh, int32 MaterialIndex, FName MaterialSlotName, bool bApplyHairColor, UTexture2D* HairColorTexture, bool bApplyDarkSkinMode) {
}

void AELCharacter_Native::OnApplyAttireExtoEye_Implementation(USkeletalMeshComponent* SkeletalMesh, int32 MaterialIndex, FName MaterialSlotName, bool bApplyMaterial, UMaterialInterface* SourceMaterial, FLinearColor EyeColor, float EyeEmissivePower) {
}

void AELCharacter_Native::OnApplyAttireExtoAttire_Implementation(EWrestlerID_N WrestlerID, USkeletalMeshComponent* SkeletalMesh, int32 MaterialIndex, FName MaterialSlotName, bool bApplyMaterial, UMaterialInterface* SourceMaterial, bool bApplyPatternTexture, UTexture2D* PatternTexture, bool bApplyDarkSkinMode) {
}

void AELCharacter_Native::OnApplyAttireEx_Implementation(EWrestlerID_N WrestlerID, bool bApplyToLeftEye, UMaterialInterface* LeftEyeMaterial, FLinearColor LeftEyeColor, float LeftEyeEmissivePower, bool bApplyToRightEye, UMaterialInterface* RightEyeMaterial, FLinearColor RightEyeColor, float RightEyeEmissivePower, bool bApplyToHair, UTexture2D* HairColorTexture, bool bApplyDarkSkinModeToHair, bool bApplyToSkin, UMaterialInterface* SkinMaterial, bool bApplyDarkSkinModeToSkin, bool bApplyToAttire, UMaterialInterface* AttireMaterial, bool bApplyPatternTextureToAttire, UTexture2D* AttirePatternTexture, bool bApplyDarkSkinModeToAttire, const TMap<uint8, bool>& PartsApplyList) {
}




void AELCharacter_Native::M_SetDeferredUpdateYawMainMontage_N_Implementation(float Yaw) {
}

void AELCharacter_Native::M_SetActorRotation_N_Implementation(const FRotator& NewRotation, const bool bTeleport, bool bCheckSync) {
}

void AELCharacter_Native::M_SetActorLocationAndRotation_N_Implementation(const FVector& NewLocation, const FRotator& NewRotation, const bool bSweep, const bool bTeleport, bool bCheckSync) {
}

void AELCharacter_Native::M_SetActorLocation_N_Implementation(const FVector& NewLocation, const bool bSweep, const bool bTeleport, bool bCheckSync) {
}

void AELCharacter_Native::LadderMatchMiniGameStartServer_Implementation(int32 StartProgress, UAnimMontage* GrabLoopMontage) {
}

void AELCharacter_Native::LadderMatchMiniGameStart(int32 StartProgress, UAnimMontage* GrabLoopMontage) {
}

void AELCharacter_Native::LadderMatchMiniGameSetProgress_Implementation(int32 Step, float Percent) {
}

void AELCharacter_Native::LadderMatchMiniGameOnProgressEvent_Implementation(int32 Step, bool Finish) {
}

void AELCharacter_Native::LadderMatchMiniGameOnFailedEvent_Implementation() {
}

void AELCharacter_Native::LadderMatchMiniGameCancelServer_Implementation() {
}

void AELCharacter_Native::LadderMatchMiniGameCancel() {
}

void AELCharacter_Native::LadderMatchMiniGameButtonPressY() {
}

void AELCharacter_Native::LadderMatchMiniGameButtonPressX() {
}

void AELCharacter_Native::LadderMatchMiniGameButtonPressB() {
}

void AELCharacter_Native::LadderMatchMiniGameButtonPressA() {
}

bool AELCharacter_Native::IsWalk_N() const {
    return false;
}

bool AELCharacter_Native::IsWakeUpTauntWakeUpMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsUseMouthMaskParts_N() const {
    return false;
}

bool AELCharacter_Native::IsTauntMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsTaunt_N() const {
    return false;
}

bool AELCharacter_Native::IsTagWakeupGroggyDamageReaction_N() const {
    return false;
}

bool AELCharacter_Native::IsTagWait_N() const {
    return false;
}

bool AELCharacter_Native::IsTagTouch_N() const {
    return false;
}

bool AELCharacter_Native::IsTableTopDown_N() const {
    return false;
}

bool AELCharacter_Native::IsSystemChar_N() const {
    return false;
}

bool AELCharacter_Native::IsSyncMainSlot_N() const {
    return false;
}

void AELCharacter_Native::IsSync_N(bool& bValue) const {
}

bool AELCharacter_Native::IsSubmission_N() const {
    return false;
}

bool AELCharacter_Native::IsStrongSetUpActionReach_N() const {
    return false;
}

bool AELCharacter_Native::IsStepMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsStartOfMatchMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsStandSituation_N() const {
    return false;
}

bool AELCharacter_Native::IsStandChainGrappleLoop_N() const {
    return false;
}

bool AELCharacter_Native::IsStandChainGrapple_N(bool& bFront) const {
    return false;
}

bool AELCharacter_Native::IsSpecialTaunt_N() const {
    return false;
}

bool AELCharacter_Native::IsSitDown_N() const {
    return false;
}

bool AELCharacter_Native::IsShowGuideHudPinfall_N() {
    return false;
}

bool AELCharacter_Native::IsRunState_N() const {
    return false;
}

bool AELCharacter_Native::IsRunOrRopeRebound_N() const {
    return false;
}

bool AELCharacter_Native::IsRunLoop_N(UAnimMontage*& Montage) const {
    return false;
}

bool AELCharacter_Native::IsRunEnd_N(UAnimMontage*& Montage) const {
    return false;
}

bool AELCharacter_Native::IsRun_N(const UAnimMontage* Montage) const {
    return false;
}

bool AELCharacter_Native::IsRopeRebound_N() const {
    return false;
}

ERopeGroggy AELCharacter_Native::IsRopeGroggy_N() const {
    return ERopeGroggy::None;
}

bool AELCharacter_Native::IsRopeChain_N() const {
    return false;
}

bool AELCharacter_Native::IsRopeBreak(const FBox& Rope) {
    return false;
}

bool AELCharacter_Native::IsRiseUp_N() const {
    return false;
}

bool AELCharacter_Native::IsRingToApronChain_N() const {
    return false;
}

bool AELCharacter_Native::IsRingToApron_N() const {
    return false;
}

bool AELCharacter_Native::IsRingSideToApron_N() const {
    return false;
}

bool AELCharacter_Native::IsRingOutOrRingToApron_N() const {
    return false;
}

bool AELCharacter_Native::IsRingOutCountMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsRingOutCountLoopMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsRingInOut_N() const {
    return false;
}

bool AELCharacter_Native::IsRingInOrApronToRing_N() const {
    return false;
}

bool AELCharacter_Native::IsReverseDirectionInput_N() const {
    return false;
}

bool AELCharacter_Native::IsRequestRollOut_N() const {
    return false;
}

bool AELCharacter_Native::IsReplayState_N() const {
    return false;
}

bool AELCharacter_Native::IsReferee_N() const {
    return false;
}

bool AELCharacter_Native::IsRecuperabilityMotion_N() const {
    return false;
}


void AELCharacter_Native::IsPlayingMiniGame_N(bool& Out_IsPlaying) const {
}

bool AELCharacter_Native::IsPlayingLadderMiniGame() const {
    return false;
}

bool AELCharacter_Native::IsPlaceRing_N() const {
    return false;
}


bool AELCharacter_Native::IsPinchMoveReach_N() const {
    return false;
}

bool AELCharacter_Native::IsPin() const {
    return false;
}

void AELCharacter_Native::IsOverTheTopRopeHangRopePlayDamageSituation_N(bool& bEnable, bool& bCorner) const {
}

bool AELCharacter_Native::IsOverTheTopRopeHangRopeLoopMotion_N(const UAnimMontage* Montage) const {
    return false;
}

bool AELCharacter_Native::IsOutOfSyncMovement_Implementation() const {
    return false;
}

bool AELCharacter_Native::IsObstructionMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsNavigationMontage_N(UAnimMontage*& Montage) const {
    return false;
}

bool AELCharacter_Native::IsNavigation_N() const {
    return false;
}

bool AELCharacter_Native::IsNaviDirStartAndLoop_N() const {
    return false;
}

bool AELCharacter_Native::IsNaviDirEnd_N() const {
    return false;
}

bool AELCharacter_Native::IsMomentumMeterRemoveStop_N() const {
    return false;
}

bool AELCharacter_Native::IsManagerInterferedMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsManager_N() const {
    return false;
}

void AELCharacter_Native::IsMainMontage_N(UAnimMontage* Montage, bool& bValue) const {
}

bool AELCharacter_Native::IsLongDownMotion_N(UAnimMontage*& Montage) const {
    return false;
}

bool AELCharacter_Native::IsLastRiseUpAttack_N() const {
    return false;
}

bool AELCharacter_Native::IsLastChainWrestlingPositionChange_N() const {
    return false;
}

bool AELCharacter_Native::IsLastChainWrestlingDefence_N() const {
    return false;
}

bool AELCharacter_Native::IsLastChainWrestlingAttack_N() const {
    return false;
}

bool AELCharacter_Native::IsLadderTopLoopMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsLadderMiniGameForceSuccess() const {
    return false;
}

bool AELCharacter_Native::IsLadderMidTiltDamageReaction_N() const {
    return false;
}

bool AELCharacter_Native::IsLadderMidTilt_N() const {
    return false;
}

bool AELCharacter_Native::IsLadderMidEndure_N() const {
    return false;
}

bool AELCharacter_Native::IsLadderClimbStartMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsKneekingLoopMotion_N() const {
    return false;
}

void AELCharacter_Native::IsKickCatchLoopMotion_N(bool& bAttacker, bool& bDefencer) const {
}

bool AELCharacter_Native::IsIWThrow_N() const {
    return false;
}

bool AELCharacter_Native::IsIrishWhipRunStateOverTheTopRope_N(bool bCheckOnlyMontage) const {
    return false;
}

bool AELCharacter_Native::IsIrishWhipRunState_N(bool bCheckOnlyMontage) const {
    return false;
}


bool AELCharacter_Native::IsIdleMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsHitAOnInLimitRange(AELCharacter_Native* Target) const {
    return false;
}

bool AELCharacter_Native::IsHideGuideHudCornerTurnOver_N() {
    return false;
}

bool AELCharacter_Native::IsHandsInPocketMotion_N() {
    return false;
}

bool AELCharacter_Native::IsGroggyMove_N() const {
    return false;
}

bool AELCharacter_Native::IsGroggyLoop_N() const {
    return false;
}

bool AELCharacter_Native::IsGroggy_N() const {
    return false;
}

bool AELCharacter_Native::IsGrappleGuardPose_N() const {
    return false;
}

bool AELCharacter_Native::IsFrontChainAll_N() const {
    return false;
}

bool AELCharacter_Native::IsFrontBackChainAllMontage_N(UAnimMontage* Montage) const {
    return false;
}

bool AELCharacter_Native::IsForceSyncMovement_Implementation() const {
    return false;
}

bool AELCharacter_Native::IsExplodingOvertheTopRopeMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsEnvGroggy_N() const {
    return false;
}

bool AELCharacter_Native::IsEnableWeightDetection_N(EBodyWeightType& AtkBodyWeightType, EBodyWeightType& DefBodyWeightType) {
    return false;
}

bool AELCharacter_Native::IsEnableUpperBodyBlend_N() const {
    return false;
}

bool AELCharacter_Native::IsEnableTutorialTrainingMode(FName TutorialName) const {
    return false;
}



bool AELCharacter_Native::IsEnableTutorial() const {
    return false;
}

bool AELCharacter_Native::IsEnableSyncBarrierCollision() const {
    return false;
}

bool AELCharacter_Native::IsEnableSpawnCursePerformer_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_TraningMode_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_TornadoTag_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_TagMove_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_Submission_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_StrikeFight_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_SoloBattleRoyale_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_RingOnly_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_RingEscape_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_Pin_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_OvertheTopRope_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_ManualTarget_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_LightsOut_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_Ladder_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_KnockOut_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_Interval_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_Indicator_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_HostOnlyPinSub_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_HostDeadQuitMatch_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_GuideHUD_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_GroupBattleRoyale_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_Gauntlet_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_ExplodingBarbedWireDeathMatch_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_DQ_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_DoubleTeamMove_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_DispTargetLine_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_Combination_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_ChopBattle_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_ChainWrestring_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_BattleRoyale_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_AnywhereSubmission_N() {
    return false;
}

bool AELCharacter_Native::IsEnableRule_AnywherePin_N() {
    return false;
}


void AELCharacter_Native::IsEnablePassiveSkillSituation_N(const FStFEquipPassiveSkillData& EquipData, const FStPassiveSkillSrcParam& SrcParam, bool& Enable, bool& TimerEffect, float& TimerRemain) const {
}

bool AELCharacter_Native::IsEnableHitColGenerateOverlapEvent() {
    return false;
}

bool AELCharacter_Native::IsEnableHeightAdjust_N() const {
    return false;
}


bool AELCharacter_Native::IsEnableAOn_N() const {
    return false;
}

bool AELCharacter_Native::IsEnableActionSkill_N(EActionSkillType Type) const {
    return false;
}

bool AELCharacter_Native::IsEcistGuardBreakSkill_Impl(const FRandomStream& RandStream) {
    return false;
}

bool AELCharacter_Native::IsDQCautionMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsDownPainReactionMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsDownMontage_N() const {
    return false;
}

bool AELCharacter_Native::IsDownJumpOver_N() const {
    return false;
}

bool AELCharacter_Native::IsDownFaceUp_N() const {
    return false;
}

bool AELCharacter_Native::IsDownFaceDown_N() const {
    return false;
}

bool AELCharacter_Native::IsDown_N() const {
    return false;
}

bool AELCharacter_Native::IsDivingSyncDamage_N() const {
    return false;
}

bool AELCharacter_Native::IsDivingSyncAttack_N() const {
    return false;
}

bool AELCharacter_Native::IsDivingInterceptionDamage_N() const {
    return false;
}

bool AELCharacter_Native::IsDivingInterception_N(UAnimMontage*& Montage) const {
    return false;
}

bool AELCharacter_Native::IsDiving_N() const {
    return false;
}

bool AELCharacter_Native::IsDead_N() const {
    return false;
}

bool AELCharacter_Native::IsDashRingOut_N() const {
    return false;
}

bool AELCharacter_Native::IsDamageReaction_N() const {
    return false;
}

bool AELCharacter_Native::IsCurseMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsCornerTopOrRiseMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsCornerTop_N() const {
    return false;
}

bool AELCharacter_Native::IsCornerSetupMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsCornerGroggyFront_N() const {
    return false;
}

bool AELCharacter_Native::IsCornerGroggyBack_N() const {
    return false;
}

bool AELCharacter_Native::IsCornerGroggy_N() const {
    return false;
}

bool AELCharacter_Native::IsCornerChain_N(bool& bFront) const {
    return false;
}


bool AELCharacter_Native::IsChainWrestlingLoop_N() const {
    return false;
}

void AELCharacter_Native::IsChainWrestling_N(bool& Out_Value) const {
}

bool AELCharacter_Native::IsChainState_N() const {
    return false;
}

bool AELCharacter_Native::IsChainGrappleTagPartnerAttackReaction_Attacker_N() const {
    return false;
}

void AELCharacter_Native::IsChainGrappleMove_N(bool bIncludeEndMotion, bool& bChainGrappleMove, bool& bFront, bool& bPush) {
}

bool AELCharacter_Native::IsChainGrappleCancelMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsChainCheckMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsBlockPose_N() const {
    return false;
}

bool AELCharacter_Native::IsBlockLoopPose_N() const {
    return false;
}

bool AELCharacter_Native::IsBigman_N() const {
    return false;
}

bool AELCharacter_Native::IsBeginStandChainGrapple_N() {
    return false;
}

bool AELCharacter_Native::IsBattleRoyaleRingInRun_N() const {
    return false;
}

bool AELCharacter_Native::IsBattleRoyaleEntrance_N() const {
    return false;
}

bool AELCharacter_Native::IsBarricadeClimbLoop_N() const {
    return false;
}

bool AELCharacter_Native::IsAutoSignatureFlow_N() const {
    return false;
}

bool AELCharacter_Native::IsAutoPinFlow_N() const {
    return false;
}

bool AELCharacter_Native::IsAutoFinisherFlow_N() const {
    return false;
}

bool AELCharacter_Native::IsAttachWeapon_N() const {
    return false;
}

bool AELCharacter_Native::IsApronWalk_N() const {
    return false;
}

bool AELCharacter_Native::IsApronToRingChain_N(bool& bFront) const {
    return false;
}

bool AELCharacter_Native::IsApronToRing_N() const {
    return false;
}


bool AELCharacter_Native::IsAnyApron_N() const {
    return false;
}

bool AELCharacter_Native::IsAllowAutoTrackingMotion_N() const {
    return false;
}

bool AELCharacter_Native::IsAIController_N() const {
    return false;
}

void AELCharacter_Native::InitAnimationParam_N(UAnimMontage*& Montage, bool bInitMovementMode, float DelayClearMoveIgnoreActors) {
}


FELWrestlerProfile AELCharacter_Native::GetWrestlerProfile() const {
    return FELWrestlerProfile{};
}

FELWrestlerNameProfileParam AELCharacter_Native::GetWrestlerNameProfileParam() const {
    return FELWrestlerNameProfileParam{};
}

FString AELCharacter_Native::GetWrestlerName(bool Capital) const {
    return TEXT("");
}



bool AELCharacter_Native::GetWorkHipOffsetForCutscene() const {
    return false;
}


bool AELCharacter_Native::GetTouchLeaveRing() const {
    return false;
}

AActor* AELCharacter_Native::GetTargetActor_N() const {
    return NULL;
}

UAnimMontage* AELCharacter_Native::GetSyncJAAnimNotifyMontage_N(const UAnimSequenceBase* AnimSequence) {
    return NULL;
}

TArray<AELCharacter_Native*> AELCharacter_Native::GetSyncCharArray() {
    return TArray<AELCharacter_Native*>();
}

AELCharacter_Native* AELCharacter_Native::GetSyncChar_N() {
    return NULL;
}

AELMiniGameBase* AELCharacter_Native::GetSubmissionMiniGame_N() const {
    return NULL;
}

void AELCharacter_Native::GetSocketTransform_N(const FName SocketName, const TEnumAsByte<ERelativeTransformSpace> TransformSpace, FTransform& Transform) const {
}



FTransform AELCharacter_Native::GetRootMotionTransform() const {
    return FTransform{};
}

bool AELCharacter_Native::GetRollOutDownState_N() const {
    return false;
}

USkeletalMeshComponent* AELCharacter_Native::GetRefereeClonedMesh_Implementation() const {
    return NULL;
}

AELCharacter_Native* AELCharacter_Native::GetReferee_N() const {
    return NULL;
}

int32 AELCharacter_Native::GetPlayerIndex_N(int32 ControllerId) const {
    return 0;
}

FLinearColor AELCharacter_Native::GetPlayerColor_N(int32 ControllerId, bool bAIController) const {
    return FLinearColor{};
}

AELMiniGameBase* AELCharacter_Native::GetPinMiniGame_N() const {
    return NULL;
}

FStPassiveSkillSrcParam AELCharacter_Native::GetPassiveSkillSrcParam_N() {
    return FStPassiveSkillSrcParam{};
}

void AELCharacter_Native::GetPassiveSkillMomentumAddRate_N(const TArray<EPassiveSkillTriggerType>& Triggers, float& AddRate) {
}

UELAnimInstance_PartIK* AELCharacter_Native::GetPartIK_N() {
    return NULL;
}

AActor* AELCharacter_Native::GetOverlappingActorTag_N(TSubclassOf<AActor> ClassFilter, FName Tag) const {
    return NULL;
}

void AELCharacter_Native::GetOtherTargetNearest_N(AELCharacter_Native*& NearrestTarget) {
}

bool AELCharacter_Native::GetOtherCharaHitInApron_N() const {
    return false;
}

AActor* AELCharacter_Native::GetOpponentManager_N() const {
    return NULL;
}

bool AELCharacter_Native::GetOldAIController() const {
    return false;
}

void AELCharacter_Native::GetNowApronToRingYaw_Impl(bool& OutFindYaw, float& OutYaw) const {
}

ACharacter* AELCharacter_Native::GetNeckHormingTargetPlayerCore_N() const {
    return NULL;
}

void AELCharacter_Native::GetNearestTagPartner_N(AELCharacter_Native*& NearrestPartner) {
}

void AELCharacter_Native::GetMoveWorldDirectionWithCamera_N(FVector& Forward, FVector& Right) const {
}

float AELCharacter_Native::GetMovedDistance() const {
    return 0.0f;
}

UAnimMontage* AELCharacter_Native::GetMotionEndAnimNotifyMontage_N(const UAnimSequenceBase* AnimSequence) {
    return NULL;
}


int32 AELCharacter_Native::GetMiniGameMashSpeed_N() const {
    return 0;
}

float AELCharacter_Native::GetMeshHeight_N() const {
    return 0.0f;
}

FStMatchRule AELCharacter_Native::GetMatchRule_N() {
    return FStMatchRule{};
}

FStLimbHP AELCharacter_Native::GetLimbHPPercent_N() const {
    return FStLimbHP{};
}

float AELCharacter_Native::GetHPPercent_N() const {
    return 0.0f;
}

int32 AELCharacter_Native::GetHPLevelImpl(const TArray<float>& PercentArray, const float HPPercent) const {
    return 0;
}

FVector AELCharacter_Native::GetHipOffsetForCutscene() {
    return FVector{};
}

int32 AELCharacter_Native::GetGameplayCharIndex_N() const {
    return 0;
}

FFootCtrlParam AELCharacter_Native::GetFootIKParam_N() {
    return FFootCtrlParam{};
}

FAttireExParam AELCharacter_Native::GetEditAttireExParam() const {
    return FAttireExParam{};
}

bool AELCharacter_Native::GetDebugOption_Idle_N() const {
    return false;
}

ECurseType AELCharacter_Native::GetDebugCurseParam_EffectProbability(FName Type) {
    return ECurseType::Nothing;
}

EELMatchResultType AELCharacter_Native::GetDeadReason() const {
    return EELMatchResultType::None;
}


int32 AELCharacter_Native::GetControllerID_N() const {
    return 0;
}

void AELCharacter_Native::GetColllidionSurfaceDirection_N(const UPrimitiveComponent* Collision, FRotator& Rotator) {
}



void AELCharacter_Native::GetBeforeInputMoveValue_N(FVector& Out_Move) const {
}

bool AELCharacter_Native::GetAOnDamageANS_N(EAttackCollision_N CollisionType, bool bForWeapon, FStAOnDamage& Damage) {
    return false;
}

void AELCharacter_Native::GetAnimationUpdateParam_N(const float& Delta, const float& SrcNaviValue, const float& SrcLookAtAlpha, const FVector& SrcLokAtLocation, const float& SrcUpperBlendWeight, float& DstNaviValue, FVector& DstHipOffset, FVector& DstLookAtLocation, float& DstLookAtAlpha, float& DstUpperBlendWeight) {
}

void AELCharacter_Native::GetAimingCenterForReferee_N(FVector& outCenter, bool& outEnableAim) {
}

int32 AELCharacter_Native::GetAIFightStyle_N() const {
    return 0;
}

int32 AELCharacter_Native::GetAIDifficulty_N() const {
    return 0;
}


float AELCharacter_Native::GeneratePercent(float Numerator, float Denominator, float Max, float Min) const {
    return 0.0f;
}

void AELCharacter_Native::FinishRopeIK_N(bool bBoth, bool bRightOnly, float BlendSec) {
}

void AELCharacter_Native::ExecuteOverlap(UPrimitiveComponent* InPrimitive) {
}

void AELCharacter_Native::ExcuteEndOverlapPlayerCapsule_N(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


void AELCharacter_Native::ExcuteBeginOverlapPlayerCapsule_N(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AELCharacter_Native::ExcuteBeginOverlapPlayerBarrier_N(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}























































void AELCharacter_Native::EndOverlap_HitCol_N(const AActor* OtherActor, const UPrimitiveComponent* OtherComp) {
}

void AELCharacter_Native::DisableAttackCollisionList_N() {
}

void AELCharacter_Native::DetachPartIK() {
}

void AELCharacter_Native::CheckUpperBodyBlendCondition_PassiveSkill_N(const FStUpperBodyBlendUpdateInfo& UpdateParam, const TArray<FStFEquipPassiveSkillData>& EquipArray, const FStPassiveSkillSrcParam& SrcParam, bool& Enable) const {
}

void AELCharacter_Native::CheckUpperBodyBlendCondition_HP_N(const FStUpperBodyBlendUpdateInfo& UpdateParam, const float& CoreHP, const float& HeadHP, const float& ArmHP, const float& BodyHP, const float& LegHP, const float& Momentum, const bool& SpecialState, bool& Enable) const {
}

void AELCharacter_Native::CheckTutorial_AddMomentumMeter() {
}

void AELCharacter_Native::CheckRinginOutCollisionOperate_N(bool& bOperate, bool& bRingIn, bool& bRIngOut, bool& QuickDistance, UPrimitiveComponent*& Collision, AELCharacter_Native*& HitOtherPlayer, const FVector& MovementInput, const bool bCheckInCollisionOtherApronChara, const float OverwriteOperateAngle) {
}

void AELCharacter_Native::CheckPassiveSkill_Under(const TArray<FStFEquipPassiveSkillData>& EquipArray, const FStPassiveSkillSrcParam& SrcParam, const int32& SkillNo, const float& Time, bool& Enable) const {
}

void AELCharacter_Native::CheckPassiveSkill_Over(const TArray<FStFEquipPassiveSkillData>& EquipArray, const FStPassiveSkillSrcParam& SrcParam, const int32& SkillNo, const float& Time, bool& Enable) const {
}

bool AELCharacter_Native::CheckOtherTargetDistance_N(const float CheckDistance) {
    return false;
}

void AELCharacter_Native::CheckMainMontage_N(const TArray<UAnimMontage*>& Montages, bool& bValue) const {
}

bool AELCharacter_Native::CheckMainMontage(const TArray<UAnimMontage*>& Montages) const {
    return false;
}

bool AELCharacter_Native::ChangeMesh_Implementation(const FELWrestlerMeshParam WrestlerMeshParam) {
    return false;
}

void AELCharacter_Native::CE_M_SetORMovement_N_Implementation(bool bValue) {
}

bool AELCharacter_Native::CanUpperBodyBlend_N() const {
    return false;
}

bool AELCharacter_Native::CanTutorialAllComplete_N() const {
    return false;
}

bool AELCharacter_Native::CanTopLadderOperate_N() const {
    return false;
}

bool AELCharacter_Native::CanRunStrikeOperate_N() const {
    return false;
}

bool AELCharacter_Native::CanRopeChainActionOperate_N() const {
    return false;
}

bool AELCharacter_Native::CanRise_N() {
    return false;
}

bool AELCharacter_Native::CanPlayApronSingleAvoid_N() const {
    return false;
}

bool AELCharacter_Native::CanOperateDownPinchMove_N() const {
    return false;
}

bool AELCharacter_Native::CanNaviOperate_N() {
    return false;
}

void AELCharacter_Native::CanEnvironmentActionOperate_N(const AELCharacter_Native* TargetPlayer, const bool bUseReserved, const bool bIgnoreApron, const bool bIgnoreBarricade, const bool CheckBarricadeConditionForceStandard, const bool bUseUserInputVector, const FVector UserInputVector, bool& Value, float& Direction, UPrimitiveComponent*& Collision) {
}

bool AELCharacter_Native::CanCornerChainActionOperate_N() const {
    return false;
}

bool AELCharacter_Native::CanChainStateActionOperate_N() const {
    return false;
}

bool AELCharacter_Native::CanChainGrappleActionOperate_N() const {
    return false;
}


bool AELCharacter_Native::CanApronChainActionOperate_N() const {
    return false;
}

bool AELCharacter_Native::CanAllOtherTargetDown_N() {
    return false;
}

void AELCharacter_Native::BindNativeCapsuleComponentOverlapEvent() {
}

void AELCharacter_Native::BindDynamicMaterial(USkeletalMeshComponent* SkeletalMeshComponent, UMaterialInterface* OverrideMaterial) {
}

void AELCharacter_Native::BeginOverlap_HitCol_N(const AActor* OtherActor, UPrimitiveComponent* OtherComp) {
}

void AELCharacter_Native::ApplyAttireExToSkin(USkeletalMeshComponent* SkeletalMesh, int32 MaterialIndex, FName MaterialSlotName, bool bApplyMaterial, UMaterialInterface* SourceMaterial, bool bApplyDarkSkinMode) {
}

void AELCharacter_Native::ApplyAttireExToHair(USkeletalMeshComponent* SkeletalMesh, int32 MaterialIndex, FName MaterialSlotName, bool bApplyHairColor, UTexture2D* HairColorTexture, bool bApplyDarkSkinMode) {
}

void AELCharacter_Native::ApplyAttireExtoEye(USkeletalMeshComponent* SkeletalMesh, int32 MaterialIndex, FName MaterialSlotName, bool bApplyMaterial, UMaterialInterface* SourceMaterial, FLinearColor EyeColor, float EyeEmissivePower) {
}

void AELCharacter_Native::ApplyAttireExtoAttire(EWrestlerID_N WrestlerID, USkeletalMeshComponent* SkeletalMesh, int32 MaterialIndex, FName MaterialSlotName, bool bApplyMaterial, UMaterialInterface* SourceMaterial, bool bApplyPatternTexture, UTexture2D* PatternTexture, bool bApplyDarkSkinMode) {
}

void AELCharacter_Native::ApplyAttireEx(EWrestlerID_N WrestlerID, bool bApplyToLeftEye, UMaterialInterface* LeftEyeMaterial, FLinearColor LeftEyeColor, float LeftEyeEmissivePower, bool bApplyToRightEye, UMaterialInterface* RightEyeMaterial, FLinearColor RightEyeColor, float RightEyeEmissivePower, bool bApplyToHair, UTexture2D* HairColorTexture, bool bApplyDarkSkinModeToHair, bool bApplyToSkin, UMaterialInterface* SkinMaterial, bool bApplyDarkSkinModeToSkin, bool bApplyToAttire, UMaterialInterface* AttireMaterial, bool bApplyPatternTextureToAttire, UTexture2D* AttirePatternTexture, bool bApplyDarkSkinModeToAttire, const TMap<uint8, bool>& PartsApplyList) {
}

void AELCharacter_Native::AimTarget_N() {
}

void AELCharacter_Native::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELCharacter_Native, AnimScaleZ);
    DOREPLIFETIME(AELCharacter_Native, TargetActor);
    DOREPLIFETIME(AELCharacter_Native, LastPlayUpperBodyBlendMontage);
    DOREPLIFETIME(AELCharacter_Native, bAIController_N);
    DOREPLIFETIME(AELCharacter_Native, DamageReactionMontage_N);
    DOREPLIFETIME(AELCharacter_Native, GrappleReachMontage_N);
    DOREPLIFETIME(AELCharacter_Native, StrongGrappleReachMontage_N);
    DOREPLIFETIME(AELCharacter_Native, DownMontage_N);
    DOREPLIFETIME(AELCharacter_Native, GroggyMontage_N);
    DOREPLIFETIME(AELCharacter_Native, GroggyMontageLoop_N);
    DOREPLIFETIME(AELCharacter_Native, SubmissionMontage_N);
    DOREPLIFETIME(AELCharacter_Native, TauntMontage_N);
    DOREPLIFETIME(AELCharacter_Native, SpecialTauntMontage_N);
    DOREPLIFETIME(AELCharacter_Native, SetUpActionReachMontage_N);
    DOREPLIFETIME(AELCharacter_Native, StrongSetUpActionReachMontage_N);
    DOREPLIFETIME(AELCharacter_Native, LastRiseUpAttackMontage_N);
    DOREPLIFETIME(AELCharacter_Native, LastChainWrestlingAttackMontage_N);
    DOREPLIFETIME(AELCharacter_Native, LastChainWrestlingDefenceMontage_N);
    DOREPLIFETIME(AELCharacter_Native, LastChainWrestlingPositionChangeMontage_N);
    DOREPLIFETIME(AELCharacter_Native, ReserveLandingWhipMontage_N);
    DOREPLIFETIME(AELCharacter_Native, LastDivingSyncAttackMontage_N);
    DOREPLIFETIME(AELCharacter_Native, LastDivingSyncDamageMontage_N);
    DOREPLIFETIME(AELCharacter_Native, LastRiseUpMontage_N);
    DOREPLIFETIME(AELCharacter_Native, AnimPoseType_N);
    DOREPLIFETIME(AELCharacter_Native, MovesDamageLv_N);
    DOREPLIFETIME(AELCharacter_Native, SpecialMovesType_N);
    DOREPLIFETIME(AELCharacter_Native, MovesDownValue_N);
    DOREPLIFETIME(AELCharacter_Native, MovesGroggyValue_N);
    DOREPLIFETIME(AELCharacter_Native, MovesHitEffectValue_N);
    DOREPLIFETIME(AELCharacter_Native, MovesValue_UniqueIndex_N);
    DOREPLIFETIME(AELCharacter_Native, MovesType_N);
    DOREPLIFETIME(AELCharacter_Native, MovesCategoryValue_N);
    DOREPLIFETIME(AELCharacter_Native, AttackKind_N);
    DOREPLIFETIME(AELCharacter_Native, MiniGameMashInputs_N);
    DOREPLIFETIME(AELCharacter_Native, HP_N);
    DOREPLIFETIME(AELCharacter_Native, LimbHP_N);
    DOREPLIFETIME(AELCharacter_Native, NavigationDirectionValue_N);
    DOREPLIFETIME(AELCharacter_Native, bAtkDirtyMoves_N);
    DOREPLIFETIME(AELCharacter_Native, WrestlerID_N);
    DOREPLIFETIME(AELCharacter_Native, PinMontage_N);
}

AELCharacter_Native::AELCharacter_Native() {
    this->SeesawSystem_N = NULL;
    this->AchievementObserver_N = NULL;
    this->ShockCounter_N = NULL;
    this->MainMontage_N = NULL;
    this->SyncMotion = NULL;
    this->HitCol_Top_OverlapCounter = 0;
    this->HipOffsetCurve = NULL;
    this->HipOffsetProgress = 0.00f;
    this->bWorkHipOffset = false;
    this->bSyncLiftState = false;
    this->bSyncFloatState = false;
    this->bSyncLiftedState = false;
    this->SyncOffState = false;
    this->WeightDetectionLiftSec = 0.00f;
    this->BackupPlayRate_WeightDetection = 0.00f;
    this->SyncLiftBodyWeightType = EBodyWeightType::Normal;
    this->SyncFloatBodyWeightType = EBodyWeightType::Normal;
    this->BodyWeightType = EBodyWeightType::Normal;
    this->MeshHeight_N = 0.00f;
    this->MeshScale = 1.00f;
    this->AnimScaleZ = 1.00f;
    this->bEnableWeightDetection = false;
    this->InGameDuration = 0.00f;
    this->PlaceRing = false;
    this->BeforeMoveForwardValue_N = 0.00f;
    this->BeforeMoveRightValue_N = 0.00f;
    this->BeforeLeftStickForwardValue = 0.00f;
    this->BeforeLeftStickRIghtValue = 0.00f;
    this->bEnableReserveEnvironmentThrowReach = false;
    this->ReserveEnvironmentThrowDirection = 0.00f;
    this->ReserveEnvironmentThrowCollision = NULL;
    this->InterpolateEnd = true;
    this->InterpolateSweep = false;
    this->InterpolateProgressTime = 0.00f;
    this->InterpolateTime = 0.00f;
    this->ChainWrestlingCount = 0;
    this->ReserveRapidPenaltyRemains.AddDefaulted(6);
    this->ReserveReversalResetTimes.AddDefaulted(6);
    this->ReserveReversals_N.AddDefaulted(6);
    this->TargetActor = NULL;
    this->BodyHomingType_N = EBodyHomingType::None;
    this->BodyHomingAngle = 0.00f;
    this->BodyHomingRange = 0.00f;
    this->BodyHomingInterpSpeed = 0.00f;
    this->BodyHomingQuickStartSec = 0.00f;
    this->BodyHomingQuickStart = false;
    this->BodyHormingOponentPartner = false;
    this->BodyHomingBackHoming = false;
    this->TeamNo = 0;
    this->UseDivingTakeoffActorYaw = false;
    this->UseDivingTakeoffActorYawBehind = false;
    this->DivingTakeoffHomingEndYaw = 0.00f;
    this->BodyHomingWorkingDuration = 0.00f;
    this->BodyHomingDoneStepCheck = false;
    this->bIsHorming = false;
    this->bDisableNeckHomingState_N = false;
    this->bDead = false;
    this->bDisableAnimScale = false;
    this->LastPlayUpperBodyBlendMontage = NULL;
    this->LastUseUpperBodyBlendIndex = 0;
    this->DamageDebuff_DirectionReverse = false;
    this->CharacterProfilesClass = UCharacterBasicProfiles::StaticClass();
    this->CharacterProfiles = NULL;
    this->bAIController_N = false;
    this->bSetupAI_N = false;
    this->AIDifficulty_N = 0;
    this->AIFightStyle_N = 0;
    this->bEnableAutoFinisherFlow_N = false;
    this->bEnableAutoSignatureFlow_N = false;
    this->bEnableCasualeModeAutoPinFlow_N = false;
    this->bDebugOption_Idle_N = false;
    this->TrainingModeAIType_N = ETrainingModeAIType::Stop;
    this->DonePinchMoveCount_N = 0;
    this->RequestTagWaitReturn_N = false;
    this->RequestRingEscape_N = false;
    this->RollOutDownState_N = false;
    this->DamageReactionMontage_N = NULL;
    this->GrappleReachMontage_N = NULL;
    this->StrongGrappleReachMontage_N = NULL;
    this->DownMontage_N = NULL;
    this->GroggyMontage_N = NULL;
    this->GroggyMontageLoop_N = NULL;
    this->SubmissionMontage_N = NULL;
    this->TauntMontage_N = NULL;
    this->SpecialTauntMontage_N = NULL;
    this->SetUpActionReachMontage_N = NULL;
    this->StrongSetUpActionReachMontage_N = NULL;
    this->LastRiseUpAttackMontage_N = NULL;
    this->LastChainWrestlingAttackMontage_N = NULL;
    this->LastChainWrestlingDefenceMontage_N = NULL;
    this->LastChainWrestlingPositionChangeMontage_N = NULL;
    this->ReserveLandingWhipMontage_N = NULL;
    this->LastDivingSyncAttackMontage_N = NULL;
    this->LastDivingSyncDamageMontage_N = NULL;
    this->LastRiseUpMontage_N = NULL;
    this->AnimPoseType_N = EAnimPoseType::Stand;
    this->MovesDamageLv_N = 0;
    this->SpecialMovesType_N = ESpecialMovesType::None;
    this->MovesDownValue_N = 0;
    this->MovesGroggyValue_N = 0;
    this->MovesHitEffectValue_N = 0;
    this->MovesValue_UniqueIndex_N = 0;
    this->MovesType_N = EMovesDataTableType_N::ChainStrike;
    this->MovesCategoryValue_N = 0;
    this->AttackKind_N = EReserveReversalType::None;
    this->GameSystemParam_PinchMoveMomentumPercent = 0.00f;
    this->RingActor_N = NULL;
    this->bAlreadyDonePlaceRing_N = false;
    this->OverlapRingType = ObjectTypeQuery1;
    this->OverlapRingFilter = NULL;
    this->bHideHud_N = false;
    this->HUDSlot_N = -1;
    this->bManager_N = false;
    this->PinMiniGame_N = NULL;
    this->SubmissionMiniGame_N = NULL;
    this->bReplayState_N = false;
    this->ControllerID_N = -1;
    this->bBattleRoyaleEntrance_N = false;
    this->bBattleRoyaleRingInRun_N = false;
    this->Rope_R = NULL;
    this->Rope_L = NULL;
    this->bBreakoutNavi_N = false;
    this->bBreakoutAttack_N = false;
    this->CheckTemporary_IsHandsInPocketMotion_Done_N = false;
    this->CheckTemporary_IsHandsInPocketMotion_Value_N = false;
    this->CheckTemporary_IsHandsInPocketMotion_Montage_N = NULL;
    this->bRunMoveStart_N = false;
    this->bReferee_N = false;
    this->bSystemChar_N = false;
    this->HP_N = 100.00f;
    this->bTagWait_N = false;
    this->TickDeltaSeconds_N = 0.00f;
    this->ReplayComponent_N = NULL;
    this->PoseSnapshotBlendRate_N = 0.00f;
    this->UsingWeapon_N = NULL;
    this->SpecialAttachWeapon_N = NULL;
    this->LastPlayStartOfMatchMotion_N = NULL;
    this->CallAOnNotify_N = false;
    this->bReserveHitStop_N = false;
    this->TouchLeaveRingDuration_N = 0.00f;
    this->TagMatchAutoPinBreakStep_N = ETagMatchAutoPinBreakStep_N::None;
    this->TagMatchAutoPinBreakDuration_N = 0.00f;
    this->bDirectionalThrowState_N = false;
    this->bDisableAutoTracking_N = false;
    this->AutoTrackingObserveDuration_N = 0.00f;
    this->AutoTrackingCheckThresholdAngle_N = 0.00f;
    this->AutoTrackingDoneDuration_N = 0.00f;
    this->KneelingLoopDuration_N = 0.00f;
    this->KickCatchThrowDuration_N = 0.00f;
    this->OverTheTopRopeHangRopeLoopDuration_N = 0.00f;
    this->PullUpCounter_N = 0;
    this->PullUpCounterSubRemain_N = 0.00f;
    this->SetupMotionForMePlayer_N = NULL;
    this->bIgnoreApronMove_N = false;
    this->bIsInputApronMove_N = false;
    this->ReserveManagerInterferedTarget_N = NULL;
    this->bCheckLandingWhip_N = false;
    this->SkillEffect_N = NULL;
    this->bDoneRopeDamageReaction_N = false;
    this->bDoneDownAttack_N = false;
    this->bEnvironmentGroggyOn_N = false;
    this->bRequestGauntletDeadPlayerDestroy_N = false;
    this->RequestReplayState_N = false;
    this->bNowHitStop_N = false;
    this->RemainRiseUpInvincible_N = 0.00f;
    this->BarbedWireTouchExplosionInterval_N = 0.00f;
    this->ActionSkillEscapeCoolTime_N = 0.00f;
    this->bBloodStainState_N = false;
    this->CheckTemporary_CanNaviOpe_Done_N = false;
    this->CheckTemporary_CanNaviOpe_Value_N = false;
    this->CheckTemporary_CanNaviOpe_Breakout_N = false;
    this->CheckTemporary_CanNaviOpe_MainMontage_N = NULL;
    this->StickNeutralAfterTaunt_N = false;
    this->TauntActiveSec_N = 0.00f;
    this->TopRopeGroggy_N = NULL;
    this->MiddleRopeGroggy_N = NULL;
    this->WhipState_N = EWhipState::None;
    this->BarricadeClimbLoop_N = NULL;
    this->ReserveCriticalHitStop_N = false;
    this->ReserveHitStopWeapon_N = false;
    this->ReserveHitStopStartDelay_N = 0.00f;
    this->SkillEffectSec_N = 0.00f;
    this->ManagerInterfered_Front = NULL;
    this->ManagerInterfered_Back = NULL;
    this->bRequestRunStopFlag_N = false;
    this->bBarbedWireBoardHitNowFrame_N = false;
    this->SignatureHitCount_N = 0;
    this->UseEntranceReplaceModel = false;
    this->bIrishWhipRun_N = false;
    this->TagDamage_N = 0.00f;
    this->TagRecoverValue_N = 0.00f;
    this->bUnlockStrongGrapple_N = false;
    this->UnlockStrongGrapplePercent_N = 0.00f;
    this->PassiveKipUpRemainSecond_N = 0.00f;
    this->DamageLv_N = 0;
    this->DamageLvDownSec_N = 0.00f;
    this->ActiveReversalBuffSec_N = 0.00f;
    this->DamageCountForForceDown_N = 0;
    this->bUseLocalMatchRule_N = false;
    this->bRule_ExplodingBarbedWireDeathMatch_N = false;
    this->bRule_ForbiddenOutside_N = false;
    this->bRule_CasinoBattleRoyale_N = false;
    this->bRule_DQ_N = false;
    this->Rule_RingOutCount_N = 0;
    this->DefaultParam_HP = 0.00f;
    this->WeightDetectionChangeAnimSpeedSec = 0.00f;
    this->WeightDetectionChangeAnimSpeedMultiple = 0.00f;
    this->TagDamageHormingAttackPlayer_N = NULL;
    this->LastCheckSyncJA_Anim = NULL;
    this->LastCheckSyncJA_Montage = NULL;
    this->LastCheckMotionEnd_Anim = NULL;
    this->LastCheckMotionEnd_Montage = NULL;
    this->bUseRefereeModel_N = false;
    this->bReserveAutoPositionChangeToFinisher_N = false;
    this->ChainGrappleMoveEnvPushDuration_N = 0.00f;
    this->bNotAim_N = false;
    this->bUpdateAimRotation_N = false;
    this->NavigationDirectionValue_N = 0.00f;
    this->ChainGrappleReversalRemainSecond_N = 0.00f;
    this->ChainGrappleProgressTime_N = 0.00f;
    this->ChainWrestlingProgressTime_N = 0.00f;
    this->LastDownDragTargetPlayer_N = NULL;
    this->bCheckDownDragContinuousInput_N = false;
    this->DownDragDuration_N = 0.00f;
    this->LastJumpOverPlayerForMe_N = NULL;
    this->FirstRingOutActor_N = NULL;
    this->bDebug_RingOutCountStop_N = false;
    this->RingOutPlayerCount_N = 0;
    this->bAllRingOut_N = false;
    this->bOutOfSyncMovement = false;
    this->bForceSyncMovement = false;
    this->bNotExcuteBarrierCollisionOverlapEvent_N = false;
    this->bBarrierCollisionIgnoreWorld_N = false;
    this->bReserveScalingHeadBarrierBlockCollisionDelayedSyncOff_N = false;
    this->ReserveScalingHeadBarrierBlockCollisionDelayedSyncOffTargetPlayer_N = NULL;
    this->ReserveScalingHeadBarrierBlockCollisionDelayedSyncOffTargetMontage_N = NULL;
    this->HeadBarrierCollisionScalingRemain = 0.00f;
    this->bUseWeaponHitCol = false;
    this->WeaponHitCol_N = NULL;
    this->RunProgressTime_N = 0.00f;
    this->RunSameLocationDuration_N = 0.00f;
    this->WalkHitOtherCharaPrograssTime_N = 0.00f;
    this->bIsContinuousPressStrikeReversal_N = false;
    this->bIsContinuousPressGrappleGuard_N = false;
    this->LadderGrabObjectDuration_N = 0.00f;
    this->DivingTakeoffFlag_N = false;
    this->PendingDivingHit_N = false;
    this->AllowExcuteObserveInjuryReaction_N = false;
    this->ThumbtacksOverlapDownDuration_N = 0.00f;
    this->ApronMoveStateTimeCount_N = 0.00f;
    this->PreZVelocity_N = 0.00f;
    this->CharaMeshInterpolateTime_N = 0.00f;
    this->CharaMeshInterpolateProgressTime_N = 0.00f;
    this->bCharaMeshInterpolateEnd_N = true;
    this->bClimbNearSteelStepBarricade = false;
    this->bEnableCheckOverlapTable = false;
    this->bPreEnableCheckOverlapTable = false;
    this->CloseTableTime_N = 0.00f;
    this->bPreEnableTagWaitRingInAuthority_N = false;
    this->bDisableDivingHoming = false;
    this->EnableSyncBarrierCollision = false;
    this->CurseType = ECurseType::Nothing;
    this->BarricadeCheck_TargetBarricade = NULL;
    this->DefaultGravityScale_N = 1.00f;
    this->DefaultWalkableFloorAngle_N = 0.00f;
    this->bAtkDirtyMoves_N = false;
    this->bEnablePushAOn_N = false;
    this->bEnableOutsiderAOn_N = false;
    this->UseRingEscapeCount_N = 0;
    this->bIsRunByRunnningCounterSetup_N = false;
    this->bIsPlayCurseAction_N = false;
    this->bIsCurseActor_N = false;
    this->bPickupCursePerformer_N = false;
    this->CurseTauntTrrigetCount_N = 0;
    this->bReserveResetMeshLocation_N = false;
    this->RequestReplaySec_N = 0.00f;
    this->bReserveVanishWeaponNextMotion_N = false;
    this->bReserveDettachWeaponNextMotion_N = false;
    this->LastPlayMontage_N = NULL;
    this->bUseAfterExplosionDamageWalk_N = false;
    this->MontagePlayRate_Navi_N = 1.00f;
    this->MontagePlayRate_Anim_N = 1.00f;
    this->SpeedMultiplyer_N = 1.00f;
    this->WrestlerSkillMoveSpeedRate_N = 1.00f;
    this->bSaveDefaultPoseSnapshot_N = false;
    this->bForceAutoTracking = false;
    this->bUseCutscene_N = false;
    this->WrestlerID_N = EWrestlerID_N::None;
    this->bIsAlreadyLotteryGuardBreakSkill_N = false;
    this->bIsSuccessGuardBreakSkill_N = false;
    this->RingToApronMontage_N = NULL;
    this->AOnHitAngleLimit_N = -1.00f;
    this->bBattleRoyaleAfterAI_N = false;
    this->bIsWinScene_N = false;
    this->bSkipResetMeshLocation = false;
    this->DQReactionObserveDuration_N = 0.00f;
    this->LastDQReactionPlayer_N = NULL;
    this->LastWeaponReactionPlayer_N = NULL;
    this->ClonedRefereeMeshComp = NULL;
    this->RefereeMeshMode = ERefereeMeshMode::Default;
    this->RefereeOpacityStateTimeCount = 0.00f;
    this->AnimInstance_PartIK = NULL;
    this->TutorialInputEvent = NULL;
    this->DeferredUpdateTransformTargetMontage = NULL;
    this->AllowBarrierCollisionOverlapExcuteComponent = NULL;
    this->PinMontage_N = NULL;
    this->BuildBody = CreateDefaultSubobject<UELBuildBody>(TEXT("BuildBody"));
    this->CustomCostumeClass = UELCostume::StaticClass();
    this->CustomCostume = CreateDefaultSubobject<UELCostume>(TEXT("CustomCostume"));
    this->CurseTauntSystemTable = NULL;
    this->IsThreadTickAsync = true;
    this->BarrierCollisionOverlapWarpThreshold_Self = 0.00f;
    this->BarrierCollisionOverlapWarpThreshold_Other = 0.00f;
    this->BarrierCollisionOverlapMoveInterpolateTime = 0.05f;
    this->BarrierCollisionOverlapMoveInterpolateTime_World = 0.30f;
    this->BarrierCollisionResponseSyncCharaChannel = ECC_Pawn;
    this->HeadBarrierCollisionDefaultRadius = 10.00f;
    this->HeadBarrierCollisionBigRadius = 40.00f;
    this->HeadBarrierCollisionScalingTime = 0.50f;
    this->SyncBarrierCollisionInterpolateTime = 0.30f;
}

