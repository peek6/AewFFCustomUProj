#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "JukeBoxParam.h"
#include "JukeBoxMenuInfo_N.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FJukeBoxMenuInfo_N : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJukeBoxParam JukeBoxParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListIndex;
    
    FJukeBoxMenuInfo_N();
};

