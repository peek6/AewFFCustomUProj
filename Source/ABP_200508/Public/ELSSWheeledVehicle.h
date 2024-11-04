#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "WheeledVehicle.h"
#include "ELSSActorCommonInterface.h"
#include "ELSSInteractableObjectInterface.h"
#include "ELSSVehicleInterface.h"
#include "ESSDamageReason.h"
#include "ESSWheeledVehicleDamagedState.h"
#include "ESSWheeledVehicleDrivingPose.h"
#include "ELSSWheeledVehicle.generated.h"

class AActor;
class AELSSPlayer;
class UAtomComponent;
class UBoxComponent;
class UELSSWheeledVehicleMovement;
class UPrimitiveComponent;
class USceneComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class ABP_200508_API AELSSWheeledVehicle : public AWheeledVehicle, public IELSSActorCommonInterface, public IELSSVehicleInterface, public IELSSInteractableObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* GetOffLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* GetOnCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RunOverCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PhysicsOverlapDetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* VehicleOwnerCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PawnAvoidCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWheeledVehicleMovement* SSVehicleMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AELSSPlayer* VehicleOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachGetOnSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GetOffCheckOffsetVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GetOffCheckOffsetHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractUIOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DotIconLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DotIconBaseLocationOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VehicleUIOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_ImpactToField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWheeledVehicleDrivingPose DrivingPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputInvalidRangeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputInvalidRangeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> UnderfootCheckTraceObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFrictionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlipFrictionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableSlipFlag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWheeledVehicleDamagedState damagedState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> HitEffectLineTraceObjectTypes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RemainDurability, meta=(AllowPrivateAccess=true))
    int32 RemainDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClashImpulseSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashEventIntervalSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashEventIntervalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReduceDurabilityValueWhenClash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CrashDamageToVehicleMoveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableRunOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RunOverOverlapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunOverSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RunOverMoveIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReduceDurabilityValueWhenRunOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 IsExploded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExplosionEffectDatabaseRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionDamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExplosionDamageMoveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExplosionDamageToVehicleOwnerMoveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_Klaxon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_Engine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngineRotationRatioThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngineRatioMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent_Engine;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EngineSEUniqueId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraBasisLocationOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsLockInputBrake: 1;
    
public:
    AELSSWheeledVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEngineSE(float engineRatio);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDamagedState(ESSWheeledVehicleDamagedState NewDamagedState);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TryGetOff_Server();
    
    UFUNCTION(BlueprintCallable)
    void TickEngineSE(float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickAddAttention(float DeltaSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    bool TakeExplosionDamageToVehicleOwner();
    
    UFUNCTION(BlueprintCallable)
    bool TakeExplosionDamageToAny(AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SuicideVehicleOwner();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopEngineSE();
    
    UFUNCTION(BlueprintCallable)
    void StartEngineSE();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRemainDurability(int32 Durability);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInternalVisible(bool flg);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetExternalVisible(bool flg);
    
protected:
    UFUNCTION(BlueprintCallable)
    ESSWheeledVehicleDamagedState RemainDurabilityToDamagedState() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayKlaxonSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayHitEffect(const FVector& StartLoc, AActor* DamageCauser, ESSDamageReason DamageReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PerformKlaxon_Multicast();
    
    UFUNCTION(BlueprintCallable)
    void OnRunOverEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRunOverBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainDurability();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGetOnEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnGetOnBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapBreakObject(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeDamagedState_None();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeDamagedState_DamagedMax();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeDamagedState_DamagedLv1();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBodyHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapBreakObject(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsOverturn() const;
    
    UFUNCTION(BlueprintCallable)
    UPrimitiveComponent* GetVehicleOwnerCollision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayer* GetVehicleOwner() const;
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void GetOff_Multicast(AELSSPlayer* Player, uint32 TransitId);
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetEngineRotationRatio() const;
    
public:
    UFUNCTION(BlueprintCallable)
    ESSWheeledVehicleDrivingPose GetDrivingPose() const;
    
    UFUNCTION(BlueprintCallable)
    void Explosion();
    
    UFUNCTION(BlueprintCallable)
    bool DetachFromVehicle(AActor* Other, bool damaged);
    
    UFUNCTION(BlueprintCallable)
    void CorrectDetachedOwner(AActor* inVehicleOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAllowPawnControll(bool ignoreDamagedState) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanGetOn() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanGetOff() const;
    
    UFUNCTION(BlueprintCallable)
    bool AttachToVehicle(AActor* Other);
    
private:
    UFUNCTION(BlueprintCallable)
    void ApplyExplosionDamage();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 AddDurabilityByRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDurability(int32 Value);
    
    
    // Fix for true pure virtual functions not being implemented
};

