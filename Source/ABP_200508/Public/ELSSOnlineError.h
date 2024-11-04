#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYGS2ErrorType.h"
#include "EELApplicationStatus.h"
#include "EELNetworkConnectionStatus.h"
#include "EELNetworkStatus.h"
#include "EELNetworkType.h"
#include "EELServerType.h"
#include "ESSOnlineErrorType.h"
#include "NetworkErrorAddedEventDelegate.h"
#include "NetworkErrorCorrespondEventDelegate.h"
#include "PlatformNetworkErrorEventDelegate.h"
#include "SSPlatformNetworkData.h"
#include "eSSRequestResultType.h"
#include "ELSSOnlineError.generated.h"

class UYGS2RequestBase;

UCLASS(Blueprintable)
class ABP_200508_API UELSSOnlineError : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkErrorCorrespondEvent SSNetworkErrorCorrespondEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkErrorAddedEvent SSNetworkErrorAddedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformNetworkErrorEvent SSNetworkErrorToPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlatformNetworkData networkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlatformNetworkData DialogReservedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isErrorProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableNetworkStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELNetworkStatus CurrentNetworkStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EELServerType, EELNetworkConnectionStatus> NetworkConnectionStatus;
    
    UELSSOnlineError();
private:
    UFUNCTION(BlueprintCallable)
    void YGS2API_RequestResult(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request);
    
public:
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Startup();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartUniqueErrorEvent(const ESSOnlineErrorType callType);
    
    UFUNCTION(BlueprintCallable)
    void StartPlatformErrorEvent(const ESSOnlineErrorType callType, bool setupErrorData);
    
    UFUNCTION(BlueprintCallable)
    void StartErrorEvent(FSSPlatformNetworkData& errData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool StartErrorCorrespond();
    
private:
    UFUNCTION(BlueprintCallable)
    void SSMode_RequestResult(const int32 responseCode, const FString& responseData, const FString& apiUniqueID, eSSRequestResultType resultType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDialogReserveMode(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void Reset(bool excludedNetworkErrorData);
    
    UFUNCTION(BlueprintCallable)
    void ReserveUniqueError(ESSOnlineErrorType inErrorType);
    
    UFUNCTION(BlueprintCallable)
    void ReserveErrorDialog(const FSSPlatformNetworkData& inErrorData);
    
    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable)
    void OpenReservedUniqueErrorDialog();
    
    UFUNCTION(BlueprintCallable)
    void OpenReservedDialog();
    
    UFUNCTION(BlueprintCallable)
    void NetworkTypeChanged(EELNetworkType NetworkType);
    
    UFUNCTION(BlueprintCallable)
    void NetworkStatusChanged(EELNetworkStatus NetworkStatus);
    
    UFUNCTION(BlueprintCallable)
    void NetworkErrorReset();
    
    UFUNCTION(BlueprintCallable)
    void NetworkConnectionStatusChange(EELNetworkConnectionStatus NewNetworkConnectionStatus, EELServerType ServerType);
    
    UFUNCTION(BlueprintCallable)
    bool IsReservedUniqueError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReservedDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetworkErrorEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsErrorProcessStop() const;
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    bool GetErrDialogData(FSSPlatformNetworkData& dat, const FString& tmpID, const bool isClear);
    
    UFUNCTION(BlueprintCallable)
    FString GetAllNetworkErrorText(int32& outErrorType);
    
    UFUNCTION(BlueprintCallable)
    void FilteringNetworkError();
    
    UFUNCTION(BlueprintCallable)
    void ErrorProcessEnd();
    
    UFUNCTION(BlueprintCallable)
    bool EndErrDialogData(const FString& tmpID, const bool retDialog);
    
    UFUNCTION(BlueprintCallable)
    void ClearReservedUniqueError();
    
    UFUNCTION(BlueprintCallable)
    void ClearReservedDialog();
    
    UFUNCTION(BlueprintCallable)
    void ApplicationStatusChanged(EELApplicationStatus AppStatus);
    
    UFUNCTION(BlueprintCallable)
    bool AddErrDialogData(const FSSPlatformNetworkData& dat, FString& tmpID);
    
};

