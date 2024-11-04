#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELMoves_Finisher.h"
#include "EFanReaction.h"
#include "ELWrestlerProfile_CutScene.h"
#include "CreateTeamMemberInfo.h"
#include "CreateTeamParam.h"
#include "SaveDataObjectBase.h"
#include "SaveDataObject_UGC_Team.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObject_UGC_Team : public USaveDataObjectBase {
    GENERATED_BODY()
public:
    USaveDataObject_UGC_Team();
    UFUNCTION(BlueprintCallable)
    void SetUnlockId(int32 Index, int32 _UnlockId);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamUID(int32 Index, FGuid _teamId);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamName(int32 Index, const FString& _TeamName);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamMembers(int32 Index, TArray<FCreateTeamMemberInfo> _TeamMembers);
    
    UFUNCTION(BlueprintCallable)
    void SetTagFinisher02(int32 Index, const FELMoves_Finisher& _TagFinisher);
    
    UFUNCTION(BlueprintCallable)
    void SetTagFinisher01(int32 Index, const FELMoves_Finisher& _TagFinisher);
    
    UFUNCTION(BlueprintCallable)
    void SetSnsName(int32 Index, const FString& _SNSName);
    
    UFUNCTION(BlueprintCallable)
    void SetLastModifiedDate(int32 Index, FDateTime LastModifiedDate);
    
    UFUNCTION(BlueprintCallable)
    void SetFanReaction(int32 Index, EFanReaction _FanReaction);
    
    UFUNCTION(BlueprintCallable)
    void SetDlcVersion(int32 Index, const FString& _DlcVersion);
    
    UFUNCTION(BlueprintCallable)
    void SetDlcTagTeamFlag(int32 Index, bool _DlcTagTeamFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetCutScene(int32 Index, FELWrestlerProfile_CutScene _CutScene);
    
    UFUNCTION(BlueprintCallable)
    void SetCreateTeamParam_All(const TArray<FCreateTeamParam>& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetCreateTeamParam(int32 Index, const FCreateTeamParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetCreatedDate(int32 Index, FDateTime CreatedDate);
    
    UFUNCTION(BlueprintCallable)
    void SetAnnounceId(int32 Index, int32 _AnnounceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetTeamUID(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTeamName(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCreateTeamMemberInfo> GetTeamMembers(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELMoves_Finisher GetTagFinisher02(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELMoves_Finisher GetTagFinisher01(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSnsName(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetLastModifiedDate(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFanReaction GetFanReaction(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDlcVersion(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDlcTagTeamFlag(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELWrestlerProfile_CutScene GetCutScene(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCreateTeamParam_All(TArray<FCreateTeamParam>& Param) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCreateTeamParam(int32 Index, FCreateTeamParam& Param) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetCreatedDate(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAnnounceId(int32 Index) const;
    
};

