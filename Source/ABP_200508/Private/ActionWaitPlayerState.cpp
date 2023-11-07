#include "ActionWaitPlayerState.h"

void UActionWaitPlayerState::OnSessionEvent(EELEOSSessionEventType EventType, EELEOSSessionEventResult EventResult) {
}

bool UActionWaitPlayerState::IsCompleted() {
    return false;
}

void UActionWaitPlayerState::Completed() {
}

UActionWaitPlayerState* UActionWaitPlayerState::ActionWaitPlayerState(UObject* NewWorldContextObject, ESessionPlayerStateNameType NewStateName, ESessionPlayerStateType NewState, bool NewBSetState, bool bAll) {
    return NULL;
}

void UActionWaitPlayerState::Abort() {
}

UActionWaitPlayerState::UActionWaitPlayerState() {
    this->WorldContextObject = NULL;
    this->StateName = ESessionPlayerStateNameType::Initialize;
    this->State = ESessionPlayerStateType::Num_0;
    this->bAllMatched = false;
    this->bSetState = false;
    this->bCompleted = false;
}

