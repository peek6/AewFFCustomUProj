#pragma once
#include "CoreMinimal.h"
#include "ETipsLoadingCategory.generated.h"

UENUM(BlueprintType)
enum class ETipsLoadingCategory : uint8 {
    BaseGame,
    StadiumStampede,
    CustomWrestler,
    CustomMoves,
    CustomEntrance,
    CustomTeam,
    CustonArena,
    Career,
    MainMenu,
    SSInGame,
    SSStartOfMatch,
    SSReturnToMainMenu,
    SSReturnToTop,
    SSTopFromIntent,
    SSBotMainMenu,
    SSReturnToBotMainMenu,
    MainMenuFromSS,
    Training,
    CareerAlbum,
};

