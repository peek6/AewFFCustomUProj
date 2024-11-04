#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EELTournamentType.h"
#include "ELTournamentManagementInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FELTournamentManagementInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TournamentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELTournamentType TournamentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TournamentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockableItemID;
    
    ABP_200508_API FELTournamentManagementInfo();
};

