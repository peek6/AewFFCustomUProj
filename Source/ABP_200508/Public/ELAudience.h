#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "Animation/SkeletalMeshActor.h"
#include "EAudienceAnimationSharingType.h"
#include "ELAudience.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELAudience : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat PlatformTickInterval_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat PlatformTickInterval_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat PlatformTickInterval_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat PlatformTickInterval_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudienceAnimationSharingType AnimationSharingType;
    
public:
    AELAudience();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTickInterval() const;
    
};
