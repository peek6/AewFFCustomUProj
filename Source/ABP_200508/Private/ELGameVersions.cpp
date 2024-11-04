#include "ELGameVersions.h"

FString UELGameVersions::GetTitleVersionName() {
    return TEXT("");
}

FString UELGameVersions::GetSSModeVersionName() {
    return TEXT("");
}

int32 UELGameVersions::GetSSModeVersion() {
    return 0;
}

FString UELGameVersions::GetOnlineVersionName() {
    return TEXT("");
}

int32 UELGameVersions::GetOnlineVersion() {
    return 0;
}

FString UELGameVersions::GetBuildVersionName() {
    return TEXT("");
}

int32 UELGameVersions::GetBuildVersion() {
    return 0;
}

void UELGameVersions::Debug_SetOverrideTitleVersionName(const FString& Value) {
}

void UELGameVersions::Debug_SetOverrideOnlineVersionName(const FString& Value) {
}

UELGameVersions::UELGameVersions() {
    this->TitleVersion = TEXT("1.07");
    this->BuildVersion = TEXT("0000");
    this->OnlineVersion = TEXT("0009");
    this->SSModeVersion = TEXT("0134");
}

