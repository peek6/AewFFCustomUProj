#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELNetworkFunctionLibrary.generated.h"

class APlayerController;
class UELReplicationManager;
class UObject;

UCLASS(Blueprintable)
class UELNetworkFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELNetworkFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Switch_TestNetworkServiceAccountAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNetworkAvailable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInOnlineGameModeMenu(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInOnlineGameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetOwningPlayerIndex(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetOwningCharacterIndex(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetFirstLocalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELReplicationManager* GetELReplicationManager(const UObject* WorldContextObject);
    
};

