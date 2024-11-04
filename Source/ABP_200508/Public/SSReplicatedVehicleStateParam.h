#pragma once
#include "CoreMinimal.h"
#include "SSReplicatedVehicleStateParam.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FSSReplicatedVehicleStateParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TransitId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* VehiclePawn;
    
    ABP_200508_API FSSReplicatedVehicleStateParam();
};

