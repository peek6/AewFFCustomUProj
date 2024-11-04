#include "CustomWrestlerAssistComponent.h"

void UCustomWrestlerAssistComponent::ValidateFaceType(EFaceType& NowFaceType) {
}

void UCustomWrestlerAssistComponent::UpdatePreviewPersonParam(const EBasicWrestlerIntParamType ParamType, const int32 NewValue, const bool bPreview) {
}

void UCustomWrestlerAssistComponent::UpdatePresetName(const int32 Preset, const FString& NewPresetName) {
}

bool UCustomWrestlerAssistComponent::UpdatePartsColors(const EEditPartsSlot PartsSlot, const EAttireType AttireType, const FIndexedColorList ColorIDs, const bool bPreview) {
    return false;
}

bool UCustomWrestlerAssistComponent::UpdatePartsColor(const EEditPartsSlot PartsSlot, const EAttireType AttireType, const int32 ColorSlotNo, const int32 NewColorID, const bool bPreview) {
    return false;
}

void UCustomWrestlerAssistComponent::UpdatePartsAttire(const EPreviewAttire PreviewAttireType, const EEditPartsSlot PartsSlot, const FEditPartsParam& NewParam, const bool bPreview) {
}

void UCustomWrestlerAssistComponent::UpdatePaintColors(const EEditTexTarget PaintSlot, const EAttireType AttireType, const FIndexedColorList ColorIDs, const bool bPreview) {
}

void UCustomWrestlerAssistComponent::UpdatePaintColor(const EEditTexTarget PaintSlot, const EAttireType AttireType, const int32 ColorSlotNo, const int32 NewColorID, const bool bPreview) {
}

void UCustomWrestlerAssistComponent::UpdatePaintAttire(const EPreviewAttire PreviewAttireType, const EEditTexTarget PaintSlot, const FEditPaintParam& NewParam, const bool bPreview) {
}

void UCustomWrestlerAssistComponent::UpdateIgnoreCategories(const TSet<FEditPartsCategoryName> NewSet) {
}

bool UCustomWrestlerAssistComponent::UpdateAssetLoadingStatus() {
    return false;
}

void UCustomWrestlerAssistComponent::SetWrestlerName(const FString& UpperName, const FString& LowerName) {
}

void UCustomWrestlerAssistComponent::SetSnsName(const FString& SNSName) {
}

void UCustomWrestlerAssistComponent::SetShortName(const FString& ShortName) {
}

void UCustomWrestlerAssistComponent::SetPreviewBodyMode(const bool bNewValue) {
}

void UCustomWrestlerAssistComponent::SetPreviewAttire(const EPreviewAttire AttireType, const FAttireData NewAttireData) {
}

bool UCustomWrestlerAssistComponent::SetPreset(const FNamedPresetParam& NewPreset, const int32 PresetNo, const bool bPreview) {
    return false;
}

void UCustomWrestlerAssistComponent::SetPersonParam(const EBasicWrestlerIntParamType ParamType, const int32 NewValue) {
}

void UCustomWrestlerAssistComponent::SetNickName(const FString& NickName) {
}

void UCustomWrestlerAssistComponent::SetEditAttireExParam(const EPreviewAttire AttireType, const FAttireExParam& NewParam, int32 PresetNo) {
}

void UCustomWrestlerAssistComponent::SetCurrentAttireType(const EAttireType NewValue) {
}

void UCustomWrestlerAssistComponent::SelectPreset(bool& bChanged, const int32 NewPresetNo) {
}

EFaceType UCustomWrestlerAssistComponent::SearchFaceType(const int32 PartsID) const {
    return EFaceType::Default;
}

void UCustomWrestlerAssistComponent::ResetTemporaryAttire() {
}

void UCustomWrestlerAssistComponent::ResetPreviewAttire() {
}

void UCustomWrestlerAssistComponent::ResetPersonParam() {
}

void UCustomWrestlerAssistComponent::ResetModify() {
}

void UCustomWrestlerAssistComponent::RemovePreviewPartsData(const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot) {
}

void UCustomWrestlerAssistComponent::RemovePreviewPaintData(const EPreviewAttire AttireType, const EEditTexTarget PaintSlot) {
}

bool UCustomWrestlerAssistComponent::RemovePreset(const int32 TargetPresetIndex) {
    return false;
}

void UCustomWrestlerAssistComponent::RemoveEditPartsParam(const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot, int32 PresetNo) {
}

void UCustomWrestlerAssistComponent::RemoveEditPaintParam(const EPreviewAttire PreviewAttireType, const EEditTexTarget PaintSlot, int32 PresetNo) {
}

void UCustomWrestlerAssistComponent::RemoveAttires(const EAttireType AttireType, const TSet<EEditPartsSlot>& PartsSlot) {
}

void UCustomWrestlerAssistComponent::RelocateFacialParts(const int32 PartsID, const bool bPreview) {
}

void UCustomWrestlerAssistComponent::PostLoad_EditPartsAsset(const FEditPartsKey& Key, UEditWrestlerPartsAsset* Asset) {
}

void UCustomWrestlerAssistComponent::PostLoad_EditPaintAsset(const FEditPartsKey& Key, UEditWrestlerPaintAsset* Asset) {
}

void UCustomWrestlerAssistComponent::OnStartCustomize_Implementation() {
}

void UCustomWrestlerAssistComponent::OnReset_Implementation(UMyWrestlerDataObject* NewData, const int32 PresetNo) {
}




void UCustomWrestlerAssistComponent::OnFinishCustomize_Implementation() {
}

void UCustomWrestlerAssistComponent::OnCompleteAssetLoad_Implementation() {
}

TSet<FEditPartsCategoryName> UCustomWrestlerAssistComponent::MakeIgnoreCategories_Implementation(const EWrestlerID_N WrestlerID, const EGender Gender) {
    return TSet<FEditPartsCategoryName>();
}

void UCustomWrestlerAssistComponent::MakeColorPacks(const TArray<FEditColorParam>& ColorPallet, TArray<FEditColorPack>& Out) {
}

void UCustomWrestlerAssistComponent::LoadEditPartsAssets() {
}

void UCustomWrestlerAssistComponent::LoadEditPaintsAssets() {
}

bool UCustomWrestlerAssistComponent::IsModify() {
    return false;
}

bool UCustomWrestlerAssistComponent::IsLoading() const {
    return false;
}

bool UCustomWrestlerAssistComponent::IsDisplayWeight() const {
    return false;
}

bool UCustomWrestlerAssistComponent::IsDisplayHomeTown() const {
    return false;
}

bool UCustomWrestlerAssistComponent::IsDisplayHeight() const {
    return false;
}

bool UCustomWrestlerAssistComponent::IsDisplayBirthday() const {
    return false;
}

void UCustomWrestlerAssistComponent::GetWrestlerProfilesTexts(FText& WrestlerNameText, FText& WrestlerSnsText, FText& WeightText, FText& HeightText, FText& HomeTownText) {
}

void UCustomWrestlerAssistComponent::GetWrestlerNameText(FText& WrestlerName, const bool bUpper) const {
}

void UCustomWrestlerAssistComponent::GetWrestlerName(FString& UpperName, FString& LowerName) const {
}

EWrestlerID_N UCustomWrestlerAssistComponent::GetWrestlerID() const {
    return EWrestlerID_N::None;
}

void UCustomWrestlerAssistComponent::GetUID(FGuid& UID) const {
}

void UCustomWrestlerAssistComponent::GetTemporaryAttire(const EPreviewAttire AttireType, FAttireData& AttireData) {
}

void UCustomWrestlerAssistComponent::GetSnsNameText(FText& SNSName) const {
}

void UCustomWrestlerAssistComponent::GetSnsName(FString& SNSName) const {
}

void UCustomWrestlerAssistComponent::GetShortNameText(FText& ShortName) const {
}

void UCustomWrestlerAssistComponent::GetShortName(FString& ShortName) const {
}

void UCustomWrestlerAssistComponent::GetPreviewPartsData(FEditPartsData& Out, EBasicFindResult& Result, const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot) {
}

void UCustomWrestlerAssistComponent::GetPreviewPaintData(FEditPaintData& Out, EBasicFindResult& Result, const EPreviewAttire AttireType, const EEditTexTarget PaintSlot) {
}

void UCustomWrestlerAssistComponent::GetPreviewCoordinate(const EAttireType AttireType, FAttireData& CoordinateData) const {
}

void UCustomWrestlerAssistComponent::GetPreviewAttireConst(const EPreviewAttire AttireType, FAttireData& AttireData) const {
}

void UCustomWrestlerAssistComponent::GetPreviewAttire(const EPreviewAttire AttireType, FAttireData& AttireData) {
}

void UCustomWrestlerAssistComponent::GetPresetNames(TArray<FString>& Out) const {
}

bool UCustomWrestlerAssistComponent::GetPreset(FNamedPresetParam& Preset, const int32 PresetNo, const bool bPreview) {
    return false;
}

void UCustomWrestlerAssistComponent::GetPersonParam(int32& Out, const EBasicWrestlerIntParamType ParamType) const {
}

void UCustomWrestlerAssistComponent::GetNickNameText(FText& NickName) const {
}

void UCustomWrestlerAssistComponent::GetNickName(FString& NickName) const {
}

void UCustomWrestlerAssistComponent::GetGender(EGender& Gender) const {
}

void UCustomWrestlerAssistComponent::GetFaceType(EFaceType& FaceType) const {
}

void UCustomWrestlerAssistComponent::GetEditPerson(FEditPersonParam& Out) {
}

bool UCustomWrestlerAssistComponent::GetEditPartsParam(FEditPartsParam& Out, const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot, int32 PresetNo) const {
    return false;
}

bool UCustomWrestlerAssistComponent::GetEditPaintParam(FEditPaintParam& Out, const EPreviewAttire AttireType, const EEditTexTarget PaintSlot, int32 PresetNo) const {
    return false;
}

bool UCustomWrestlerAssistComponent::GetEditAttireParam(const EPreviewAttire AttireType, FAttireParam& Out, int32 PresetNo) {
    return false;
}

bool UCustomWrestlerAssistComponent::GetCurrentPreset(FNamedPresetParam& Preset, const bool bPreview) {
    return false;
}

EAttireType UCustomWrestlerAssistComponent::GetCurrentAttireType() const {
    return EAttireType::Ring;
}

void UCustomWrestlerAssistComponent::GetAssetCompatibleData(TSet<EEditPartsSlot>& SomeUnpossible, TSet<EEditPartsSlot>& AllUnpossible, UEditWrestlerPartsAsset* Asset) {
}

void UCustomWrestlerAssistComponent::GetAllEquippedPartsIDs(TArray<int32>& EquippedPartsIDs) const {
}

void UCustomWrestlerAssistComponent::CopyAttire(const EPreviewAttire AttireType, const bool bRevert) {
}

void UCustomWrestlerAssistComponent::CopyAllAttire(const bool bRevert) {
}

void UCustomWrestlerAssistComponent::ClearAllLoadCue() {
}

void UCustomWrestlerAssistComponent::CheckModify() {
}

bool UCustomWrestlerAssistComponent::CheckFinishLoadEditParts() {
    return false;
}

bool UCustomWrestlerAssistComponent::CheckFinishLoadEditPaints() {
    return false;
}

void UCustomWrestlerAssistComponent::CheckFinishedAssetLoad(const bool bWithNotStarted) {
}

void UCustomWrestlerAssistComponent::CheckCompatiableImpl(const FAttireData& CoordinateData, const FEditPartsCategoryDetails& EditPartsCategoryDetails, TSet<EEditPartsSlot>& EquippedParts, TSet<EEditPartsSlot>& IncompatiableParts) {
}

bool UCustomWrestlerAssistComponent::CanEditStreetClothes() const {
    return false;
}

UMyWrestlerDataObject* UCustomWrestlerAssistComponent::ApplyTemplateData(UMyWrestlerDataObject* TargetObject, UTemplateScoutAsset* TemplateScoutAsset, const EScoutWrestlerTemplateOption Option, EBasicFunctionResult& resultType) {
    return NULL;
}

void UCustomWrestlerAssistComponent::AddPreviewPartsData(const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot, const FEditPartsData& NewData) {
}

void UCustomWrestlerAssistComponent::AddPreviewPaintData(const EPreviewAttire AttireType, const EEditTexTarget PaintSlot, const FEditPaintData& NewData) {
}

void UCustomWrestlerAssistComponent::AddNewPreset(FString& NewPresetName, int32& NewIndex, const int32 SourcePresetIndex, const bool bCopy) {
}

void UCustomWrestlerAssistComponent::AddLoadEditPartsAsset(const EPreviewAttire InAttire, const EEditPartsSlot InSlot, const TSoftObjectPtr<UEditWrestlerPartsAsset>& Asset) {
}

void UCustomWrestlerAssistComponent::AddLoadEditPaintsAsset(const EPreviewAttire InAttire, const EEditTexTarget InSlot, const TSoftObjectPtr<UEditWrestlerPaintAsset>& Asset) {
}

void UCustomWrestlerAssistComponent::AddEditPartsParam(const EPreviewAttire AttireType, const EEditPartsSlot PartsSlot, const FEditPartsParam& NewParam, int32 PresetNo) {
}

void UCustomWrestlerAssistComponent::AddEditPaintParam(const EPreviewAttire AttireType, const EEditTexTarget PaintSlot, const FEditPaintParam& NewParam, int32 PresetNo) {
}

UCustomWrestlerAssistComponent::UCustomWrestlerAssistComponent() {
    this->CurrentPresetNo = 0;
    this->PresetNameLimit = 12;
    this->CurrentAttireType = EAttireType::Ring;
    this->bPreviewBodyMode = false;
    this->PreviewData = NULL;
    this->ActivePartsSlot = EEditPartsSlot::Unknown;
    this->PreviewModel_Match = NULL;
    this->PreviewModel_Entrance = NULL;
    this->PreviewModel_Plain = NULL;
    this->bAssetLoading = false;
    this->OriginalData = NULL;
    this->EditingData = NULL;
}

