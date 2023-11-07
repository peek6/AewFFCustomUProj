#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BackMenuDelegateDelegate.h"
#include "ECareerScenario.h"
#include "EOutCome.h"
#include "ActivityFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UActivityFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActivityFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void StartActivity(const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable)
    static void SetReceivedGameIntentDuringConversion(const bool bIsReceivedGameIntentDuringConversion);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameIntentScenario(const FString& scenarioActivityId);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentActivityId(ECareerScenario Scenario);
    
    UFUNCTION(BlueprintCallable)
    static void SetBackMenuDelegate(FBackMenuDelegate backMenuDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void ResetReceivedGameIntent();
    
    UFUNCTION(BlueprintCallable)
    static bool IsNoticeScreenSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLaunchActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFirstReceived();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistCustomData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsReceivedGameIntentDuringConversion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameIntentScenario(bool& isGameIntent, ECareerScenario& Scenario);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameIntentActivityId();
    
    UFUNCTION(BlueprintCallable)
    static void GameIntentsInit();
    
    UFUNCTION(BlueprintCallable)
    static void EndActivity(const FString& ActivityId, const EOutCome Outcome);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertActivityId(ECareerScenario Scenario);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBackMenuDelegate();
    
    UFUNCTION(BlueprintCallable)
    static void AvailabilityChangeAllCareerActivity();
    
    UFUNCTION(BlueprintCallable)
    static void AvailabilityChangeActivity(const FString& ActivityId, const bool _isEnable);
    
};

