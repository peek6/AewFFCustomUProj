#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerProgress.generated.h"

UENUM(BlueprintType)
enum class ESSPlayerProgress : uint8 {
    Nothing,
    DoneHotPlayerSetup,
    DoneLobby,
    DoneMatchPointPay,
    DoneUIPrepare,
    DoneOpenGamePlayScreen,
    DoneDescription,
    DoneActorSpawned,
    ReadyToNext_FromLoading = 0xA,
    ReadyToNext_FromSetup,
    ReadyToNext_FromEntrance,
    ReadyToNext_FromOpenGamePlayScreen,
    ReadyToNext_FromDescription,
    NotifiedFromServer_Dead = 0x14,
};

