#include "ELAdjustDlcObjectForCustomWrestler.h"

void UELAdjustDlcObjectForCustomWrestler::OnCheckScout_Implementation(UMyWrestlerDataObject* Object) {
}

void UELAdjustDlcObjectForCustomWrestler::OnCheckRoster_Implementation(UMyWrestlerDataObject* Object) {
}

void UELAdjustDlcObjectForCustomWrestler::InitCheckList_Implementation(const FUnavailableDlcData& UnavailableDlcData) {
}

UELAdjustDlcObjectForCustomWrestler::UELAdjustDlcObjectForCustomWrestler() {
    this->Template_M01_Object = NULL;
    this->Template_F01_Object = NULL;
    this->Roster_NormalTable = NULL;
    this->Roster_SignatureTable = NULL;
    this->Roster_FinisherTable = NULL;
    this->MovesAdjust = NULL;
}

