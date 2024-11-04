#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ELPlayerStageCollision.generated.h"

class AActor;
class AELCharacter_Native;
class AELPlayerStageCollisionActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UELPlayerStageCollision : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELCharacter_Native* Player_Native;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELPlayerStageCollisionActor*> CollisionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OldEnableState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> CollisionCheckStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> tmpPos;
    
    UELPlayerStageCollision();
    UFUNCTION(BlueprintCallable)
    void ResetAlreadyInterpolateFlag();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MoveCapsule(AActor* Actor, const FVector& Location, const FTransform& Transform, FHitResult& HitResult, bool bSweep);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetMovesStageCollisionValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMyMovesStageCollisionValue();
    
    UFUNCTION(BlueprintCallable)
    bool IsCompletedInterpolation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAlreadyHit(const FName& Tag);
    
};

