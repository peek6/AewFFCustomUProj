#include "SaveDataObject_UGC_Team.h"

void USaveDataObject_UGC_Team::SetUnlockId(int32 Index, int32 _UnlockId) {
}

void USaveDataObject_UGC_Team::SetTeamUID(int32 Index, FGuid _teamId) {
}

void USaveDataObject_UGC_Team::SetTeamName(int32 Index, const FString& _TeamName) {
}

void USaveDataObject_UGC_Team::SetTeamMembers(int32 Index, TArray<FCreateTeamMemberInfo> _TeamMembers) {
}

void USaveDataObject_UGC_Team::SetTagFinisher02(int32 Index, const FELMoves_Finisher& _TagFinisher) {
}

void USaveDataObject_UGC_Team::SetTagFinisher01(int32 Index, const FELMoves_Finisher& _TagFinisher) {
}

void USaveDataObject_UGC_Team::SetSnsName(int32 Index, const FString& _SNSName) {
}

void USaveDataObject_UGC_Team::SetLastModifiedDate(int32 Index, FDateTime LastModifiedDate) {
}

void USaveDataObject_UGC_Team::SetFanReaction(int32 Index, EFanReaction _FanReaction) {
}

void USaveDataObject_UGC_Team::SetDlcVersion(int32 Index, const FString& _DlcVersion) {
}

void USaveDataObject_UGC_Team::SetDlcTagTeamFlag(int32 Index, bool _DlcTagTeamFlag) {
}

void USaveDataObject_UGC_Team::SetCutScene(int32 Index, FELWrestlerProfile_CutScene _CutScene) {
}

void USaveDataObject_UGC_Team::SetCreateTeamParam_All(const TArray<FCreateTeamParam>& Param) {
}

void USaveDataObject_UGC_Team::SetCreateTeamParam(int32 Index, const FCreateTeamParam& Param) {
}

void USaveDataObject_UGC_Team::SetCreatedDate(int32 Index, FDateTime CreatedDate) {
}

void USaveDataObject_UGC_Team::SetAnnounceId(int32 Index, int32 _AnnounceId) {
}

int32 USaveDataObject_UGC_Team::GetUnlockId(int32 Index) const {
    return 0;
}

FGuid USaveDataObject_UGC_Team::GetTeamUID(int32 Index) const {
    return FGuid{};
}

FString USaveDataObject_UGC_Team::GetTeamName(int32 Index) const {
    return TEXT("");
}

TArray<FCreateTeamMemberInfo> USaveDataObject_UGC_Team::GetTeamMembers(int32 Index) const {
    return TArray<FCreateTeamMemberInfo>();
}

FELMoves_Finisher USaveDataObject_UGC_Team::GetTagFinisher02(int32 Index) const {
    return FELMoves_Finisher{};
}

FELMoves_Finisher USaveDataObject_UGC_Team::GetTagFinisher01(int32 Index) const {
    return FELMoves_Finisher{};
}

FString USaveDataObject_UGC_Team::GetSnsName(int32 Index) const {
    return TEXT("");
}

FDateTime USaveDataObject_UGC_Team::GetLastModifiedDate(int32 Index) const {
    return FDateTime{};
}

EFanReaction USaveDataObject_UGC_Team::GetFanReaction(int32 Index) const {
    return EFanReaction::Babyface;
}

FString USaveDataObject_UGC_Team::GetDlcVersion(int32 Index) const {
    return TEXT("");
}

bool USaveDataObject_UGC_Team::GetDlcTagTeamFlag(int32 Index) const {
    return false;
}

FELWrestlerProfile_CutScene USaveDataObject_UGC_Team::GetCutScene(int32 Index) const {
    return FELWrestlerProfile_CutScene{};
}

void USaveDataObject_UGC_Team::GetCreateTeamParam_All(TArray<FCreateTeamParam>& Param) const {
}

void USaveDataObject_UGC_Team::GetCreateTeamParam(int32 Index, FCreateTeamParam& Param) const {
}

FDateTime USaveDataObject_UGC_Team::GetCreatedDate(int32 Index) const {
    return FDateTime{};
}

int32 USaveDataObject_UGC_Team::GetAnnounceId(int32 Index) const {
    return 0;
}

USaveDataObject_UGC_Team::USaveDataObject_UGC_Team() {
}

