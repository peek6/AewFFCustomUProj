#include "TeamSaveData.h"

FTeamSaveData::FTeamSaveData() {
    this->AnnounceId = 0;
    this->CreatedDateTicks = 0;
    this->LastModifiedDateTicks = 0;
    this->FanReaction = EFanReaction::Babyface;
    this->DlcTagTeamFlag = false;
    this->UnlockID = 0;
}

