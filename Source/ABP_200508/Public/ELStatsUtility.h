#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "EWrestlerID_N.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EELGlobalStat.h"
#include "EELSpecialStat.h"
#include "EELWrestlerStat.h"
#include "UserProfileColorParam.h"
#include "ELStatsUtility.generated.h"

class UELStats;
class UObject;

UCLASS(Blueprintable)
class UELStatsUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELStatsUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SetWrestlerStat(const UObject* WorldContextObject, EELWrestlerStat Stat, EWrestlerID_N WrestlerID, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SetStat(const UObject* WorldContextObject, const FString& Name, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SetSSRankPoint(const UObject* WorldContextObject, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SetSSMaxScore(const UObject* WorldContextObject, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SetSSInGameFlag(const UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SetSpecialStat(const UObject* WorldContextObject, EELSpecialStat Stat, const FString& ParamName, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SetPlayerRankPoint(const UObject* WorldContextObject, int32 RankPoint, int32 LeaderboardRank);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPlayerRank(const UObject* WorldContextObject, int32 Rank, int32 RankPoint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetPlayerIconToStat(const UObject* WorldContextObject, int32 PlayerIcon, int32 BGIcon, const FUserProfileColorParam& ColorParam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetPlayerBadgesToStat(const UObject* WorldContextObject, const TArray<int32>& Badges);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SetGlobalStat(const UObject* WorldContextObject, EELGlobalStat Stat, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetExternalAccountId(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDebugDisconnectionLevel(const UObject* WorldContextObject, int32 DisconnectLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetCheatPenalty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EWrestlerID_N SetCasinoBattleRoyaleLastWinnerStat(const UObject* WorldContextObject, EWrestlerID_N WrestlerID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SetBattlePassTotalPointStat(const UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 MinWrestlerStat(const UObject* WorldContextObject, EELWrestlerStat Stat, EWrestlerID_N WrestlerID, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 MinStat(const UObject* WorldContextObject, const FString& Name, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 MinGlobalStat(const UObject* WorldContextObject, EELGlobalStat Stat, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 MaxWrestlerStat(const UObject* WorldContextObject, EELWrestlerStat Stat, EWrestlerID_N WrestlerID, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 MaxStat(const UObject* WorldContextObject, const FString& Name, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 MaxGlobalStat(const UObject* WorldContextObject, EELGlobalStat Stat, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IngestDisconnectionStats(const UObject* WorldContextObject, int32 LeaderboardRank);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 IngestDirtyStats(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetWrestlerStat(const UObject* WorldContextObject, EELWrestlerStat Stat, EWrestlerID_N WrestlerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetWarningDisconnectionCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetStat(const UObject* WorldContextObject, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSSWrestlerCountName(EWrestlerID_N WrestlerID, EGender Gender);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSWrestlerCount(const UObject* WorldContextObject, EWrestlerID_N WrestlerID, EGender Gender);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSTotalScore(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSTopCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSTop5Count(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSSStarCountName(int32 Star);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSStarCount(const UObject* WorldContextObject, int32 Star);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSRankPoint(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSPlayCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSMaxScore(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSKillCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSInGameFlag(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSFeverCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSAttentionPoint(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSpecialStat(const UObject* WorldContextObject, EELSpecialStat Stat, const FString& ParamName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerRank(const UObject* WorldContextObject, int32& Rank, int32& RankPoint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetPlatformPostfix(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlatformMaxStats(const UObject* WorldContextObject, const FString& StatName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPenaltyDisconnectionCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetGlobalStat(const UObject* WorldContextObject, EELGlobalStat Stat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELStats* GetELStats(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetDisconnectionStats(const UObject* WorldContextObject, int32& MatchCount, int32& DisconnectCount, int32& LatestMatchCount, int32& LatestDisconnectCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetDisconnectionPenaltyCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetDisconnectionLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetDisconnectionCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EWrestlerID_N GetCasinoBattleRoyaleLastWinnerStat(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetBattlePassTotalPointStat(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ClearCheatPenalty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddWrestlerStat(const UObject* WorldContextObject, EELWrestlerStat Stat, EWrestlerID_N WrestlerID, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddStat(const UObject* WorldContextObject, const FString& Name, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddSSWrestlerCount(const UObject* WorldContextObject, EWrestlerID_N WrestlerID, EGender Gender, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddSSTotalScore(const UObject* WorldContextObject, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddSSTopCount(const UObject* WorldContextObject, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddSSTop5Count(const UObject* WorldContextObject, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddSSStarCount(const UObject* WorldContextObject, int32 Star, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddSSPlayCount(const UObject* WorldContextObject, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddSSKillCount(const UObject* WorldContextObject, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddSSFeverCount(const UObject* WorldContextObject, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddSSAttentionPoint(const UObject* WorldContextObject, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddSpecialStat(const UObject* WorldContextObject, EELSpecialStat Stat, const FString& ParamName, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddRankMatchSeasonCountStats(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddGlobalStat(const UObject* WorldContextObject, EELGlobalStat Stat, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddDisconnectionPenalty(const UObject* WorldContextObject, int32 LeaderboardRank);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddBattlePassTotalPointStat(const UObject* WorldContextObject, int32 Value);
    
};

