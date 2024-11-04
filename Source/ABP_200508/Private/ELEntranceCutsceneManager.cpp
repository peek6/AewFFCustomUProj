#include "ELEntranceCutsceneManager.h"
#include "ELEntranceCutsceneDataManager.h"

FELEntranceCutsceneInfo AELEntranceCutsceneManager::UpdateDefaultEntranceFlag(const FELEntranceCutsceneInfo& CutsceneInfo, const FELWrestlerProfile_CutScene& CustomData, UDataTable* TeamParamDataTable, bool CAE) {
    return FELEntranceCutsceneInfo{};
}

bool AELEntranceCutsceneManager::SwitchParticles(int32 Index, UParticleSystem* ParticleSystem, USceneComponent* SceneComp, const TArray<FELEntranceCutsceneEmitterData>& Emitters, USoundAtomCue* OnCue, USoundAtomCue* OffCue) {
    return false;
}

void AELEntranceCutsceneManager::StartParticles(int32 Index, USceneComponent* SceneComp) {
}

void AELEntranceCutsceneManager::StartDropObject(UClass* DropObject, FVector BaseLocation, USoundAtomCue* OnCue) {
}

void AELEntranceCutsceneManager::SkipScene() {
}

TArray<AActor*> AELEntranceCutsceneManager::SetupBGModelsForEditor(UObject* WorldContextObject, UDataTable* BGModelData, int32 GroupId) {
    return TArray<AActor*>();
}

void AELEntranceCutsceneManager::SetSceneCaptureOnly(bool Flag) {
}

void AELEntranceCutsceneManager::SetReverseEntrance(bool Reverse) {
}

void AELEntranceCutsceneManager::SetFullScreenTitantron(bool Flag) {
}

void AELEntranceCutsceneManager::SetCastInfo(int32 CastID, AELCharacter_Native* Character, USkeletalMeshComponent* MeshComponent) {
}

ALevelSequenceActor* AELEntranceCutsceneManager::RequestPlayLevelSequence(const FELEntranceCutsceneInfo& CutsceneInfo) {
    return NULL;
}

void AELEntranceCutsceneManager::PlayFingerSignMontage(UAnimInstance* AnimInstance) {
}





void AELEntranceCutsceneManager::OnFullScreenTitantron_N_Implementation(bool Flag) {
}


void AELEntranceCutsceneManager::OnFinishedEvent() {
}


void AELEntranceCutsceneManager::MoviePlayerEvent(EMoviePlayerEvent EventType, UELMoviePlayerBase* MoviePlayerBase) {
}

void AELEntranceCutsceneManager::MakeComponentList(TArray<AActor*> SceneActors) {
}

bool AELEntranceCutsceneManager::LoadAssetForTag(const FELWrestlerProfile_CutScene& CustomData, const FELEntranceCutsceneInfo& CutsceneInfo) {
    return false;
}

bool AELEntranceCutsceneManager::LoadAssetForSingle(const FELWrestlerProfile_CutScene& CustomData, const FELEntranceCutsceneInfo& CutsceneInfo) {
    return false;
}

bool AELEntranceCutsceneManager::IsReverseEntrance() const {
    return false;
}

bool AELEntranceCutsceneManager::IsNowLoading() const {
    return false;
}

bool AELEntranceCutsceneManager::IsEnableInputEvent(const FKey& Key) const {
    return false;
}

void AELEntranceCutsceneManager::InputEvent_CameraZoomUpKey_Released() {
}

void AELEntranceCutsceneManager::InputEvent_CameraZoomUpKey_Pressed() {
}

void AELEntranceCutsceneManager::InputEvent_CameraZoomUp(float Axis) {
}

void AELEntranceCutsceneManager::InputEvent_CameraZoomOutKey_Released() {
}

void AELEntranceCutsceneManager::InputEvent_CameraZoomOutKey_Pressed() {
}

void AELEntranceCutsceneManager::InputEvent_CameraZoomOut(float Axis) {
}


TArray<EELBeltAttachPosition> AELEntranceCutsceneManager::GetUseBeltAttachPosition() {
    return TArray<EELBeltAttachPosition>();
}

int32 AELEntranceCutsceneManager::GetScreenFilterDataTableID(int32 Index) const {
    return 0;
}

EELEntranceCamera_ChameleonEffectType AELEntranceCutsceneManager::GetScreenFilter(int32 Index) const {
    return EELEntranceCamera_ChameleonEffectType::None;
}

void AELEntranceCutsceneManager::GetRootLocationAndRotation(FVector& Location, FRotator& Rotation) {
}

void AELEntranceCutsceneManager::GetReverseLocationAndRotation(FVector InLocation, FRotator InRotation, FVector& Location, FRotator& Rotation) {
}

void AELEntranceCutsceneManager::GetProfileCutsceneFromUnlockItemID(int32 UnlockItemId, int32 BaseEntranceNo, FELWrestlerProfile_CutScene& Cutscene, EELEntranceCutsceneItemType& ItemType) {
}

bool AELEntranceCutsceneManager::GetParticle(int32 Index, UParticleSystem*& ParticleSystem, bool& SwitchType, TArray<UClass*>& DropObjects, TArray<FELEntranceCutsceneEmitterData>& Emitters, USoundAtomCue*& OnCue, USoundAtomCue*& OffCue, int32& DataTableID) {
    return false;
}

int32 AELEntranceCutsceneManager::GetMusicIndex() {
    return 0;
}




void AELEntranceCutsceneManager::GetMatchRecord_Team(const TArray<FELEntranceCutsceneWrestlerInfo> Members, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord) {
}

void AELEntranceCutsceneManager::GetMatchRecord_TagTeam(const TArray<FELEntranceCutsceneWrestlerInfo> Members, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord) {
}

void AELEntranceCutsceneManager::GetMatchRecord_Tag(EWrestlerID_N WreslterID, FGuid UID, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord) {
}

void AELEntranceCutsceneManager::GetMatchRecord_Single(EWrestlerID_N WreslterID, FGuid UID, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord) {
}

UAnimMontage* AELEntranceCutsceneManager::GetManagerMontage(FVector& Location, FRotator& Rotation) {
    return NULL;
}

void AELEntranceCutsceneManager::GetEntranceSceneCastActor(UObject* WorldContextObject, AActor*& Actor, const int32 CastID) {
}

EDisplayButtonIconType AELEntranceCutsceneManager::GetEntranceHUDButtonType(const FELEntranceCutsceneInfo& CutsceneInfo) const {
    return EDisplayButtonIconType::Gamepad;
}


void AELEntranceCutsceneManager::GetAnimMontage(TArray<UAnimMontage*>& AnimMontages, TArray<int32>& CastIDs) {
}

void AELEntranceCutsceneManager::DisableLookAtWrestler() {
}

void AELEntranceCutsceneManager::DestroyAssets() {
}


void AELEntranceCutsceneManager::AssetLoadCompleteEvent() {
}

AELEntranceCutsceneManager::AELEntranceCutsceneManager() {
    this->EntranceCutsceneAnimationData = NULL;
    this->EntranceCutsceneMultiBeltAnimationData = NULL;
    this->EntranceCutsceneParticleData = NULL;
    this->EntranceCutsceneBGModelData = NULL;
    this->EntranceCutsceneManagerAnimationData = NULL;
    this->EntranceCutsceneFingerSignData = NULL;
    this->EntranceCutsceneScreenFilterData = NULL;
    this->EntranceCutsceneMusicData = NULL;
    this->EntranceCutsceneWrestlerSettingsData = NULL;
    this->EntranceCutsceneBeltAttachOffset = NULL;
    this->EntranceCutsceneManagerParam = NULL;
    this->DataManager = CreateDefaultSubobject<UELEntranceCutsceneDataManager>(TEXT("DataManager"));
    this->RibbonActor = NULL;
    this->RibbonActor_R = NULL;
    this->RibbonActor_G = NULL;
    this->RibbonActor_B = NULL;
    this->RibbonActor_Y = NULL;
    this->DroppedRibbonActor = NULL;
    this->UseMovieSlotForTitantron = 0;
    this->SequenceIndex_N = 0;
    this->LastFadeDuration = 0.00f;
    this->bEnabledInput = true;
    this->LevelSequenceActor = NULL;
    this->DroppedRibbonInstance = NULL;
}

