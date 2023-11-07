#include "YAutoMatch_DebugMenu.h"

void UYAutoMatch_DebugMenu::Setup(const FAutoMatchSettings& _stSettings) {
}

void UYAutoMatch_DebugMenu::SetStopMatch(bool _stop) {
}

void UYAutoMatch_DebugMenu::SetResultText(const FString& _text) {
}

void UYAutoMatch_DebugMenu::SetPreEndAutoMatch(bool _bEnd) {
}

void UYAutoMatch_DebugMenu::SetOnlineType(const FString& _type) {
}

void UYAutoMatch_DebugMenu::SetOnlinePlayerNo(int32 _No) {
}

void UYAutoMatch_DebugMenu::SetOnlineMode(bool _Online) {
}

void UYAutoMatch_DebugMenu::SetOnlineIdentificationNum(int32 _num) {
}

void UYAutoMatch_DebugMenu::SetOnlineHost(bool _Host) {
}

void UYAutoMatch_DebugMenu::SetErrorCheck(bool _Error) {
}

void UYAutoMatch_DebugMenu::SetEndAutoMatch(bool _bEnd) {
}

bool UYAutoMatch_DebugMenu::IsVictorySceneMode() {
    return false;
}

bool UYAutoMatch_DebugMenu::IsStopMatch() {
    return false;
}

bool UYAutoMatch_DebugMenu::IsPreEndAutoMatch() const {
    return false;
}

bool UYAutoMatch_DebugMenu::IsOnlineMode() const {
    return false;
}

bool UYAutoMatch_DebugMenu::IsOnlineHost() const {
    return false;
}

bool UYAutoMatch_DebugMenu::IsErrorCheck() const {
    return false;
}

bool UYAutoMatch_DebugMenu::IsEndAutoMatch() const {
    return false;
}

FString UYAutoMatch_DebugMenu::GetTableName() {
    return TEXT("");
}

FString UYAutoMatch_DebugMenu::GetResultText() const {
    return TEXT("");
}

FString UYAutoMatch_DebugMenu::GetOnlineType() const {
    return TEXT("");
}

int32 UYAutoMatch_DebugMenu::GetOnlinePlayerNo() const {
    return 0;
}

int32 UYAutoMatch_DebugMenu::GetOnlineIdentificationNum() const {
    return 0;
}

void UYAutoMatch_DebugMenu::AddResultText(const FString& _text) {
}

UYAutoMatch_DebugMenu::UYAutoMatch_DebugMenu() {
}

