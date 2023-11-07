#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "ELSSActorCommonInterface.h"
#include "ELSSInteractableObjectInterface.h"
#include "ELSSVehicleInterface.h"
#include "ESSDamageReason.h"
#include "ESSHorseAction.h"
#include "SSHorseAttackInfo.h"
#include "ELSSHorse.generated.h"

class AActor;
class AELSSPlayer;
class UAnimMontage;
class UBoxComponent;
class UCapsuleComponent;
class UPrimitiveComponent;
class USceneComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class ABP_200508_API AELSSHorse : public ACharacter, public IELSSActorCommonInterface, public IELSSVehicleInterface, public IELSSInteractableObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* GetOffLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* HitCollision_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* HitCollision_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* GetOnCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RunOverCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PhysicsOverlapDetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* VehicleOwnerCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* NeighAttackCollision;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ForwardYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool BackMoving;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AELSSPlayer* VehicleOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachGetOnSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AttachRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GetOffCheckOffsetVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GetOffCheckOffsetHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractUIOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VehicleUIOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootStepTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootStepFrontOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootStepRearOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemoveDamageToVehicleOwnerMoveId;
    
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
    int32 ReduceDurabilityValueWhenClash;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraBasisLocationOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsLockInputBrake: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitActionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NeighMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NeighCharaMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeighMoveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSHorseAttackInfo CurrentAttackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReserveActionTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHorseAction ReserveAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReserveActionRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdjustedLocationDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MovedLocationBeforeAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> VeloSavedLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> VeloSavedDeltaTimes;
    
public:
    AELSSHorse();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TryTramp(AActor* inReceiveActor, const FVector& inIdealLocation, float inTrampDuration);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TryGetOff_Server();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickAddAttention(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SuicideVehicleOwner();
    
protected:
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
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNeigh();
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayHitEffect(const FVector& StartLoc, AActor* DamageCauser, ESSDamageReason DamageReason);
    
    UFUNCTION(BlueprintCallable)
    void OnRunOverEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRunOverBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainDurability();
    
    UFUNCTION(BlueprintCallable)
    void OnNeighEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnNeighBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovementUpdated(const FVector& OldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovementPreUpdated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGetOnEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnGetOnBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapBreakObject(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NeighMulticast(FVector_NetQuantize10 InLocation);
    
    UFUNCTION(BlueprintCallable)
    void NeighAttack(const FSSHorseAttackInfo& inAttackInfo);
    
    UFUNCTION(BlueprintCallable)
    bool IsOverturn() const;
    
    UFUNCTION(BlueprintCallable)
    UPrimitiveComponent* GetVehicleOwnerCollision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayer* GetVehicleOwner() const;
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void GetOff_Multicast(AELSSPlayer* Player, uint32 TransitId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentFloorPhysicalSurfaceType(bool inRearFootTrace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetAttachRelativeTransform() const;
    
    UFUNCTION(BlueprintCallable)
    bool DetachFromVehicle(AActor* Other, bool damaged);
    
    UFUNCTION(BlueprintCallable)
    void CorrectDetachedOwner(AActor* inVehicleOwner, bool damaged);
    
    UFUNCTION(BlueprintCallable)
    void ClearNeighAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAllowPawnControll(bool ignoreDamagedState) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanGetOn() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanGetOff() const;
    
    UFUNCTION(BlueprintCallable)
    bool AttachToVehicle(AActor* Other);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDurabilityByRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDurability(int32 Value);
    
    
    // Fix for true pure virtual functions not being implemented
};

