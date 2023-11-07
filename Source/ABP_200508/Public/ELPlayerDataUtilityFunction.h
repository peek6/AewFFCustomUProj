#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AddPossessItemQuantity.h"
#include "EELBelt.h"
#include "ELUnlockItemSaveData.h"
#include "EPossessedItemExtendTarget.h"
#include "EUnlockItemCategory.h"
#include "EWrestlerID_N.h"
#include "PossessedItemSaveData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELTitleHolderHistory_BP.h"
#include "EMatchScoreRankingsType.h"
#include "EMiniGameID.h"
#include "KeyMapSettingData.h"
#include "MatchScoreRankingItemInfo.h"
#include "MatchScoreRankingWrestlerInfo.h"
#include "MiniGameScoreRankingItemInfo.h"
#include "ELPlayerDataUtilityFunction.generated.h"

class APlayerController;
class UObject;
class USaveDataObjectBase;
class USaveDataObject_PlayerData;

UCLASS(Blueprintable)
class ABP_200508_API UELPlayerDataUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELPlayerDataUtilityFunction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void UpdateUnlockItemSaveData(FELUnlockItemSaveData _updateParam, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void UpdatePossessedItemSaveDataList(TArray<FPossessedItemSaveData> _updateDataList, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetSSModeKeyConfigData(int32 _localPlayerNo, TArray<FKeyMapSettingData> _keyMapSettingList, bool IsGamepad, bool IsSSMode, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocalAEWGoldNum(int32 _cashNum, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetKeyConfig(int32 _localPlayerNo, TArray<FKeyMapSettingData> _keyMapSettingList, bool IsGamepad, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetConfirmedEulaVer(UObject* _pWorldContextObject, int32 _targetVer, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCareerModePlayerGUID(FGuid _guid, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAEWCashNum(int32 _cashNum, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SaveRequestPlayerData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SaveRequestKeyConfigDataOnly(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void GetUnlockItemSaveDataByIdMap(TArray<int32> _targetIdList, TMap<int32, FELUnlockItemSaveData>& _findParam, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void GetUnlockItemSaveDataByIdList(TArray<int32> _targetIdList, TArray<FELUnlockItemSaveData>& _findParam, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void GetUnlockItemSaveDataByCategory(EUnlockItemCategory _targetCategory, TArray<FELUnlockItemSaveData>& _findParam, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void GetUnlockItemSaveData(int32 _targetId, bool& _findParam, FELUnlockItemSaveData& _unlockItem, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetTitleHolderHistoryList(EELBelt _targetBelt, TArray<FELTitleHolderHistory_BP>& _outList, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetSSModeKeyConfigData(int32 _localPlayerNo, TArray<FKeyMapSettingData>& _outKeyMapSettingList, bool IsGamepad, bool IsSSMode, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetPossessedItemSaveDataListFromId(TArray<int32> _targetIdList, TArray<FPossessedItemSaveData>& outDataList, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetMiniGameScoreRankingItemList(EMiniGameID _miniGameType, TArray<FMiniGameScoreRankingItemInfo>& _outDataList, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetMatchScoreRankingItemList(EMatchScoreRankingsType _rankingType, TArray<FMatchScoreRankingItemInfo>& _outDataList, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLocalAEWGoldNum(bool& _Successed, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetKeyConfig(int32 _localPlayerNo, TArray<FKeyMapSettingData>& _outKeyMapSettingList, bool IsGamepad, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCrateTicketNum(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetConfirmedEulaVer(UObject* _pWorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetCareerModePlayerGUID(FGuid& _outGuid, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void GetAllUnlockItemSaveData(TArray<FELUnlockItemSaveData>& _findItemList, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllPossessedItemSaveData(TArray<FPossessedItemSaveData>& _outDataList, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllMiniGameScoreRankingItemList(TArray<FMiniGameScoreRankingItemInfo>& _outDataList, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllMatchScoreRankingItemList(TArray<FMatchScoreRankingItemInfo>& _outDataList, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAEWCashNum(bool& _Successed, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAddEditSlotNumByWrestlerID(EWrestlerID_N _WrestlerID, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAddEditSlotNum(EPossessedItemExtendTarget _target, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void EntryMiniGameScoreRanking(int32 _Score, EMiniGameID _miniGameType, TArray<FMatchScoreRankingWrestlerInfo> _usedWrestlers, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void EntryMatchScoreRanking(int32 _Score, EMatchScoreRankingsType _rankingType, TArray<FMatchScoreRankingWrestlerInfo> _usedWrestlers, float _starNum, int32 _optionValue, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteScoreRankingInvalidCAW();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteMatchRecordsInvalidCAW(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteMatchRecordsInvalidCAT(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyTmpPlayerDataToSaveData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void ApplySSModeKeyConfig(APlayerController* _targetPlayerContorller, bool IsGamepad);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void ApplySaveDataToPlayerData(UObject* _pWorldContextObject, USaveDataObject_PlayerData* _playerData);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyKeyConfig(APlayerController* _targetPlayerContorller, int32 _localPlayerNo, bool IsGamepad);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void ApplyDefaultToPlayerData(UObject* _pWorldContextObject, USaveDataObjectBase* _saveDataObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void AllUpdateUnlockItemSaveData(TArray<FELUnlockItemSaveData>& _updateParamList, UObject* _pWorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void AllUpdatePossessedItemSaveData(TArray<FPossessedItemSaveData>& _updateDataList, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void AddPossessedItemQuantity(TArray<FAddPossessItemQuantity> _updateDataList, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void AddCrateTicketNum(int32 _addValue, uint8 _saveDataAccessFlag);
    
};

