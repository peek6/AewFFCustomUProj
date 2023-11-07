#include "ActivityFunctionLibrary.h"

void UActivityFunctionLibrary::StartActivity(const FString& ActivityId) {
}

void UActivityFunctionLibrary::SetReceivedGameIntentDuringConversion(const bool bIsReceivedGameIntentDuringConversion) {
}

void UActivityFunctionLibrary::SetGameIntentScenario(const FString& scenarioActivityId) {
}

void UActivityFunctionLibrary::SetCurrentActivityId(ECareerScenario Scenario) {
}

void UActivityFunctionLibrary::SetBackMenuDelegate(FBackMenuDelegate backMenuDelegate) {
}

void UActivityFunctionLibrary::ResetReceivedGameIntent() {
}

bool UActivityFunctionLibrary::IsNoticeScreenSkip() {
    return false;
}

bool UActivityFunctionLibrary::IsLaunchActivity() {
    return false;
}

bool UActivityFunctionLibrary::IsFirstReceived() {
    return false;
}

bool UActivityFunctionLibrary::IsExistCustomData() {
    return false;
}

bool UActivityFunctionLibrary::GetIsReceivedGameIntentDuringConversion() {
    return false;
}

void UActivityFunctionLibrary::GetGameIntentScenario(bool& isGameIntent, ECareerScenario& Scenario) {
}

FString UActivityFunctionLibrary::GetGameIntentActivityId() {
    return TEXT("");
}

void UActivityFunctionLibrary::GameIntentsInit() {
}

void UActivityFunctionLibrary::EndActivity(const FString& ActivityId, const EOutCome Outcome) {
}

FString UActivityFunctionLibrary::ConvertActivityId(ECareerScenario Scenario) {
    return TEXT("");
}

void UActivityFunctionLibrary::ClearBackMenuDelegate() {
}

void UActivityFunctionLibrary::AvailabilityChangeAllCareerActivity() {
}

void UActivityFunctionLibrary::AvailabilityChangeActivity(const FString& ActivityId, const bool _isEnable) {
}

UActivityFunctionLibrary::UActivityFunctionLibrary() {
}

