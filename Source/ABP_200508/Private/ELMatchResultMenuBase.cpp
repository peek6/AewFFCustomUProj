#include "ELMatchResultMenuBase.h"

void UELMatchResultMenuBase::StartDelay(float InDelayTime) {
}

void UELMatchResultMenuBase::SetFlowController(AELMatchResultMenuFlowControllerBase* InController) {
}











void UELMatchResultMenuBase::OnEnd() {
}


int32 UELMatchResultMenuBase::MoveChallengeCursor(int32 Current, int32 Add, int32 Max) const {
    return 0;
}

TArray<FChallengeProgressDetailInfo> UELMatchResultMenuBase::MakeChallengeList() {
    return TArray<FChallengeProgressDetailInfo>();
}

UTexture2D* UELMatchResultMenuBase::GetTimeEvaluationTexture(EELMatchScore_MatchType MatchType, int32 Time) {
    return NULL;
}

bool UELMatchResultMenuBase::GetStarEvaluation(float MatchTotalScore, FELMatchScore_StarData& OutStarData) {
    return false;
}

UTexture2D* UELMatchResultMenuBase::GetMovesEvaluationTexture(EELMatchScore_MatchType MatchType, int32 MovesPoint) {
    return NULL;
}

UTexture2D* UELMatchResultMenuBase::GetMatchEvaluationTexture(EELMatchScore_MatchType MatchType, int32 MatchEvaluation) {
    return NULL;
}

UTexture2D* UELMatchResultMenuBase::GetHPEvaluationTexture(EELMatchScore_MatchType MatchType, int32 HPRate) {
    return NULL;
}

AELMatchResultMenuFlowControllerBase* UELMatchResultMenuBase::GetFlowController() const {
    return NULL;
}

void UELMatchResultMenuBase::CallCustomEvent(const FString& EventName) {
}

UELMatchResultMenuBase::UELMatchResultMenuBase() {
    this->StarData = NULL;
    this->EvaluationParamTable = NULL;
    this->DelayTime = 0.00f;
}

