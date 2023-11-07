#include "ELSSHorse.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

void AELSSHorse::TryTramp(AActor* inReceiveActor, const FVector& inIdealLocation, float inTrampDuration) {
}

void AELSSHorse::TryGetOff_Server_Implementation() {
}

void AELSSHorse::TickAddAttention(float DeltaSeconds) {
}

void AELSSHorse::SuicideVehicleOwner_Implementation() {
}

void AELSSHorse::Setup_Implementation() {
}

void AELSSHorse::SetRemainDurability(int32 Durability) {
}

void AELSSHorse::SetInternalVisible(bool flg) {
}

void AELSSHorse::SetExternalVisible(bool flg) {
}

void AELSSHorse::ServerNeigh_Implementation() {
}

void AELSSHorse::PlayHitEffect(const FVector& StartLoc, AActor* DamageCauser, ESSDamageReason DamageReason) {
}

void AELSSHorse::OnRunOverEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSHorse::OnRunOverBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AELSSHorse::OnRep_RemainDurability() {
}

void AELSSHorse::OnNeighEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSHorse::OnNeighBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AELSSHorse::OnMovementUpdated_Implementation(const FVector& OldLocation) {
}

void AELSSHorse::OnMovementPreUpdated_Implementation() {
}

void AELSSHorse::OnGetOnEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSHorse::OnGetOnBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AELSSHorse::OnBeginOverlapBreakObject(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AELSSHorse::NeighMulticast_Implementation(FVector_NetQuantize10 InLocation) {
}

void AELSSHorse::NeighAttack(const FSSHorseAttackInfo& inAttackInfo) {
}

bool AELSSHorse::IsOverturn() const {
    return false;
}

UPrimitiveComponent* AELSSHorse::GetVehicleOwnerCollision() const {
    return NULL;
}

AELSSPlayer* AELSSHorse::GetVehicleOwner() const {
    return NULL;
}

void AELSSHorse::GetOff_Multicast_Implementation(AELSSPlayer* Player, uint32 TransitId) {
}

int32 AELSSHorse::GetCurrentFloorPhysicalSurfaceType(bool inRearFootTrace) const {
    return 0;
}

FTransform AELSSHorse::GetAttachRelativeTransform() const {
    return FTransform{};
}

bool AELSSHorse::DetachFromVehicle(AActor* Other, bool damaged) {
    return false;
}

void AELSSHorse::CorrectDetachedOwner(AActor* inVehicleOwner, bool damaged) {
}

void AELSSHorse::ClearNeighAttack() {
}

bool AELSSHorse::CheckAllowPawnControll(bool ignoreDamagedState) const {
    return false;
}

bool AELSSHorse::CanGetOn() const {
    return false;
}

bool AELSSHorse::CanGetOff() const {
    return false;
}

bool AELSSHorse::AttachToVehicle(AActor* Other) {
    return false;
}

int32 AELSSHorse::AddDurabilityByRate(float Rate) {
    return 0;
}

int32 AELSSHorse::AddDurability(int32 Value) {
    return 0;
}

void AELSSHorse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSHorse, ForwardYaw);
    DOREPLIFETIME(AELSSHorse, BackMoving);
    DOREPLIFETIME(AELSSHorse, VehicleOwner);
    DOREPLIFETIME(AELSSHorse, RemainDurability);
}

AELSSHorse::AELSSHorse() {
    this->GetOffLocation = CreateDefaultSubobject<USceneComponent>(TEXT("GetOffLocation"));
    this->HitCollision_1 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HitCollision_1"));
    this->HitCollision_2 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HitCollision_2"));
    this->GetOnCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("GetOnCollision"));
    this->RunOverCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RunOverCollision"));
    this->PhysicsOverlapDetectionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PhysicsOverlapDetectionCollision"));
    this->VehicleOwnerCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("VehicleOwnerCollision"));
    this->NeighAttackCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("NeighAttackCollision"));
    this->ForwardYaw = 0.00f;
    this->BackMoving = false;
    this->VehicleOwner = NULL;
    this->GetOffCheckOffsetVertical = 300.00f;
    this->GetOffCheckOffsetHorizontal = 300.00f;
    this->SoundCue_Hit = NULL;
    this->FootStepTraceDistance = 150.00f;
    this->FootStepFrontOffset = 50.00f;
    this->FootStepRearOffset = -130.00f;
    this->RemoveDamageToVehicleOwnerMoveId = 0;
    this->RemainDurability = 0;
    this->MaxDurability = 100;
    this->ClashImpulseSize = 1000.00f;
    this->ReduceDurabilityValueWhenClash = 20;
    this->IsEnableRunOver = false;
    this->RunOverSpeed = 30.00f;
    this->ReduceDurabilityValueWhenRunOver = 20;
    this->IsLockInputBrake = false;
    this->LimitActionSpeed = 300.00f;
    this->NeighMontage = NULL;
    this->NeighCharaMontage = NULL;
    this->NeighMoveId = 0;
    this->ReserveActionTimeMax = 3.00f;
    this->ReserveAction = ESSHorseAction::None;
    this->ReserveActionRemainTime = 0.00f;
}

