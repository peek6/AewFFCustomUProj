#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CharacterModelName.h"
#include "EELBelt.h"
#include "EELEntranceCamera_ChameleonEffectType.h"
#include "ELWrestlerProfile_CutScene.h"
#include "EWrestlerID_N.h"
#include "InputCoreTypes.h"
#include "EDisplayButtonIconType.h"
#include "EELBeltAttachPosition.h"
#include "EELEntranceCutsceneBeltPositionType.h"
#include "EELEntranceCutsceneItemType.h"
#include "ELEntranceCutsceneEmitterData.h"
#include "ELEntranceCutsceneInfo.h"
#include "ELEntranceCutsceneWrestlerInfo.h"
#include "ELNetPawn.h"
#include "EMoviePlayerEvent.h"
#include "EntranceCutsceneCameraFadeDelegate.h"
#include "Templates/SubclassOf.h"
#include "ELEntranceCutsceneManager.generated.h"

class AActor;
class AELCharacter_Native;
class ALevelSequenceActor;
class ARibbonBase;
class ASkeletalMeshActor;
class AStaticMeshActor;
class UAnimInstance;
class UAnimMontage;
class UDataTable;
class UELEntranceCutsceneDataManager;
class UELMoviePlayerBase;
class UObject;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class ABP_200508_API AELEntranceCutsceneManager : public AELNetPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneMultiBeltAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneParticleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneBGModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneManagerAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneFingerSignData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneScreenFilterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneMusicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneWrestlerSettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneBeltAttachOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntranceCutsceneManagerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELEntranceCutsceneDataManager* DataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARibbonBase> RibbonActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARibbonBase> RibbonActor_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARibbonBase> RibbonActor_G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARibbonBase> RibbonActor_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARibbonBase> RibbonActor_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DroppedRibbonActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseMovieSlotForTitantron;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntranceCutsceneCameraFade OnCameraFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELEntranceCutsceneInfo> CutsceneList_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceIndex_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EELEntranceCutsceneBeltPositionType> BeltPositionTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EELEntranceCutsceneBeltPositionType> BeltPositionThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EELEntranceCutsceneBeltPositionType> BeltPositionFour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EELEntranceCutsceneBeltPositionType> BeltPositionFive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELWrestlerProfile_CutScene CurrentProfile_Cutscene;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> ParticleSystemComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> BGModel_SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> BGModel_StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BGModelActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DroppedRibbonInstance;
    
public:
    AELEntranceCutsceneManager();
protected:
    UFUNCTION(BlueprintCallable)
    FELEntranceCutsceneInfo UpdateDefaultEntranceFlag(const FELEntranceCutsceneInfo& CutsceneInfo, const FELWrestlerProfile_CutScene& CustomData, UDataTable* TeamParamDataTable, bool CAE);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchParticles(int32 Index, UParticleSystem* ParticleSystem, USceneComponent* SceneComp, const TArray<FELEntranceCutsceneEmitterData>& Emitters, USoundAtomCue* OnCue, USoundAtomCue* OffCue);
    
    UFUNCTION(BlueprintCallable)
    void StartParticles(int32 Index, USceneComponent* SceneComp);
    
    UFUNCTION(BlueprintCallable)
    void StartDropObject(UClass* DropObject, FVector BaseLocation, USoundAtomCue* OnCue);
    
    UFUNCTION(BlueprintCallable)
    void SkipScene();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> SetupBGModelsForEditor(UObject* WorldContextObject, UDataTable* BGModelData, int32 GroupId);
    
    UFUNCTION(BlueprintCallable)
    void SetSceneCaptureOnly(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetReverseEntrance(bool Reverse);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFullScreenTitantron(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCastInfo(int32 CastID, AELCharacter_Native* Character, USkeletalMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    ALevelSequenceActor* RequestPlayLevelSequence(const FELEntranceCutsceneInfo& CutsceneInfo);
    
    UFUNCTION(BlueprintCallable)
    void PlayFingerSignMontage(UAnimInstance* AnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayedLevelSequence_Impl(float InSceneDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPausedLevelSequence_Impl(float PauseDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadedAssets_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLastFadeSequence_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFullScreenTitantron_N(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedSequence_Impl();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyedAssets_Impl();
    
private:
    UFUNCTION(BlueprintCallable)
    void MoviePlayerEvent(EMoviePlayerEvent EventType, UELMoviePlayerBase* MoviePlayerBase);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MakeComponentList(TArray<AActor*> SceneActors);
    
    UFUNCTION(BlueprintCallable)
    bool LoadAssetForTag(const FELWrestlerProfile_CutScene& CustomData, const FELEntranceCutsceneInfo& CutsceneInfo);
    
    UFUNCTION(BlueprintCallable)
    bool LoadAssetForSingle(const FELWrestlerProfile_CutScene& CustomData, const FELEntranceCutsceneInfo& CutsceneInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReverseEntrance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNowLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableInputEvent(const FKey& Key) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void InputEvent_CameraZoomUpKey_Released();
    
    UFUNCTION(BlueprintCallable)
    void InputEvent_CameraZoomUpKey_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void InputEvent_CameraZoomUp(float Axis);
    
    UFUNCTION(BlueprintCallable)
    void InputEvent_CameraZoomOutKey_Released();
    
    UFUNCTION(BlueprintCallable)
    void InputEvent_CameraZoomOutKey_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void InputEvent_CameraZoomOut(float Axis);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputEvent_CameraZoom(float ZoomUp, float ZoomOut);
    
    UFUNCTION(BlueprintCallable)
    TArray<EELBeltAttachPosition> GetUseBeltAttachPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScreenFilterDataTableID(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELEntranceCamera_ChameleonEffectType GetScreenFilter(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void GetRootLocationAndRotation(FVector& Location, FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void GetReverseLocationAndRotation(FVector InLocation, FRotator InRotation, FVector& Location, FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void GetProfileCutsceneFromUnlockItemID(int32 UnlockItemId, int32 BaseEntranceNo, FELWrestlerProfile_CutScene& Cutscene, EELEntranceCutsceneItemType& ItemType);
    
    UFUNCTION(BlueprintCallable)
    bool GetParticle(int32 Index, UParticleSystem*& ParticleSystem, bool& SwitchType, TArray<UClass*>& DropObjects, TArray<FELEntranceCutsceneEmitterData>& Emitters, USoundAtomCue*& OnCue, USoundAtomCue*& OffCue, int32& DataTableID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMusicIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetMoviePath(FString& MoviePath, int32 MovieDataID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetMovieNumber(int32 UnlockItemId, int32& Number);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetModelName_Impl(FCharacterModelName& ModelName, const FELEntranceCutsceneWrestlerInfo& WrestlerInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void GetMatchRecord_Team(const TArray<FELEntranceCutsceneWrestlerInfo> Members, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord);
    
    UFUNCTION(BlueprintCallable)
    void GetMatchRecord_TagTeam(const TArray<FELEntranceCutsceneWrestlerInfo> Members, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord);
    
    UFUNCTION(BlueprintCallable)
    void GetMatchRecord_Tag(EWrestlerID_N WreslterID, FGuid UID, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord);
    
    UFUNCTION(BlueprintCallable)
    void GetMatchRecord_Single(EWrestlerID_N WreslterID, FGuid UID, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetManagerMontage(FVector& Location, FRotator& Rotation);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetEntranceSceneCastActor(UObject* WorldContextObject, AActor*& Actor, const int32 CastID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDisplayButtonIconType GetEntranceHUDButtonType(const FELEntranceCutsceneInfo& CutsceneInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCAWMeshList_Impl(TArray<TSoftObjectPtr<UObject>>& AssetList, const FELEntranceCutsceneWrestlerInfo& WrestlerInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void GetAnimMontage(TArray<UAnimMontage*>& AnimMontages, TArray<int32>& CastIDs);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableLookAtWrestler();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyAssets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void AttachBeltToWaist_Impl(EELBelt Belt) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void AssetLoadCompleteEvent();
    
};

