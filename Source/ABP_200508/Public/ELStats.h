#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPlatformType.h"
#include "EEOSStatsEvent.h"
#include "EOSStatData.h"
#include "EYGS2ErrorType.h"
#include "ELStatDataCache.h"
#include "ELYGSStatsGroup.h"
#include "ELStats.generated.h"

class UELYGS2Manager;
class UEOSStats;
class UYGS2RequestBase;

UCLASS(Blueprintable, Config=Game)
class ABP_200508_API UELStats : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnQueryStats);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQueryStats OnQueryStats;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSStats* EOSStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELYGS2Manager* YGS2Manager;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FELStatDataCache> StatsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirtySave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirtyEOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstQueryCompleted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RequiredStatNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELYGSStatsGroup> YGSStatsGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankMatchSeason;
    
public:
    UELStats();
    UFUNCTION(BlueprintCallable)
    void SetYGS2Manager(UELYGS2Manager* InManager);
    
    UFUNCTION(BlueprintCallable)
    bool SetUserId(const FString& UserId, EPlatformType Platform);
    
    UFUNCTION(BlueprintCallable)
    bool SetStats(const FString& Name, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable)
    void SetSeason(int32 Season);
    
    UFUNCTION(BlueprintCallable)
    void SetEOSStats(UEOSStats* InEOSStats);
    
    UFUNCTION(BlueprintCallable)
    void SetDisconnectionFlag();
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryYGS2StatsGroup(const FString& GroupName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryStatsFromSaveData();
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryStats();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnYGS2ResponseQuery(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request);
    
    UFUNCTION(BlueprintCallable)
    void OnYGS2ResponseIngest(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryStatsCompleted(EEOSStatsEvent EOSStatsEvent, const FString& UserId, const TArray<FEOSStatData>& Stats);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryFirstStatsCompleted(EEOSStatsEvent EOSStatsEvent, const FString& UserId, const TArray<FEOSStatData>& Stats);
    
public:
    UFUNCTION(BlueprintCallable)
    bool MinStats(const FString& Name, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable)
    bool MaxStats(const FString& Name, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstQueryCompleted() const;
    
    UFUNCTION(BlueprintCallable)
    int32 IngestYGS2StatsGroup(const FString& GroupName);
    
    UFUNCTION(BlueprintCallable)
    bool IngestEOSStats(const FString& Name, bool bNow);
    
    UFUNCTION(BlueprintCallable)
    bool IngestDisconnectionStats();
    
    UFUNCTION(BlueprintCallable)
    int32 IngestDirtyYGS2Stats();
    
    UFUNCTION(BlueprintCallable)
    int32 IngestDirtyStats();
    
    UFUNCTION(BlueprintCallable)
    int32 IngestDirtyEOSStats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStats(const FString& Name) const;
    
    UFUNCTION(BlueprintCallable)
    void GetStatDataCache(TArray<FELStatDataCache>& Data);
    
    UFUNCTION(BlueprintCallable)
    bool ClearStats(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void ClearDisconnectionCount();
    
    UFUNCTION(BlueprintCallable)
    void ClearCache();
    
    UFUNCTION(BlueprintCallable)
    bool AddStats(const FString& Name, int32 Value, bool bIngestEOS);
    
    UFUNCTION(BlueprintCallable)
    void AddRankMatchSeasonCountStats();
    
    UFUNCTION(BlueprintCallable)
    bool AddAndSetStats(const FString& Name, int32 Value, bool bIngestEOS);
    
};

