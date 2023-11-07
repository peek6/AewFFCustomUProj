#include "YAutoPlay_DebugMenu.h"

void UYAutoPlay_DebugMenu::SetStopAutoPlay(bool _bStop) {
}

void UYAutoPlay_DebugMenu::SetStartRecPadInfo(bool _bStart) {
}

void UYAutoPlay_DebugMenu::SetStartAutoPlay(bool _bStart) {
}

void UYAutoPlay_DebugMenu::SetResultText(const FString& _text) {
}

void UYAutoPlay_DebugMenu::SetPauseAutoPlay(bool _bPause) {
}

void UYAutoPlay_DebugMenu::SetAutoPlayKeyInterval(FDateTime _time) {
}

bool UYAutoPlay_DebugMenu::SetAutoPlayInfoArray() {
    return false;
}

void UYAutoPlay_DebugMenu::SetAutoPlayDTFileIndex(int32 Index) {
}

void UYAutoPlay_DebugMenu::PushStopButtonUpdate() {
}

void UYAutoPlay_DebugMenu::PushStartButtonUpdate() {
}

void UYAutoPlay_DebugMenu::PushRecStartUpdate() {
}

void UYAutoPlay_DebugMenu::PushRecEndUpdate() {
}

void UYAutoPlay_DebugMenu::PushPauseButtonUpdate() {
}

bool UYAutoPlay_DebugMenu::IsStopAutoPlay() {
    return false;
}

bool UYAutoPlay_DebugMenu::IsStartRecPadInfo() {
    return false;
}

bool UYAutoPlay_DebugMenu::IsStartAutoPlay() {
    return false;
}

bool UYAutoPlay_DebugMenu::IsPauseAutoPlay() {
    return false;
}

FString UYAutoPlay_DebugMenu::GetTableName() {
    return TEXT("");
}

TArray<FString> UYAutoPlay_DebugMenu::GetSelectedByPlayDTFileNameList() {
    return TArray<FString>();
}

FString UYAutoPlay_DebugMenu::GetResultText() const {
    return TEXT("");
}

int32 UYAutoPlay_DebugMenu::GetMultiPlayNoInfo(int32 Index) {
    return 0;
}

FDateTime UYAutoPlay_DebugMenu::GetAutoPlayKeyInterval() {
    return FDateTime{};
}

int32 UYAutoPlay_DebugMenu::GetAutoPlayDTFileIndex() {
    return 0;
}

void UYAutoPlay_DebugMenu::AddResultText(const FString& _text) {
}

UYAutoPlay_DebugMenu::UYAutoPlay_DebugMenu() {
}

