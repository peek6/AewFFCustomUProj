#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "Components/ActorComponent.h"
#include "SSWrestlerSetupParam.h"
#include "ELSSCharacterSetupComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELSSCharacterSetupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UELSSCharacterSetupComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMesh(EWrestlerID_N inWrestlerId, const FSSWrestlerSetupParam& inWrestlerSetupParam, bool inUGCLimit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBlockedUserUGC(const FSSWrestlerSetupParam& inWrestlerSetupParam) const;
    
};

