#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EELAchievementList.h"
#include "EELBelt.h"
#include "EELMatchResultType.h"
#include "ELMatchResultParam.h"
#include "EWrestlerID_N.h"
#include "StMatchRule.h"
#include "Engine/GameInstance.h"
#include "PerPlatformProperties.h"
#include "InputCoreTypes.h"
#include "AIAutoMatchParam.h"
#include "AutoPlayParam.h"
#include "CareerCutsceneParam.h"
#include "CareerEvent.h"
#include "CareerEventMemberInfo.h"
#include "CareerMatch.h"
#include "CareerMatchCardCore.h"
#include "CareerMiniGame.h"
#include "CareerMovieSceneParam.h"
#include "CareerStory.h"
#include "CareerStoryCard.h"
#include "DebugCareerParam_All.h"
#include "ECareerCutsceneBeltType.h"
#include "ECareerCutsceneCastType.h"
#include "ECareerLevelInfo.h"
#include "ECareerStoryResultCondition.h"
#include "EELEOSEventResult.h"
#include "EELEOSEventType.h"
#include "EELTournamentDifficulty.h"
#include "EELTournamentState.h"
#include "EELTournamentType.h"
#include "ELSSMatchResultSpareDataParam.h"
#include "ELTmpJukeboxSaveData.h"
#include "ELTournamentBracket.h"
#include "ELTournamentInfo.h"
#include "ELTournamentRoundInfo.h"
#include "ELTournamentWrestler.h"
#include "ELWrestlerSelectParam.h"
#include "ELWrestlerSelectParamForNative.h"
#include "EMiniGameID.h"
#include "ESSEndGameReason.h"
#include "MiniGameDataMining.h"
#include "SSDebugParam.h"
#include "Templates/SubclassOf.h"
#include "ELGameInstance.generated.h"

class AELCharacter_Native;
class AELMenuOperationalWidgetManagerBase;
class APlayerController;
class AyDebugCamera;
class UDataTable;
class UELBattlePassManager;
class UELCareerDelivery;
class UELCareerGameParam;
class UELChallengeManager;
class UELCommentaryLoadingManager;
class UELCrateManager;
class UELEOSManager;
class UELGameInstance;
class UELGameOptionManager;
class UELGoldCoinPossessManager;
class UELInputDeviceObserveManager;
class UELKeyConfigManager;
class UELLeaderboards;
class UELLocalPlayer;
class UELMatchRecordsInfoSaveDataManager;
class UELMovieControlBase;
class UELPossessedItemManager;
class UELSSGameModeDataManager;
class UELSSLevelTransitionEvent;
class UELSSMasterData;
class UELSSModeConfigData;
class UELSSRootObject;
class UELSaveIconScreenManager;
class UELScoreRankingManager;
class UELSoundInfo;
class UELStats;
class UELTipsLoadingManager;
class UELTitleHolderSaveDataManager;
class UELTutorialManager;
class UELUnlockableItemManagerBase;
class UELUserProfileManager;
class UELYGS2Manager;
class UGameLiftObjectBase;
class UObject;

UCLASS(Blueprintable, NonTransient)
class ABP_200508_API UELGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UELEOSManager* ELEOSManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UELStats* ELStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UELLeaderboards* ELLeaderboards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UELYGS2Manager* ELYGS2Manager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FName> AOnKeys_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AOnDataTable_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVictory_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELMatchResultType MatchResultType_N;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AyDebugCamera> m_cDebugCameraClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pMusicList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELCareerGameParam* m_pCareerGameParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELCareerDelivery* m_pCareerDelivery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELMenuOperationalWidgetManagerBase* MenuOperationalWidgetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELUnlockableItemManagerBase* m_UnlockableItemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELBattlePassManager* m_BattlePassManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELChallengeManager* m_ChallengeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELPossessedItemManager* m_PossessedItemManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugGameplayEnableAllActionSkill_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugGameplayHUDOff_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugGameplayEffectOff_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugMenu_DispPlayerStatus_N;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELGoldCoinPossessManager* m_GoldCoinPossessManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSoundInfo* m_ELSoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ELSfxListDatatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELCrateManager* m_CrateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELKeyConfigManager* m_KeyConfigManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELTutorialManager* m_TutorialManager;
    
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FPerPlatformFloat PlatformFPS;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELGameOptionManager* m_GameOptionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELUserProfileManager* m_UserProfileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELTitleHolderSaveDataManager* TitleHolderSaveDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELScoreRankingManager* m_ScoreRankingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELInputDeviceObserveManager* m_InputDeviceObserveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELCommentaryLoadingManager* m_CommentaryLoadingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELTipsLoadingManager* m_TipsLoadingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSaveIconScreenManager* m_SaveIconScreenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELMatchRecordsInfoSaveDataManager* MatchRecordsInfoSaveDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSRootObject* SSRootObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSMasterData* SSMasterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSLevelTransitionEvent* SSLevelTransitionEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSEndGameReason SSEndGameReason;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SSModePlayCountToDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameLiftObjectBase* SSModeGameLiftParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSModeConfigData* SSModeConfigData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SSMainMenuFootStamp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDebugParam m_pSSDebugParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSMatchResultSpareDataParam m_pSSMatchResultSpareDataParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSGameModeDataManager* m_pSSGameDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELMovieControlBase* ELMovieControlBase;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> AutoAddDlcTeamList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BackUpCVarPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BackUpCVarMaxTempMemoryAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTexturePoolResized;
    
public:
    UELGameInstance();
    UFUNCTION(BlueprintCallable)
    void WrestlerSelectStart();
    
    UFUNCTION(BlueprintCallable)
    void WrestlerSelectEnd();
    
    UFUNCTION(BlueprintCallable)
    void StartTournamentMode(EELTournamentType Type, EELTournamentDifficulty Difficulty, FELTournamentInfo Info);
    
private:
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWholeLevelBGMID(int32 _sData, int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetValidNewWrestlerSelect(bool bValid);
    
    UFUNCTION(BlueprintCallable)
    void SetUseVictory_N(bool bNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetUseEntrance_N(bool bNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetupUnlockableItemManager();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupTutorialManager();
    
    UFUNCTION(BlueprintCallable)
    void SetupTitleHolderSaveDataManager();
    
    UFUNCTION(BlueprintCallable)
    void SetupPossessedItemManager();
    
    UFUNCTION(BlueprintCallable)
    void SetupMatchRecordsInfoSaveDataManager();
    
    UFUNCTION(BlueprintCallable)
    void SetupCrateManager();
    
    UFUNCTION(BlueprintCallable)
    void SetupChallengeManager();
    
    UFUNCTION(BlueprintCallable)
    void SetupBattlePassManager();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTurnCheckFlg(bool _Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentType(EELTournamentType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentState(EELTournamentState State);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentRound(int32 Round);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentRetryCountLimit(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentRetryCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentPlayerWrestler(const FELTournamentWrestler& InWrestler);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentPartnerWrestler(const FELTournamentWrestler& InWrestler);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentMode(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentMiniGame(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentMatchResult(bool bPlayerWin, int32 MatchScore);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentInfo(const FELTournamentInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentBracket(const TArray<FELTournamentBracket>& Bracket);
    
    UFUNCTION(BlueprintCallable)
    void SetTmpJukeboxSavedata(FELTmpJukeboxSaveData tmpData);
    
    UFUNCTION(BlueprintCallable)
    void SetStopAutoPlay(bool _stop);
    
    UFUNCTION(BlueprintCallable)
    void SetStartAutoMatch(bool _bStart);
    
    UFUNCTION(BlueprintCallable)
    void SetStackSaveAchievementInfo(EELAchievementList _Achievement, bool _stack);
    
    UFUNCTION(BlueprintCallable)
    void SetStackAchievementCount(EELAchievementList _Achievement, int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    void SetSSMatchResultSpareData(const FELSSMatchResultSpareDataParam& _SSMatchResultSpareDataParam);
    
    UFUNCTION(BlueprintCallable)
    void SetSSDebugParam(const FSSDebugParam& _SSDebugParam);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundInfo(UELSoundInfo* Info);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCommonLayoutWidget(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetShowBuldFlowFlag(bool NewIsShowBuldFlow);
    
    UFUNCTION(BlueprintCallable)
    void SetSfxListDatatable(UDataTable* _Table);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayNewGameFlg(bool _Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayCareerMiniGame(bool _Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayCareerMatch(bool _Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetNowMiniGameID(EMiniGameID _NowMiniGameID);
    
    UFUNCTION(BlueprintCallable)
    void SetNowMiniGameCount(int32 _NowMiniGameCount);
    
    UFUNCTION(BlueprintCallable)
    void SetNextLevelOption(const FString& _Option);
    
    UFUNCTION(BlueprintCallable)
    void SetNextLevelName(FName _LevelPath);
    
    UFUNCTION(BlueprintCallable)
    void SetNextJukeboxPlayID(int32 _id);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniGameScores(TArray<int32> _MiniGameScores);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniGameMiningInfo(FMiniGameDataMining _MiningInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniGameEnd(bool _IsMiniGameEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuOperationalWidgetManager(AELMenuOperationalWidgetManagerBase* Man);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxMiniGameNum(int32 _MaxMiniGameNum);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchResultType_N(EELMatchResultType _type);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchResult(FELMatchResultParam _value);
    
    UFUNCTION(BlueprintCallable)
    void SetLastSelectedMenuByDevice(bool IsGamepad);
    
    UFUNCTION(BlueprintCallable)
    void SetJukeBoxParam(UDataTable* _MusicList);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStackSaveAchievement(bool _stack);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStackAchievementCount(bool _stack);
    
    UFUNCTION(BlueprintCallable)
    void SetInputKeybord(bool _isKeybord);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayReferee_N(AELCharacter_Native* referee);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayPlayerArray_N(const TArray<AELCharacter_Native*>& Array);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayManagerArray_N(const TArray<AELCharacter_Native*>& Array);
    
    UFUNCTION(BlueprintCallable)
    void SetFullScreenTitantron(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDispPlayerStatus_N(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDispDebugUnlockItemId(bool bDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugStartRecPad(bool _isRec);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugGameplayHUDOff_N(bool bNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugGameplayEnableAllActionSkill_N(bool bNew);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugGameplayEffectOff_N(bool bNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAutoPlayTimeArray(TArray<FDateTime> _KeyArray);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAutoPlayPathArray(TArray<FString> _PathArray);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAutoPlayMultiFileNoArray(TArray<int32> _MultiArray);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAutoPlayInputArray(TArray<FKey> _KeyArray);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAutoPlayInfoArray(TArray<FString> Info);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAutoPlay(bool _isStart);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentJukeboxPlayID(int32 _id);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerStoryDataTable(TArray<FCareerStory> _Table);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerStoryCard(FCareerStoryCard _StoryCard);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerStory(FCareerStory _CareerStory);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerStopAchievement(bool _stop);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerStackAchievementInfoArray(EELAchievementList _Achievement, bool _stack);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerStackAchievementCount(EELAchievementList _Achievement, int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMovieSceneParam(FCareerMovieSceneParam _Param);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerModeStoryResult(ECareerStoryResultCondition _StoryResult);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerModeMiniGameInfo(FCareerMiniGame _CareerMiniGame);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerModeMatchInfo(FCareerMatch _CareerMatch);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerModeFlg(bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerModeEventInfo(FCareerEvent _CareerEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMatchCardInfo(FCareerMatchCardCore _MatchCardInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerLevelInfo(ECareerLevelInfo _CareerLevelInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerGameParam(UELCareerGameParam* _CareeGamerParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerEventMembersInfo(TArray<FCareerEventMemberInfo> _Array);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerCutsceneParam(FCareerCutsceneParam _Param);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayUseFixDT(bool use);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlaySuspensionEvent(bool _bSuspention);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayStartFirst(bool _start);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayShowTutorial(bool show);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayRecordingFileString(const FString& _str);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayRecFileIndex(int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayParam(TArray<FAutoPlayParam> _stAutoMatchParamArray);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayOutputSuccessResult(bool Result);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayOutputFaildResult(bool Result);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayMultipleFile(bool _bMulti);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayMultiIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayMailSuccess(const FString& _str);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayMailError(const FString& _str);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayLoopMaxCount(int32 _sCount);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayLoop(bool _bLoop);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayLineIndex(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayKeyInterval(FDateTime _time);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayFileString(const FString& _str);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayFileIndex(int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayErrorCountMax(int32 _sCount);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayErrorCount(int32 _sCount);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayError(bool _bError);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayCreateNewRecordingFile(bool _bCreate);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchVictorySceneMode(bool Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchSkipEntranceSecond(int32 _second);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchSkipEntrance(bool _skip);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchSendMail(bool _Error);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchParam(TArray<FAIAutoMatchParam> _stAutoMatchParamArray);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchOutputSuccessResult(bool Result);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchOutputFaildResult(bool Result);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchMailSuccess(const FString& _str);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchMailError(const FString& _str);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchLoopMaxCount(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchErrorCheck(bool _Error);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchAnimationDebugView(bool _view);
    
    UFUNCTION(BlueprintCallable)
    void SetAttireExMenu(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetAllAchievementLocalCount(TArray<int32> _AchievementArray);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievementParam(UDataTable* _Achievement);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievementLocalCountArray(EELAchievementList _Achievement, int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    void ResizeTextureStreamingPool(int32 DesiredCVarPoolSize, int32 DesiredCVarMaxTempMemoryAllowed);
    
    UFUNCTION(BlueprintCallable)
    void ResetTournamentUnlockItemFlag();
    
    UFUNCTION(BlueprintCallable)
    void ResetTournamentRound();
    
    UFUNCTION(BlueprintCallable)
    void ResetTextureStreamingPoolSize();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnQueryStatsInternal();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryStats();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostInitialized();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOpenPause();
    
    UFUNCTION(BlueprintCallable)
    void OnEOSEvent(EELEOSEventType EventType, EELEOSEventResult EventResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool MatchRule_IsEnableSubmission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool MatchRule_IsEnableRingsideSubmission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool MatchRule_IsEnableRingsidePin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool MatchRule_IsEnablePin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidNewWrestlerSelect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseVictory_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseEntrance_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTournamentValidRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTournamentMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTournamentMiniGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTournamentFinalRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTagTournament() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsStopAutoPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartAutoMatch() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsStackSaveAchievement();
    
    UFUNCTION(BlueprintCallable)
    bool IsStackAchievementCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowCommonLayoutWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowBuldFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayCareerMiniGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayCareerMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenTournamentMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenAttireEXMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMiniGameEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastSelectedMenuByGamepad() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInputKeybord();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntranceCutscene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableTournamentRetry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispDebugUnlockItemId() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugStartRecPad();
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugAutoPlay();
    
    UFUNCTION(BlueprintCallable)
    bool IsCareerStopAchievement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCareerMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCareerAutoPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCareerAutoEvent();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoPlayUseFixDT();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoPlaySuspensionEvent();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoPlayStartFirst();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoPlayShowTutorial();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoPlayOutputSuccessResult();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoPlayOutputFaildResult();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoPlayError();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoMatchVictorySceneMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoMatchSkipEntrance();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoMatchSendMail();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoMatchOutputSuccessResult();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoMatchOutputFaildResult();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoMatchErrorCheck();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoMatchAnimationDebugView();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttireExMenu() const;
    
    UFUNCTION(BlueprintCallable)
    void InitWholeLevelBGMIDArray();
    
    UFUNCTION(BlueprintCallable)
    void InitStackAchievementCount(EELAchievementList _Achievement);
    
    UFUNCTION(BlueprintCallable)
    void InitDebugCamera(APlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    void InitAddWholeLevelBGMIDArray(int32 _MaxNum);
    
    UFUNCTION(BlueprintCallable)
    void InitAchievementLocalCountArray();
    
private:
    UFUNCTION(BlueprintCallable)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELYGS2Manager* GetYGS2Manager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetWrestlerSelectParamForNative(TArray<FELWrestlerSelectParamForNative>& List) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWrestlerSelectParam(int32 Index, FELWrestlerSelectParam& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetWholeLevelBGMIDArray() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetWholeLevelBGMID(int32 _sIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVictoryCutscene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELUserProfileManager* GetUserProfileManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELUnlockableItemManagerBase* GetUnlockableItemManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELTutorialManager* GetTutorialManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTournamentUnlockItemFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELTournamentType GetTournamentType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELTournamentState GetTournamentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTournamentRoundInfo(int32 Round, FELTournamentRoundInfo& Info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTournamentRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTournamentRetryCountRemain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTournamentRetryCountLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTournamentRetryCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTournamentPlayerWrestler(FELTournamentWrestler& OutWrestler) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTournamentPartnerWrestler(FELTournamentWrestler& OutWrestler) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTournamentName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTournamentMatchResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELTournamentInfo GetTournamentInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELTournamentDifficulty GetTournamentDifficulty() const;
    
    UFUNCTION(BlueprintCallable)
    void GetTournamentBracketByRound(int32 Round, FELTournamentBracket& Bracket);
    
    UFUNCTION(BlueprintCallable)
    void GetTournamentBracket(TArray<FELTournamentBracket>& Bracket);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELTmpJukeboxSaveData GetTmpJukeboxSavedata();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELTitleHolderSaveDataManager* GetTitleHolderSaveDataManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELTipsLoadingManager* GetTipsLoadingManager() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EELAchievementList> GetStackSaveAchievementArray();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetStackAchievementCountArray();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStackAchievementCount(EELAchievementList _Achievement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELSSMatchResultSpareDataParam GetSSMatchResultSpareDataParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSDebugParam GetSSDebugParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSoundInfo* GetSoundInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetSfxListDatatable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELScoreRankingManager* GetScoreRankingManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSaveIconScreenManager* GetSaveIconScreenManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELPossessedItemManager* GetPossessedItemManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayNewGameFlg();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMiniGameID GetNowMiniGameID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNowMiniGameCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNextLevelOption();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextLevelName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextJukeboxPlayID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetMiniGameScores();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGameDataMining GetMiniGameMiningInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELMenuOperationalWidgetManagerBase* GetMenuOperationalWidgetManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxMiniGameNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetMatchRule_Impl(FStMatchRule& MatchRule) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELMatchResultType GetMatchResultType_N() const;
    
    UFUNCTION(BlueprintCallable)
    FELMatchResultParam GetMatchResult();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetMainMenuDecideGaempad_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetMainMenuDecideControllerID_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELKeyConfigManager* GetKeyConfigManager() const;
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetJukeBoxParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInteractiveWinscene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELInputDeviceObserveManager* GetInputDeviceObserveManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELGoldCoinPossessManager* GetGoldCoinPossessManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameplayPlayerNum_N() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AELCharacter_Native*> GetGameplayPlayerArray_N();
    
    UFUNCTION(BlueprintCallable)
    TArray<AELCharacter_Native*> GetGameplayManagerArray_N();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELGameOptionManager* GetGameOptionManager() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFPS() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEmoteCutscene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELStats* GetELStats() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UELLocalPlayer* GetELLocalPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELLeaderboards* GetELLeaderboards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSManager* GetELEOSManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDispPlayerStatus_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugGameplayHUDOff_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugGameplayEnableAllActionSkill_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugGameplayEffectOff_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDebugCareerParam_All GetDebugCareerParam_All() const;
    
    UFUNCTION(BlueprintCallable)
    AyDebugCamera* GetDebugCamera();
    
    UFUNCTION(BlueprintCallable)
    TArray<FDateTime> GetDebugAutoPlayTimeArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetDebugAutoPlayTime(int32 _Index) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetDebugAutoPlayPathArray();
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugAutoPlayPath(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetDebugAutoPlayMultiFileNoArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugAutoPlayMultiFileNo(int32 _Index) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FKey> GetDebugAutoPlayInputArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetDebugAutoPlayInput(int32 _Index) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetDebugAutoPlayInfoArray();
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugAutoPlayInfo(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentTournamentRoundInfo(FELTournamentRoundInfo& Info) const;
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentTournamentBracket(FELTournamentBracket& Bracket);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentJukeboxPlayID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELCrateManager* GetCrateManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELCommentaryLoadingManager* GetCommentaryLoadingManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELChallengeManager* GetChallengeManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerStoryCard GetCareerStotyCard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerStory> GetCareerStoryDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerStory GetCareerStory();
    
    UFUNCTION(BlueprintCallable)
    TArray<EELAchievementList> GetCareerStackAchievementInfoArray();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetCareerStackAchievementCountArray();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCareerStackAchievementCount(EELAchievementList _Achievement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerMovieSceneParam GetCareerMovieSceneParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerStoryResultCondition GetCareerModeStoryResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerMiniGame GetCareerModeMiniGameInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerMatch GetCareerModeMatchInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerEvent GetCareerModeEventInfo();
    
    UFUNCTION(BlueprintCallable)
    EWrestlerID_N GetCareerModeCutsceneCast(ECareerCutsceneCastType _CastType);
    
    UFUNCTION(BlueprintCallable)
    EELBelt GetCareerModeCutsceneBelt(ECareerCutsceneBeltType _beltType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerMatchCardCore GetCareerMatchCardInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerLevelInfo GetCareerLevelInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELCareerGameParam* GetCareerGameParam();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerEventMemberInfo> GetCareerEventMembersInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELCareerDelivery* GetCareerDelivery();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerCutsceneParam GetCareerCutsceneParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetBodyScale(EWrestlerID_N WrestlerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELBattlePassManager* GetBattlePassManager() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAutoPlayRecordingFileString();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAutoPlayRecFileIndex();
    
    UFUNCTION(BlueprintCallable)
    TArray<FAutoPlayParam> GetAutoPlayParam();
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoPlayMultipleFile();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAutoPlayMultiIndex();
    
    UFUNCTION(BlueprintCallable)
    FString GetAutoPlayMailSuccess();
    
    UFUNCTION(BlueprintCallable)
    FString GetAutoPlayMailError();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAutoPlayLoopMaxCount();
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoPlayLoop();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAutoPlayLineIndex();
    
    UFUNCTION(BlueprintCallable)
    FDateTime GetAutoPlayKeyInterval();
    
    UFUNCTION(BlueprintCallable)
    FString GetAutoPlayFileString();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAutoPlayFileIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAutoPlayErrorCountMax();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAutoPlayErrorCount();
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoPlayCreateNewRecordingFile();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAutoMatchSkipEntranceSecond();
    
    UFUNCTION(BlueprintCallable)
    TArray<FAIAutoMatchParam> GetAutoMatchParam();
    
    UFUNCTION(BlueprintCallable)
    FString GetAutoMatchMailSuccess();
    
    UFUNCTION(BlueprintCallable)
    FString GetAutoMatchMailError();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAutoMatchLoopMaxCount();
    
    UFUNCTION(BlueprintCallable)
    bool GetAOnKeys_N(const FString& Key, FName& Name);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetAOnDataTable_N();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetAllAchievementLocalCount();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetAchievementParam();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAchievementLocalCountArray(EELAchievementList _Achievement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELGameInstance* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool ForceQuitApplication();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindControllerId(const int32 ControllerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecGotoMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void ExecGotoLevel(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    void DisableLookAtWrestler();
    
    UFUNCTION(BlueprintCallable)
    void DestroyDebugCamera();
    
    UFUNCTION(BlueprintCallable)
    void DecisionTournamentBracket();
    
    UFUNCTION(BlueprintCallable)
    void DebugChangeCurrentLanguage(int32 LangType);
    
    UFUNCTION(BlueprintCallable)
    void ClearWrestlerSelectParams();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWorldRequested(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    void CareerChangeToHubLevel(FName PreLevelName, FName NextLevelName);
    
    UFUNCTION(BlueprintCallable)
    void CareerBackToLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AfterTransitionCleaning();
    
    UFUNCTION(BlueprintCallable)
    void AddTournamentRound();
    
    UFUNCTION(BlueprintCallable)
    void AddTournamentRetryCountLimit(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    void AddTournamentRetryCount();
    
    UFUNCTION(BlueprintCallable)
    int32 AddAchievementLocalCountArray(EELAchievementList _Achievement, int32 _Add);
    
};

