#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "ELSSDebugMenuParam.h"
#include "ESSModeLaunchType.h"
#include "ESSServerState.h"
#include "GameLiftGameServerMode.h"
#include "Templates/SubclassOf.h"
#include "ELSSGameMode.generated.h"

class AActor;
class AELSSGameState;
class AELSSLocator;
class AELSSPlayerState;
class UELSSAnalyticsLog2YGS2Object;

UCLASS(Blueprintable, NonTransient)
class ABP_200508_API AELSSGameMode : public AGameLiftGameServerMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameServerEnvName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SSModeVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString YGS2URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSModeLaunchType LaunchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPlayersRequiredToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPlayersMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> CandidateAIWrestlerIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MatchLobbyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString verApplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString verMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSGameState* SSGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AELSSPlayerState*, AELSSLocator*> ReservedPlayerStartMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitJoinElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavingAnalyticsTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSAnalyticsLog2YGS2Object* AnalyticsLog2YGS2Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TitleStorageDownloadingTimeTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TitleStorageDownloadingTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ManagerActorArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMatchDataGetEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSDebugMenuParam DebugMenuParam;
    
public:
    AELSSGameMode();
private:
    UFUNCTION(BlueprintCallable)
    EWrestlerID_N WrestlerIdToCastEnum(const int32 idx);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickState_WaitStartGameSession(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_WaitSpawnClientActor(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Matching(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_InProgress(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Initialize(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Exit(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickState_DownloadTitleStorage(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_DataLoading(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickState_Closing(float inDeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void TickLobby_Native(float inDeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartOfMatch();
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnManagerActor(TSubclassOf<AActor> InClass);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetupCharacterPlacement();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestGameServerClosing();
    
public:
    UFUNCTION(BlueprintCallable)
    bool RequestDownloadTitleStorage();
    
    UFUNCTION(BlueprintCallable)
    void PrintLog(const FString& Log);
    
    UFUNCTION(BlueprintCallable)
    void OnStartTipsLoading();
    
    UFUNCTION(BlueprintCallable)
    void OnStartReadyState();
    
    UFUNCTION(BlueprintCallable)
    void OnStartLobbyCountdown();
    
    UFUNCTION(BlueprintCallable)
    void OnStartHottestPlayer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReadTitleStorage();
    
public:
    UFUNCTION(BlueprintCallable)
    void Notice_LobbyFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServerState(ESSServerState inState) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLaunchType(const ESSModeLaunchType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownloadingTitleStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompletedDownloadTitleStorage() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAcceptMatching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InitializeManagerActors();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InitializeCharacterPlacement(int32 playerStartID, bool isShuffle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSServerState GetServerState() const;
    
    UFUNCTION(BlueprintCallable)
    AELSSLocator* GetReservedPlayerStartLocator(AELSSPlayerState* inPlayerState, bool inConsume);
    
private:
    UFUNCTION(BlueprintCallable)
    bool GetGameServerMatchingData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetChangeListByAsset() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitState_WaitStartGameSession();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_WaitSpawnClientActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Matching();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_InProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitState_DownloadTitleStorage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_DataLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitState_Closing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState_WaitStartGameSession();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_WaitSpawnClientActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Matching();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_InProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState_DownloadTitleStorage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_DataLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState_Closing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EndOfMatch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugIsAIOnlyMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 DebugGetAIEditWrestlerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DebugForciblyEndMatch();
    
    UFUNCTION(BlueprintCallable)
    void ChangeServerState(ESSServerState inState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartOfMatch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRequestDownloadTitleStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLobbyStartHottestPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLobbyStartCountdown() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanEndClosing() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EWrestlerID_N> CalcRandomWrestlerIDs(int32 Amount) const;
    
};

