#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ESyncPosRotKind.h"
#include "SyncMotionMontage.generated.h"

class ACharacter;
class AELCharacter_Native;

UCLASS(Blueprintable)
class ABP_200508_API ASyncMotionMontage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> DisableChannel;
    
    ASyncMotionMontage();
    UFUNCTION(BlueprintCallable)
    void Setup(UPARAM(Ref) TArray<AELCharacter_Native*>& characters, const FVector& SyncLocation, const FRotator& SyncRotation, ESyncPosRotKind posSyncKind, ESyncPosRotKind rotSyncKind, float InterpolateTime, bool ignoreSweep, bool noSyncRotation, int32 Priority, bool useCharacterHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetSyncOff();
    
    UFUNCTION(BlueprintCallable)
    void SetSkipCollisionResetForDestroy(int32 CharaIndex, bool bSkip);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableUpdateTransform(int32 CharaIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSweepAfterSyncOff(int32 CharaIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBasePointLocationAndRotation(const FVector& NewLocation, const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseCharacterHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSyncOff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoSyncRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSweepAfterSyncOff(int32 CharaIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSweep() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSyncChar(TArray<AELCharacter_Native*>& CharArray, AELCharacter_Native* IgnoreChar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSyncActorNum() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSyncActorIncludeSyncFinishedActor(TArray<AActor*>& SyncActors);
    
    UFUNCTION(BlueprintCallable)
    void GetSyncActor(TArray<ACharacter*>& SyncActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority() const;
    
    UFUNCTION(BlueprintCallable)
    void GetBasePointLocationAndRotation(FVector& Location, FRotator& Rotation);
    
};

