#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ELSSActionStateMovementAdjust.h"
#include "ESSActionDownFaceUpType.h"
#include "ESSActionTransitTrigger.h"
#include "ESSMoveCommand.h"
#include "ESSReactionParamCategory.h"
#include "SSAttackParam.h"
#include "SSDamageReactionParam.h"
#include "SSGuardReactionParam.h"
#include "SSInterpIdeal.h"
#include "SSMoveParam.h"
#include "SSStateTransitParam.h"
#include "Templates/SubclassOf.h"
#include "ELSSActionStatePlayerComponent.generated.h"

class AActor;
class AELSSSituationMoveTrigger;
class UAnimMontage;
class UCharacterMovementComponent;
class UELSSActionStateBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELSSActionStatePlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DonePrepare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UELSSActionStateBase>> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> IdleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> JumpState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> HighFlyJumpState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> RunJumpState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> HighFlyRunJumpState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> DoubleJumpState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> LandState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> RunJumpLandState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> DoubleJumpLandState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> SyncReceiverState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> DamageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> AirDamageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> BlowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> DownState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> WallHitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> WallOverState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> WaitSituationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> KoIdleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> InteractState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> UseItemState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> CompleteUseItemState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> DrivingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> HorseState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> GunAimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> ThrowWeaponAimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> PutTrapAimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> GuardState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> GuardStopState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> TauntState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> ReviveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UELSSActionStateBase*> StateInsts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSActionStateBase* LocalState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrevInAir;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastLandStateHash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastLandServerTransitId;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastRequestId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastServerTransitId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastExecutedServerTransitId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSStateTransitParam ReservedTransitParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BeginStateMulticastParam, meta=(AllowPrivateAccess=true))
    FSSStateTransitParam ReplicatedBeginStateMulticastParam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ExecutedBeginStateMulticastParamTransitId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSStateTransitParam> PendingTransits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PendingDamageReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableStateMulticast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisablePendingTransit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* DefaultMovementObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSActionStateMovementAdjust DefaultMovementAdjust;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MovementAdjustStateHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSActionStateMovementAdjust CurrentMovementAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementAdjustPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableRepMoveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartedMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMoveCommand CurrentMoveCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMoveParam CurrentMoveParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAttackParam> CurrentMoveAttackParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, UAnimMontage*> PlayerMontageReplaceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, UAnimMontage*> PickupMontageReplaceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DefaultIdleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DefaultIdleMontageFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseExternalParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrevUnmovable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSSituationMoveTrigger* WaitingSituationMoveTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultReactionRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultReactionRowNameBlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KoDamageReactionRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeadDamageReactionRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentDamageReactionRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDamageReactionParam DamageReactionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BackDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSInterpIdeal InterpIdeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSGuardReactionParam GuardReactionParam;
    
public:
    UELSSActionStatePlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool UpdateLanding();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInterpolateIdealTransform(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDamageReactionParam(const FName& inReactionRowName, bool inBackDamage, bool inIsKo, bool inIsDead, ESSReactionParamCategory inReactionParamCategory);
    
    UFUNCTION(BlueprintCallable)
    void StartInterpIdealTransform(float InDuration, bool inSweep);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDisableAcceleration();
    
    UFUNCTION(BlueprintCallable)
    void SetupReplacedMontageParam();
    
    UFUNCTION()
    void SetMovementAdjust(uint32 inStateHash, const FELSSActionStateMovementAdjust& inMovementAdjust);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpIdealTransform(FTransform inIdealTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableStateMulticast(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePendingTransit(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableBlendOut(bool Disable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDamageReactionParam(const FName& inRowName, const FSSDamageReactionParam& InParam, bool inBackDamage);
    
public:
    UFUNCTION(BlueprintCallable)
    void RestartIfReplaced();
    
    UFUNCTION(BlueprintCallable)
    void RequestTransit(ESSActionTransitTrigger inTrigger);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* ReplaceReceiverMontageByMove(UAnimMontage* inMontage);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* ReplaceMontageByPlayer(UAnimMontage* inMontage);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* ReplaceMontageByPickup(UAnimMontage* inMontage);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* ReplaceMontageByMove(UAnimMontage* inMontage);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* ReplaceMontage(UAnimMontage* inMontage);
    
    UFUNCTION(BlueprintCallable)
    void PerformWallHitReaction(const FVector& inHitNormal, bool inWallOver, bool inHitSituation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BeginStateMulticastParam();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void LandMultiCast(uint32 inStateHash, uint32 inServerTransitId);
    
    UFUNCTION(BlueprintCallable)
    bool IsWaitSituationState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseItemState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRunJumpState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReactionState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPickupVisible();
    
    UFUNCTION(BlueprintCallable)
    bool IsNearlyIdleState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLandState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsKoIdleState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsJumpState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsIdleState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsGuardState(bool inCheckGuardStop) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDrivingWheeledVehicleState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDrivingState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDrivingHorseVehicleState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDownState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleteUseItemState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBackDamage() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAttackState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveInterpIdeal() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetWaitSituationState() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetTauntState() const;
    
    UFUNCTION(BlueprintCallable)
    float GetStateTimeCount() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetRunJumpState() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetRunJumpLandState() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetReviveState() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetReceiverState() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayableMove(ESSActionTransitTrigger Trigger, ESSMoveCommand& outMoveCommand);
    
    UFUNCTION(BlueprintCallable)
    FELSSActionStateMovementAdjust GetMovementAdjust() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetLandState() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetKoDamageReactionRowName() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetJumpState() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetIdleState() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetGuardStopState() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetGuardState() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetDoubleJumpState() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetDoubleJumpLandState() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FName GetDefaultReactionRowName(ESSReactionParamCategory inReactionParamCategory) const;
    
public:
    UFUNCTION(BlueprintCallable)
    UCharacterMovementComponent* GetDefaultCharaMovement() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetDeadDamageReactionRowName() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetDamageState() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetDamageReactionRowName();
    
    UFUNCTION(BlueprintCallable)
    FSSDamageReactionParam GetDamageReactionParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSSActionStateBase* GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentMoveId();
    
    UFUNCTION(BlueprintCallable)
    ESSMoveCommand GetCurrentMoveCommand() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UELSSActionStateBase> GetAirDamageState() const;
    
    UFUNCTION(BlueprintCallable)
    void FlushReservedTransit(float inTimeStamp);
    
    UFUNCTION(BlueprintCallable)
    void FinishMovementAdjust();
    
    UFUNCTION()
    UELSSActionStateBase* FindStateByHash(uint32 StateHash) const;
    
    UFUNCTION()
    bool ExecuteTrigger(uint32 inRequestId, ESSActionTransitTrigger inTrigger, AActor* inTargetActor, bool inInputFlg, float inInputYaw, bool isReservedTrigger);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteLand();
    
    UFUNCTION(BlueprintCallable)
    bool CheckLocallyControlled() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeReactionParamWallOver();
    
    UFUNCTION(BlueprintCallable)
    void ChangeReactionParamWallHit();
    
    UFUNCTION(BlueprintCallable)
    void ChangeReactionParamWaitSituation();
    
    UFUNCTION(BlueprintCallable)
    void ChangeReactionParamSpecify(const FName& inReactionRowName);
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginSyncReceiverState();
    
    UFUNCTION()
    void BeginStateOnTrigger(TSubclassOf<UELSSActionStateBase> inStateCls, int32 inMoveId, uint32 inRequestId, ESSMoveCommand inMoveCommand);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BeginStateMulticast(const FSSStateTransitParam& transitParam);
    
public:
    UFUNCTION()
    void BeginStateByClassNative(TSubclassOf<UELSSActionStateBase> inStateCls, int32 inMoveId, uint32 inRequestId, ESSMoveCommand inMoveCommand);
    
    UFUNCTION(BlueprintCallable)
    void BeginStateByClass(TSubclassOf<UELSSActionStateBase> stateCls, bool keepMove);
    
    UFUNCTION(BlueprintCallable)
    void BeginMoveByExternalParam(const FSSMoveParam& inMoveParam, const TArray<FSSAttackParam>& inAttackParams, ESSMoveCommand inMoveCommand);
    
    UFUNCTION()
    void BeginMove(int32 MoveId, uint32 RequestID, ESSMoveCommand moveCoomand);
    
    UFUNCTION(BlueprintCallable)
    void BeginIdleState();
    
    UFUNCTION(BlueprintCallable)
    void BeginDownState(ESSActionDownFaceUpType faceUpType);
    
    UFUNCTION(BlueprintCallable)
    void BeginDamageStateForceKo();
    
    UFUNCTION(BlueprintCallable)
    void BeginDamageStateForceDead();
    
    UFUNCTION(BlueprintCallable)
    void BeginDamageState();
    
    UFUNCTION(BlueprintCallable)
    void BeginBlowState();
    
    UFUNCTION(BlueprintCallable)
    void BeginAirDamageState();
    
};

