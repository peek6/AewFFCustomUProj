#pragma once
#include "CoreMinimal.h"
#include "ELTournamentWrestlerIdentifier.h"
#include "ELTournamentBracket.generated.h"

USTRUCT(BlueprintType)
struct FELTournamentBracket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELTournamentWrestlerIdentifier Opponent1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELTournamentWrestlerIdentifier Opponent2;
    
    ABP_200508_API FELTournamentBracket();
};

