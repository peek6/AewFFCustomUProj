#pragma once
#include "CoreMinimal.h"
#include "ELMatchRecordsProfileInfo.h"
#include "ELMatchRecordsTeamInfo.h"
#include "ELMatchRecordsWrestlerInfo.h"
#include "ELMatchRecordsInfo.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FELMatchRecordsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELMatchRecordsWrestlerInfo> WrestlerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELMatchRecordsWrestlerInfo> TagWrestlerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELMatchRecordsTeamInfo> TeamInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELMatchRecordsTeamInfo> TagTeamInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMatchRecordsProfileInfo ProfileInfo;
    
    FELMatchRecordsInfo();
};

