#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ELSSActorCommonInterface.h"
#include "ELSSPoolActorInterface.h"
#include "ELSSPoolDecalBase.generated.h"

class UDecalComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSPoolDecalBase : public AActor, public IELSSPoolActorInterface, public IELSSActorCommonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDisplay;
    
public:
    AELSSPoolDecalBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAttached(FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, float LifeSpan);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDecalComponent* PlayAtLocation(FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
    
    UFUNCTION(BlueprintCallable)
    UDecalComponent* GetDecalComponent() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

