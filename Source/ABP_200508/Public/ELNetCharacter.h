#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "EELNetRole.h"
#include "ELNetObjectInterface.h"
#include "ELNetworkGUID.h"
#include "ELNetCharacter.generated.h"

class UELReplicationManager;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AELNetCharacter : public ACharacter, public IELNetObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GuidOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FELNetworkGUID ReplicationGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELNetRole ELNetRole;
    
public:
    AELNetCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool SetELNetTemporaryAuthorityBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetELNetModeBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetELNetAuthorityBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSyncMotionActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInELNetModeBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugLogEnabled(int32 DebugLogLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasELNetExecAuthorityBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasELNetAuthorityBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetSyncMotionPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetSyncMotionIndex() const;
    
    UFUNCTION(BlueprintCallable)
    FELNetworkGUID GetNextReplicationGuid();
    
    UFUNCTION(BlueprintCallable)
    FELNetworkGUID GetNextGuid(const FELNetworkGUID BaseGuid);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ELClientMoveOld(float OldTimeStamp, FVector OldAccel, FVector OldVelocity, uint8 OldMoveFlags);
    
    UFUNCTION(Server, Unreliable)
    void ELClientMoveNoBase(float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable)
    void ELClientMoveDualNoBase(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable)
    void ELClientMoveDualHybridRootMotion(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable)
    void ELClientMoveDual(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable)
    void ELClientMove(float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddComponentsToReplication(UELReplicationManager* ReplicationManager, const FELNetworkGUID BaseGuid);
    
    
    // Fix for true pure virtual functions not being implemented
};

