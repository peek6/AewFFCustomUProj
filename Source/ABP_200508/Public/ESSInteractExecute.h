#pragma once
#include "CoreMinimal.h"
#include "ESSInteractExecute.generated.h"

UENUM(BlueprintType)
enum class ESSInteractExecute : uint8 {
    None,
    Finisher,
    GetOnVehicle,
    GetOnHorse,
    OpenTreasureBox,
    SituationMove,
    PickupItemInfo,
    PickupWeaponInfo,
    OperateVending,
    OperateSlotMachine,
    HorseSpawnPoint,
    HorseSpawnPointWithoutCarrot,
};

