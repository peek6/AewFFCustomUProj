#pragma once
#include "CoreMinimal.h"
#include "ESSItemBoxType.generated.h"

UENUM(BlueprintType)
enum class ESSItemBoxType : uint8 {
    None,
    ItemBoxRound1,
    ItemBoxRound2,
    ItemBoxRound3,
    ItemBoxRound4,
    ItemBoxRound5,
    ItemBoxRound6,
    AbilityItemBox,
    TreasureBox1,
    TreasureBox2,
    TreasureBox3,
    TreasureBoxEpic1,
    TreasureBoxEpic2,
    TreasureBoxEpic3,
    TreasureBoxLegendary,
    CarrotTreasureBox,
    Vending,
    SlotMachineCommon,
    SlotMachineUnCommon,
    SlotMachineRare,
    SlotMachineEpic,
    SlotMachineLegendary,
    Max,
    ItemBoxBegin = 0x1,
    ItemBoxEnd = 0x7,
    TreasureBoxBegin,
    TreasureBoxEnd = 0xF,
    VendingBegin,
    VendingEnd = 0x10,
    SlotMachineBegin,
    SlotMachineEnd = 0x15,
    Common = 0x1,
    UnCommon,
    Rare,
    Epic,
    Legendary,
    TreasureCommon = 0x8,
    TreasureUnCommon,
    TreasureRare,
    TreasureEpic,
    TreasureLegendary = 0xE,
};
