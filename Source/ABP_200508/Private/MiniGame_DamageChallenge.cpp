#include "MiniGame_DamageChallenge.h"

FMiniGame_DamageChallenge::FMiniGame_DamageChallenge() {
    this->bIsCPUNotWorking = false;
    this->DamageNum = 0;
    this->bIsShowAnnounceTime = false;
    this->PlayerTurnTime = 0.00f;
    this->AttackStartDelayTime = 0.00f;
}

