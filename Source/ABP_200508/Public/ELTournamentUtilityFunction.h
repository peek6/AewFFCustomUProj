#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "EWrestlerID_N.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EELTournamentDifficulty.h"
#include "EELTournamentType.h"
#include "EELVictoryCutsceneType.h"
#include "ELTournamentBracket.h"
#include "ELTournamentProgressSaveData.h"
#include "ELTournamentSaveData.h"
#include "ELTournamentWrestlerIdentifier.h"
#include "EMiniGameID.h"
#include "ELTournamentUtilityFunction.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELTournamentUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELTournamentUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static bool SetupTournamentSaveData();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTournamentClearCount(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty, int32 Count);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SaveTournamentProgressData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SaveRequestTournamentData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ResetTournamentProgressData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MakeTournamentBracket(UObject* WorldContextObject, TArray<FELTournamentBracket>& TournamentBracket);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LotteryTournamentWrestler(UObject* WorldContextObject, int32 InLotteryNum, const TArray<EWrestlerID_N>& InIgnoreWrestler, TArray<EWrestlerID_N>& OutLotteryList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsUnlockingTournament(UObject* WorldContextObject, const FString& TournamentName, const UDataTable* TournamentDataTable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsUnlockingAnyTournament(UObject* WorldContextObject, const UDataTable* TournamentDataTable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTournamentPlaying(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTournamentClear(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBusyTournamentSaveProcess(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetTournamentWrestlerList(UObject* WorldContextObject, TArray<FELTournamentWrestlerIdentifier>& List);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetTournamentVictoryCutsceneType(UObject* WorldContextObject, TArray<EGender> GenderList, EELVictoryCutsceneType& CutSceneType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetTournamentProgressDataAll(UObject* WorldContextObject, TMap<EELTournamentType, FELTournamentSaveData>& TournamentSaveData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetTournamentPositionList(UObject* WorldContextObject, TArray<int32>& PositionList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EMiniGameID GetTournamentMiniGameID(UObject* WorldContextObject, const TMap<EMiniGameID, int32>& UnlockableItemIdMap);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetTournamentClearCount(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckUnavaliableWrestler(UObject* WorldContextObject, EWrestlerID_N WrestlerID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckUnavailableTournamentProgressSaveData(UObject* WorldContextObject, FELTournamentProgressSaveData& ProgressData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ApplyTournamentProgressData(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AdjustDlcTournametSaveData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddTournamentClearCount(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty TournamentDifficulty);
    
};

