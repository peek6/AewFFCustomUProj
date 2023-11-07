#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttireExParam.h"
#include "AttireParam.h"
#include "BodyAdjustParam.h"
#include "CostumeParam.h"
#include "CustomDataInfo.h"
#include "EBasicWrestlerIntParamType.h"
#include "EFaceType.h"
#include "EditBodyParam.h"
#include "EditWrestlerParam.h"
#include "EditWrestlerSettings.h"
#include "NamedPresetParam.h"
#include "PresetParam.h"
#include "RosterInfoParam.h"
#include "WrestlerMoves.h"
#include "WrestlerSetupParam.h"
#include "EGender.h"
#include "WrestlerNameText.h"
#include "ELMatchRecordsWrestlerInfo.h"
#include "ELWrestlerNameProfileParam.h"
#include "ELWrestlerProfile_CutScene.h"
#include "HomeTownID.h"
#include "PersonalityParam.h"
#include "WrestlerDataObjectBase.h"
#include "WrestlingSkillParam.h"
#include "EWrestlerDataGamePlayFlag.h"
#include "MyWrestlerDataObject.generated.h"

class UDataTable;
class UMyWrestlerDataObject;
class UObject;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ABP_200508_API UMyWrestlerDataObject : public UWrestlerDataObjectBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedValue, UObject*, Object);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PresetUnlockID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam ScoutPlainAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeParam RosterPlainAttire;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Thumbnails;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MatchUpTexture;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTexture> MatchUpTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GamePlayFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMatchRecordsWrestlerInfo MatchRecordsWrestlerInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditWrestlerParam MyWrestler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditWrestlerSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomDataInfo CustomDataInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedValue OnChangedValue;
    
    UMyWrestlerDataObject();
    UFUNCTION(BlueprintCallable)
    void UpdatePresetAttireExParamForDLCLocking(bool IsEntrance, int32 PresetIndex, const FAttireExParam& AttireExParam);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreset(const int32 Index, const FPresetParam& NewParam);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillParam(const FWrestlingSkillParam& NewParam);
    
    UFUNCTION(BlueprintCallable)
    bool SetPresetName(const int32 Index, const FString& NewNameString);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonParam(const EBasicWrestlerIntParamType ParamType, const int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonalityParam(const FPersonalityParam& NewParam);
    
    UFUNCTION(BlueprintCallable)
    void SetMovesParam(const FWrestlerMoves& NewMoves, bool& _IsChanged);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchupThumb(UTextureRenderTarget2D* TextureRenderTarget2D);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchupPose(const int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHomeTown(const FHomeTownID& NewParam);
    
    UFUNCTION(BlueprintCallable)
    void SetEntranceParam(const FELWrestlerProfile_CutScene& NewEntrance);
    
    UFUNCTION(BlueprintCallable)
    int32 SetDefaultPresetNo(const int32& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultAttire(const FAttireParam& Attire);
    
    UFUNCTION(BlueprintCallable)
    void ResetPersonParam();
    
    UFUNCTION(BlueprintCallable)
    void ResetDefaultScout(const EGender Gender);
    
    UFUNCTION(BlueprintCallable)
    void Reset(const FEditWrestlerParam& NewParam);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePreset(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLockedPartsFromScout(UDataTable* EditPartsTable, UDataTable* EditPaintTable);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLockedPartsFromRoster(UDataTable* EditPartsTable, UDataTable* EditPaintTable);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGamePlayFlag(const EWrestlerDataGamePlayFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseMatchupTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void MakeWrestlerSetupParam(const int32 PresetIndex, FWrestlerSetupParam& Out, const bool bPlainAttire) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void MakeBodyParam(FEditBodyParam& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayHomeTown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayBirthday() const;
    
    UFUNCTION(BlueprintCallable)
    void InitScoutPlainAttire(const FAttireParam& NewAttire);
    
    UFUNCTION(BlueprintCallable)
    void InitRosterPlainAttire(const FCostumeParam& NewAttire);
    
    UFUNCTION(BlueprintCallable)
    void InitPresets(const TArray<FNamedPresetParam>& Src);
    
    UFUNCTION(BlueprintCallable)
    void ImportWrestlerNameByELWrestler(const FELWrestlerNameProfileParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void ImportPersonInfoData(const FRosterInfoParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void ImportFromSetupData(const FWrestlerSetupParam& Param, const bool bProfiles, const int32 AttireOfPresetNo, const bool bMoves, const bool bEntrance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGamePlayFlag(const EWrestlerDataGamePlayFlag Flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWrestlerNameText(FText& Out, const bool bUpper) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWrestlerNameText GetWrestlerNameParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWrestlerMultilineNameText(FText& Out, const bool bUpper) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWeightText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeightRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSnsNameText(FText& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkillParam(FWrestlingSkillParam& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetShortNameText(FText& Out, const bool bUpper) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRosterPlainAttireIDList(TArray<int32>& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRosterMatchAttireIDList(TArray<int32>& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPresetNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPresetNameList(TArray<FString>& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPresetName(const int32 Index, FString& Out) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPresetIndexByName(const FString& PresetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPresetByName(const FString& Name, FPresetParam& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPresetByIndex(const int32 Index, FPresetParam& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPersonParam(const EBasicWrestlerIntParamType ParamType, int32& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPersonalityParam(FPersonalityParam& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNickNameText(FText& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMuscleRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMovesParam(FWrestlerMoves& Out) const;
    
    UFUNCTION(BlueprintCallable)
    void GetMatchupTexture(UTexture*& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMatchupPose(int32& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHomeTown(FHomeTownID& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHeightWeightClaims() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHeightText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeightRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFaceType(EFaceType& FaceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEntranceParam(FELWrestlerProfile_CutScene& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultPresetNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDefaultAttire(FAttireParam& Out) const;
    
    UFUNCTION(BlueprintCallable)
    void GetCloneObject(UMyWrestlerDataObject*& Out, UObject* NewOuter);
    
    UFUNCTION(BlueprintCallable)
    FText GetBirthDayText(bool isHideBirthDay);
    
    UFUNCTION(BlueprintCallable)
    void GetBirthDay(int32& Month, int32& Day);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBodyAdjustParam GetAdjustBodyParam() const;
    
    UFUNCTION(BlueprintCallable)
    int32 FindPresetIndex(const FString& NameString);
    
    UFUNCTION(BlueprintCallable)
    void FindPresetByName(const FString& NameString, int32& OutIndex, FPresetParam& OutParam);
    
private:
    UFUNCTION(BlueprintCallable)
    void FinalizeBodyParam();
    
public:
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    void ExportJson();
    
    UFUNCTION(BlueprintCallable)
    static UMyWrestlerDataObject* CreateScoutWrestlerDataObject(const FEditWrestlerParam& NewParam);
    
    UFUNCTION(BlueprintCallable)
    static UMyWrestlerDataObject* CreateNewWrestlerDataObject(const FGuid CreateUID);
    
    UFUNCTION(BlueprintCallable)
    static UMyWrestlerDataObject* CreateGuestRosterDataObject(const FRosterInfoParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static UMyWrestlerDataObject* CreateDefaultRosterDataObject(const FRosterInfoParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void ClearGamePlayStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CheckAvailablePresetNum() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeOuter(UObject* NewOuter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditStreetClothes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddPreset() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddPreset(const int32 SrcIndex, const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void AddGamePlayFlag(const EWrestlerDataGamePlayFlag Flag);
    
};

