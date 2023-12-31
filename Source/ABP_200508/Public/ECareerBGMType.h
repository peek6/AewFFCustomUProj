#pragma once
#include "CoreMinimal.h"
#include "ECareerBGMType.generated.h"

UENUM(BlueprintType)
enum class ECareerBGMType : uint8 {
    Dummy,
    Event,
    Map,
    GymTraning,
    GymEvent,
    SightSeeingEvent,
    PressConferenceEvent,
    HospitalRepair,
    HospitalEvent,
    BaggageClaimEvent,
    LockerRoomEvent,
    InCarEvent,
    OnPlane,
    AutographEvent,
    BackstageEvent,
    InArenaEvent,
    DarkOrderRoomEvent,
    OutsideCarEvent,
    TVTalkShowEvent,
    OfficeEvent,
    OpeningCutscene,
    Restaurant_Jacksonville,
    Restaurant_Jacksonville_Vegetarian,
    Restaurant_Louisville,
    Restaurant_Louisville_Vegetarian,
    Restaurant_Minneapolis,
    Restaurant_Minneapolis_Vegetarian,
    Restaurant_Nashville,
    Restaurant_Nashville_Vegetarian,
    Restaurant_NewYork,
    Restaurant_NewYork_Vegetarian,
    Restaurant_Philadelphia,
    Restaurant_Philadelphia_Vegetarian,
    Restaurant_Seattle,
    Restaurant_Seattle_Vegetarian,
    Restaurant_Atlanta,
    Restaurant_Austin,
    Restaurant_Chicago,
    Restaurant_LosAngeles,
    Restaurant_NewOrleans,
    Restaurant_Pittsburgh,
    Restaurant_Toronto,
    Restaurant_LasVegas,
    Restaurant_WashingtonDC,
    Menu_Prologue,
    Menu_Block_1A,
    Menu_Block_1B,
    Menu_Block_1C,
    Menu_Block_2A,
    Menu_Block_2B,
    Menu_Block_2C,
    Menu_Block_3A,
    Menu_Block_3B,
    Menu_Block_3C,
    Menu_Block_4A,
    Menu_Block_4B,
    Menu_Block_4C,
    LockerRoomShadow,
    Clear,
    Minigame,
    Nop,
    WinBGM,
    Menu,
    Restaurant,
};

