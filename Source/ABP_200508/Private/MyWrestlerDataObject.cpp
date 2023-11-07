#include "MyWrestlerDataObject.h"

void UMyWrestlerDataObject::UpdatePresetAttireExParamForDLCLocking(bool IsEntrance, int32 PresetIndex, const FAttireExParam& AttireExParam) {
}

void UMyWrestlerDataObject::UpdatePreset(const int32 Index, const FPresetParam& NewParam) {
}

void UMyWrestlerDataObject::SetSkillParam(const FWrestlingSkillParam& NewParam) {
}

bool UMyWrestlerDataObject::SetPresetName(const int32 Index, const FString& NewNameString) {
    return false;
}

void UMyWrestlerDataObject::SetPersonParam(const EBasicWrestlerIntParamType ParamType, const int32 NewValue) {
}

void UMyWrestlerDataObject::SetPersonalityParam(const FPersonalityParam& NewParam) {
}

void UMyWrestlerDataObject::SetMovesParam(const FWrestlerMoves& NewMoves, bool& _IsChanged) {
}

void UMyWrestlerDataObject::SetMatchupThumb(UTextureRenderTarget2D* TextureRenderTarget2D) {
}

void UMyWrestlerDataObject::SetMatchupPose(const int32 NewValue) {
}

void UMyWrestlerDataObject::SetHomeTown(const FHomeTownID& NewParam) {
}

void UMyWrestlerDataObject::SetEntranceParam(const FELWrestlerProfile_CutScene& NewEntrance) {
}

int32 UMyWrestlerDataObject::SetDefaultPresetNo(const int32& NewValue) {
    return 0;
}

void UMyWrestlerDataObject::SetDefaultAttire(const FAttireParam& Attire) {
}

void UMyWrestlerDataObject::ResetPersonParam() {
}

void UMyWrestlerDataObject::ResetDefaultScout(const EGender Gender) {
}

void UMyWrestlerDataObject::Reset(const FEditWrestlerParam& NewParam) {
}

bool UMyWrestlerDataObject::RemovePreset(const int32 Index) {
    return false;
}

void UMyWrestlerDataObject::RemoveLockedPartsFromScout(UDataTable* EditPartsTable, UDataTable* EditPaintTable) {
}

void UMyWrestlerDataObject::RemoveLockedPartsFromRoster(UDataTable* EditPartsTable, UDataTable* EditPaintTable) {
}

void UMyWrestlerDataObject::RemoveGamePlayFlag(const EWrestlerDataGamePlayFlag Flag) {
}

void UMyWrestlerDataObject::ReleaseMatchupTexture() {
}

void UMyWrestlerDataObject::MakeWrestlerSetupParam(const int32 PresetIndex, FWrestlerSetupParam& Out, const bool bPlainAttire) const {
}

void UMyWrestlerDataObject::MakeBodyParam(FEditBodyParam& Out) const {
}

bool UMyWrestlerDataObject::IsDisplayWeight() const {
    return false;
}

bool UMyWrestlerDataObject::IsDisplayHomeTown() const {
    return false;
}

bool UMyWrestlerDataObject::IsDisplayHeight() const {
    return false;
}

bool UMyWrestlerDataObject::IsDisplayBirthday() const {
    return false;
}

void UMyWrestlerDataObject::InitScoutPlainAttire(const FAttireParam& NewAttire) {
}

void UMyWrestlerDataObject::InitRosterPlainAttire(const FCostumeParam& NewAttire) {
}

void UMyWrestlerDataObject::InitPresets(const TArray<FNamedPresetParam>& Src) {
}

void UMyWrestlerDataObject::ImportWrestlerNameByELWrestler(const FELWrestlerNameProfileParam& Param) {
}

void UMyWrestlerDataObject::ImportPersonInfoData(const FRosterInfoParam& Param) {
}

void UMyWrestlerDataObject::ImportFromSetupData(const FWrestlerSetupParam& Param, const bool bProfiles, const int32 AttireOfPresetNo, const bool bMoves, const bool bEntrance) {
}

bool UMyWrestlerDataObject::HasGamePlayFlag(const EWrestlerDataGamePlayFlag Flag) const {
    return false;
}

void UMyWrestlerDataObject::GetWrestlerNameText(FText& Out, const bool bUpper) const {
}

FWrestlerNameText UMyWrestlerDataObject::GetWrestlerNameParam() const {
    return FWrestlerNameText{};
}

void UMyWrestlerDataObject::GetWrestlerMultilineNameText(FText& Out, const bool bUpper) const {
}

FText UMyWrestlerDataObject::GetWeightText() const {
    return FText::GetEmpty();
}

float UMyWrestlerDataObject::GetWeightRatio() const {
    return 0.0f;
}

float UMyWrestlerDataObject::GetWeight() const {
    return 0.0f;
}

void UMyWrestlerDataObject::GetSnsNameText(FText& Out) const {
}

void UMyWrestlerDataObject::GetSkillParam(FWrestlingSkillParam& Out) const {
}

void UMyWrestlerDataObject::GetShortNameText(FText& Out, const bool bUpper) const {
}

void UMyWrestlerDataObject::GetRosterPlainAttireIDList(TArray<int32>& Out) const {
}

void UMyWrestlerDataObject::GetRosterMatchAttireIDList(TArray<int32>& Out) const {
}

int32 UMyWrestlerDataObject::GetPresetNum() const {
    return 0;
}

int32 UMyWrestlerDataObject::GetPresetNameList(TArray<FString>& Out) const {
    return 0;
}

void UMyWrestlerDataObject::GetPresetName(const int32 Index, FString& Out) const {
}

int32 UMyWrestlerDataObject::GetPresetIndexByName(const FString& PresetName) {
    return 0;
}

bool UMyWrestlerDataObject::GetPresetByName(const FString& Name, FPresetParam& Out) const {
    return false;
}

bool UMyWrestlerDataObject::GetPresetByIndex(const int32 Index, FPresetParam& Out) const {
    return false;
}

void UMyWrestlerDataObject::GetPersonParam(const EBasicWrestlerIntParamType ParamType, int32& Out) const {
}

void UMyWrestlerDataObject::GetPersonalityParam(FPersonalityParam& Out) const {
}

void UMyWrestlerDataObject::GetNickNameText(FText& Out) const {
}

float UMyWrestlerDataObject::GetMuscleRatio() const {
    return 0.0f;
}

void UMyWrestlerDataObject::GetMovesParam(FWrestlerMoves& Out) const {
}

void UMyWrestlerDataObject::GetMatchupTexture(UTexture*& Out) {
}

void UMyWrestlerDataObject::GetMatchupPose(int32& Out) const {
}

void UMyWrestlerDataObject::GetHomeTown(FHomeTownID& Out) const {
}

FText UMyWrestlerDataObject::GetHeightWeightClaims() const {
    return FText::GetEmpty();
}

FText UMyWrestlerDataObject::GetHeightText() const {
    return FText::GetEmpty();
}

float UMyWrestlerDataObject::GetHeightRatio() const {
    return 0.0f;
}

float UMyWrestlerDataObject::GetHeight() const {
    return 0.0f;
}

void UMyWrestlerDataObject::GetFaceType(EFaceType& FaceType) const {
}

void UMyWrestlerDataObject::GetEntranceParam(FELWrestlerProfile_CutScene& Out) const {
}

int32 UMyWrestlerDataObject::GetDefaultPresetNo() const {
    return 0;
}

void UMyWrestlerDataObject::GetDefaultAttire(FAttireParam& Out) const {
}

void UMyWrestlerDataObject::GetCloneObject(UMyWrestlerDataObject*& Out, UObject* NewOuter) {
}

FText UMyWrestlerDataObject::GetBirthDayText(bool isHideBirthDay) {
    return FText::GetEmpty();
}

void UMyWrestlerDataObject::GetBirthDay(int32& Month, int32& Day) {
}

FBodyAdjustParam UMyWrestlerDataObject::GetAdjustBodyParam() const {
    return FBodyAdjustParam{};
}

int32 UMyWrestlerDataObject::FindPresetIndex(const FString& NameString) {
    return 0;
}

void UMyWrestlerDataObject::FindPresetByName(const FString& NameString, int32& OutIndex, FPresetParam& OutParam) {
}

void UMyWrestlerDataObject::FinalizeBodyParam() {
}

void UMyWrestlerDataObject::Finalize() {
}

void UMyWrestlerDataObject::ExportJson() {
}

UMyWrestlerDataObject* UMyWrestlerDataObject::CreateScoutWrestlerDataObject(const FEditWrestlerParam& NewParam) {
    return NULL;
}

UMyWrestlerDataObject* UMyWrestlerDataObject::CreateNewWrestlerDataObject(const FGuid CreateUID) {
    return NULL;
}

UMyWrestlerDataObject* UMyWrestlerDataObject::CreateGuestRosterDataObject(const FRosterInfoParam& Param) {
    return NULL;
}

UMyWrestlerDataObject* UMyWrestlerDataObject::CreateDefaultRosterDataObject(const FRosterInfoParam& Param) {
    return NULL;
}

void UMyWrestlerDataObject::ClearGamePlayStatus() {
}

int32 UMyWrestlerDataObject::CheckAvailablePresetNum() const {
    return 0;
}

void UMyWrestlerDataObject::ChangeOuter(UObject* NewOuter) {
}

bool UMyWrestlerDataObject::CanEditStreetClothes() const {
    return false;
}

bool UMyWrestlerDataObject::CanAddPreset() const {
    return false;
}

int32 UMyWrestlerDataObject::AddPreset(const int32 SrcIndex, const FString& NewName) {
    return 0;
}

void UMyWrestlerDataObject::AddGamePlayFlag(const EWrestlerDataGamePlayFlag Flag) {
}

UMyWrestlerDataObject::UMyWrestlerDataObject() {
    this->PresetUnlockID = 0;
    this->GamePlayFlags = 0;
}

