#pragma once
#include "CoreMinimal.h"
#include "ELTournamentProgressSaveData.h"
#include "ELTournamentSaveData.generated.h"

USTRUCT(BlueprintType)
struct FELTournamentSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELTournamentProgressSaveData EasyProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELTournamentProgressSaveData NormalProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELTournamentProgressSaveData HardProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELTournamentProgressSaveData EliteProgressData;
    
    ABP_200508_API FELTournamentSaveData();
};

