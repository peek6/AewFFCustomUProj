#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AddPossessItemQuantity.h"
#include "ELUnlockItemSaveData.h"
#include "EUnlockItemCategory.h"
#include "PossessedItemSaveData.h"
#include "ChallengeProgressSaveData.h"
#include "ChallengeRecordSaveData.h"
#include "EChallengeSaveDataType.h"
#include "MatchScoreRankingSaveDataArray.h"
#include "MiniGameScoreRankingSaveDataArray.h"
#include "OnlyNormalChallengeRecordSaveData.h"
#include "SaveDataObjectBase.h"
#include "SaveDataObject_PlayerData.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObject_PlayerData : public USaveDataObjectBase {
    GENERATED_BODY()
public:
    USaveDataObject_PlayerData();
    UFUNCTION(BlueprintCallable)
    void UpdateUnlockItemSaveData(FELUnlockItemSaveData _Param);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePossessedItemSaveData(TArray<FPossessedItemSaveData> _updateDataList);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOnlyNormalChallengeRecordSaveData(FOnlyNormalChallengeRecordSaveData _updateData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMiniGameScoreRanking(TArray<FMiniGameScoreRankingSaveDataArray> _updateList);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMatchScoreRanking(TArray<FMatchScoreRankingSaveDataArray> _updateList);
    
    UFUNCTION(BlueprintCallable)
    void UpdateChallengeRecordSaveDataList(TArray<FChallengeRecordSaveData> _updateDataList);
    
    UFUNCTION(BlueprintCallable)
    void UpdateChallengeRecordSaveData(FChallengeRecordSaveData _updateData, EChallengeSaveDataType _dataType, bool _isResetRecord);
    
    UFUNCTION(BlueprintCallable)
    void UpdateChallengeProgressSaveData(FChallengeProgressSaveData _updateData);
    
    UFUNCTION(BlueprintCallable)
    void SetEpicAccountID(const FString& _strEpicAccountID);
    
    UFUNCTION(BlueprintCallable)
    void SetConfirmedEULA_Version(int32 _version);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerModeWrestlerGUID(FGuid _guid);
    
    UFUNCTION(BlueprintCallable)
    void SetAEWGold(const int32 _values);
    
    UFUNCTION(BlueprintCallable)
    void SetAewCash(const int32 _values);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockItemSaveDataByCategory(EUnlockItemCategory _targetCategory, TArray<FELUnlockItemSaveData>& _findParamList);
    
    UFUNCTION(BlueprintCallable)
    FELUnlockItemSaveData GetUnlockItemSaveData(int32 _targetId, bool& _findParam);
    
    UFUNCTION(BlueprintCallable)
    FPossessedItemSaveData GetPossessedItemSaveDataFromID(int32 _targetId, bool& findParam);
    
    UFUNCTION(BlueprintCallable)
    void GetPossessedItemSaveData(TArray<FPossessedItemSaveData>& _outDataList);
    
    UFUNCTION(BlueprintCallable)
    void GetOnlyNormalChallengeRecordSaveData(FOnlyNormalChallengeRecordSaveData& _outData);
    
    UFUNCTION(BlueprintCallable)
    void GetMiniGameScoreRanking(TArray<FMiniGameScoreRankingSaveDataArray>& _outDataList);
    
    UFUNCTION(BlueprintCallable)
    void GetMatchScoreRanking(TArray<FMatchScoreRankingSaveDataArray>& _outDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEpicAccountID() const;
    
    UFUNCTION(BlueprintCallable)
    void GetConfirmedEULA_Version(int32& _outVersion);
    
    UFUNCTION(BlueprintCallable)
    void GetChallengeRecordSaveDataList(TArray<FChallengeRecordSaveData>& _outDataList);
    
    UFUNCTION(BlueprintCallable)
    void GetChallengeRecordSaveData(FChallengeRecordSaveData& _outData, EChallengeSaveDataType _dataType);
    
    UFUNCTION(BlueprintCallable)
    void GetChallengeProgressSaveData(FChallengeProgressSaveData& _outData);
    
    UFUNCTION(BlueprintCallable)
    void GetCareerModeWrestlerGUID(FGuid& _outGuid);
    
    UFUNCTION(BlueprintCallable)
    void GetAllUnlockItemSaveData(TArray<FELUnlockItemSaveData>& _findItemList);
    
    UFUNCTION(BlueprintCallable)
    void GetAllPossessedItemSaveData(TArray<FPossessedItemSaveData>& _outDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAEWGold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAewCash() const;
    
    UFUNCTION(BlueprintCallable)
    bool CreateUnlockItemSaveData(FELUnlockItemSaveData _Param);
    
    UFUNCTION(BlueprintCallable)
    bool CreatePossessedItemSaveData(FPossessedItemSaveData _createData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsAutoAddDlcTeamList(FGuid _teamId) const;
    
    UFUNCTION(BlueprintCallable)
    void AllUpdateUnlockItemSaveData(TArray<FELUnlockItemSaveData>& _saveDataList);
    
    UFUNCTION(BlueprintCallable)
    void AllUpdatePossessedItemSaveData(TArray<FPossessedItemSaveData>& _saveDataList, bool IsRequestUpdate);
    
    UFUNCTION(BlueprintCallable)
    void AddPossessedItemQuantity(TArray<FAddPossessItemQuantity> _addDataList);
    
    UFUNCTION(BlueprintCallable)
    void AddAutoAddDlcTeamList(FGuid _teamId);
    
};

