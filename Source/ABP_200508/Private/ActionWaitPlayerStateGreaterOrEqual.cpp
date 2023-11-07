#include "ActionWaitPlayerStateGreaterOrEqual.h"

void UActionWaitPlayerStateGreaterOrEqual::OnSessionEvent(EELEOSSessionEventType EventType, EELEOSSessionEventResult EventResult) {
}

bool UActionWaitPlayerStateGreaterOrEqual::IsCompleted() {
    return false;
}

void UActionWaitPlayerStateGreaterOrEqual::Completed() {
}

UActionWaitPlayerStateGreaterOrEqual* UActionWaitPlayerStateGreaterOrEqual::ActionWaitPlayerStateGreaterOrEqual(UObject* NewWorldContextObject, ESessionPlayerStateNameType NewStateName, ESessionPlayerStateType NewState, bool NewBSetState, bool bAll) {
    return NULL;
}

void UActionWaitPlayerStateGreaterOrEqual::Abort() {
}

UActionWaitPlayerStateGreaterOrEqual::UActionWaitPlayerStateGreaterOrEqual() {
    this->WorldContextObject = NULL;
    this->StateName = ESessionPlayerStateNameType::Initialize;
    this->State = ESessionPlayerStateType::Num_0;
    this->bAllMatched = false;
    this->bSetState = false;
    this->bCompleted = false;
}

