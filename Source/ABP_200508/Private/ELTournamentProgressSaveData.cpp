#include "ELTournamentProgressSaveData.h"

FELTournamentProgressSaveData::FELTournamentProgressSaveData() {
    this->ClearCount = 0;
    this->bPlaying = false;
    this->Round = 0;
    this->RetryCount = 0;
    this->RetryCountLimit = 0;
    this->PlayerWrestlerID = EWrestlerID_N::None;
    this->PlayerPresetIndex = 0;
    this->PlayerPosition = 0;
    this->PartnerWrestlerID = EWrestlerID_N::None;
    this->PartnerPresetIndex = 0;
    this->PartnerPosition = 0;
}

