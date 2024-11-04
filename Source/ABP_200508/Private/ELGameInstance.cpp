#include "ELGameInstance.h"

void UELGameInstance::WrestlerSelectStart() {
}

void UELGameInstance::WrestlerSelectEnd() {
}

void UELGameInstance::StartTournamentMode(EELTournamentType Type, EELTournamentDifficulty Difficulty, FELTournamentInfo Info) {
}

void UELGameInstance::Shutdown() {
}

void UELGameInstance::SetWholeLevelBGMID(int32 _sData, int32 _sIndex) {
}

void UELGameInstance::SetValidNewWrestlerSelect(bool bValid) {
}

void UELGameInstance::SetUseVictory_N(bool bNewState) {
}

void UELGameInstance::SetUseEntrance_N(bool bNewState) {
}

void UELGameInstance::SetupUnlockableItemManager() {
}

void UELGameInstance::SetupTutorialManager() {
}

void UELGameInstance::SetupTitleHolderSaveDataManager() {
}

void UELGameInstance::SetupPossessedItemManager() {
}

void UELGameInstance::SetupMatchRecordsInfoSaveDataManager() {
}

void UELGameInstance::SetupCrateManager() {
}

void UELGameInstance::SetupChallengeManager() {
}

void UELGameInstance::SetupBattlePassManager() {
}

void UELGameInstance::SetTurnCheckFlg(bool _Flg) {
}

void UELGameInstance::SetTournamentType(EELTournamentType Type) {
}

void UELGameInstance::SetTournamentState(EELTournamentState State) {
}

void UELGameInstance::SetTournamentRound(int32 Round) {
}

void UELGameInstance::SetTournamentRetryCountLimit(int32 Count) {
}

void UELGameInstance::SetTournamentRetryCount(int32 Count) {
}

void UELGameInstance::SetTournamentPlayerWrestler(const FELTournamentWrestler& InWrestler) {
}

void UELGameInstance::SetTournamentPartnerWrestler(const FELTournamentWrestler& InWrestler) {
}

void UELGameInstance::SetTournamentMode(bool bSet) {
}

void UELGameInstance::SetTournamentMiniGame(bool bSet) {
}

void UELGameInstance::SetTournamentMatchResult(bool bPlayerWin, int32 MatchScore) {
}

void UELGameInstance::SetTournamentInfo(const FELTournamentInfo& Info) {
}

void UELGameInstance::SetTournamentBracket(const TArray<FELTournamentBracket>& Bracket) {
}

void UELGameInstance::SetTmpJukeboxSavedata(FELTmpJukeboxSaveData tmpData) {
}

void UELGameInstance::SetStopAutoPlay(bool _stop) {
}

void UELGameInstance::SetStartAutoMatch(bool _bStart) {
}

void UELGameInstance::SetStackSaveAchievementInfo(EELAchievementList _Achievement, bool _stack) {
}

void UELGameInstance::SetStackAchievementCount(EELAchievementList _Achievement, int32 _Count) {
}

void UELGameInstance::SetSSMatchResultSpareData(const FELSSMatchResultSpareDataParam& _SSMatchResultSpareDataParam) {
}

void UELGameInstance::SetSSDebugParam(const FSSDebugParam& _SSDebugParam) {
}

void UELGameInstance::SetSoundInfo(UELSoundInfo* Info) {
}

void UELGameInstance::SetShowCommonLayoutWidget(bool bVisible) {
}

void UELGameInstance::SetShowBuldFlowFlag(bool NewIsShowBuldFlow) {
}

void UELGameInstance::SetSfxListDatatable(UDataTable* _Table) {
}

void UELGameInstance::SetPlayNewGameFlg(bool _Flg) {
}

void UELGameInstance::SetPlayCareerMiniGame(bool _Flg) {
}

void UELGameInstance::SetPlayCareerMatch(bool _Flg) {
}

void UELGameInstance::SetNowMiniGameID(EMiniGameID _NowMiniGameID) {
}

void UELGameInstance::SetNowMiniGameCount(int32 _NowMiniGameCount) {
}

void UELGameInstance::SetNextLevelOption(const FString& _Option) {
}

void UELGameInstance::SetNextLevelName(FName _LevelPath) {
}

void UELGameInstance::SetNextJukeboxPlayID(int32 _id) {
}

void UELGameInstance::SetMiniGameScores(TArray<int32> _MiniGameScores) {
}

void UELGameInstance::SetMiniGameMiningInfo(FMiniGameDataMining _MiningInfo) {
}

void UELGameInstance::SetMiniGameEnd(bool _IsMiniGameEnd) {
}

void UELGameInstance::SetMenuOperationalWidgetManager(AELMenuOperationalWidgetManagerBase* Man) {
}

void UELGameInstance::SetMaxMiniGameNum(int32 _MaxMiniGameNum) {
}

void UELGameInstance::SetMatchResultType_N(EELMatchResultType _type) {
}

void UELGameInstance::SetMatchResult(FELMatchResultParam _value) {
}

void UELGameInstance::SetLastSelectedMenuByDevice(bool IsGamepad) {
}

void UELGameInstance::SetJukeBoxParam(UDataTable* _MusicList) {
}

void UELGameInstance::SetIsStackSaveAchievement(bool _stack) {
}

void UELGameInstance::SetIsStackAchievementCount(bool _stack) {
}

void UELGameInstance::SetInputKeybord(bool _isKeybord) {
}

void UELGameInstance::SetGameplayReferee_N(AELCharacter_Native* referee) {
}

void UELGameInstance::SetGameplayPlayerArray_N(const TArray<AELCharacter_Native*>& Array) {
}

void UELGameInstance::SetGameplayManagerArray_N(const TArray<AELCharacter_Native*>& Array) {
}

void UELGameInstance::SetFullScreenTitantron(bool Flag) {
}

void UELGameInstance::SetDispPlayerStatus_N(int32 NewValue) {
}

void UELGameInstance::SetDispDebugUnlockItemId(bool bDisp) {
}

void UELGameInstance::SetDebugStartRecPad(bool _isRec) {
}

void UELGameInstance::SetDebugGameplayHUDOff_N(bool bNewState) {
}

void UELGameInstance::SetDebugGameplayEnableAllActionSkill_N(bool bNew) {
}

void UELGameInstance::SetDebugGameplayEffectOff_N(bool bNewState) {
}

void UELGameInstance::SetDebugAutoPlayTimeArray(TArray<FDateTime> _KeyArray) {
}

void UELGameInstance::SetDebugAutoPlayPathArray(TArray<FString> _PathArray) {
}

void UELGameInstance::SetDebugAutoPlayMultiFileNoArray(TArray<int32> _MultiArray) {
}

void UELGameInstance::SetDebugAutoPlayInputArray(TArray<FKey> _KeyArray) {
}

void UELGameInstance::SetDebugAutoPlayInfoArray(TArray<FString> Info) {
}

void UELGameInstance::SetDebugAutoPlay(bool _isStart) {
}

void UELGameInstance::SetCurrentJukeboxPlayID(int32 _id) {
}

void UELGameInstance::SetCareerStoryDataTable(TArray<FCareerStory> _Table) {
}

void UELGameInstance::SetCareerStoryCard(FCareerStoryCard _StoryCard) {
}

void UELGameInstance::SetCareerStory(FCareerStory _CareerStory) {
}

void UELGameInstance::SetCareerStopAchievement(bool _stop) {
}

void UELGameInstance::SetCareerStackAchievementInfoArray(EELAchievementList _Achievement, bool _stack) {
}

void UELGameInstance::SetCareerStackAchievementCount(EELAchievementList _Achievement, int32 _Count) {
}

void UELGameInstance::SetCareerMovieSceneParam(FCareerMovieSceneParam _Param) {
}

void UELGameInstance::SetCareerModeStoryResult(ECareerStoryResultCondition _StoryResult) {
}

void UELGameInstance::SetCareerModeMiniGameInfo(FCareerMiniGame _CareerMiniGame) {
}

void UELGameInstance::SetCareerModeMatchInfo(FCareerMatch _CareerMatch) {
}

void UELGameInstance::SetCareerModeFlg(bool _Enable) {
}

void UELGameInstance::SetCareerModeEventInfo(FCareerEvent _CareerEvent) {
}

void UELGameInstance::SetCareerMatchCardInfo(FCareerMatchCardCore _MatchCardInfo) {
}

void UELGameInstance::SetCareerLevelInfo(ECareerLevelInfo _CareerLevelInfo) {
}

void UELGameInstance::SetCareerGameParam(UELCareerGameParam* _CareeGamerParam) {
}

void UELGameInstance::SetCareerEventMembersInfo(TArray<FCareerEventMemberInfo> _Array) {
}

void UELGameInstance::SetCareerCutsceneParam(FCareerCutsceneParam _Param) {
}

void UELGameInstance::SetAutoPlayUseFixDT(bool use) {
}

void UELGameInstance::SetAutoPlaySuspensionEvent(bool _bSuspention) {
}

void UELGameInstance::SetAutoPlayStartFirst(bool _start) {
}

void UELGameInstance::SetAutoPlayShowTutorial(bool show) {
}

void UELGameInstance::SetAutoPlayRecordingFileString(const FString& _str) {
}

void UELGameInstance::SetAutoPlayRecFileIndex(int32 _sIndex) {
}

void UELGameInstance::SetAutoPlayParam(TArray<FAutoPlayParam> _stAutoMatchParamArray) {
}

void UELGameInstance::SetAutoPlayOutputSuccessResult(bool Result) {
}

void UELGameInstance::SetAutoPlayOutputFaildResult(bool Result) {
}

void UELGameInstance::SetAutoPlayMultipleFile(bool _bMulti) {
}

void UELGameInstance::SetAutoPlayMultiIndex(int32 Index) {
}

void UELGameInstance::SetAutoPlayMailSuccess(const FString& _str) {
}

void UELGameInstance::SetAutoPlayMailError(const FString& _str) {
}

void UELGameInstance::SetAutoPlayLoopMaxCount(int32 _sCount) {
}

void UELGameInstance::SetAutoPlayLoop(bool _bLoop) {
}

void UELGameInstance::SetAutoPlayLineIndex(int32 Num) {
}

void UELGameInstance::SetAutoPlayKeyInterval(FDateTime _time) {
}

void UELGameInstance::SetAutoPlayFileString(const FString& _str) {
}

void UELGameInstance::SetAutoPlayFileIndex(int32 _sIndex) {
}

void UELGameInstance::SetAutoPlayErrorCountMax(int32 _sCount) {
}

void UELGameInstance::SetAutoPlayErrorCount(int32 _sCount) {
}

void UELGameInstance::SetAutoPlayError(bool _bError) {
}

void UELGameInstance::SetAutoPlayCreateNewRecordingFile(bool _bCreate) {
}

void UELGameInstance::SetAutoMatchVictorySceneMode(bool Mode) {
}

void UELGameInstance::SetAutoMatchSkipEntranceSecond(int32 _second) {
}

void UELGameInstance::SetAutoMatchSkipEntrance(bool _skip) {
}

void UELGameInstance::SetAutoMatchSendMail(bool _Error) {
}

void UELGameInstance::SetAutoMatchParam(TArray<FAIAutoMatchParam> _stAutoMatchParamArray) {
}

void UELGameInstance::SetAutoMatchOutputSuccessResult(bool Result) {
}

void UELGameInstance::SetAutoMatchOutputFaildResult(bool Result) {
}

void UELGameInstance::SetAutoMatchMailSuccess(const FString& _str) {
}

void UELGameInstance::SetAutoMatchMailError(const FString& _str) {
}

void UELGameInstance::SetAutoMatchLoopMaxCount(int32 _Count) {
}

void UELGameInstance::SetAutoMatchErrorCheck(bool _Error) {
}

void UELGameInstance::SetAutoMatchAnimationDebugView(bool _view) {
}

void UELGameInstance::SetAttireExMenu(bool bSet) {
}

void UELGameInstance::SetAllAchievementLocalCount(TArray<int32> _AchievementArray) {
}

void UELGameInstance::SetAchievementParam(UDataTable* _Achievement) {
}

void UELGameInstance::SetAchievementLocalCountArray(EELAchievementList _Achievement, int32 _Count) {
}

void UELGameInstance::ResizeTextureStreamingPool(int32 DesiredCVarPoolSize, int32 DesiredCVarMaxTempMemoryAllowed) {
}

void UELGameInstance::ResetTournamentUnlockItemFlag() {
}

void UELGameInstance::ResetTournamentRound() {
}

void UELGameInstance::ResetTextureStreamingPoolSize() {
}

void UELGameInstance::OnQueryStatsInternal() {
}



void UELGameInstance::OnOpenPause() {
}

void UELGameInstance::OnEOSEvent(EELEOSEventType EventType, EELEOSEventResult EventResult) {
}





bool UELGameInstance::IsValidNewWrestlerSelect() const {
    return false;
}

bool UELGameInstance::IsUseVictory_N() const {
    return false;
}

bool UELGameInstance::IsUseEntrance_N() const {
    return false;
}

bool UELGameInstance::IsTournamentValidRound() const {
    return false;
}

bool UELGameInstance::IsTournamentMode() const {
    return false;
}

bool UELGameInstance::IsTournamentMiniGame() const {
    return false;
}

bool UELGameInstance::IsTournamentFinalRound() const {
    return false;
}

bool UELGameInstance::IsTagTournament() const {
    return false;
}

bool UELGameInstance::IsStopAutoPlay() {
    return false;
}

bool UELGameInstance::IsStartAutoMatch() const {
    return false;
}

bool UELGameInstance::IsStackSaveAchievement() {
    return false;
}

bool UELGameInstance::IsStackAchievementCount() {
    return false;
}

bool UELGameInstance::IsShowCommonLayoutWidget() const {
    return false;
}

bool UELGameInstance::IsShowBuldFlow() {
    return false;
}

bool UELGameInstance::IsPlayCareerMiniGame() {
    return false;
}

bool UELGameInstance::IsPlayCareerMatch() {
    return false;
}

bool UELGameInstance::IsOpenTournamentMenu() {
    return false;
}

bool UELGameInstance::IsOpenAttireEXMenu() {
    return false;
}

bool UELGameInstance::IsMiniGameEnd() {
    return false;
}

bool UELGameInstance::IsLastSelectedMenuByGamepad() const {
    return false;
}

bool UELGameInstance::IsInputKeybord() {
    return false;
}

bool UELGameInstance::IsEntranceCutscene() const {
    return false;
}

bool UELGameInstance::IsEnableTournamentRetry() const {
    return false;
}

bool UELGameInstance::IsDispDebugUnlockItemId() const {
    return false;
}

bool UELGameInstance::IsDebugStartRecPad() {
    return false;
}

bool UELGameInstance::IsDebugAutoPlay() {
    return false;
}

bool UELGameInstance::IsCareerStopAchievement() {
    return false;
}

bool UELGameInstance::IsCareerMode() {
    return false;
}

bool UELGameInstance::IsCareerAutoPlay() {
    return false;
}

bool UELGameInstance::IsCareerAutoEvent() {
    return false;
}

bool UELGameInstance::IsAutoPlayUseFixDT() {
    return false;
}

bool UELGameInstance::IsAutoPlaySuspensionEvent() {
    return false;
}

bool UELGameInstance::IsAutoPlayStartFirst() {
    return false;
}

bool UELGameInstance::IsAutoPlayShowTutorial() {
    return false;
}

bool UELGameInstance::IsAutoPlayOutputSuccessResult() {
    return false;
}

bool UELGameInstance::IsAutoPlayOutputFaildResult() {
    return false;
}

bool UELGameInstance::IsAutoPlayError() {
    return false;
}

bool UELGameInstance::IsAutoMatchVictorySceneMode() {
    return false;
}

bool UELGameInstance::IsAutoMatchSkipEntrance() {
    return false;
}

bool UELGameInstance::IsAutoMatchSendMail() {
    return false;
}

bool UELGameInstance::IsAutoMatchOutputSuccessResult() {
    return false;
}

bool UELGameInstance::IsAutoMatchOutputFaildResult() {
    return false;
}

bool UELGameInstance::IsAutoMatchErrorCheck() {
    return false;
}

bool UELGameInstance::IsAutoMatchAnimationDebugView() {
    return false;
}

bool UELGameInstance::IsAttireExMenu() const {
    return false;
}

void UELGameInstance::InitWholeLevelBGMIDArray() {
}

void UELGameInstance::InitStackAchievementCount(EELAchievementList _Achievement) {
}

void UELGameInstance::InitDebugCamera(APlayerController* _playerController) {
}

void UELGameInstance::InitAddWholeLevelBGMIDArray(int32 _MaxNum) {
}

void UELGameInstance::InitAchievementLocalCountArray() {
}

void UELGameInstance::Init() {
}

UELYGS2Manager* UELGameInstance::GetYGS2Manager() const {
    return NULL;
}


bool UELGameInstance::GetWrestlerSelectParam(int32 Index, FELWrestlerSelectParam& Out) const {
    return false;
}

TArray<int32> UELGameInstance::GetWholeLevelBGMIDArray() const {
    return TArray<int32>();
}

int32 UELGameInstance::GetWholeLevelBGMID(int32 _sIndex) {
    return 0;
}

bool UELGameInstance::GetVictoryCutscene() const {
    return false;
}

UELUserProfileManager* UELGameInstance::GetUserProfileManager() const {
    return NULL;
}

UELUnlockableItemManagerBase* UELGameInstance::GetUnlockableItemManager() const {
    return NULL;
}

UELTutorialManager* UELGameInstance::GetTutorialManager() const {
    return NULL;
}

bool UELGameInstance::GetTournamentUnlockItemFlag() const {
    return false;
}

EELTournamentType UELGameInstance::GetTournamentType() const {
    return EELTournamentType::Invalid;
}

EELTournamentState UELGameInstance::GetTournamentState() const {
    return EELTournamentState::None;
}

bool UELGameInstance::GetTournamentRoundInfo(int32 Round, FELTournamentRoundInfo& Info) const {
    return false;
}

int32 UELGameInstance::GetTournamentRound() const {
    return 0;
}

int32 UELGameInstance::GetTournamentRetryCountRemain() const {
    return 0;
}

int32 UELGameInstance::GetTournamentRetryCountLimit() const {
    return 0;
}

int32 UELGameInstance::GetTournamentRetryCount() const {
    return 0;
}

void UELGameInstance::GetTournamentPlayerWrestler(FELTournamentWrestler& OutWrestler) const {
}

void UELGameInstance::GetTournamentPartnerWrestler(FELTournamentWrestler& OutWrestler) const {
}

FText UELGameInstance::GetTournamentName() const {
    return FText::GetEmpty();
}

bool UELGameInstance::GetTournamentMatchResult() const {
    return false;
}

FELTournamentInfo UELGameInstance::GetTournamentInfo() const {
    return FELTournamentInfo{};
}

EELTournamentDifficulty UELGameInstance::GetTournamentDifficulty() const {
    return EELTournamentDifficulty::Easy;
}

void UELGameInstance::GetTournamentBracketByRound(int32 Round, FELTournamentBracket& Bracket) {
}

void UELGameInstance::GetTournamentBracket(TArray<FELTournamentBracket>& Bracket) {
}

FELTmpJukeboxSaveData UELGameInstance::GetTmpJukeboxSavedata() {
    return FELTmpJukeboxSaveData{};
}

UELTitleHolderSaveDataManager* UELGameInstance::GetTitleHolderSaveDataManager() const {
    return NULL;
}

UELTipsLoadingManager* UELGameInstance::GetTipsLoadingManager() const {
    return NULL;
}

TArray<EELAchievementList> UELGameInstance::GetStackSaveAchievementArray() {
    return TArray<EELAchievementList>();
}

TArray<int32> UELGameInstance::GetStackAchievementCountArray() {
    return TArray<int32>();
}

int32 UELGameInstance::GetStackAchievementCount(EELAchievementList _Achievement) {
    return 0;
}

FELSSMatchResultSpareDataParam UELGameInstance::GetSSMatchResultSpareDataParam() {
    return FELSSMatchResultSpareDataParam{};
}

FSSDebugParam UELGameInstance::GetSSDebugParam() {
    return FSSDebugParam{};
}

UELSoundInfo* UELGameInstance::GetSoundInfo() const {
    return NULL;
}

UDataTable* UELGameInstance::GetSfxListDatatable() const {
    return NULL;
}

UELScoreRankingManager* UELGameInstance::GetScoreRankingManager() const {
    return NULL;
}

UELSaveIconScreenManager* UELGameInstance::GetSaveIconScreenManager() const {
    return NULL;
}

UELPossessedItemManager* UELGameInstance::GetPossessedItemManager() const {
    return NULL;
}

bool UELGameInstance::GetPlayNewGameFlg() {
    return false;
}

EMiniGameID UELGameInstance::GetNowMiniGameID() {
    return EMiniGameID::HomeRunDerby;
}

int32 UELGameInstance::GetNowMiniGameCount() {
    return 0;
}

FString UELGameInstance::GetNextLevelOption() {
    return TEXT("");
}

FName UELGameInstance::GetNextLevelName() {
    return NAME_None;
}

int32 UELGameInstance::GetNextJukeboxPlayID() {
    return 0;
}

TArray<int32> UELGameInstance::GetMiniGameScores() {
    return TArray<int32>();
}

FMiniGameDataMining UELGameInstance::GetMiniGameMiningInfo() {
    return FMiniGameDataMining{};
}

AELMenuOperationalWidgetManagerBase* UELGameInstance::GetMenuOperationalWidgetManager() const {
    return NULL;
}

int32 UELGameInstance::GetMaxMiniGameNum() {
    return 0;
}


EELMatchResultType UELGameInstance::GetMatchResultType_N() const {
    return EELMatchResultType::None;
}

FELMatchResultParam UELGameInstance::GetMatchResult() {
    return FELMatchResultParam{};
}



UELKeyConfigManager* UELGameInstance::GetKeyConfigManager() const {
    return NULL;
}

UDataTable* UELGameInstance::GetJukeBoxParam() {
    return NULL;
}

bool UELGameInstance::GetInteractiveWinscene() const {
    return false;
}

UELInputDeviceObserveManager* UELGameInstance::GetInputDeviceObserveManager() const {
    return NULL;
}

UELGoldCoinPossessManager* UELGameInstance::GetGoldCoinPossessManager() const {
    return NULL;
}

int32 UELGameInstance::GetGameplayPlayerNum_N() const {
    return 0;
}

TArray<AELCharacter_Native*> UELGameInstance::GetGameplayPlayerArray_N() {
    return TArray<AELCharacter_Native*>();
}

TArray<AELCharacter_Native*> UELGameInstance::GetGameplayManagerArray_N() {
    return TArray<AELCharacter_Native*>();
}

UELGameOptionManager* UELGameInstance::GetGameOptionManager() const {
    return NULL;
}

float UELGameInstance::GetFPS() const {
    return 0.0f;
}

bool UELGameInstance::GetEmoteCutscene() const {
    return false;
}

UELStats* UELGameInstance::GetELStats() const {
    return NULL;
}

UELLocalPlayer* UELGameInstance::GetELLocalPlayer(const UObject* WorldContextObject) {
    return NULL;
}

UELLeaderboards* UELGameInstance::GetELLeaderboards() const {
    return NULL;
}

UELEOSManager* UELGameInstance::GetELEOSManager() const {
    return NULL;
}

int32 UELGameInstance::GetDispPlayerStatus_N() const {
    return 0;
}

bool UELGameInstance::GetDebugGameplayHUDOff_N() const {
    return false;
}

bool UELGameInstance::GetDebugGameplayEnableAllActionSkill_N() const {
    return false;
}

bool UELGameInstance::GetDebugGameplayEffectOff_N() const {
    return false;
}

FDebugCareerParam_All UELGameInstance::GetDebugCareerParam_All() const {
    return FDebugCareerParam_All{};
}

AyDebugCamera* UELGameInstance::GetDebugCamera() {
    return NULL;
}

TArray<FDateTime> UELGameInstance::GetDebugAutoPlayTimeArray() {
    return TArray<FDateTime>();
}

FDateTime UELGameInstance::GetDebugAutoPlayTime(int32 _Index) const {
    return FDateTime{};
}

TArray<FString> UELGameInstance::GetDebugAutoPlayPathArray() {
    return TArray<FString>();
}

FString UELGameInstance::GetDebugAutoPlayPath(int32 _Index) {
    return TEXT("");
}

TArray<int32> UELGameInstance::GetDebugAutoPlayMultiFileNoArray() {
    return TArray<int32>();
}

int32 UELGameInstance::GetDebugAutoPlayMultiFileNo(int32 _Index) const {
    return 0;
}

TArray<FKey> UELGameInstance::GetDebugAutoPlayInputArray() {
    return TArray<FKey>();
}

FKey UELGameInstance::GetDebugAutoPlayInput(int32 _Index) const {
    return FKey{};
}

TArray<FString> UELGameInstance::GetDebugAutoPlayInfoArray() {
    return TArray<FString>();
}

FString UELGameInstance::GetDebugAutoPlayInfo(int32 _Index) {
    return TEXT("");
}

bool UELGameInstance::GetCurrentTournamentRoundInfo(FELTournamentRoundInfo& Info) const {
    return false;
}

void UELGameInstance::GetCurrentTournamentBracket(FELTournamentBracket& Bracket) {
}

int32 UELGameInstance::GetCurrentJukeboxPlayID() {
    return 0;
}

UELCrateManager* UELGameInstance::GetCrateManager() const {
    return NULL;
}

UELCommentaryLoadingManager* UELGameInstance::GetCommentaryLoadingManager() const {
    return NULL;
}

UELChallengeManager* UELGameInstance::GetChallengeManager() const {
    return NULL;
}

FCareerStoryCard UELGameInstance::GetCareerStotyCard() {
    return FCareerStoryCard{};
}

TArray<FCareerStory> UELGameInstance::GetCareerStoryDataTable() {
    return TArray<FCareerStory>();
}

FCareerStory UELGameInstance::GetCareerStory() {
    return FCareerStory{};
}

TArray<EELAchievementList> UELGameInstance::GetCareerStackAchievementInfoArray() {
    return TArray<EELAchievementList>();
}

TArray<int32> UELGameInstance::GetCareerStackAchievementCountArray() {
    return TArray<int32>();
}

int32 UELGameInstance::GetCareerStackAchievementCount(EELAchievementList _Achievement) {
    return 0;
}

FCareerMovieSceneParam UELGameInstance::GetCareerMovieSceneParam() {
    return FCareerMovieSceneParam{};
}

ECareerStoryResultCondition UELGameInstance::GetCareerModeStoryResult() {
    return ECareerStoryResultCondition::NONE;
}

FCareerMiniGame UELGameInstance::GetCareerModeMiniGameInfo() {
    return FCareerMiniGame{};
}

FCareerMatch UELGameInstance::GetCareerModeMatchInfo() {
    return FCareerMatch{};
}

FCareerEvent UELGameInstance::GetCareerModeEventInfo() {
    return FCareerEvent{};
}

EWrestlerID_N UELGameInstance::GetCareerModeCutsceneCast(ECareerCutsceneCastType _CastType) {
    return EWrestlerID_N::None;
}

EELBelt UELGameInstance::GetCareerModeCutsceneBelt(ECareerCutsceneBeltType _beltType) {
    return EELBelt::None;
}

FCareerMatchCardCore UELGameInstance::GetCareerMatchCardInfo() {
    return FCareerMatchCardCore{};
}

ECareerLevelInfo UELGameInstance::GetCareerLevelInfo() {
    return ECareerLevelInfo::Career_Level_None;
}

UELCareerGameParam* UELGameInstance::GetCareerGameParam() {
    return NULL;
}

TArray<FCareerEventMemberInfo> UELGameInstance::GetCareerEventMembersInfo() {
    return TArray<FCareerEventMemberInfo>();
}

UELCareerDelivery* UELGameInstance::GetCareerDelivery() {
    return NULL;
}

FCareerCutsceneParam UELGameInstance::GetCareerCutsceneParam() {
    return FCareerCutsceneParam{};
}


UELBattlePassManager* UELGameInstance::GetBattlePassManager() const {
    return NULL;
}

FString UELGameInstance::GetAutoPlayRecordingFileString() {
    return TEXT("");
}

int32 UELGameInstance::GetAutoPlayRecFileIndex() {
    return 0;
}

TArray<FAutoPlayParam> UELGameInstance::GetAutoPlayParam() {
    return TArray<FAutoPlayParam>();
}

bool UELGameInstance::GetAutoPlayMultipleFile() {
    return false;
}

int32 UELGameInstance::GetAutoPlayMultiIndex() {
    return 0;
}

FString UELGameInstance::GetAutoPlayMailSuccess() {
    return TEXT("");
}

FString UELGameInstance::GetAutoPlayMailError() {
    return TEXT("");
}

int32 UELGameInstance::GetAutoPlayLoopMaxCount() {
    return 0;
}

bool UELGameInstance::GetAutoPlayLoop() {
    return false;
}

int32 UELGameInstance::GetAutoPlayLineIndex() {
    return 0;
}

FDateTime UELGameInstance::GetAutoPlayKeyInterval() {
    return FDateTime{};
}

FString UELGameInstance::GetAutoPlayFileString() {
    return TEXT("");
}

int32 UELGameInstance::GetAutoPlayFileIndex() {
    return 0;
}

int32 UELGameInstance::GetAutoPlayErrorCountMax() {
    return 0;
}

int32 UELGameInstance::GetAutoPlayErrorCount() {
    return 0;
}

bool UELGameInstance::GetAutoPlayCreateNewRecordingFile() {
    return false;
}

int32 UELGameInstance::GetAutoMatchSkipEntranceSecond() {
    return 0;
}

TArray<FAIAutoMatchParam> UELGameInstance::GetAutoMatchParam() {
    return TArray<FAIAutoMatchParam>();
}

FString UELGameInstance::GetAutoMatchMailSuccess() {
    return TEXT("");
}

FString UELGameInstance::GetAutoMatchMailError() {
    return TEXT("");
}

int32 UELGameInstance::GetAutoMatchLoopMaxCount() {
    return 0;
}

bool UELGameInstance::GetAOnKeys_N(const FString& Key, FName& Name) {
    return false;
}

UDataTable* UELGameInstance::GetAOnDataTable_N() {
    return NULL;
}

TArray<int32> UELGameInstance::GetAllAchievementLocalCount() {
    return TArray<int32>();
}

UDataTable* UELGameInstance::GetAchievementParam() {
    return NULL;
}

int32 UELGameInstance::GetAchievementLocalCountArray(EELAchievementList _Achievement) {
    return 0;
}

UELGameInstance* UELGameInstance::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool UELGameInstance::ForceQuitApplication() {
    return false;
}

bool UELGameInstance::FindControllerId(const int32 ControllerId) const {
    return false;
}

void UELGameInstance::ExecGotoMainMenu_Implementation() {
}

void UELGameInstance::ExecGotoLevel(const FString& LevelName) {
}

void UELGameInstance::DisableLookAtWrestler() {
}

void UELGameInstance::DestroyDebugCamera() {
}

void UELGameInstance::DecisionTournamentBracket() {
}

void UELGameInstance::DebugChangeCurrentLanguage(int32 LangType) {
}

void UELGameInstance::ClearWrestlerSelectParams() {
}


void UELGameInstance::CareerChangeToHubLevel(FName PreLevelName, FName NextLevelName) {
}

void UELGameInstance::CareerBackToLevel() {
}


void UELGameInstance::AddTournamentRound() {
}

void UELGameInstance::AddTournamentRetryCountLimit(int32 Add) {
}

void UELGameInstance::AddTournamentRetryCount() {
}

int32 UELGameInstance::AddAchievementLocalCountArray(EELAchievementList _Achievement, int32 _Add) {
    return 0;
}

UELGameInstance::UELGameInstance() {
    this->ELEOSManager = NULL;
    this->ELStats = NULL;
    this->ELLeaderboards = NULL;
    this->ELYGS2Manager = NULL;
    this->AOnDataTable_N = NULL;
    this->bUseVictory_N = false;
    this->MatchResultType_N = EELMatchResultType::None;
    this->m_cDebugCameraClass = NULL;
    this->m_pMusicList = NULL;
    this->m_pAchievement = NULL;
    this->m_pCareerGameParam = NULL;
    this->m_pCareerDelivery = NULL;
    this->MenuOperationalWidgetManager = NULL;
    this->m_UnlockableItemManager = NULL;
    this->m_BattlePassManager = NULL;
    this->m_ChallengeManager = NULL;
    this->m_PossessedItemManager = NULL;
    this->bDebugGameplayEnableAllActionSkill_N = false;
    this->bDebugGameplayHUDOff_N = false;
    this->bDebugGameplayEffectOff_N = false;
    this->DebugMenu_DispPlayerStatus_N = 0;
    this->m_GoldCoinPossessManager = NULL;
    this->m_ELSoundInfo = NULL;
    this->m_ELSfxListDatatable = NULL;
    this->m_CrateManager = NULL;
    this->m_KeyConfigManager = NULL;
    this->m_TutorialManager = NULL;
    this->m_GameOptionManager = NULL;
    this->m_UserProfileManager = NULL;
    this->TitleHolderSaveDataManager = NULL;
    this->m_ScoreRankingManager = NULL;
    this->m_InputDeviceObserveManager = NULL;
    this->m_CommentaryLoadingManager = NULL;
    this->m_TipsLoadingManager = NULL;
    this->m_SaveIconScreenManager = NULL;
    this->MatchRecordsInfoSaveDataManager = NULL;
    this->SSRootObject = NULL;
    this->SSMasterData = NULL;
    this->SSLevelTransitionEvent = NULL;
    this->SSEndGameReason = ESSEndGameReason::None;
    this->SSModePlayCountToDay = 0;
    this->SSModeGameLiftParam = NULL;
    this->SSModeConfigData = NULL;
    this->SSMainMenuFootStamp = false;
    this->m_pSSGameDataManager = NULL;
    this->ELMovieControlBase = NULL;
    this->BackUpCVarPoolSize = -1;
    this->BackUpCVarMaxTempMemoryAllowed = -1;
    this->bTexturePoolResized = false;
}

