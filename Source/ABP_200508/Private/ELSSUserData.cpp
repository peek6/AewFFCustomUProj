#include "ELSSUserData.h"

void UELSSUserData::SetSSUserData(const FYGS2SSPlayerData& dat) {
}

int32 UELSSUserData::GetUserExp() {
    return 0;
}

FELSSUserDataParam UELSSUserData::GetUserDataPrev() {
    return FELSSUserDataParam{};
}

FELSSUserDataParam UELSSUserData::GetUserDataNow() {
    return FELSSUserDataParam{};
}

int32 UELSSUserData::GetStampedeRankExp() {
    return 0;
}

FYGS2SSPlayerData UELSSUserData::GetSSUserData() {
    return FYGS2SSPlayerData{};
}

FELSSGameRankData UELSSUserData::GetSSRankData() {
    return FELSSGameRankData{};
}

int32 UELSSUserData::GetPrevPlayerRank() {
    return 0;
}

int32 UELSSUserData::GetPlayerRankExp() {
    return 0;
}

void UELSSUserData::DebugPrintDiff() {
}

UELSSUserData::UELSSUserData() {
}

