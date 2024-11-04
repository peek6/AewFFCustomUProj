#include "ELSSFootIK.h"



UELSSFootIK::UELSSFootIK() {
    this->bEnableIK = false;
    this->bEnableDrivingIK = false;
    this->FootBoneName_L = TEXT("J_Foot_L");
    this->FootBoneName_R = TEXT("J_Foot_R");
    this->ActiveRangeFromCamera = 1000.00f;
    this->bPlayerDisabled = false;
    this->LandingFootNum = 0;
}

