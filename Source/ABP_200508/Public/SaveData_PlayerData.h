#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CommentaryLoadingSaveData.h"
#include "ELMatchRecordsInfo.h"
#include "ELSaveGameBase.h"
#include "ELUnlockItemSaveData.h"
#include "PossessedItemSaveData.h"
#include "TipsLoadingSaveData.h"
#include "ChallengeProgressSaveData.h"
#include "ChallengeRecordSaveData.h"
#include "CrateStateSaveData.h"
#include "ELTitleHolderInfo.h"
#include "KeyMapSettingData.h"
#include "MatchScoreRankingSaveDataArray.h"
#include "MiniGameScoreRankingSaveDataArray.h"
#include "OnlyNormalChallengeRecordSaveData.h"
#include "UserProfileSaveData.h"
#include "SaveData_PlayerData.generated.h"

UCLASS(Blueprintable)
class USaveData_PlayerData : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strEpicAccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AewCashNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELUnlockItemSaveData> m_UnlockItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AewGoldNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeRecordSaveData> m_ChallengeRecordDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlyNormalChallengeRecordSaveData m_OnlyNormalChallengeRecordData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeProgressSaveData m_ChallengeProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPossessedItemSaveData> m_PossessedItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELTitleHolderInfo> m_TitleHolderInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatchScoreRankingSaveDataArray> m_MatchScoreRankingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMiniGameScoreRankingSaveDataArray> m_MiniGameScoreRankingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMatchRecordsInfo m_MatchRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_CareerModePlayerGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ConfirmedEULA_Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> m_GamepadKeyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> m_KeyboardMouseKeyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> m_SSModeMouseKeyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> m_SSModeKeyboardMouseKeyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_TutorialArchiveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_TutorialParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserProfileSaveData m_UserProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommentaryLoadingSaveData m_CommentaryLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsLoadingSaveData m_TipsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrateStateSaveData m_Crate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> m_AutoAddDlcTeamIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> _ssGamepadKeyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> _ssKeyboardMouseKeyConfigList;
    
    USaveData_PlayerData();
};

