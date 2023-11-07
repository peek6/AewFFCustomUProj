#pragma once
#include "CoreMinimal.h"
#include "ELTournamentWrestlerIdentifier.h"
#include "ELTournamentWrestler.generated.h"

USTRUCT(BlueprintType)
struct FELTournamentWrestler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELTournamentWrestlerIdentifier Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGamePad;
    
    ABP_200508_API FELTournamentWrestler();
};

