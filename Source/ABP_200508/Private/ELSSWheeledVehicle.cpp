#include "ELSSWheeledVehicle.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"


void AELSSWheeledVehicle::UpdateDamagedState(ESSWheeledVehicleDamagedState NewDamagedState) {
}

void AELSSWheeledVehicle::TryGetOff_Server_Implementation() {
}

void AELSSWheeledVehicle::TickEngineSE(float DeltaSeconds) {
}

void AELSSWheeledVehicle::TickAddAttention(float DeltaSeconds) {
}

bool AELSSWheeledVehicle::TakeExplosionDamageToVehicleOwner() {
    return false;
}

bool AELSSWheeledVehicle::TakeExplosionDamageToAny(AActor* OtherActor) {
    return false;
}

void AELSSWheeledVehicle::SuicideVehicleOwner_Implementation() {
}

void AELSSWheeledVehicle::StopEngineSE() {
}

void AELSSWheeledVehicle::StartEngineSE() {
}

void AELSSWheeledVehicle::Setup_Implementation() {
}

void AELSSWheeledVehicle::SetRemainDurability(int32 Durability) {
}

void AELSSWheeledVehicle::SetInternalVisible(bool flg) {
}

void AELSSWheeledVehicle::SetExternalVisible(bool flg) {
}

ESSWheeledVehicleDamagedState AELSSWheeledVehicle::RemainDurabilityToDamagedState() const {
    return ESSWheeledVehicleDamagedState::None;
}

void AELSSWheeledVehicle::PlayKlaxonSound() {
}

void AELSSWheeledVehicle::PlayHitEffect(const FVector& StartLoc, AActor* DamageCauser, ESSDamageReason DamageReason) {
}

void AELSSWheeledVehicle::PerformKlaxon_Multicast_Implementation() {
}

void AELSSWheeledVehicle::OnRunOverEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSWheeledVehicle::OnRunOverBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AELSSWheeledVehicle::OnRep_RemainDurability() {
}

void AELSSWheeledVehicle::OnGetOnEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSWheeledVehicle::OnGetOnBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AELSSWheeledVehicle::OnEndOverlapBreakObject(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSWheeledVehicle::OnChangeDamagedState_None_Implementation() {
}

void AELSSWheeledVehicle::OnChangeDamagedState_DamagedMax_Implementation() {
}

void AELSSWheeledVehicle::OnChangeDamagedState_DamagedLv1_Implementation() {
}

void AELSSWheeledVehicle::OnBodyHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AELSSWheeledVehicle::OnBeginOverlapBreakObject(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AELSSWheeledVehicle::IsOverturn() const {
    return false;
}

UPrimitiveComponent* AELSSWheeledVehicle::GetVehicleOwnerCollision() const {
    return NULL;
}

AELSSPlayer* AELSSWheeledVehicle::GetVehicleOwner() const {
    return NULL;
}

void AELSSWheeledVehicle::GetOff_Multicast_Implementation(AELSSPlayer* Player, uint32 TransitId) {
}

float AELSSWheeledVehicle::GetEngineRotationRatio() const {
    return 0.0f;
}

ESSWheeledVehicleDrivingPose AELSSWheeledVehicle::GetDrivingPose() const {
    return ESSWheeledVehicleDrivingPose::None;
}

void AELSSWheeledVehicle::Explosion() {
}

bool AELSSWheeledVehicle::DetachFromVehicle(AActor* Other, bool damaged) {
    return false;
}

void AELSSWheeledVehicle::CorrectDetachedOwner(AActor* inVehicleOwner) {
}

bool AELSSWheeledVehicle::CheckAllowPawnControll(bool ignoreDamagedState) const {
    return false;
}

bool AELSSWheeledVehicle::CanGetOn() const {
    return false;
}

bool AELSSWheeledVehicle::CanGetOff() const {
    return false;
}

bool AELSSWheeledVehicle::AttachToVehicle(AActor* Other) {
    return false;
}

void AELSSWheeledVehicle::ApplyExplosionDamage() {
}

int32 AELSSWheeledVehicle::AddDurabilityByRate(float Rate) {
    return 0;
}

int32 AELSSWheeledVehicle::AddDurability(int32 Value) {
    return 0;
}

void AELSSWheeledVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWheeledVehicle, VehicleOwner);
    DOREPLIFETIME(AELSSWheeledVehicle, RemainDurability);
    DOREPLIFETIME(AELSSWheeledVehicle, IsExploded);
}

AELSSWheeledVehicle::AELSSWheeledVehicle() {
    this->GetOffLocation = CreateDefaultSubobject<USceneComponent>(TEXT("GetOffLocation"));
    this->GetOnCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("GetOnCollision"));
    this->RunOverCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RunOverCollision"));
    this->PhysicsOverlapDetectionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PhysicsOverlapDetectionCollision"));
    this->VehicleOwnerCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("VehicleOwnerCollision"));
    this->PawnAvoidCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("PawnAvoidCollision"));
    this->SSVehicleMovement = NULL;
    this->VehicleOwner = NULL;
    this->GetOffCheckOffsetVertical = 300.00f;
    this->GetOffCheckOffsetHorizontal = 300.00f;
    this->DotIconBaseLocationOffsetZ = 0.00f;
    this->SoundCue_ImpactToField = NULL;
    this->SoundCue_Hit = NULL;
    this->DrivingPose = ESSWheeledVehicleDrivingPose::None;
    this->InputInvalidRangeX = 0.05f;
    this->InputInvalidRangeY = 0.00f;
    this->DefaultFrictionScale = 2.60f;
    this->SlipFrictionScale = 0.00f;
    this->EnableSlipFlag = false;
    this->damagedState = ESSWheeledVehicleDamagedState::None;
    this->RemainDurability = 0;
    this->MaxDurability = 100;
    this->ClashImpulseSize = 1000000.00f;
    this->CrashEventIntervalSec = 0.10f;
    this->CrashEventIntervalTimer = 0.00f;
    this->ReduceDurabilityValueWhenClash = 20;
    this->CrashDamageToVehicleMoveId = 0;
    this->IsEnableRunOver = false;
    this->RunOverSpeed = 30.00f;
    this->ReduceDurabilityValueWhenRunOver = 20;
    this->IsExploded = false;
    this->ExplosionDelayTime = 3.00f;
    this->ExplosionDamageRadius = 400.00f;
    this->ExplosionDamageMoveId = 0;
    this->ExplosionDamageToVehicleOwnerMoveId = 0;
    this->SoundCue_Klaxon = NULL;
    this->SoundCue_Engine = NULL;
    this->EngineRotationRatioThreshold = 0.03f;
    this->EngineRatioMin = 0.10f;
    this->AtomComponent_Engine = NULL;
    this->EngineSEUniqueId = 0;
    this->IsLockInputBrake = false;
}

