#pragma once
#include "CoreMinimal.h"
#include "ESSDamageSE.generated.h"

UENUM(BlueprintType)
enum class ESSDamageSE : uint8 {
    None,
    punch_weak,
    punch_med,
    punch_strong,
    chop_weak,
    chop_med,
    chop_strong,
    kick_weak,
    kick_med,
    kick_strong,
    superkick,
    elbow_weak,
    elbow_med,
    elbow_strong,
    clothesline_weak,
    clothesline_med,
    clothesline_strong,
    knee_weak,
    knee_med,
    knee_strong,
    headbutt_weak,
    headbutt_med,
    headbutt_strong,
    tackle_weak,
    tackle_med,
    tackle_strong,
    face_slap,
    slap_sweetener,
    guard_generic,
    storm_damage,
    golfcart_hit,
    horse_collide,
    weapon_chair_hit_weak,
    weapon_chair_hit_strong,
    weapon_trashcan_hit_weak,
    weapon_trashcan_hit_strong,
    weapon_table_hit_weak,
    weapon_table_hit_strong,
    weapon_championbelt_hit_weak,
    weapon_championbelt_hit_strong,
    weapon_kendostick_hit_weak,
    weapon_kendostick_hit_strong,
    weapon_trashcanlid_hit_weak,
    weapon_trashcanlid_hit_strong,
    weapon_metalbat_hit_weak,
    weapon_metalbat_hit_strong,
    weapon_broom_hit_weak,
    weapon_broom_hit_strong,
    weapon_skateboard_hit_weak,
    weapon_skateboard_hit_strong,
    weapon_barbedwirebat_hit_weak,
    weapon_barbedwirebat_hit_strong,
    weapon_barbedwirebroom_hit_weak,
    weapon_barbedwirebroom_hit_strong,
    weapon_woodbat_hit_weak,
    weapon_woodbat_hit_strong,
    weapon_cricketbat_hit_weak,
    weapon_cricketbat_hit_strong,
    weapon_crowbar_hit_weak,
    weapon_crowbar_hit_strong,
    weapon_extinguisher_hit_weak,
    weapon_extinguisher_hit_strong,
    weapon_fryingpan_hit_weak,
    weapon_fryingpan_hit_strong,
    weapon_golfclub_hit_weak,
    weapon_golfclub_hit_strong,
    weapon_guitar_hit_weak,
    weapon_guitar_hit_strong,
    weapon_hockeystick_hit_weak,
    weapon_hockeystick_hit_strong,
    weapon_pipe_hit_weak,
    weapon_pipe_hit_strong,
    weapon_cuestick_hit_weak,
    weapon_cuestick_hit_strong,
    weapon_shovel_hit_weak,
    weapon_shovel_hit_strong,
    weapon_sledgehammer_hit_weak,
    weapon_sledgehammer_hit_strong,
    weapon_nailbat_hit_weak,
    weapon_nailbat_hit_strong,
    weapon_saftycone_hit_weak,
    weapon_saftycone_hit_strong,
    weapon_signboard_hit_weak,
    weapon_signboard_hit_strong,
    weapon_glassbottle_hit_weak,
    weapon_glassbottle_hit_strong,
    weapon_pizzabox_hit_weak,
    weapon_pizzabox_hit_strong,
    weapon_gastank_hit_weak,
    weapon_gastank_hit_strong,
    weapon_tire_hit_weak,
    weapon_tire_hit_strong,
    weapon_tray_hit_weak,
    weapon_tray_hit_strong,
    weapon_lacrossestick_hit_weak,
    weapon_lacrossestick_hit_strong,
    weapon_tennisracket_hit_weak,
    weapon_tennisracket_hit_strong,
    weapon_football_hit_weak,
    weapon_football_hit_strong,
    strike_punch_weak,
    strike_punch_med,
    strike_punch_strong,
    strike_kick_weak,
    strike_kick_med,
    strike_kick_strong,
    weapon_bazooka_hit,
    Max,
};

