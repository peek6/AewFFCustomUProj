#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EELEOSApiType.h"
#include "EELEOSLoginErrorType.h"
#include "EELEOSSessionErrorType.h"
#include "ELEOSErrorUtility.generated.h"

UCLASS(Blueprintable)
class UELEOSErrorUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELEOSErrorUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CreateEOSSessionShortErrorCodeNumber(const EELEOSSessionErrorType errType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CreateEOSSessionErrorCode(const EELEOSSessionErrorType errType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CreateEOSOnlineShortErrorCodeNumber(const int32 errID, const EELEOSApiType apiType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CreateEOSOnlineErrorCode(const int32 errID, const EELEOSApiType apiType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CreateEOSLoginShortErrorCodeNumber(const EELEOSLoginErrorType errType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CreateEOSLoginErrorCode(const EELEOSLoginErrorType errType);
    
};

