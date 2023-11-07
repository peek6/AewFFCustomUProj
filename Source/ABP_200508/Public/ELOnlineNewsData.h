#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELOnlineNewsDataParam.h"
#include "ELOnlineNewsData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UELOnlineNewsData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELOnlineNewsDataParam OnlineNewsDataParam;
    
public:
    UELOnlineNewsData();
    UFUNCTION(BlueprintCallable)
    FString ToJson(bool PlatformSwitch);
    
    UFUNCTION(BlueprintCallable)
    void SetParam(const FELOnlineNewsDataParam& _Param);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineNewsTexture(UTexture2D* _Image);
    
    UFUNCTION(BlueprintCallable)
    int32 GetOnlineNewsVersion();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetOnlineNewsTexture();
    
    UFUNCTION(BlueprintCallable)
    void GetOnlineNewsDataParam(FELOnlineNewsDataParam& OutOnlineNewsDataParam);
    
    UFUNCTION(BlueprintCallable)
    bool FromJson(const FString& _JsonData);
    
};

