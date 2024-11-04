#include "AttireExParam.h"

FAttireExParam::FAttireExParam() {
    this->bApplyToLeftEye = false;
    this->LeftEyeEmissivePower = 0.00f;
    this->bApplyToRightEye = false;
    this->RightEyeEmissivePower = 0.00f;
    this->bApplyToHair = false;
    this->bApplyDarkSkinModeToHair = false;
    this->bApplyToSkin = false;
    this->bApplyDarkSkinModeToSkin = false;
    this->bApplyToAttire = false;
    this->bApplyPatternTextureToAttire = false;
    this->bApplyDarkSkinModeToAttire = false;
}

