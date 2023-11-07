#pragma once
#include "CoreMinimal.h"
#include "WrestlerSetupParam.h"
#include "EWrestlerID_N.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EErrDialogType.h"
#include "EYGS2Api.h"
#include "EYGS2ErrorType.h"
#include "SSModeServerParam.h"
#include "SSServerEndpoint.h"
#include "YGS2SSPlayerData.h"
#include "BattlePassPointRateParam.h"
#include "EELNetworkStatus.h"
#include "EELYGS2RequestFunctionType.h"
#include "ESSEndGameReason.h"
#include "ESSModeServiceState.h"
#include "ESSOnlineErrorType.h"
#include "ESSWrestlerType.h"
#include "SSErrorTextDataToAWS.h"
#include "SSErrorTextDataToHTTPCode.h"
#include "SSErrorTextDataToNetworkConnect.h"
#include "SSErrorTextDataToSSAPI.h"
#include "SSErrorTextDataToUniqueError.h"
#include "SSErrorTextDataToYGS2API.h"
#include "SSErrorTextLinkDialogMessage.h"
#include "SSPlayerRankParam.h"
#include "SSStampedeRankParam.h"
#include "SSWrestlerSetupParam.h"
#include "Templates/SubclassOf.h"
#include "eErrorID.h"
#include "eErrorStatusType.h"
#include "eSSModeAPIType.h"
#include "ELSSUtility.generated.h"

class AELSSSaveDataManager;
class APlayerController;
class UELEOSManager;
class UELSSGameModeDataManager;
class UELSSLevelTransitionEvent;
class UELSSMasterData;
class UELSSMasterDataRawData;
class UELSSModeConfigData;
class UELSSModeServiceParam;
class UELSSRootObject;
class UGameLiftObjectBase;
class UObject;
class UYGS2Req_GetSSPlayerData;
class UYGS2RequestBase;

UCLASS(Blueprintable)
class ABP_200508_API UELSSUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool TryYGS2ResumeRequests(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StopSSLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void SSPrintStringToLog(const FString& inString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SSNXShowApplicationError(const UObject* WorldContextObject, int32 inErrorCodeNumber, const FString& inDialogMessage, const FString& inFullScreenMessage);
    
    UFUNCTION(BlueprintCallable)
    static void SSModeNetworkSetup(const bool isReset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SSModeGameDataSetup(const UObject* WorldContextObject, const bool isReset);
    
    UFUNCTION(BlueprintCallable)
    static UYGS2Req_GetSSPlayerData* SSLoginRequest();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVisibleFadeForChangeLevel(const UObject* WorldContextObject, bool inEnable, bool inWithLoadingIcon);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSPlayerData(const UObject* WorldContextObject, const FYGS2SSPlayerData& dat);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSInGamePlayFlag(const UObject* WorldContextObject, bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    static void SetSSGameLiftObject(UGameLiftObjectBase* ssGameLiftParam);
    
    UFUNCTION(BlueprintCallable)
    static void SetSSDefaultMapToSSTop();
    
    UFUNCTION(BlueprintCallable)
    static void SetSSDefaultMapToMainMenu();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSCheatDetected(const UObject* WorldContextObject, bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    static void SetScreenUpdateCheck();
    
    UFUNCTION(BlueprintCallable)
    static void SetInputMode(APlayerController* pController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RestartYGS2SetupStep(const UObject* WorldContextObject, bool inForceExec, bool inResetRequest);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RequestDownloadSSModeServiceParam(const UObject* WorldContextObject, bool inSSModeOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool RegistYGS2Request(UYGS2RequestBase* Api, const EELYGS2RequestFunctionType apiType, bool checkRequestEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySSLoadingScreen(bool bPlayUntilStopped, float PlayTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnExitSSMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnEnterSSMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifySSGameStart(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifySSGameEnd(const UObject* WorldContextObject, ESSEndGameReason inReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool NeedsRestartYGS2SetupStep(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSPlayableUser(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSDisableSound(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSDevelopmentUser(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSSDebugLocalCheckMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSCheatDetected(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsExecuteYGS2SetupStep(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEnableSSMasterData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDownloadingSSModeServiceParam(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDevMode();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAccountLogin(const bool isMissed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYGS2Api GetYGS2RequestType(const int32 apiID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYGS2ErrorType GetYGS2ErrorType(const int32 errID);
    
    UFUNCTION(BlueprintCallable)
    static FSSErrorTextDataToYGS2API GetYGS2APIErrorData(const EYGS2ErrorType GetType);
    
    UFUNCTION(BlueprintCallable)
    static ESSWrestlerType GetWrestlerType(const int32 WrestlerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWrestlerSetupParam GetWrestlerSetupParam(const EWrestlerID_N WrestlerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSSWrestlerSetupParam GetWrestlerSetupData(const EWrestlerID_N WrestlerID);
    
    UFUNCTION(BlueprintCallable)
    static EWrestlerID_N GetWrestlerID(const int32 WrestlerID);
    
    UFUNCTION(BlueprintCallable)
    static FSSErrorTextDataToUniqueError GetUniqueErrorData(const ESSOnlineErrorType Type);
    
    UFUNCTION(BlueprintCallable)
    static FSSStampedeRankParam GetStampedeRankData(const int32 Exp, int32& expNext, float& expRate);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSSServerEndpoint(TArray<FSSServerEndpoint>& SSServerEndpoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EWrestlerID_N GetSSSelectedWrestlerID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSSaveDataManager* GetSSSaveDataManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELSSRootObject* GetSSRootObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static eErrorStatusType GetSSRequestErrorStatusType(const int32 errID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSPlayerData(const UObject* WorldContextObject, FYGS2SSPlayerData& outPlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESSOnlineErrorType GetSSOnlineErrorType(const int32 errID);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSSModeUserName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSModeServiceState GetSSModeServiceState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELSSModeServiceParam* GetSSModeServiceParam(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSSModeServerEnvName();
    
    UFUNCTION(BlueprintCallable)
    static bool GetSSModeServerEnvData(FSSModeServerParam& getEnv);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSSModeServerBuildVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static eSSModeAPIType GetSSModeRequestType(const int32 apiID);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSSModePlayerID();
    
    UFUNCTION(BlueprintCallable)
    static FSSErrorTextDataToNetworkConnect GetSSmodeNetworkErrorData(const int32 GetType);
    
    UFUNCTION(BlueprintCallable)
    static UELSSModeConfigData* GetSSModeConfigData();
    
    UFUNCTION(BlueprintCallable)
    static FSSErrorTextDataToSSAPI GetSSmodeAPIErrorData(const eErrorStatusType GetType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSMasterDataVersion(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELSSMasterDataRawData* GetSSMasterDataRawData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELSSMasterData* GetSSMasterData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FText GetSSLocalizeText(const FString& stKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELSSLevelTransitionEvent* GetSSLevelTransitionEvent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSEndGameReason GetSSLastEndGameReason(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSInGamePlayFlag(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UGameLiftObjectBase* GetSSGameLiftObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELSSGameModeDataManager* GetSSGameDataManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSSWrestlerSetupParam GetSSDebugEditWrestlerSetupParam(const FName inPresetName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSCurrentStampedeLevelExp(const UObject* WorldContextObject, int32& outLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSCurrentStampedeLevel(const UObject* WorldContextObject, int32& outLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSCurrentPlayerRank(const UObject* WorldContextObject, int32& outRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetSSControlledPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSCommandLineValue_SSServer(const UObject* WorldContextObject, FString& outEnvName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSCommandLineValue_SSMatchMakeGroupId(const UObject* WorldContextObject, int32& outGroupId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSCommandLineValue_SSFlags(const UObject* WorldContextObject, FString& outFlags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSCommandLineValue_SSDirect(const UObject* WorldContextObject, FString& outUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSSCommandLineValue_SSBotClient(const UObject* WorldContextObject, FString& outUserId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSSBattlePassPoint(const FBattlePassPointRateParam& prm, const float StarNum, const int32 ssPlayCntToDay);
    
    UFUNCTION(BlueprintCallable)
    static bool GetScreenUpdateCheck();
    
    UFUNCTION(BlueprintCallable)
    static FSSPlayerRankParam GetPlayerRankDataToRankPoint(const TArray<FSSPlayerRankParam>& Table, const int32 RankPoint, const int32 LeaderboardRank, int32& refIdx);
    
    UFUNCTION(BlueprintCallable)
    static FSSPlayerRankParam GetPlayerRankDataToRankId(const int32 rankId);
    
    UFUNCTION(BlueprintCallable)
    static FSSPlayerRankParam GetPlayerRankData(const int32 Exp, int32& expNext, float& expRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EELNetworkStatus GetNetworkStatus(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static eErrorID GetNetworkErrorID(const int32 errID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMatchSpectatorsMax();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMatchPlayerMax();
    
    UFUNCTION(BlueprintCallable)
    static FText GetLocalizeText(const FString& stNS, const FString& stKey);
    
    UFUNCTION(BlueprintCallable)
    static FSSErrorTextDataToHTTPCode GetHTTPErrorData(const int32 GetId);
    
    UFUNCTION(BlueprintCallable)
    static FSSErrorTextLinkDialogMessage GetErrorTextLinkMessage(const EErrDialogType GetType);
    
    UFUNCTION(BlueprintCallable)
    static FString GetEOSAuthToken();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELEOSManager* GetELEOSManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetDefaultAPIPollingTime();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDefaultAPIPollingLimit();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBase64EncryptData(const FString& baseData, const bool isUniqueData);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBase64DecodeData(const FString& encryptData, const bool isUniqueData);
    
    UFUNCTION(BlueprintCallable)
    static FSSErrorTextDataToAWS GetAWSErrorData(const int32 GetType);
    
    UFUNCTION(BlueprintCallable)
    static void EOSForceUpdate();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndWaitDownloadSSModeServiceParam(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroySSRootObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroySSMasterData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroySSLevelTransitionEvent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UYGS2RequestBase* CreateYGS2Request(const EYGS2Api Api);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELSSRootObject* CreateSSRootObject(const UObject* WorldContextObject, TSubclassOf<UELSSRootObject> inRootObjectClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELSSMasterData* CreateSSMasterDataInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELSSLevelTransitionEvent* CreateSSLevelTransitionEvent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 CreateShortErrorCodeNumber(const UObject* WorldContextObject, eErrorID inApiErrorCategory, int32 inApiErrorCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSSWrestlerSetupParam ConvertWrestlerSetupParamToSSParam(const FWrestlerSetupParam& inWrestlerSetupParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWrestlerSetupParam ConvertSSWrestlerSetupParamToBaseParam(const FSSWrestlerSetupParam& inSSWrestlerSetupParam);
    
    UFUNCTION(BlueprintCallable)
    static void CheckEOSMngTickable();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanUseSSMasterData(const UObject* WorldContextObject);
    
};

