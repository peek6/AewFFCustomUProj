#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WrestlerSetupParam.h"
#include "EWrestlerID_N.h"
#include "GameFramework/PlayerState.h"
#include "SSModeMessageData.h"
#include "EYGS2ErrorType.h"
#include "Request_ErrSetupData.h"
#include "YGS2SSPlayerData.h"
#include "EELActivityUpdateMatchStatus.h"
#include "ELSSLobbyPlayerInfo.h"
#include "ELSSResultTallyPlayerData.h"
#include "EResultTallyState.h"
#include "ESSAttentionGaugeState.h"
#include "ESSAttentionReason.h"
#include "ESSClientFlowState.h"
#include "ESSEndGameReason.h"
#include "ESSGameStateDebugFlag.h"
#include "ESSLocalDebugFlag.h"
#include "ESSPlayerProgress.h"
#include "PlayerSpawnPointChangeResultDelegate.h"
#include "SSActivityMatchResult.h"
#include "SSAttentionAdjustParam.h"
#include "SSAttentionLevelParam.h"
#include "SSChallengeCountData.h"
#include "SSClientInfoForAnalytics.h"
#include "SSExpItemReserved.h"
#include "SSMatchMakeInfoForAnalytics.h"
#include "SSMoveSetDefaultSettings.h"
#include "SSPlayerEquipSettings.h"
#include "SSPlayerProfileForInGame.h"
#include "SSReplicatedClientResultData.h"
#include "SSSyncStatusForWatch_Owner.h"
#include "SSSyncStatusForWatch_Replicated.h"
#include "SSWrestlerMovePresetParam.h"
#include "SSWrestlerSetupParam.h"
#include "ELSSPlayerState.generated.h"

class AActor;
class AELSSAIController;
class AELSSPlayer;
class AELSSPlayerController;
class AELSSPlayerState;
class UELSSMasterData;
class UYGS2RequestBase;

UCLASS(Blueprintable)
class ABP_200508_API AELSSPlayerState : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSMasterData* MasterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_KillCount, meta=(AllowPrivateAccess=true))
    int32 KillCountRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillCountLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerController* WatcherLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPlayerController*> WatcherOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WatchedPlayerNum, meta=(AllowPrivateAccess=true))
    int32 WatchedPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSyncStatusForWatch_Replicated SyncStatusForWatch_Replicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SyncStatus_CameraRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SyncStatus_InteractTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSyncStatusForWatch_Owner SyncStatusForWatch_Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttentionPoint, meta=(AllowPrivateAccess=true))
    int32 AttentionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAttentionGaugeState AttentionGaugeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FeverTimeBeginTime, meta=(AllowPrivateAccess=true))
    float FeverTimeBeginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NegativeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAttentionAdjustParam AttentionAdjustParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSExpItemReserved> ExpItemReservedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpItemSpawnDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AfterFeverTimeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SurvivorRanking, meta=(AllowPrivateAccess=true))
    int32 SurvivorRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ExpItemPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ExpItemPointLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAttentionLevelParam AttentionLevelParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMoveSetDefaultSettings MoveSetSettingsOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerEquipSettings EquipSettingsOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettingAbilityId_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettingAbilityId_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettingAbilityId_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDefaultUserSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WrestlerSetupParam, meta=(AllowPrivateAccess=true))
    FSSWrestlerSetupParam WrestlerSetupParamRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerSetupParam WrestlerSetupParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ProgressFlags;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_HeatLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_TotalAttack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_TotalDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Log_Mileage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Log_Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Log_PickupItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Log_PickupWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Log_PickupShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Log_KilledPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Log_KillerPlayer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_ReviveFromKoCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_StrikeCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_GrappleCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_WeaponAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Log_FinisherId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_FinisherCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_VehicleRideCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Log_AbilityUseCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_VendingUseCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Log_SlotMachineUseCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EndGameReasonOnServer, meta=(AllowPrivateAccess=true))
    ESSEndGameReason EndGameReasonOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChallengeCountData ChallengeCountData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChallengeCountData, meta=(AllowPrivateAccess=true))
    FSSChallengeCountData ChallengeCountDataRep;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ServerPlayerStateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillerPlayerIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMatchMakeInfoForAnalytics SSMatchMakeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSClientInfoForAnalytics SSClientInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClientIPForServer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGS2SSPlayerData tallyResultPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSResultTallyPlayerData resultTallyPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResultTallyState isResultTallyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResultTallyData, meta=(AllowPrivateAccess=true))
    FString ssResultTallyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedClientResultData, meta=(AllowPrivateAccess=true))
    FSSReplicatedClientResultData ReplicatedClientResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerDataSync, meta=(AllowPrivateAccess=true))
    FELSSLobbyPlayerInfo ssPlayerInfoSyncData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectSpawnPointId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpawnPointChangeResult onPlayerSpawnPointChangeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeaderboardRank;
    
    AELSSPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateSyncStatusForWatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayerRankPoint(const int32 pt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLeaderboardData(const FELSSResultTallyPlayerData tallyData);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void SyncStatusForWatch_ServerToWatcher_Client(const FSSSyncStatusForWatch_Replicated& inSendData);
    
    UFUNCTION(BlueprintCallable)
    void SyncStatusForWatch_ServerToWatcher();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SyncStatusForWatch_Server(const FSSSyncStatusForWatch_Owner& inSendData);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SyncStatusForWatch_ClientToServer_Server();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SyncPlayerProfileForInGame_Server(const FSSPlayerProfileForInGame& inProfile);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SyncMatchMakeInfo_Server(const FSSMatchMakeInfoForAnalytics& inMatchMakeInfo, const FSSClientInfoForAnalytics& inClientInfo);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SyncClientFPS_Server(float inClientFPS);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncChallengeCount_Clent(FSSChallengeCountData inSyncData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SSAntiCheatServerNotifyMessage_ToClient(const FSSModeMessageData& dat);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SSAntiCheatServerNotifyAddClientAction_ToClient(const int32 resClientActionState, const int32 resActionCode, const FString& resActionDetails);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SSAntiCheatClientNotifyMessage_ToServer(const FSSModeMessageData& dat);
    
    UFUNCTION(BlueprintCallable)
    void SetWrestlerSetupParamByBaseStruct(const FWrestlerSetupParam& NewWrestlerSetupParam);
    
    UFUNCTION(BlueprintCallable)
    void SetWrestlerSetupParam(const FSSWrestlerSetupParam& NewWrestlerSetupParam);
    
    UFUNCTION(BlueprintCallable)
    void SetWrestlerPresetParam(const FSSWrestlerMovePresetParam& wrestlerPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetResultTallyData(const FString& tallyData);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetProgressFlag_Server(ESSPlayerProgress Type, bool IsOn);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetProgressFlag(ESSPlayerProgress Type, bool IsOn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetPlayerSpawnPointIdResult_Client(const bool isChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetPlayerSpawnPointId_Server(const int32 spawnId);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerEquipSettings_Ability(int32 inAbility1, int32 inAbility2, int32 inAbility3);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerEquipSettings(const FSSPlayerEquipSettings& equipSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLeaderboardRank();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetIgnoreAnalytics_Server(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultPlayerEquipSettings_HeatSkill(int32 inDefaultPlayerEquipSettingsId);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultPlayerEquipSettings_Ability(int32 inDefaultPlayerEquipSettingsId);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultPlayerEquipSettings(int32 inDefaultPlayerEquipSettingsId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetAttentionPointForWatcher_Client(AELSSPlayerState* inWatchedPlayer, int32 inAttentionUpdateId, ESSAttentionReason inReason, int32 inAttentionPoint, int32 inAddPoint);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetAttentionPoint_Client(int32 inAttentionUpdateId, ESSAttentionReason inReason, int32 inAttentionPoint, int32 inAddPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetAttentionPoint(ESSAttentionReason inReason, int32 inAttentionPoint, int32 inPrevPoint, int32 inAddPointForHUD);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendPlayerInfoSyncData_Server(const FELSSLobbyPlayerInfo& inInfoSyncData);
    
private:
    UFUNCTION(BlueprintCallable)
    void RetryErrorAPIEvent(const FRequest_ErrSetupData& apiErrData, const int32 errRetryCnt);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResultTallyDataToSyncBPEvent();
    
    UFUNCTION(BlueprintCallable)
    void ReserveExpItem(int32 inExpItemLotGroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestYGS2Flow_SessionResult();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestYGS2Flow_GameStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestYGS2Flow_GameResult();
    
    UFUNCTION(BlueprintCallable)
    bool RequestYGS2_SessionResult();
    
    UFUNCTION(BlueprintCallable)
    bool RequestYGS2_GameStart();
    
    UFUNCTION(BlueprintCallable)
    bool RequestYGS2_GameResult();
    
    UFUNCTION(BlueprintCallable)
    void RegisterLog_VendingUseCount();
    
    UFUNCTION(BlueprintCallable)
    void RegisterLog_SlotMachineUseCount();
    
    UFUNCTION(BlueprintCallable)
    void OnYGS2Response_SessionResult(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request);
    
    UFUNCTION(BlueprintCallable)
    void OnYGS2Response_GameStart(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request);
    
    UFUNCTION(BlueprintCallable)
    void OnYGS2Response_GameResult(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request);
    
    UFUNCTION(BlueprintCallable)
    void OnYGS2Error_SessionResult(const bool isYES, const FRequest_ErrSetupData errDialogData);
    
    UFUNCTION(BlueprintCallable)
    void OnYGS2Error_GameStart(const bool isYES, const FRequest_ErrSetupData errDialogData);
    
    UFUNCTION(BlueprintCallable)
    void OnYGS2Error_GameResult(const bool isYES, const FRequest_ErrSetupData errDialogData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WrestlerSetupParam();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WatchedPlayerNum();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SurvivorRanking();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResultTallyData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedClientResultData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerDataSync();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_KillCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FeverTimeBeginTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EndGameReasonOnServer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChallengeCountData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttentionPoint_Impl();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttentionPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeLocalKillCount();
    
    UFUNCTION(BlueprintCallable)
    bool IsResultTallyEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerResultEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneSyncResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneSyncChallengeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneResultAPI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAfterFeverTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProgressFlag(ESSPlayerProgress Type) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetWeaponDecalSymbolId() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetWeaponDecalId() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetWeaponColorUniqueId() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetWeaponColorListIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerController* GetSSPlayerControllerForUIUpdate() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetResultPlayerEXP();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandomBadgeId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerController* GetOwnerPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerController* GetOwnerLocalPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSAIController* GetOwnerAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLeaderboardRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKillCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFeverTimeRemainRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFeverCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSClientFlowState GetClientFlowStateOnServer() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetChangeListByAsset() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttentionPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttentionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayer* GetAssociatedSSPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAfterFeverTimeRemainRate() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceEndFeverTime();
    
    UFUNCTION(BlueprintCallable)
    void DoneUIPrepare();
    
    UFUNCTION(BlueprintCallable)
    void DoneOpenGamePlayScreen();
    
    UFUNCTION(BlueprintCallable)
    void DoneDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugYGS2DelayCancelRequestWhenHasFlag(UYGS2RequestBase* inRequest, ESSLocalDebugFlag inDebugFlag, EYGS2ErrorType inErrorType, float InDelayTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSetCopyWrestlerSetupParamToAI_Server();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSendGameStateDebugFlag_Server(ESSGameStateDebugFlag inDebugFlag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DebugResetAttention();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcAttentionLevelFromPoint() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BeginFeverTime_Multicast(int32 inNewAttentionLevel, float inBeginTime);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMasterData();
    
    UFUNCTION(BlueprintCallable)
    void ApplyLastPlayRecordToSaveData();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDebugMenuParam();
    
    UFUNCTION(BlueprintCallable)
    void ApplyChallengeCountToSaveData(int32 InRanking);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddKillCount_Server();
    
    UFUNCTION(BlueprintCallable)
    void AddKillCount();
    
    UFUNCTION(BlueprintCallable)
    void AddAttentionPoint(ESSAttentionReason inReason, int32 inAddPoint);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Activity_UpdateMatchStatusOnClient(const FString& MatchID, EELActivityUpdateMatchStatus inStatus);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Activity_SendResultUpdateMatchStatus(EELActivityUpdateMatchStatus inStatus);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Activity_SendResultReport();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Activity_SendResultLeaveMatch();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Activity_SendResultCreateMatch(const FString& MatchID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Activity_ReportOnClient(const FString& MatchID, const FSSActivityMatchResult& Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Activity_LeaveMatchOnClient(const FString& MatchID, const FString& ExternalAccountId, const FString& Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Activity_CreateMatchOnClient();
    
};

