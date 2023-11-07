#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h"
#include "ELSSEnvQueryGenerator_ActorsOfClassBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSEnvQueryGenerator_ActorsOfClassBase : public UEnvQueryGenerator_ActorsOfClass {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FAIDataProviderBoolValue CheckStormOutside;
    
    UELSSEnvQueryGenerator_ActorsOfClassBase();
};

