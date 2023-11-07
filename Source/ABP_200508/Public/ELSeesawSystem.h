#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESeesawBuffType_N.h"
#include "ESeesawRelationType_N.h"
#include "ESeesawStateType_N.h"
#include "StSeesawParam.h"
#include "ELSeesawSystem.generated.h"

class AELCharacter_Native;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELSeesawSystem : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSeesawParam SeesawParam_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeesawRelationType_N StateType_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeesawBuffType_N BuffType_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffActiveSec_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPenaltyBuff_N;
    
public:
    UELSeesawSystem();
    UFUNCTION(BlueprintCallable)
    void SetBuffType_N(ESeesawBuffType_N NewBuffType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESeesawStateType_N GetStateType_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRelationType_N(AELCharacter_Native* TargetChar, ESeesawRelationType_N& SelfType, ESeesawRelationType_N& TargetType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESeesawBuffType_N GetBuffType_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalSeesawValue_N(ESeesawRelationType_N RelationType, bool bAddMode, float SrcValue) const;
    
};

