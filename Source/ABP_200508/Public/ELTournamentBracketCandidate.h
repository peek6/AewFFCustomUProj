#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "ELTournamentBracketCandidate.generated.h"

USTRUCT(BlueprintType)
struct FELTournamentBracketCandidate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N Opponent1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N Opponent2;
    
    ABP_200508_API FELTournamentBracketCandidate();
};

