#include "YCAW_DebugMenu.h"



void UYCAW_DebugMenu::ReadFile(int32 Slot) {
}

void UYCAW_DebugMenu::OutputFile(int32 Slot) {
}





UYCAW_DebugMenu::UYCAW_DebugMenu() {
    this->OutputFileSlot = 0;
    this->ReadFileSlot = 0;
    this->bApplyToLeftEye = false;
    this->bApplyToRightEye = false;
    this->bApplyToHair = false;
    this->bApplyToSkin = false;
    this->bApplyToAttire = false;
    this->bApplyDarkSkinModeToHair = false;
    this->bApplyDarkSkinModeToSkin = false;
    this->bApplyDarkSkinModeToAttire = false;
    this->bApplyPatternTextureToAttire = false;
}

