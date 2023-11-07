#pragma once
#include "CoreMinimal.h"
#include "JukeBoxMenuInfo_N.h"
#include "JukeBoxParam.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELTmpJukeboxSaveData.h"
#include "ELJukeBoxUtilityFunction.generated.h"

class UDataTable;
class UELGameInstance;
class USoundAtomCue;

UCLASS(Blueprintable)
class ABP_200508_API UELJukeBoxUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELJukeBoxUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static void UpdateJukeboxSaveData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SortJukeBoxAtoZ(UPARAM(Ref) TArray<FJukeBoxMenuInfo_N>& Params);
    
    UFUNCTION(BlueprintCallable)
    static void SetRandomPlaybackCore(FELTmpJukeboxSaveData& _stJukebox, bool _random);
    
    UFUNCTION(BlueprintCallable)
    static void SetRandomPlayback(bool _random, bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextPlayIDForRandomCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextPlayIDForRandom(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextPlayIDCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextPlayID(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetJukeBoxSortListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, int32 _sortNo, bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetJukeBoxSortListForID(int32 _targetId, int32 _sortNo, bool _Enable, bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetJukeBoxPlayedListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetJukeBoxPlayedListForID(int32 _targetId, bool _Enable, bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetJukeBoxCheckListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetJukeBoxCheckListForID(int32 _targetId, bool _Enable, bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentPlayIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _id);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentPlayID(int32 _id, bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCreateSavedataCore(FELTmpJukeboxSaveData& _stJukebox, bool _create);
    
    UFUNCTION(BlueprintCallable)
    static void SetCreateSavedata(bool _create, bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SaveRequestJukeBoxData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRandomPlaybackCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRandomPlayback(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCreateSavedataCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCreateSavedata(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void InitJukeBoxSortListCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static void InitJukeBoxSortList(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void InitJukeBoxPlayedListCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static void InitJukeBoxPlayedList(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void InitJukeBoxDataForDLC();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNextPlayIDCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNextPlayID(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetNextJukeBoxPlayCueCore(bool _inGameFlg);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetNextJukeBoxPlayCue(bool _inGameFlg);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetJukeBoxSortListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, bool& _findParam);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetJukeBoxSortListForID(int32 _targetId, bool& _findParam, bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetJukeBoxSortListCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetJukeBoxSortList(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJukeBoxPlayListCore(FELTmpJukeboxSaveData& _stJukebox, TArray<int32>& _listArray);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetJukeBoxPlayList(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJukeBoxPlayedListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, bool& _Successed);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJukeBoxPlayedListForID(int32 _targetId, bool& _Successed, bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetJukeBoxPlayedListCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetJukeBoxPlayedList(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetJukeBoxPlayCueCore(int32 _targetId, bool _inGameFlg);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetJukeBoxPlayCue(int32 _targetId, bool _inGameFlg);
    
    UFUNCTION(BlueprintCallable)
    static UELGameInstance* GetJukeboxGameInstance();
    
    UFUNCTION(BlueprintCallable)
    static bool GetJukeBoxDataTableRowFromName(UDataTable* Table, FName RowName, FJukeBoxParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJukeBoxCheckListForIDCore(FELTmpJukeboxSaveData& _stJukebox, int32 _targetId, bool& _Successed);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJukeBoxCheckListForID(int32 _targetId, bool& _Successed, bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetJukeBoxCheckListCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetJukeBoxCheckList(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentPlayIDCore(FELTmpJukeboxSaveData& _stJukebox);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentPlayID(bool isTmp, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetCurrentJukeBoxPlayCueCore();
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetCurrentJukeBoxPlayCue();
    
    UFUNCTION(BlueprintCallable)
    static bool ConvertJukeboxSaveData(bool tmpUpdate, uint8 _saveDataAccessFlag);
    
};

