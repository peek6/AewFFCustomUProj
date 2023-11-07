#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WrestlerSetupParam.h"
#include "EWrestlerID_N.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "ELSSActorCommonInterface.h"
#include "ELSSCharacter.h"
#include "ESSActionCameraID.h"
#include "ESSActionDownFaceUpType.h"
#include "ESSAliveStateType.h"
#include "ESSAttentionReason.h"
#include "ESSBadStatus.h"
#include "ESSButtonHold.h"
#include "ESSCameraPlaceType.h"
#include "ESSCameraShakeType.h"
#include "ESSDamageReason.h"
#include "ESSDamageReceiverState.h"
#include "ESSDamageSE.h"
#include "ESSFallReason.h"
#include "ESSHitGroundSE.h"
#include "ESSInteractExecute.h"
#include "ESSLogIconType.h"
#include "ESSMoveCommand.h"
#include "ESSMoveSetCategory.h"
#include "ESSPlayerDebugFlag.h"
#include "ESSPlayerFlag.h"
#include "ESSPlayerMeshMode.h"
#include "ESSPlayerPurpose.h"
#include "ESSPlayerStartLocatorAreaId.h"
#include "ESSPlayerStartLocatorType.h"
#include "ESSWeaponType.h"
#include "ESSWrestlerType.h"
#include "SSAbilityParam.h"
#include "SSAttackParam.h"
#include "SSBadStatusParam.h"
#include "SSCharacterAdjust.h"
#include "SSDamageResult.h"
#include "SSDebugMoveIdOverrideParam.h"
#include "SSDebugReceivedRPCInfo.h"
#include "SSFallInfo.h"
#include "SSHeatLevelParam.h"
#include "SSHeatMoveSet.h"
#include "SSHeatSkillInfo.h"
#include "SSHeatSkillParam.h"
#include "SSMoveParam.h"
#include "SSMoveSetDefaultSettings.h"
#include "SSPlayerEquipSettings.h"
#include "SSPlayerEventDispatcherDelegate.h"
#include "SSPlayerProfileForInGame.h"
#include "SSReplicatedSyncMotionPlayState.h"
#include "SSReplicatedVehicleStateParam.h"
#include "SSWrestlerParam.h"
#include "SSWrestlerSetupParam.h"
#include "SSWrestlerTypeParam.h"
#include "Templates/SubclassOf.h"
#include "ELSSPlayer.generated.h"

class AActor;
class AController;
class AELSSActionArea;
class AELSSCameraCorrectVolume;
class AELSSItemBase;
class AELSSItemBox;
class AELSSMapAreaVolume;
class AELSSPickupBase;
class AELSSPlayer;
class AELSSPlayerController;
class AELSSPlayerState;
class AELSSShieldBase;
class AELSSSilhouetteActorManager;
class AELSSSituationMoveTrigger;
class AELSSStationalCamera;
class AELSSThrowPrediction;
class AELSSWeaponBase;
class AELSSWeaponThrowProjectile_Pushpin;
class APawn;
class UAnimMontage;
class UCapsuleComponent;
class UELSSActionStatePlayerComponent;
class UELSSAnimNotify_Camera;
class UELSSAttackerComponent;
class UELSSCharacterMovementComponent;
class UELSSDamageComponent;
class UELSSFootIK;
class UELSSSyncMotion;
class UELSSTargetComponent;
class UMeshComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class ABP_200508_API AELSSPlayer : public AELSSCharacter, public IELSSActorCommonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSFallInfo FallInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSFallReason LastFallReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FallingSpdHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FallingPrevLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FallingStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LandingFrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ForceThinMode, meta=(AllowPrivateAccess=true))
    bool ForceThinMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TempActorsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnoreSelf;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerEventDispatcher EventOnAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerEventDispatcher EventOnJumped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerEventDispatcher EventOnLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSSPlayerProfileForInGame SSPlayerProfileForInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Exp, meta=(AllowPrivateAccess=true))
    int32 Exp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerParam WrestlerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerTypeParam WrestlerTypeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSHeatLevelParam HeatLevelParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSSWrestlerSetupParam SSWrestlerSetupParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMaxWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool UseDefaultUserSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeatLevelUpEffectDatabaseRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSFootIK* FootIKComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterAdjust AdjustParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HP, meta=(AllowPrivateAccess=true))
    int32 HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_KoHP, meta=(AllowPrivateAccess=true))
    int32 KoHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KoMaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackPowerBase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityUsedTime1, meta=(AllowPrivateAccess=true))
    float AbilityUsedTime1_Rep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityUsedTime2, meta=(AllowPrivateAccess=true))
    float AbilityUsedTime2_Rep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityUsedTime3, meta=(AllowPrivateAccess=true))
    float AbilityUsedTime3_Rep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EquippedAbilityId_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EquippedAbilityId_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EquippedAbilityId_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAbilityParam> EquippedAbilityParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CurrentAbilityEffectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AttachedAbilityEffectActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilitySpeedupParticleEffectIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityJumpPowerupParticleEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityJumpPowerupParticleEffectName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySpeedupParticleEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSSilhouetteActorManager* SilhouetteActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSSilhouetteActorManager> SilhouetteActorManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SilhouetteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ClonedMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerMeshMode MeshMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatSkillInfo> EquippedHeatSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatSkillParam> EffectiveHeatSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HeatSkillValue_MoveLevelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HeatSkillValue_DamageBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HeatSkillValue_DamageBoostToShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HeatSkillValue_BlowBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HeatSkillValue_AttentionBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatSkillValue_AttentionBoostAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HeatSkillValue_AttackCapsuleExpand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HeatSkillValue_MotionSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLandingLevelWhenSafeLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> AttachedEffectActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBadStatusParam> BadStatusArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BadStatusEffectRowName_FireBottle1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BadStatusEffectRowName_FireBottle2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BadStatusEffectRowName_FireBottle3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BadStatusEffectRowName_FireBottle4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BadStatusEffectRowName_Slow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTickUsingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseItemNeedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UseItemBeginTimeRep, meta=(AllowPrivateAccess=true))
    float UseItemBeginTimeRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseItemBeginTimePrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseItemBeginTimeLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentShield, meta=(AllowPrivateAccess=true))
    AELSSShieldBase* CurrentShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSShieldBase* ReserveAddShieldObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchLostShieldSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchLostShieldGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LaunchDropObjectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchDropObjectSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchDropObjectGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchDropObjectSpeedOnKo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchDropObjectGravityScaleOnKo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> GunAimTarget_LineTraceChannel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMoveCommand GunFireMoveCommand;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMoveCommand ThrowWeaponMoveCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSThrowPrediction* ThrowPrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSThrowPrediction> ThrowPredictionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowPredictionSimFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirectionalThrow_GuideOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionalThrow_PredictionSimFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionalThrow_BlowPowerScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSWeaponBase* StickedWeapon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    TArray<AELSSPickupBase*> Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPickupBase*> ReserveAddToInventoryObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InventoryAvailableLocalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentInventoryIndex, meta=(AllowPrivateAccess=true))
    int32 currentInventoryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsDirtyCurrentInventoryIndex: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentPickup, meta=(AllowPrivateAccess=true))
    AELSSPickupBase* CurrentPickup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSActionStatePlayerComponent* StatePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScaleByNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSActionDownFaceUpType DownFaceUpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> UnderfootCheckTraceObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderfootCheckTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipBrakingFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipBrakingFrictionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipBrakingDecelerationWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipGroundFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableSlipFlag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipSETriggerWaitTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSDamageReceiverState> DamageReceiverStateOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPlayer*> AttackedPlayers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReservedSuicideTimeByDisconnect;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayer* KoFinisherTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSInteractExecute TargetInteractAttackType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAliveStateType AliveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsAlreadyHitKoFinisher: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 isStandbyKoFinisher: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KoFinisherSearchLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KoFinisherSearchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KoFinisherSearchZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> KoFinisherSearchTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KoStunEffectDatabaseRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* KoStunEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KoStunLoopSEUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsKoTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KoDamageCycleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReviveEffectDatabaseRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ReviveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInReviveArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveHpRecoverRateFromArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveRecoveryKoHPCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveRecoveryKoHPRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisappearTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSAttackerComponent* AttackerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CharaBaseSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* HitCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* PhysicsCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VehicleStateParam, meta=(AllowPrivateAccess=true))
    FSSReplicatedVehicleStateParam ReplicatedVehicleStateParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* CurrentVehiclePawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PickupedCarrot, meta=(AllowPrivateAccess=true))
    AELSSPickupBase* PickupedCarrot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InteractTargetCandidateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSInteractExecute LastInteractExecute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InteractHoldBeginTime, meta=(AllowPrivateAccess=true))
    float InteractHoldBeginTimeRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLockInteractTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* InteractSoundCue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FeverEffectDatabaseRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FeverEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FeverLoopSEUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FeverLoopSEIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSMoveSetCategory> MoveSetEffectSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSSMoveSetDefaultSettings MoveSetSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSSPlayerEquipSettings equipSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSMoveCommand, FSSHeatMoveSet> HeatMoveSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayer* SyncAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayer* SyncReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SyncTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSSituationMoveTrigger* CurrentSituationMoveTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSyncReceiverFloorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncReceiverFloorHeightAdjustRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncReceiverFloorHeightAdjustInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncReceiverFloorHeightAdjustLowerMax;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginSync;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StationalCameraDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* StationalCameraLocatorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StationalCameraLocatorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StationalCameraBaseTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StationalCameraBaseTransformOwnerInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StationalCameraBaseTransformReceiverInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSSyncMotion* SSSyncMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSActionArea> ActionAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSActionArea* ActionArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSStationalCamera* ExternalStationalCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSSReplicatedSyncMotionPlayState ReplicatedSyncMotionPlayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSyncMotionFloorCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SyncOriginLocationLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerSyncRotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientDesiredSyncRotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CollisionCheckSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CurrentSocketCollisionCheckDistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSocketCollisionCheckDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> SituationMoveTriggerTraceChannel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMoveCollisionHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMoveCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifiedMoveCollisionHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifiedMoveCollisionRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultMeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceDefaultMoveCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrinkedHalfHeightDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSTargetComponent* TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionDesiredInputFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionDesiredInputYaw;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraNearCullingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraCullingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraBasisLocationSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBasisLocationSocketRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBasisLocationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraBasisLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraBasisLocationLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFloorCheckMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentWallCheckMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> CurrentFloorCheck_ObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> CurrentFloorCheck_SoundTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSMapAreaVolume*> OverlappingMapAreaVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMapAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMiniMapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeAreaCheckIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSCameraCorrectVolume*> OverlappingCameraCorrectVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCameraPlaceType CurrentCameraPlaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerFlags, meta=(AllowPrivateAccess=true))
    int32 PlayerFlags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HudHpGaugeOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HudHpGaugeOffsetZOnVehicle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerPurpose Purpose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LeftStickInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LastLeftStickInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RightStickInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LastRightStickInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveInputVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeedScale;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceNoCombineMovement;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastSavedMoveId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrampedTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrampedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RawOptimizeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptimizeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NotRenderedFrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatestOptimizeFrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSimulatedTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptimizeTargetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSimulatedTickFrameCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedPendingSimulatedTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableLocalAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSimulateMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMoveCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMoveSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSlipTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSyncMotionCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSyncMotionFloorTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSilhouette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceInvisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Insignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraToActorDistanceSqr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerDebugFlags, meta=(AllowPrivateAccess=true))
    int32 PlayerDebugFlags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDebugMoveIdOverrideParam DebugMoveIdOverrideParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSSDebugReceivedRPCInfo DebugReceivedServerRPCReliable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSSDebugReceivedRPCInfo DebugReceivedServerRPCUnreliable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugTickAutoInputPressInterval;
    
    AELSSPlayer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UseCurrentItem_Server();
    
public:
    UFUNCTION(BlueprintCallable)
    bool UseCurrentItem();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UseAbility_Server(int32 inSlotIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void UseAbility(int32 inSlotIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    bool UsableCurrentWeaponMove();
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* UpdateTargetOnLocalAttack();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSlipFlag(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveCollisionSize();
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateKoFinisherTarget();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInventoryUI();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInventoryPositionUI(int32 NewCurrentInventoryIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateInventoryIconValueUI(AELSSPickupBase* Pickup);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateInteractUIIfInteract();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInteractUI(AActor* inInteractTarget);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInteractTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentVehicleDurabilityUI(APawn* VehiclePawn);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentShieldDurabilityUI(AELSSShieldBase* shield);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateCarrotUI();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateAutonomousSyncRotate();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TryKoFinisher_Server(AELSSPlayer* Target);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TryGetOnVehicle_Server(APawn* VehiclePawn);
    
    UFUNCTION(BlueprintCallable)
    void TickVehiclePhysics(float inDeltaSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void TickUseItem(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void TickReviveArea(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void TickOperationGuideExecute(bool isForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void TickKoDamageCycle(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void TickKo(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void TickInteract(float inDeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickHoldTime(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TeleportToPlayerStartLocator();
    
    UFUNCTION(BlueprintCallable)
    void SyncOffReceiver();
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SyncGunAimState_Server(const FVector_NetQuantize& inActorLocation, const FVector_NetQuantize& inAimTargetLocation, float inGameplayTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SwapShield(AELSSShieldBase* shield);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Suicide();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SuccessKoFinisher_Multicast(AELSSPlayer* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void StickPickupToOtherActor(AELSSWeaponBase* inWeapon, int32 inRequiredStateId, AELSSPlayer* inTarget, const FName& inAttachParamRowName);
    
    UFUNCTION(BlueprintCallable)
    AELSSWeaponThrowProjectile_Pushpin* SteppingOnPushpin() const;
    
    UFUNCTION(BlueprintCallable)
    void StartSyncMotionForPreview(AELSSPlayer* inAttacker, AELSSPlayer* inReceiver, UAnimMontage* inReceiverMontage, const FVector& inSyncLocation, const FRotator& inSyncRotation);
    
    UFUNCTION(BlueprintCallable)
    void StartSyncMotion(UAnimMontage* inReceiverMontage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartHold(ESSButtonHold holdButton);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SpawnGunBullet_Server(const FVector_NetQuantize& InLocation, const FRotator& InRotation, int32 inMoveId, int32 inStateHash);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWalkSpeedScale(float Scale);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMoveSetDefaultSettings();
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveCollisionSize();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetupInventory();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetThrowWeaponAimMode_Server(bool inEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* inTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetSyncTarget(AELSSPlayer* inAttacker, AELSSPlayer* inReceiver);
    
    UFUNCTION(BlueprintCallable)
    void SetStickedWeapon(AELSSWeaponBase* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetStationalCameraInitialBaseTransform(const FTransform& inOwnerTransform, const FTransform& inReceiverTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetStationalCameraBaseTransform(const FTransform& InTransform);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetStandbyKoFinisher(bool NewIsStandbyKoFinisher);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetReserveRequestDurationDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetReserveRequestDuration(float Duration);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetPutTrapAimMode_Server(bool inEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPickupedCarrot(AELSSPickupBase* newPickup, AELSSPickupBase* lastPickup);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveCollisionHeightScale(float inHeightScale, float inRadiusScale);
    
    UFUNCTION(BlueprintCallable)
    void SetKoHP(int32 NewHP);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetInteractTarget(AActor* inNewInteractTarget);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHP(int32 NewHP);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHeatLevel(int32 inNewHeatLevel, bool isInitialize);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetGunAimMode_Server(bool inEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetForceDefaultMoveCollision(bool flg);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetFlag_Server(ESSPlayerFlag Type, bool IsOn);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFlag(ESSPlayerFlag Flag, bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalStationalCamera(AELSSStationalCamera* inStationalCamera);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSyncMove(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetDownFaceUpType(ESSActionDownFaceUpType inFaceUpType);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableStickAttach(bool inDisableStickAttach);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableShieldVisible(bool inDisableShieldVisible);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetDebugFlag_Server(ESSPlayerDebugFlag Type, bool IsOn);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetCurrentShield(AELSSShieldBase* newShield, AELSSShieldBase* lastShield);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentPickupHideFlagByActionState(bool isHide);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetCurrentPickup(AELSSPickupBase* newPickup, AELSSPickupBase* lastPickup);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerUpdateSyncRotation(float inYaw);
    
    UFUNCTION(BlueprintCallable)
    AELSSSituationMoveTrigger* SearchSituationMoveTrigger(const FVector& inHitLocation) const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Revive_Multicast(float inHpRecoverRate);
    
    UFUNCTION(BlueprintCallable)
    bool Revive(float inRecoverHpRate);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ResponseSyncRotationMulticast(float inYaw);
    
    UFUNCTION(BlueprintCallable)
    void ResetStationalCamera(float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void ResetRestrictWaitSituationMove();
    
    UFUNCTION(BlueprintCallable)
    void ResetInteractStateLocalInfo();
    
    UFUNCTION(BlueprintCallable)
    void ResetDownStateValue();
    
    UFUNCTION(BlueprintCallable)
    void ReserveTransformOnNotifyCamera(const FTransform& inDistTrans);
    
    UFUNCTION(BlueprintCallable)
    void ReserveAddToInventory(AELSSPickupBase* Pickup);
    
    UFUNCTION(BlueprintCallable)
    void ReserveAddShield(AELSSShieldBase* shield);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RequestKo_Multicast();
    
public:
    UFUNCTION(BlueprintCallable)
    bool RequestKo(float killingDamage, AController* killerController, ESSLogIconType LogIcon);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RequestDie_Multicast();
    
public:
    UFUNCTION(BlueprintCallable)
    bool RequestDie(float killingDamage, AController* killerController, ESSLogIconType LogIcon);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceMontageOnChangeCurrentPickup();
    
    UFUNCTION(BlueprintCallable)
    void RemoveStickedWeapon(AELSSWeaponBase* inWeapon);
    
private:
    UFUNCTION(BlueprintCallable)
    bool RemovePickupFromInventory(AELSSPickupBase* Pickup, bool isResetCurrentIndex, bool ignoreCheckAuthority);
    
    UFUNCTION(BlueprintCallable)
    TArray<AELSSPickupBase*> RemoveAllFromInventory();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseHold(ESSButtonHold holdButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshCurrentPickupVisibility();
    
    UFUNCTION(BlueprintCallable)
    void RecoveryShieldByItem(float RecoveryRate, int32 itemDatabaseId);
    
    UFUNCTION(BlueprintCallable)
    void RecoveryHpByItem(float RecoveryRate, int32 itemDatabaseId);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PutTrap_Server(const FVector_NetQuantize& InLocation, float inTargetYaw, int32 inMoveId, int32 inStateHash);
    
public:
    UFUNCTION(BlueprintCallable)
    void ProgressActionCamera(ESSActionCameraID inActionCameraID, int32 inStep);
    
    UFUNCTION(BlueprintCallable)
    void PlayHitGroundSE(ESSHitGroundSE inHitGroundSE, UMeshComponent* inMeshComponent, bool inPlay2D);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFeverLoopSE(bool InPlaySE);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayDamageSE(ESSDamageSE inDamageSE, UMeshComponent* inMeshComponent, bool inPlay2D);
    
    UFUNCTION(BlueprintCallable)
    void PlayDamageImpact(const FSSAttackParam& inAttackParam, AELSSPlayer* attackPlayer, float atkHitTimeStamp);
    
    UFUNCTION(BlueprintCallable)
    void PlayCameraShake(ESSCameraShakeType InType, float inScale);
    
    UFUNCTION(BlueprintCallable)
    void Play3DSEAttached_ForString(const FString& CueName);
    
    UFUNCTION(BlueprintCallable)
    void PickupShield(AELSSShieldBase* shield);
    
    UFUNCTION(BlueprintCallable)
    bool PickupObject(AELSSPickupBase* Pickup);
    
    UFUNCTION(BlueprintCallable)
    bool PickupCarrot(AELSSPickupBase* Pickup);
    
    UFUNCTION(BlueprintCallable)
    void PerformDamage(const FSSAttackParam& inAttackParam, const FSSDamageResult& damageResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTryKoFinisher();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickPlayerMeshMode(float inDeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTickInteractState(float inDeltaSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSuccessKoFinisher(AELSSPlayer* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSuccessInteractTreasureBox(AELSSItemBox* inOpenedItemBox);
    
    UFUNCTION(BlueprintCallable)
    void OnSuccessCauseDamage(AELSSPlayer* damagedPlayer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleStateParam();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UseItemBeginTimeRep();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerFlags();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerDebugFlags();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PickupedCarrot(AELSSPickupBase* lastPickup);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_KoHP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Inventory();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractHoldBeginTime();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HP();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ForceThinMode();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Exp();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentShield(AELSSShieldBase* lastShield);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPickup(AELSSPickupBase* lastPickup);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentInventoryIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityUsedTime3();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityUsedTime2();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityUsedTime1();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnPostDamaged(const FSSDamageResult& damageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyRunEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyRunBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyGravityScaleEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyGravityScaleBegin(float inGravityScale);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMomentOfKo();
    
    UFUNCTION(BlueprintCallable)
    void OnMomentOfDeath();
    
    UFUNCTION(BlueprintCallable)
    void OnKoDropPickups();
    
    UFUNCTION(BlueprintCallable)
    void OnHitKoFinisher();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnHeatLevelUp_Client(int32 inNewLevel, int32 inNewHP);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFailedKoFinisher(AELSSPlayer* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnExitInteractArea(AActor* Other);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterInteractArea(AActor* Other);
    
    UFUNCTION(BlueprintCallable)
    void OnEndInteractState();
    
    UFUNCTION(BlueprintCallable)
    void OnEndDownStandUp();
    
    UFUNCTION(BlueprintCallable)
    void OnEndAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnDownDropPickups();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefferedSetup();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeathDropPickups();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeactivateAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedDownStandUp();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMeshMode(ESSPlayerMeshMode inMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBeginWaitSituationMove();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginJump(bool inDoubleJump);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginInteractState();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotify_Camera(const UELSSAnimNotify_Camera* inAnimNotify, bool isWatching);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NotifyRecoveredShield_Multicast(int32 itemDatabaseId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyRecoveredHp_Multicast(int32 itemDatabaseId);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void NotifyAddExp_Client(int32 itemDatabaseId);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void MoveCurrentInventory_Server(bool isRightMove);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveCurrentInventory(bool isRightMove);
    
private:
    UFUNCTION(BlueprintCallable)
    void LostWeaponIfBrokeAll();
    
    UFUNCTION(BlueprintCallable)
    void LostWeaponIfBroke(AELSSWeaponBase* Weapon);
    
public:
    UFUNCTION(BlueprintCallable)
    void LostShield();
    
private:
    UFUNCTION(BlueprintCallable)
    void LostCurrentWeaponIfBroke();
    
    UFUNCTION(BlueprintCallable)
    void LostCurrentWeapon();
    
public:
    UFUNCTION(BlueprintCallable)
    void LostCurrentItemIfUsed();
    
    UFUNCTION(BlueprintCallable)
    void LostCurrentItem();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LaunchThrowWeaponProjectile_Server(const FRotator& InRotation);
    
public:
    UFUNCTION(BlueprintCallable)
    bool KoFinisher();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestrictWaitSituationMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingSyncMotionAfterSyncOff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingSyncMotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingSituationMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearlyIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyPlayerControlled(bool isCheckAssociated) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuard() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFullHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSlip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSafeLanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAIPlayerForServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 HitResultToSurfaceType(const FHitResult& inHitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFlag(ESSPlayerFlag Flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDebugFlag(ESSPlayerDebugFlag Flag) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasCarrot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyWeaponInInventory(ESSWeaponType WeaponType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyPickupInInventory() const;
    
    UFUNCTION(BlueprintCallable)
    void Guard(bool IsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSWrestlerType GetWrestlerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetWrestlerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerController* GetWatcherPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSSTargetComponent* GetTargetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetSystemMotionRowNameByWrestlerType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetSystemMotionRowNameByWrestlerProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayer* GetSyncTargetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStormReduceDamageRate() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetStationalCameraLocatorOwner();
    
    UFUNCTION(BlueprintCallable)
    FVector GetStationalCameraLocatorOffset();
    
    UFUNCTION(BlueprintCallable)
    bool GetStationalCameraDisable();
    
    UFUNCTION(BlueprintCallable)
    FTransform GetStationalCameraBaseTransformReceiverInitial();
    
    UFUNCTION(BlueprintCallable)
    FTransform GetStationalCameraBaseTransformOwnerInitial();
    
    UFUNCTION(BlueprintCallable)
    FTransform GetStationalCameraBaseTransform();
    
    UFUNCTION(BlueprintCallable)
    FSSWrestlerSetupParam GetSSWrestlerSetupParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerController* GetSSPlayerControllerForUIUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedRate() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSlipGroundFriction() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSlipBrakingFrictionFactor() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSlipBrakingFriction() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSlipBrakingDecelerationWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeeThroughDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReduceDamageRate() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandomBadgeId() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void GetOnVehicle_Multicast(const FSSReplicatedVehicleStateParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void GetOnVehicle(APawn* VehiclePawn);
    
    UFUNCTION(BlueprintCallable)
    void GetOffVehicle(APawn* VehiclePawn, bool damaged);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveId(ESSMoveCommand inMoveCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSInteractExecute GetLastInteractExecute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKoMaxHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKoHPRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKoHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpPowerRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemVisibleDistance() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsInReviveArea() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetInvolveInstigator() const;
    
    UFUNCTION(BlueprintCallable)
    float GetInvolveDamageFeedback() const;
    
    UFUNCTION(BlueprintCallable)
    float GetInvolveDamage() const;
    
private:
    UFUNCTION(BlueprintCallable)
    AActor* GetInventoryActorAt(int32 Index) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInteractTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHudHpGaugeOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHPRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGuardReduceDamageRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGuardLevel() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGravityScaleByNotify() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UELSSFootIK* GetFootIKComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSStationalCamera* GetExternalStationalCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExpRateToNext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyVisibleDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSSCharacterMovementComponent* GetELSSCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDamageVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSSDamageComponent* GetDamageComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSWeaponBase* GetCurrentWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWallPhysicalSurfaceType(float inCheckYaw, bool inFlipIfBackDamage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentWallHitResult(FHitResult& outHitResult, float inCheckYaw, bool inFlipIfBackDamage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetCurrentVehiclePawn() const;
    
    UFUNCTION(BlueprintCallable)
    AELSSSituationMoveTrigger* GetCurrentSituationMoveTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentShieldDurabilityRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSShieldBase* GetCurrentShield() const;
    
    UFUNCTION(BlueprintCallable)
    AELSSPickupBase* GetCurrentPickup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSItemBase* GetCurrentItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentFloorPhysicalSurfaceType(bool inUseLineTrace, bool inUseSoundLineTrace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostumeID() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USkeletalMeshComponent* GetClonedMesh() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetAvailableAbilitiyIndices() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutoHpRecoverRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackPower(ESSMoveCommand inMoveCommand, ESSWeaponType inWeaponType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSSAttackerComponent* GetAttackerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerState* GetAssociatedSSPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetAssociatedController() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAirAttackMinHeight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAdjustParamFromDataTable(FSSCharacterAdjust& outAdjustParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAddExpRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorCenterLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorCameraBasisLocation() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorBottomLocation() const;
    
    UFUNCTION(BlueprintCallable)
    float GetActionSpeedRate(ESSMoveCommand inCommand, ESSWeaponType inWeaponType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActionDesiredInputVec() const;
    
    UFUNCTION(BlueprintCallable)
    int32 FindInventoryIndex(AELSSPickupBase* Pickup) const;
    
private:
    UFUNCTION(BlueprintCallable)
    AActor* FindFirstInventoryActor() const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 FindEmptyInventoryIndex() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void FailedUseItem_Client();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void FailedUseAbility_Client(int32 inSlotIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void FailedPutTrapMove_Client();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void FailedKoFinisher_Client(AELSSPlayer* Target);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ExecuteInteractEffect_Server(AActor* inInteractTarget);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ExecuteAbility_Multicast(int32 inSlotIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndVehicleCameraAndUI(AELSSPlayerController* InPlayerController);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void EndTickUseItem_Client();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSyncMotion();
    
    UFUNCTION(BlueprintCallable)
    void EndReviveArea();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EndHoldInteract_Server();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void EndHoldInteract_Client();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndActionCamera(ESSActionCameraID inActionCameraID);
    
private:
    UFUNCTION(BlueprintCallable)
    AELSSShieldBase* DropShield();
    
    UFUNCTION(BlueprintCallable)
    void DropFromInventory();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DropCurrentPickup_Server();
    
    UFUNCTION(BlueprintCallable)
    AELSSPickupBase* DropCurrentPickup(bool ignoreCheckAuthority, bool isIgnoreCheckState);
    
public:
    UFUNCTION(BlueprintCallable)
    AELSSPickupBase* DropCarrot();
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<AELSSPickupBase*> DropAllPickupsFromInventory();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DoInteract_Server(AActor* inInteractTargetActor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool DoInteract();
    
private:
    UFUNCTION(BlueprintCallable)
    void DetachStunEffect();
    
    UFUNCTION(BlueprintCallable)
    void DetachReviveEffect();
    
public:
    UFUNCTION(BlueprintCallable)
    void DetachFeverEffect();
    
    UFUNCTION(BlueprintCallable)
    void DetachEffectAllFromMesh();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugUnlimitedUseItemAndWeapon_Server(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugToggleGuardToTarget();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugTeleportToSelectPlayerStartLocator(ESSPlayerStartLocatorType inLocatorType, ESSPlayerStartLocatorAreaId inAreaId, int32 inFilterID, const FString& inActorName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSetNearKo();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSetMoveIdOverride(const FSSDebugMoveIdOverrideParam& inOverrideParam);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSetHP(float Ratio);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DebugSetHeatLevel_Multicast(int32 inHeatLevel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugRotationThemAll(float degree);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugPlayerTeleport(const FVector& Pos);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugForceGuardToTarget(float guardTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DebugDispDamage(const FVector& inHitLocation, ESSDamageReason inDamageReason, const FSSDamageResult& inDamageResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DebugDispAttention(ESSAttentionReason inAttentionReason, int32 inPointValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugDestroyThemAll(bool excludeMyself);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugDelayKill(float inTimer);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void DebugCall_UnreliableServerRPC(int32 inSendId);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void DebugCall_UnreliableClientRPC(int32 inSendId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugCall_ReliableServerRPC(int32 inSendId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void DebugCall_ReliableClientRPC(int32 inSendId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugAssembleThemAll();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DeactivateBadStatus_Multicast(ESSBadStatus InType, float inSyncTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWrestlerSetupParam CreateWrestlerSetupParam(const FSSWrestlerSetupParam& inSSWrestlerSetupParam) const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeCarrot();
    
    UFUNCTION(BlueprintCallable)
    void ClearReservedTransformOnNotifyCamera();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearHold();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearAttack();
    
private:
    UFUNCTION(BlueprintCallable)
    AELSSWeaponThrowProjectile_Pushpin* CheckPushpinUnderfoot() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInteractDegree(AActor* inInteractTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInSight(AActor* inCheckActor) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckHitCollision(UPrimitiveComponent* comp);
    
private:
    UFUNCTION(BlueprintCallable)
    bool CheckForSpecialCaseDoInteract() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckAttackedLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckAlreadyHitKoFinisher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAllowCharacterControll(bool inForMove) const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeToPickupObject(AELSSPickupBase* Pickup);
    
private:
    UFUNCTION(BlueprintCallable)
    bool CanUseCurrentItem() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseAbility(int32 inSlotIndex) const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool CanRevive() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanPutTrap(bool inCheckLocation);
    
    UFUNCTION(BlueprintCallable)
    bool CanPickupShield(const AELSSShieldBase* shield) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPickupObject(bool isStockToInventory, bool& out_reasonIsFullInventory) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanKoFinisher(const AELSSPlayer* Target) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanKo(float killingDamage) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanInteract(AActor* inInteractTarget, bool ignoreActionState) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanHitKoFinisher() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanDropShield() const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool CanDropPickup(bool isIgnoreCheckState) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanDie(float killingDamage) const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool CanControllInventory() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelHold(ESSButtonHold holdButton);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanBeEffectedFromReviveArea() const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool CanApplyCurrentInventory() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanAddToInventory() const;
    
    UFUNCTION(BlueprintCallable)
    int32 CalcInventoryAvailableCount() const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 CalcHeatLevelFromExp(int32 inExp);
    
private:
    UFUNCTION(BlueprintCallable)
    int32 CalcCurrentInventoryIndex(int32 origIndex, bool isRightMove);
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginVehicleCameraAndUI();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BeginThrowWeaponMove_Server(int32 inMoveId);
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginSyncRotate();
    
    UFUNCTION(BlueprintCallable)
    void BeginSyncMoveOnServer(AELSSPlayer* inReceiver, int32 inAttackerMoveId, const FVector& InLocation, float inYaw, bool inIsFinisher, AELSSSituationMoveTrigger* inTrigger);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BeginSyncMoveMulticast(AELSSPlayer* inAttacker, AELSSPlayer* inReceiver, int32 inAttackerMoveId, const FVector_NetQuantize& InLocation, float inYaw, bool inIsFinisher, AELSSSituationMoveTrigger* inTrigger);
    
    UFUNCTION(BlueprintCallable)
    void BeginSyncMoveForPreview(AELSSPlayer* inAttacker, AELSSPlayer* inReceiver, const FVector& InLocation, float inYaw, bool inIsFinisher, AELSSSituationMoveTrigger* inTrigger, const FSSMoveParam& inMoveParam, const TArray<FSSAttackParam>& inAttackParams);
    
    UFUNCTION(BlueprintCallable)
    void BeginReviveArea(float hpRecoverRateFromArea, float RecoveryKoHPCycle, float RecoveryKoHPRate);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BeginPutTrapMove_Server(int32 inMoveId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BeginGunFireMove_Server(int32 inMoveId);
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginActionCamera(ESSActionCameraID inActionCameraID);
    
private:
    UFUNCTION(BlueprintCallable)
    void AttachStunEffect();
    
    UFUNCTION(BlueprintCallable)
    void AttachReviveEffect();
    
public:
    UFUNCTION(BlueprintCallable)
    void AttachFeverEffect();
    
    UFUNCTION(BlueprintCallable)
    void ApplyWatchTargetStatusToUI(AELSSPlayerController* inLocalPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStatusToUIFirst(AELSSPlayerController* inLocalPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCurrentInventoryIfUpdate();
    
private:
    UFUNCTION(BlueprintCallable)
    void ApplyCurrentInventory();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyAdjustParam();
    
    UFUNCTION(BlueprintCallable)
    bool AddPickupToInventoryAt(AELSSPickupBase* Pickup, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool AddPickupToInventory(AELSSPickupBase* Pickup);
    
    UFUNCTION(BlueprintCallable)
    int32 AddKoHPByRate(float inRate);
    
    UFUNCTION(BlueprintCallable)
    int32 AddKoHP(float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreVehiclePhysics(UPrimitiveComponent* ignoreComponent, UPrimitiveComponent* overlapDetectionComponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AddHPByRate(float inRate);
    
    UFUNCTION(BlueprintCallable)
    int32 AddHP(float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddExpByItem(int32 inExp, int32 itemDatabaseId);
    
    UFUNCTION(BlueprintCallable)
    void AddExp(int32 inExp);
    
    UFUNCTION(BlueprintCallable)
    void AddAttentionPoint(ESSAttentionReason inReason, bool inUseOverrideAddPoint, int32 inOverrideAddPoint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ActivateBadStatus_Multicast(ESSBadStatus InType, float InValue, int32 inMoveId, int32 inAttackHitId, float InDuration, AELSSPlayer* inInstigator, float inSyncTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

