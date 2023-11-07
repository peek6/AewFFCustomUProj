#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttireData.h"
#include "AttireExParam.h"
#include "AttireParam.h"
#include "CostumeParam.h"
#include "EBasicWrestlerIntParamType.h"
#include "EEditPartsSlot.h"
#include "EEditTexTarget.h"
#include "EFaceType.h"
#include "EditColorPack.h"
#include "EditColorParam.h"
#include "EditPaintData.h"
#include "EditPaintParam.h"
#include "EditPartsCategoryDetails.h"
#include "EditPartsCategoryName.h"
#include "EditPartsData.h"
#include "EditPartsParam.h"
#include "EditPersonParam.h"
#include "MyWrestlerDataEditComponent.h"
#include "NamedPresetParam.h"
#include "EAttireType.h"
#include "EBasicFindResult.h"
#include "EBasicFunctionResult.h"
#include "EGender.h"
#include "EPreviewAttire.h"
#include "EWrestlerID_N.h"
#include "IndexedColorList.h"
#include "AttireDataSet.h"
#include "EScoutWrestlerTemplateOption.h"
#include "EditPartsKey.h"
#include "OnAssetLoadFinishedDelegateDelegate.h"
#include "CustomWrestlerAssistComponent.generated.h"

class UEditWrestlerPaintAsset;
class UEditWrestlerPartsAsset;
class UMyWrestlerDataObject;
class UObject;
class USkeletalMesh;
class UTemplateScoutAsset;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELITE_API UCustomWrestlerAssistComponent : public UMyWrestlerDataEditComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPresetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PresetNameLimit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FEditPartsCategoryName> IgnoreCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAttireDataSet TemporaryAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAttireDataSet PreviewAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAttireType CurrentAttireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreviewBodyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMyWrestlerDataObject* PreviewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEditPartsSlot ActivePartsSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<EEditPartsSlot> ExclusionParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* PreviewModel_Match;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* PreviewModel_Entrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* PreviewModel_Plain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCostumeParam RosterPreviewCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEditPartsSlot, FEditPartsData> BodyPreviewAttire_Male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEditPartsSlot, FEditPartsData> BodyPreviewAttire_Female;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAssetLoadFinishedDelegate OnAssetLoadFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAssetLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FEditPartsKey, TSoftObjectPtr<UEditWrestlerPartsAsset>> LoadingPartsCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FEditPartsKey, TSoftObjectPtr<UEditWrestlerPaintAsset>> LoadingPaintCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CachedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMyWrestlerDataObject* OriginalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PoseTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath FightStyleTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath WeaponTablePath;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMyWrestlerDataObject* EditingData;
    
    UCustomWrestlerAssistComponent();
    UFUNCTION(BlueprintCallable)
    void ValidateFaceType(EFaceType& NowFaceType);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewPersonParam(const EBasicWrestlerIntParamType ParamType, const int32 NewValue, const bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePresetName(const int32 Preset, const FString& NewPresetName);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePartsColors(const EEditPartsSlot PartsSlot, const EAttireType AttireType, const FIndexedColorList ColorIDs, const bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePartsColor(const EEditPartsSlot PartsSlot, const EAttireType AttireType, const int32 ColorSlotNo, const int32 NewColorID, const bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePartsAttire(const EPreviewAttire PreviewAttireType, const EEditPartsSlot PartsSlot, const FEditPartsParam& NewParam, const bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePaintColors(const EEditTexTarget PaintSlot, const EAttireType AttireType, const FIndexedColorList ColorIDs, const bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePaintColor(const EEditTexTarget PaintSlot, const EAttireType AttireType, const int32 ColorSlotNo, const int32 NewColorID, const bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePaintAttire(const EPreviewAttire PreviewAttireType, const EEditTexTarget PaintSlot, const FEditPaintParam& NewParam, const bool bPreview);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateIgnoreCategories(const TSet<FEditPartsCategoryName> NewSet);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateAssetLoadingStatus();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWrestlerName(const FString& UpperName, const FString& LowerName);
    
    UFUNCTION(BlueprintCallable)
    void SetSnsName(const FString& SNSName);
    
    UFUNCTION(BlueprintCallable)
    void SetShortName(const FString& ShortName);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewBodyMode(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewAttire(const EPreviewAttire AttireType, const FAttireData NewAttireData);
    
    UFUNCTION(BlueprintCallable)
    bool SetPreset(const FNamedPresetParam& NewPreset, const int32 PresetNo, const bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonParam(const EBasicWrestlerIntParamType ParamType, const int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNickName(const FString& NickName);
    
    UFUNCTION(BlueprintCallable)
    void SetEditAttireExParam(const EPreviewAttire AttireType, const FAttireExParam& NewParam, int32 PresetNo);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAttireType(const EAttireType NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreset(bool& bChanged, const int32 NewPresetNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaceType SearchFaceType(const int32 PartsID) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetTemporaryAttire();
    
    UFUNCTION(BlueprintCallable)
    void ResetPreviewAttire();
    
    UFUNCTION(BlueprintCallable)
    void ResetPersonParam();
    
    UFUNCTION(BlueprintCallable)
    void ResetModify();
    
    UFUNCTION(BlueprintCallable)
    void RemovePreviewPartsData(const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot);
    
    UFUNCTION(BlueprintCallable)
    void RemovePreviewPaintData(const EPreviewAttire AttireType, const EEditTexTarget PaintSlot);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePreset(const int32 TargetPresetIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEditPartsParam(const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot, int32 PresetNo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEditPaintParam(const EPreviewAttire PreviewAttireType, const EEditTexTarget PaintSlot, int32 PresetNo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttires(const EAttireType AttireType, const TSet<EEditPartsSlot>& PartsSlot);
    
    UFUNCTION(BlueprintCallable)
    void RelocateFacialParts(const int32 PartsID, const bool bPreview);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PostLoad_EditPartsAsset(const FEditPartsKey& Key, UEditWrestlerPartsAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void PostLoad_EditPaintAsset(const FEditPartsKey& Key, UEditWrestlerPaintAsset* Asset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartCustomize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReset(UMyWrestlerDataObject* NewData, const int32 PresetNo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelocateFacialParts(const EFaceType NewFaceType, const EFaceType PrevFaceType, const bool bPreview);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadFinished_EditParts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadFinished_EditPaints();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishCustomize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCompleteAssetLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSet<FEditPartsCategoryName> MakeIgnoreCategories(const EWrestlerID_N WrestlerID, const EGender Gender);
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeColorPacks(const TArray<FEditColorParam>& ColorPallet, TArray<FEditColorPack>& Out);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadEditPartsAssets();
    
    UFUNCTION(BlueprintCallable)
    void LoadEditPaintsAssets();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsModify();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayHomeTown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayBirthday() const;
    
    UFUNCTION(BlueprintCallable)
    void GetWrestlerProfilesTexts(FText& WrestlerNameText, FText& WrestlerSnsText, FText& WeightText, FText& HeightText, FText& HomeTownText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWrestlerNameText(FText& WrestlerName, const bool bUpper) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWrestlerName(FString& UpperName, FString& LowerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetWrestlerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUID(FGuid& UID) const;
    
    UFUNCTION(BlueprintCallable)
    void GetTemporaryAttire(const EPreviewAttire AttireType, FAttireData& AttireData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSnsNameText(FText& SNSName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSnsName(FString& SNSName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetShortNameText(FText& ShortName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetShortName(FString& ShortName) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPreviewPartsData(FEditPartsData& Out, EBasicFindResult& Result, const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot);
    
    UFUNCTION(BlueprintCallable)
    void GetPreviewPaintData(FEditPaintData& Out, EBasicFindResult& Result, const EPreviewAttire AttireType, const EEditTexTarget PaintSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPreviewCoordinate(const EAttireType AttireType, FAttireData& CoordinateData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPreviewAttireConst(const EPreviewAttire AttireType, FAttireData& AttireData) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPreviewAttire(const EPreviewAttire AttireType, FAttireData& AttireData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPresetNames(TArray<FString>& Out) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPreset(FNamedPresetParam& Preset, const int32 PresetNo, const bool bPreview);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPersonParam(int32& Out, const EBasicWrestlerIntParamType ParamType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNickNameText(FText& NickName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNickName(FString& NickName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGender(EGender& Gender) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFaceType(EFaceType& FaceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEditPerson(FEditPersonParam& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetEditPartsParam(FEditPartsParam& Out, const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot, int32 PresetNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetEditPaintParam(FEditPaintParam& Out, const EPreviewAttire AttireType, const EEditTexTarget PaintSlot, int32 PresetNo) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEditAttireParam(const EPreviewAttire AttireType, FAttireParam& Out, int32 PresetNo);
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentPreset(FNamedPresetParam& Preset, const bool bPreview);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttireType GetCurrentAttireType() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAssetCompatibleData(TSet<EEditPartsSlot>& SomeUnpossible, TSet<EEditPartsSlot>& AllUnpossible, UEditWrestlerPartsAsset* Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAllEquippedPartsIDs(TArray<int32>& EquippedPartsIDs) const;
    
    UFUNCTION(BlueprintCallable)
    void CopyAttire(const EPreviewAttire AttireType, const bool bRevert);
    
    UFUNCTION(BlueprintCallable)
    void CopyAllAttire(const bool bRevert);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllLoadCue();
    
    UFUNCTION(BlueprintCallable)
    void CheckModify();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckFinishLoadEditParts();
    
    UFUNCTION(BlueprintCallable)
    bool CheckFinishLoadEditPaints();
    
    UFUNCTION(BlueprintCallable)
    void CheckFinishedAssetLoad(const bool bWithNotStarted);
    
    UFUNCTION(BlueprintCallable)
    void CheckCompatiableImpl(const FAttireData& CoordinateData, const FEditPartsCategoryDetails& EditPartsCategoryDetails, TSet<EEditPartsSlot>& EquippedParts, TSet<EEditPartsSlot>& IncompatiableParts);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditStreetClothes() const;
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* ApplyTemplateData(UMyWrestlerDataObject* TargetObject, UTemplateScoutAsset* TemplateScoutAsset, const EScoutWrestlerTemplateOption Option, EBasicFunctionResult& resultType);
    
    UFUNCTION(BlueprintCallable)
    void AddPreviewPartsData(const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot, const FEditPartsData& NewData);
    
    UFUNCTION(BlueprintCallable)
    void AddPreviewPaintData(const EPreviewAttire AttireType, const EEditTexTarget PaintSlot, const FEditPaintData& NewData);
    
    UFUNCTION(BlueprintCallable)
    void AddNewPreset(FString& NewPresetName, int32& NewIndex, const int32 SourcePresetIndex, const bool bCopy);
    
    UFUNCTION(BlueprintCallable)
    void AddLoadEditPartsAsset(const EPreviewAttire InAttire, const EEditPartsSlot InSlot, const TSoftObjectPtr<UEditWrestlerPartsAsset>& Asset);
    
    UFUNCTION(BlueprintCallable)
    void AddLoadEditPaintsAsset(const EPreviewAttire InAttire, const EEditTexTarget InSlot, const TSoftObjectPtr<UEditWrestlerPaintAsset>& Asset);
    
    UFUNCTION(BlueprintCallable)
    void AddEditPartsParam(const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot, const FEditPartsParam& NewParam, int32 PresetNo);
    
    UFUNCTION(BlueprintCallable)
    void AddEditPaintParam(const EPreviewAttire AttireType, const EEditTexTarget PaintSlot, const FEditPaintParam& NewParam, int32 PresetNo);
    
};

