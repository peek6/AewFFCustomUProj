#pragma once
#include "CoreMinimal.h"
#include "ESpecialMovesType.h"
#include "Components/ActorComponent.h"
#include "EEliteMeterStateType_N.h"
#include "ESeesawBuffType_N.h"
#include "ELMomentumMeterBase.generated.h"

class AELCharacter_Native;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELMomentumMeterBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MeterValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeterDefaultValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bExciteState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSpecialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDangerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EEliteMeterStateType_N EliteMeterState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool UnlimitedState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool RemoveState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemoveSec_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemoveValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemoveEndPercent_N;
    
public:
    UELMomentumMeterBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SubMeterValue_Impl(float Value, bool Direct, ESpecialMovesType RecieveSpecialDamageType, bool RemoveMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSeesawBuff_Impl(AELCharacter_Native* Chara, ESeesawBuffType_N NewBuffType);
    
    UFUNCTION(BlueprintCallable)
    void SetParam(float inHandsInPocketAddRate, float inHandsInPocketDuration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMeterPercent_Impl(float Percent, bool WithFeedback);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MomentumStock_Impl();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialState_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRemoveState_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExciteState_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDangerState_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEliteMeterStateType_N GetState_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemoveSec_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeterValue_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeterRate_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeterPercent_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetFixAddValueForNavigationState_Impl(float DeltaTime, AELCharacter_Native* Chara);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMeterValue_Impl(float Value, bool Direct);
    
};

