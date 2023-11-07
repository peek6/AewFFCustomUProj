#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYGS2Api.h"
#include "EYGS2ErrorType.h"
#include "SSModeServerParam.h"
#include "SSServerEndpoint.h"
#include "YGS2ClientCacheParam.h"
#include "YGS2ClientSetupParam.h"
#include "EELApplicationStatus.h"
#include "EELNetworkStatus.h"
#include "EELNetworkType.h"
#include "ELYGS2PingCache.h"
#include "ELYGS2RequestFunction.h"
#include "ELYGS2Manager.generated.h"

class UELGameServerParam;
class UELGameServerSelector;
class UELNetworkObserverBase;
class UYGS2RequestBase;

UCLASS(Blueprintable)
class UELYGS2Manager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELYGS2RequestFunction> YGS2Requests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELGameServerParam* pServerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELGameServerSelector* pServerSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYGS2ClientSetupParam> ClientSetupParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentTargetRegionWithPing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FELYGS2PingCache> PingCaches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELNetworkObserverBase* m_pNetworkObserver;
    
public:
    UELYGS2Manager();
    UFUNCTION(BlueprintCallable)
    bool SetServerListData(const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkObserver(UELNetworkObserverBase* _pNetworkObserver);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayName(const FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetDisplayName();
    
    UFUNCTION(BlueprintCallable)
    bool RequestPingToAllServers();
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetInfo();
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelForDebug(UYGS2RequestBase* Request, EYGS2ErrorType ErrorType);
    
    UFUNCTION(BlueprintCallable)
    bool RequestAuth();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRequests(EYGS2Api inApiType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnYGS2Response(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request);
    
public:
    UFUNCTION(BlueprintCallable)
    void NetworkTypeChanged(EELNetworkType NetworkType);
    
    UFUNCTION(BlueprintCallable)
    void NetworkStatusChanged(EELNetworkStatus NetworkStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetworkError() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaintenance() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEndAuth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBanned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAuthFailed() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasConnectableServerParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetYGS2ServerVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetYGS2ServerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetYGS2ServerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetYGS2Permission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetYGS2EnvName() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSSServerEndpointListData(TArray<FSSServerEndpoint>& SSServerDatas);
    
    UFUNCTION(BlueprintCallable)
    bool GetSSModeServerEnvData(FSSModeServerParam& SSServerData);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPingMs();
    
    UFUNCTION(BlueprintCallable)
    FYGS2ClientCacheParam GetClientCacheParam();
    
    UFUNCTION(BlueprintCallable)
    bool GetBaseURLByArea(const FString& Area, FString& root_url, int32& api_ver);
    
    UFUNCTION(BlueprintCallable)
    bool FindNearestServerPing(FString& Name, float& Ping);
    
    UFUNCTION(BlueprintCallable)
    void EmptyRequests();
    
    UFUNCTION(BlueprintCallable)
    void ClearNetworkErrorFlag();
    
    UFUNCTION(BlueprintCallable)
    void ApplicationStatusChanged(EELApplicationStatus AppStatus);
    
};

