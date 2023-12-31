#include "StMatchRule.h"

FStMatchRule::FStMatchRule() {
    this->DataMiningID = 0;
    this->bUseReferee = false;
    this->bPin = false;
    this->bSubmission = false;
    this->bAnywherePin = false;
    this->bAnywhereSubmission = false;
    this->bOvertheTopRope = false;
    this->bDQ = false;
    this->RingOutCount = 0;
    this->bFinisherDeath = false;
    this->bHPDeath = false;
    this->TimeUp = 0;
    this->bBattleRoyale = false;
    this->bTrump = false;
    this->bTrumpTeam = false;
    this->bTrumpSwap = false;
    this->bExplodingBarbedWireDeathMatch = false;
    this->bLightsOut = false;
    this->bTornadoTag = false;
    this->bRingOnly = false;
    this->bTagMove = false;
    this->bDoubleTeamMove = false;
    this->bCombination = false;
    this->bChopBattle = false;
    this->bChainWrestring = false;
    this->Shock = 0;
    this->Momentum = 0;
    this->BumpAndFeed = 0;
    this->PropList = 0;
    this->ChainGrapple = 0;
    this->PlayerDefault = 0;
    this->bTargetLine = false;
    this->bManagerP1 = false;
    this->bManagerP2 = false;
    this->MatchType = EELMatchType::SINGLE_MATCH;
    this->MenuMatchType = EELMenuMatchType::SINGLE_MATCH_ONLINE;
    this->MatchMode = EELMatchMode::EXHIBITION_MATCH;
    this->MatchRuleType = EELMatchRuleType::NORMAL;
    this->bStrongGrapple = false;
    this->bDispDamage = false;
    this->bTraningMode = false;
    this->Option = 0;
    this->bSkipEntrance = false;
    this->bDisableOtherPadFinish = false;
    this->bSkipVictory = false;
    this->bGauntlet = false;
    this->bSkipResult = false;
    this->bHostPadDeath = false;
    this->RingEscape = 0;
    this->CareerMatchID = 0;
    this->RefereeID = EWrestlerID_N::None;
    this->bLadder = false;
    this->bSkipMatchUp = false;
    this->bControlTagPartnerTeam0 = false;
    this->bControlTagPartnerTeam1 = false;
}

