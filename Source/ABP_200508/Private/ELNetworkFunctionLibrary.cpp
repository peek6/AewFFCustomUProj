#include "ELNetworkFunctionLibrary.h"

bool UELNetworkFunctionLibrary::Switch_TestNetworkServiceAccountAvailable() {
    return false;
}

bool UELNetworkFunctionLibrary::IsNetworkAvailable(const UObject* WorldContextObject) {
    return false;
}

bool UELNetworkFunctionLibrary::IsInOnlineGameModeMenu(const UObject* WorldContextObject) {
    return false;
}

bool UELNetworkFunctionLibrary::IsInOnlineGameMode(const UObject* WorldContextObject) {
    return false;
}

int32 UELNetworkFunctionLibrary::GetOwningPlayerIndex(const UObject* WorldContextObject) {
    return 0;
}

int32 UELNetworkFunctionLibrary::GetOwningCharacterIndex(const UObject* WorldContextObject) {
    return 0;
}

APlayerController* UELNetworkFunctionLibrary::GetFirstLocalPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

UELReplicationManager* UELNetworkFunctionLibrary::GetELReplicationManager(const UObject* WorldContextObject) {
    return NULL;
}

UELNetworkFunctionLibrary::UELNetworkFunctionLibrary() {
}

