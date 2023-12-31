#include "ELSSItemManager.h"
#include "Templates/SubclassOf.h"

TArray<AActor*> AELSSItemManager::SpawnSpecifiedNumFromItemBox(ESSItemBoxType inItemBoxType, int32 inSpawnNum, const FVector& InLocation, const FRotator& InRotation) {
    return TArray<AActor*>();
}

AActor* AELSSItemManager::SpawnPickupWeaponObject(int32 inDatabaseId, const FVector& InLocation, const FRotator& InRotation, ESSSpawnPickupReason inReason) {
    return NULL;
}

AActor* AELSSItemManager::SpawnPickupShieldObject(int32 inDatabaseId, const FVector& InLocation, const FRotator& InRotation, ESSSpawnPickupReason inReason) {
    return NULL;
}

TArray<AActor*> AELSSItemManager::SpawnPickupObjectsFromItemBox(ESSItemBoxType inItemBoxType, const FVector& InLocation, const FRotator& InRotation) {
    return TArray<AActor*>();
}

AActor* AELSSItemManager::SpawnPickupItemObject(int32 inDatabaseId, const FVector& InLocation, const FRotator& InRotation, ESSSpawnPickupReason inReason) {
    return NULL;
}

void AELSSItemManager::SpawnItemBoxFromRound(FSSItemBoxSpawnParamForRound& inSpawnParam) {
}

void AELSSItemManager::SpawnItemBoxFromAbility(ESSItemBoxType InType, const FVector& InLocation, const FRotator& InRotation) {
}

bool AELSSItemManager::SpawnItemBox(ESSItemBoxType InType, AELSSLocator_ItemBox* inLocator, bool inSkipAnim) {
    return false;
}

void AELSSItemManager::SpawnExpItemFromAttention(AActor* inPlayerActor, int32 inExpItemLotGroupID) {
}

void AELSSItemManager::OnTickRound(const FSSRoundParam& inRoundParam, float newRoundTime, float prevRoundTime) {
}

void AELSSItemManager::OnEndRound(const FSSRoundParam& inRoundParam) {
}

void AELSSItemManager::OnBeginRound(const FSSRoundParam& inRoundParam) {
}

int32 AELSSItemManager::LotWeapon(int32 inLotGroupID, ESSRarity inRarity) {
    return 0;
}

int32 AELSSItemManager::LotSpawnNumByItemBoxType(ESSItemBoxType inItemBoxType) {
    return 0;
}

int32 AELSSItemManager::LotSpawnNum(int32 inLotGroupID) {
    return 0;
}

ESSRarity AELSSItemManager::LotRarity(int32 inLotGroupID) {
    return ESSRarity::None;
}

ESSSpawnItemCategory AELSSItemManager::LotItemCategory(int32 inLotGroupID) {
    return ESSSpawnItemCategory::None;
}

int32 AELSSItemManager::LotItem(int32 inLotGroupID, ESSSpawnItemCategory inCategory) {
    return 0;
}

void AELSSItemManager::LoadAsyncItemClasses() {
}

void AELSSItemManager::LaunchPickupObject(AActor* inPickupObject, const FVector& InVelocity, float inGravityScale, bool inCanTouchImmediate) {
}

bool AELSSItemManager::IsLoadCompleted() const {
    return false;
}


TSubclassOf<AActor> AELSSItemManager::GetPickupObjectClass(ESSSpawnItemCategory inCategory, int32 inDatabaseId) {
    return NULL;
}


FVector AELSSItemManager::CalcScatterLaunchVelocityDefault(const FRotator& inBaseRotation, int32 inSpawnNum, int32 inSpawnIndex) const {
    return FVector{};
}

FVector AELSSItemManager::CalcScatterLaunchVelocity(const FRotator& inBaseRotation, int32 inSpawnNum, int32 inSpawnIndex, float inVelocityXY, float inVelocityZ) const {
    return FVector{};
}

FVector AELSSItemManager::CalcLaunchVelocity(const FRotator& inBaseRotation, float inVelocityXY, float inVelocityZ) const {
    return FVector{};
}

FTransform AELSSItemManager::CalcAbilityItemBoxLocation_Implementation(const FVector& inOriginLocation, const FRotator& inOriginRotation) {
    return FTransform{};
}

AELSSItemManager::AELSSItemManager() {
    this->AttentionExpItem_SpawnVelocityXY = 20.00f;
    this->AttentionExpItem_SpawnVelocityZ = -1200.00f;
    this->AttentionExpItem_GravityScale = 2.00f;
    this->WeaponClass = NULL;
    this->WeaponMeleeClass = NULL;
    this->WeaponGunClass = NULL;
    this->WeaponThrowClass = NULL;
    this->WeaponTrapClass = NULL;
    this->ShieldClass = NULL;
    this->DefaultSpawnVelocityXY = 300.00f;
    this->DefaultSpawnVelocityZ = 60.00f;
    this->DefaultGravityScale = 1.00f;
    this->PickupCanTouchReservedTime_Attention = -1.00f;
    this->PickupCanTouchReservedTime_Gimmick = 0.30f;
    this->PickupCanTouchReservedTime_ItemBox = 0.00f;
    this->MasterData = NULL;
    this->LotRarityParamTable = NULL;
    this->ItemBoxParamTable = NULL;
    this->TreasureBoxItemSpawnVelocityXY = 100.00f;
    this->TreasureBoxItemSpawnVelocityZ = 750.00f;
    this->TreasureBoxItemSpawnGravityScale = 2.00f;
}

