#include "SSCharacterAdjust.h"

FSSCharacterAdjust::FSSCharacterAdjust() {
    this->MovementSavePredictFrame = 0;
    this->MovementTimeOutRateThreshold = 0.00f;
    this->MovementTimeOut = 0.00f;
    this->HitStopDurationWeak = 0.00f;
    this->HitStopDurationMedium = 0.00f;
    this->HitStopDurationStrong = 0.00f;
    this->AirAttackMinHeight = 0.00f;
    this->LongPressThreshold = 0.00f;
    this->InteractDistanceLimit = 0.00f;
    this->GunTargetLengthMin = 0.00f;
    this->GunTargetLengthMax = 0.00f;
    this->GunTargetLengthDefault = 0.00f;
    this->AimOffsetBlendDuration = 0.00f;
    this->AimBeginningTime = 0.00f;
    this->AimBeginningInterpSpeed = 0.00f;
    this->AutoHpRecoverIntervalTime = 0.00f;
    this->FireBottleDamageIntervalTime = 0.00f;
    this->GuardReduceDamagePercent = 0.00f;
    this->InvolveDamage = 0.00f;
    this->InvolveDamageFeedback = 0.00f;
    this->AfterStandUpInvincibleTime = 0.00f;
    this->AttackedToDownCountLimit = 0;
    this->ForceDownAccumulationLimit = 0.00f;
    this->ForceDownAccumulationDecreaseSpeed = 0.00f;
    this->ForceDownAccumulationAddValueStrike = 0.00f;
    this->ForceDownAccumulationAddValueWeapon = 0.00f;
    this->ForceDownBlowPower = 0.00f;
    this->ForceDownBlowAngle = 0.00f;
    this->KoHPPercent = 0.00f;
    this->KoDamageCycle = 0.00f;
    this->KoDamageRate = 0.00f;
    this->SeeThroughDistanceMin = 0.00f;
    this->EquipDefaultSettingsId = 0;
    this->ForceTeleportZ = 0.00f;
    this->SyncInterpLocationTime = 0.00f;
    this->SyncInterpLocationTimeLocalFinisher = 0.00f;
    this->TargetDistance = 0.00f;
    this->TargetAngle = 0.00f;
    this->TargetAngleNeutral = 0.00f;
    this->TargetPriorityDistanceCoef = 0.00f;
    this->TargetPriorityAngleCoef = 0.00f;
    this->TargetPriorityObjectTypeCoef = 0.00f;
    this->RefreshParamOnEveryTick = false;
}

