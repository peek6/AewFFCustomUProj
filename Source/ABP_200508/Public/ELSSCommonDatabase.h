#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWrestlerID_N.h"
#include "ESSAbilityCalcMethod.h"
#include "ESSAbilityKind.h"
#include "ESSAbilitySortType.h"
#include "ESSArmorType.h"
#include "ESSDamageReason.h"
#include "ESSDamageReceiverState.h"
#include "ESSHeatSkillCategory.h"
#include "ESSMoveCommand.h"
#include "ESSWrestlerType.h"
#include "SSAbilityKindParam.h"
#include "SSAbilityParam.h"
#include "SSAbilityResourceParam.h"
#include "SSActionStateClassInfo.h"
#include "SSAttackParam.h"
#include "SSAttentionLevelParam.h"
#include "SSGameRuleParam.h"
#include "SSHeatLevelParam.h"
#include "SSHeatMoveSet.h"
#include "SSHeatSkillDefaultSettings.h"
#include "SSHeatSkillIcon.h"
#include "SSHeatSkillParam.h"
#include "SSItemParam.h"
#include "SSLoadoutPresetDefaultParam.h"
#include "SSMoveParam.h"
#include "SSPlayerRankParam.h"
#include "SSPlayerRankRangeParam.h"
#include "SSStampedeRankParam.h"
#include "SSWeaponCommonParam.h"
#include "SSWrestlerParam.h"
#include "SSWrestlerTypeParam.h"
#include "SSWrestlerTypeResourceParam.h"
#include "ELSSCommonDatabase.generated.h"

class UDataTable;
class UELSSMasterData;
class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API UELSSCommonDatabase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSMasterData* MasterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AbilityResourceParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAbilityResourceParam> AbilityResourceParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAbilityParam> SortedAbilityParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AbilityKindParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAbilityKindParam> AbilityKindParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WrestlerParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWrestlerParam> WrestlerParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WrestlerTypeResourceParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HeatSkillDefaultSettingsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatSkillDefaultSettings> HeatSkillDefaultSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HeatSkillIconTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSHeatSkillIcon> HeatSkillIconArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CommonAttackParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MoveParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StampedeRankParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSStampedeRankParam> StampedeRankParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerRankParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSPlayerRankParam> PlayerRankParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerRankRangeParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSPlayerRankRangeParam> PlayerRankRangeParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadoutPresetDefaultParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSLoadoutPresetDefaultParam> LoadoutPresetDefaultParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GameRuleParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSGameRuleParam> GameRuleParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StateInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSActionStateClassInfo> StateInfoParamArray;
    
public:
    UELSSCommonDatabase();
    UFUNCTION(BlueprintCallable)
    void MakeSortedAbilityParamArray(ESSAbilitySortType inSortType);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    bool GetWrestlerTypeResourceParam(ESSWrestlerType inWrestlerType, FSSWrestlerTypeResourceParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetWrestlerTypeParam(ESSWrestlerType inWrestlerType, FSSWrestlerTypeParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetWrestlerParam(EWrestlerID_N inWrestlerId, FSSWrestlerParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetWeaponCommonParam(int32 ID, FSSWeaponCommonParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void GetSortedAbilityParamArray(ESSAbilitySortType inSortType, TArray<FSSAbilityParam>& outAbilityParam);
    
    UFUNCTION(BlueprintCallable)
    void GetRewardAbilityFromStampedeLevel(int32 inOldLevel, int32 inNewLevel, TArray<int32>& outAbilityId);
    
    UFUNCTION(BlueprintCallable)
    bool GetMoveParamById(int32 MoveId, FSSMoveParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetMoveParam(const FName& RowName, FSSMoveParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetItemParam(int32 ID, FSSItemParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetHeatSkillParam(int32 ID, FSSHeatSkillParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeatSkillIdFromTree(ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn) const;
    
    UFUNCTION(BlueprintCallable)
    void GetHeatSkillIdAndLevelFromTree(ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn, int32& outHeatSkillId, int32& outConditionHeatLevel) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetHeatSkillIconTexture(int32 inHeatSkillId) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHeatSkillDefaultSettings(int32 ID, int32 inSkillTreeRow, FSSHeatSkillDefaultSettings& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetHeatMoveSet(ESSWrestlerType inWrestlerType, ESSMoveCommand inMoveCommand, FSSHeatMoveSet& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetHeatLevelParam(int32 inHeatLevel, FSSHeatLevelParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeatLevelExp(int32 inHeatLevel);
    
    UFUNCTION(BlueprintCallable)
    bool GetCommonAttackParam(const FName& RowName, FSSAttackParam& OutParam);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAttentionLevelPoint(int32 inAttentionLevel);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttentionLevelParam(int32 inAttentionLevel, FSSAttentionLevelParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttackParamListFromMoveId(int32 MoveId, TArray<FSSAttackParam>& outRows);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttackParam(int32 MoveId, int32 AttackHitId, FSSAttackParam& OutParam) const;
    
    UFUNCTION(BlueprintCallable)
    ESSArmorType GetArmorType(ESSDamageReason inDamageReason, ESSDamageReceiverState inDamageReceiverState) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAbilityParam(int32 ID, FSSAbilityParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    bool GetAbilityKindParam(ESSAbilityKind Kind, FSSAbilityKindParam& OutRow);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetAbilityIconTexture(int32 inAbilityId, bool inWithOutline) const;
    
    UFUNCTION(BlueprintCallable)
    ESSAbilityCalcMethod GetAbilityCalcMethod(ESSAbilityKind Kind) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConvertDataTableToArray();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 CalcHeatLevelFromExp(int32 inExp);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcAttentionLevelFromPoint(int32 inPoint);
    
};

