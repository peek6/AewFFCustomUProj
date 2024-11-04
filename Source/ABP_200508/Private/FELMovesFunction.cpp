#include "FELMovesFunction.h"

void UFELMovesFunction::SetSceneCaptureOnly(TArray<AActor*> SceneActors, bool Flag) {
}

void UFELMovesFunction::MakeUniqueIndexELMoves(FELMoves& MOVES) {
}

bool UFELMovesFunction::GetSlotDetalMatchData(const TMap<int32, FMovesTestMenuStructDefine>& _OutMenu, const FELMovesSituation_SlotDetail& _SlotDetail, const FWrestlingSkillParam& _SkillParam, FMovesTestMenuStructDefine& MENU) {
    return false;
}

void UFELMovesFunction::GetMovesTopMenuList(UDataTable* UpdateTable, TArray<FMovesTestMenuStructDefine>& _OutMenuTop) {
}

void UFELMovesFunction::GetMovesTableValueWhipAttack(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, bool bTargetDiving, EWhipState TargetWhipState) {
}

void UFELMovesFunction::GetMovesTableValueTwoPlatoons(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, ETwoPlatoonsStuation Situation, EStickinputDir InputDir, bool bChainGrappleDestroy, bool Kick, bool bGrapple, bool bRunning) {
}

void UFELMovesFunction::GetMovesTableValueStandStrike(int32& Value, bool& bDoneRunningAttack, bool& bDoneRunningCounter, bool& bDoneWhipAttack, bool& bDoneDownAttack, bool& bDoneEnvironmentAttack, bool& bDoneApronToApronAttack, bool& bDoneRiseUpAttack, bool& bDoneRecoilAttack, bool& bInRingToMiddleRope, bool& bIgnoreSync, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, bool Kick, bool bStrong, bool bNear, EStickinputDir InputDir, bool bRunning, bool bFromGrappleButtun, bool bRunningCounter, bool bApron, bool bOutside, bool bRiseUp, int32 ComboCount, bool TargetDown, bool TargetSitDown, bool TargetFaceDown, EDownDirType TargetDownDirType, bool TargetCornerTop, bool TargetCornerGroggy, ERopeGroggy TargetRopeGroggy, bool TargetApron, bool TargetDiving, EWhipState TargetWhipState, bool bTargetTagWait, bool bSetupAction, EEnvironmentGroggy EnvironmentGroggy, EEnvironmentLeanAgainst TargetBarricadeLeanAgainst, bool OverTheTopRopeRule, bool bRingSideToRing, ERecoilAttackType RecoilAttackType, bool bIsSpecialState, bool TargetOutside) {
}

void UFELMovesFunction::GetMovesTableValueSpecialStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, ESpecialMovesType SpecialType, bool bRun, bool bRunningCounter, bool bOutside, bool TargetDown, bool TargetFaceDown, EDownDirType TargetDownDirType, ERopeGroggy TargetRopeGroggy) {
}

void UFELMovesFunction::GetMovesTableValueSpecialGrapple(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, ESpecialMovesType SpecialType, bool CornerChain, bool bRopeChain, bool bRingToApron, bool bApronToRing) {
}

void UFELMovesFunction::GetMovesTableValueSitDownAttack(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, bool bFront, bool bRunning) {
}

void UFELMovesFunction::GetMovesTableValueRunningCounter(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, ESpecialMovesType SpecialType, EStickinputDir InputDir, bool bSetupAction) {
}

void UFELMovesFunction::GetMovesTableValueRunningAttack(int32& Value, bool& bDoneEnvironmentAttack, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, bool Kick, bool bGrapple, bool bStrong, ESpecialMovesType SpecialType, EStickinputDir InputDir, bool TargetDown, bool TargetFaceDown, EDownDirType TargetDownDirType, bool bSetupAction, EEnvironmentLeanAgainst TargetLeanAgainst, EEnvironmentGroggy EnvironmentGroggy, bool bOutside, bool TargetOutside) {
}

void UFELMovesFunction::GetMovesTableValueRopeSpringboard(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bRun, bool bToOutRing, bool bToCorner, bool bFront, bool Kick, bool bGrapple, ESpecialMovesType SpecialType, bool bDown, bool bFaceUp) {
}

void UFELMovesFunction::GetMovesTableValueRopeGroggyStrike(int32& Value, bool& bInRingToMiddleRope, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, bool bRun, bool bOutside, bool bApron, EStickinputDir InputDir, ESpecialMovesType SpecialType, ERopeGroggy TargetRopeGroggy, bool OverTheTopRopeRule) {
}

void UFELMovesFunction::GetMovesTableValueRiseUpStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, ESpecialMovesType SpecialType) {
}

void UFELMovesFunction::GetMovesTableValueRingSideToRing(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront) {
}

int32 UFELMovesFunction::GetMovesTableValueRecoilAttack(const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFromGrappleButtun, ERecoilAttackType RecoilAttackType) {
    return 0;
}

void UFELMovesFunction::GetMovesTableValueKickCatchThrow(int32& Value, FString& MovesCategoryName, const FELMoves& TargetMoves, bool bFromKickButtun, bool bFromGrappleButtun, bool bReversal) {
}

void UFELMovesFunction::GetMovesTableValueDownStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool TargetFaceDown, EDownDirType TargetDownDirType) {
}

void UFELMovesFunction::GetMovesTableValueDownSpecial(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, ESpecialMovesType SpecialType, bool TargetFaceDown, EDownDirType TargetDownDirType) {
}

void UFELMovesFunction::GetMovesTableValueDownRunningStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool TargetFaceDown, EDownDirType TargetDownDirType) {
}

void UFELMovesFunction::GetMovesTableValueDownGrapple(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Running, bool TargetFaceDown, EDownDirType TargetDownDirType) {
}

void UFELMovesFunction::GetMovesTableValueDiving(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, bool Kick, bool bGrapple, ESpecialMovesType SpecialType, bool bDown, bool bFaceUp, bool FromCorner, bool FromBarricade, bool FromLadder) {
}

void UFELMovesFunction::GetMovesTableValueCornerSpringboard(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bToOutRing, bool bToApron, bool bFront, bool Kick, bool bGrapple, ESpecialMovesType SpecialType, bool bDown, bool bFaceUp) {
}

void UFELMovesFunction::GetMovesTableValueChainStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, bool Kick, bool bStrong, EStickinputDir InputDir, bool CornerChain, bool bRopeChain, bool bRingToApron, bool bApronToRing, bool bInputLookAtRing, bool bTagWait, EChainWrestlingAttackType ChainWrestlingAttackType, EChainWrestlingPoseType ChainWrestlingPoseType, bool bKickCatchThrow) {
}

void UFELMovesFunction::GetMovesTableValueChainGrapple(int32& Value, bool& bDoneEnvironmentAttack, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, bool bStrong, EStickinputDir InputDir, bool CornerChain, bool bRopeChain, bool bRingToApron, bool bApronToRing, bool bInputLookAtRing, bool bTagWait, EEnvironmentGroggy EnvironmentGroggy, EChainWrestlingAttackType ChainWrestlingAttackType, EChainWrestlingPoseType ChainWrestlingPoseType, bool bKickCatchThrow) {
}

void UFELMovesFunction::GetMovesTableValueApronToApron(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, bool bRun, bool bMiddleRope) {
}

void UFELMovesFunction::GetMovesTableValueApronStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bFromApron, bool bToTagWait, bool bGrapple, bool bRun, bool bFromOutside, bool bFront, ESpecialMovesType SpecialType) {
}

void UFELMovesFunction::GetMovesTableValueApronSpringboard(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bToOutRing, bool bToCorner, bool bFront, bool Kick, bool bGrapple, ESpecialMovesType SpecialType, bool bDown, bool bFaceUp) {
}

int32 UFELMovesFunction::GetMovesTableChainWrestling(const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, EStickinputDir InputDir, EChainWrestlingAttackType ChainWrestlingAttackType, EChainWrestlingPoseType ChainWrestlingPoseType) {
    return 0;
}

void UFELMovesFunction::GetMovesTableBarricadeLeanAgainst(int32& Value, bool& bDoneRunningAttack, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bRunning, bool Kick, bool bGrapple, EEnvironmentLeanAgainst TargetBarricadeLeanAgainst) {
}

bool UFELMovesFunction::GetMovesParentMenuName(const TArray<FMovesTestMenuStructDefine>& _MenuData, const FMovesTestMenuStructDefine& _CrrentMenu, TArray<FText>& _ParentMenuNames, bool _WithCurrent) {
    return false;
}

void UFELMovesFunction::GetMovesMenuMap(UDataTable* MenuTable, TMap<int32, FMovesTestMenuStructDefine>& _OutMenu) {
}

void UFELMovesFunction::GetMovesCurrentPathName(const TArray<FMovesTestMenuStructDefine>& _MenuData, const FMovesTestMenuStructDefine& _CrrentMenu, FText& _PathNames, bool _WithCurrent) {
}

void UFELMovesFunction::GetMovesChildrenMenuList(const TArray<FMovesTestMenuStructDefine>& _MenuData, const FMovesTestMenuStructDefine& _TopMenu, TArray<FMovesTestMenuStructDefine>& _OutMenu) {
}

void UFELMovesFunction::GetMoves_CornerGroggyStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Front, bool Kick, bool Grapple, EStickinputDir InputDir, bool Running, bool OverTheTopRopeRule) {
}

void UFELMovesFunction::GetFinisherMatchMenuData(bool bFinisher, const TMap<int32, FMovesTestMenuStructDefine>& _OutMenu, const FMovesSituation& _MovesSituation, const FELMoves_Finisher& _Finisher, const FWrestlingSkillParam& _SkillParam, TArray<FMovesTestMenuStructDefine>& MENU) {
}

void UFELMovesFunction::GetFinisher_SettingData(UDataTable* DetailTable, const TMap<int32, FMovesTestMenuStructDefine>& _Menu, const FELMoves_Finisher_Part& Finisher, TArray<FMovesTestMenuStructDefine>& _OutArray) {
}

int32 UFELMovesFunction::GetActionSkillNo(const TMap<int32, FMovesTestMenuStructDefine>& _OutMenu, const FMovesTestMenuStructDefine& _Data) {
    return 0;
}

FText UFELMovesFunction::FormatCurrentPathName(const FText& Left, const FText& Right) {
    return FText::GetEmpty();
}

UFELMovesFunction::UFELMovesFunction() {
}

