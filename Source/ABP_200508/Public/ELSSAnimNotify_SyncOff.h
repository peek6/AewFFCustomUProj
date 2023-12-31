#pragma once
#include "CoreMinimal.h"
#include "ELSSAnimNotifyBase.h"
#include "ELSSAnimNotify_SyncOff.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class ABP_200508_API UELSSAnimNotify_SyncOff : public UELSSAnimNotifyBase {
    GENERATED_BODY()
public:
    UELSSAnimNotify_SyncOff();
    UFUNCTION(BlueprintCallable)
    void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
    
};

