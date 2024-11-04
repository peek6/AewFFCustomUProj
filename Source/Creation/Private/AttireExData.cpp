#include "AttireExData.h"

FAttireExData::FAttireExData() {
    this->bApplyToLeftEye = false;
    this->LeftEyeMaterial = NULL;
    this->LeftEyeEmissivePower = 0.00f;
    this->bApplyToRightEye = false;
    this->RightEyeMaterial = NULL;
    this->RightEyeEmissivePower = 0.00f;
    this->bApplyToHair = false;
    this->HairColorTexture = NULL;
    this->bApplyDarkSkinModeToHair = false;
    this->bApplyToSkin = false;
    this->SkinMaterial = NULL;
    this->bApplyDarkSkinModeToSkin = false;
    this->bApplyToAttire = false;
    this->AttireMaterial = NULL;
    this->bApplyPatternTextureToAttire = false;
    this->AttirePatternTexture = NULL;
    this->bApplyDarkSkinModeToAttire = false;
}

