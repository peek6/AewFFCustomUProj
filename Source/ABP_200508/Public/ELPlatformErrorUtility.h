#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EELPlatformErrorID.h"
#include "EELPlatformErrorType.h"
#include "ELPlatformErrorUtility.generated.h"

UCLASS(Blueprintable)
class UELPlatformErrorUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELPlatformErrorUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CreatePlatformShortErrorCodeNumber(const EELPlatformErrorID PlatformErrorID, const EELPlatformErrorType PlatformErrorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CreatePlatformErrorCode(const EELPlatformErrorID PlatformErrorID, const EELPlatformErrorType PlatformErrorType);
    
};

