#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StReplayEffectParam.h"
#include "StReplayEmitterRecorder.h"
#include "StReplaySfxParam.h"
#include "ELReplayEmitterRecorder.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELReplayEmitterRecorder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStReplayEmitterRecorder> RecordData_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStReplaySfxParam> RecordSfxData_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TickTimer_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> SpawnedEmitters_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> HideParticleWhenReplay_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlay_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordIndex_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConstRecordMax_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplayIndex_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeforeReplayIndex_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplayActiveSec_N;
    
public:
    AELReplayEmitterRecorder();
    UFUNCTION(BlueprintCallable)
    void RecordSfx_N(const FString& SfxName);
    
    UFUNCTION(BlueprintCallable)
    void RecordEffect_N(const FStReplayEffectParam& Effect);
    
    UFUNCTION(BlueprintCallable)
    void PlayStart_N(float ReplaySec, float ReplayOffsetSec);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySound_Impl(const FString& Name);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayFinish_N();
    
    UFUNCTION(BlueprintCallable)
    void AddHideParticlewhenReplay_N(UParticleSystemComponent* Particle);
    
};

