#pragma once
#include "CoreMinimal.h"
#include "ELMoves.h"
#include "ELMovesSituation_SlotDetail.h"
#include "ELMoves_Finisher.h"
#include "ELMoves_Finisher_Part.h"
#include "MovesSituation.h"
#include "MovesTestMenuStructDefine.h"
#include "EChainWrestlingAttackType.h"
#include "EChainWrestlingPoseType.h"
#include "EDownDirType.h"
#include "EEnvironmentGroggy.h"
#include "EEnvironmentLeanAgainst.h"
#include "ERecoilAttackType.h"
#include "ERopeGroggy.h"
#include "ESpecialMovesType.h"
#include "EStickinputDir.h"
#include "ETwoPlatoonsStuation.h"
#include "EWhipState.h"
#include "WrestlingSkillParam.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FELMovesFunction.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API UFELMovesFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFELMovesFunction();
    UFUNCTION(BlueprintCallable)
    static void SetSceneCaptureOnly(TArray<AActor*> SceneActors, bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeUniqueIndexELMoves(FELMoves& MOVES);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSlotDetalMatchData(const TMap<int32, FMovesTestMenuStructDefine>& _OutMenu, const FELMovesSituation_SlotDetail& _SlotDetail, const FWrestlingSkillParam& _SkillParam, FMovesTestMenuStructDefine& MENU);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTopMenuList(UDataTable* UpdateTable, TArray<FMovesTestMenuStructDefine>& _OutMenuTop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueWhipAttack(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, bool bTargetDiving, EWhipState TargetWhipState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueTwoPlatoons(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, ETwoPlatoonsStuation Situation, EStickinputDir InputDir, bool bChainGrappleDestroy, bool Kick, bool bGrapple, bool bRunning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueStandStrike(int32& Value, bool& bDoneRunningAttack, bool& bDoneRunningCounter, bool& bDoneWhipAttack, bool& bDoneDownAttack, bool& bDoneEnvironmentAttack, bool& bDoneApronToApronAttack, bool& bDoneRiseUpAttack, bool& bDoneRecoilAttack, bool& bInRingToMiddleRope, bool& bIgnoreSync, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, bool Kick, bool bStrong, bool bNear, EStickinputDir InputDir, bool bRunning, bool bFromGrappleButtun, bool bRunningCounter, bool bApron, bool bOutside, bool bRiseUp, int32 ComboCount, bool TargetDown, bool TargetSitDown, bool TargetFaceDown, EDownDirType TargetDownDirType, bool TargetCornerTop, bool TargetCornerGroggy, ERopeGroggy TargetRopeGroggy, bool TargetApron, bool TargetDiving, EWhipState TargetWhipState, bool bTargetTagWait, bool bSetupAction, EEnvironmentGroggy EnvironmentGroggy, EEnvironmentLeanAgainst TargetBarricadeLeanAgainst, bool OverTheTopRopeRule, bool bRingSideToRing, ERecoilAttackType RecoilAttackType, bool bIsSpecialState, bool TargetOutside);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueSpecialStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, ESpecialMovesType SpecialType, bool bRun, bool bRunningCounter, bool bOutside, bool TargetDown, bool TargetFaceDown, EDownDirType TargetDownDirType, ERopeGroggy TargetRopeGroggy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueSpecialGrapple(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, ESpecialMovesType SpecialType, bool CornerChain, bool bRopeChain, bool bRingToApron, bool bApronToRing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueSitDownAttack(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, bool bFront, bool bRunning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueRunningCounter(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, ESpecialMovesType SpecialType, EStickinputDir InputDir, bool bSetupAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueRunningAttack(int32& Value, bool& bDoneEnvironmentAttack, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, bool Kick, bool bGrapple, bool bStrong, ESpecialMovesType SpecialType, EStickinputDir InputDir, bool TargetDown, bool TargetFaceDown, EDownDirType TargetDownDirType, bool bSetupAction, EEnvironmentLeanAgainst TargetLeanAgainst, EEnvironmentGroggy EnvironmentGroggy, bool bOutside, bool TargetOutside);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueRopeSpringboard(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bRun, bool bToOutRing, bool bToCorner, bool bFront, bool Kick, bool bGrapple, ESpecialMovesType SpecialType, bool bDown, bool bFaceUp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueRopeGroggyStrike(int32& Value, bool& bInRingToMiddleRope, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, bool bRun, bool bOutside, bool bApron, EStickinputDir InputDir, ESpecialMovesType SpecialType, ERopeGroggy TargetRopeGroggy, bool OverTheTopRopeRule);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueRiseUpStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, ESpecialMovesType SpecialType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueRingSideToRing(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMovesTableValueRecoilAttack(const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFromGrappleButtun, ERecoilAttackType RecoilAttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueKickCatchThrow(int32& Value, FString& MovesCategoryName, const FELMoves& TargetMoves, bool bFromKickButtun, bool bFromGrappleButtun, bool bReversal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueDownStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool TargetFaceDown, EDownDirType TargetDownDirType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueDownSpecial(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, ESpecialMovesType SpecialType, bool TargetFaceDown, EDownDirType TargetDownDirType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueDownRunningStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool TargetFaceDown, EDownDirType TargetDownDirType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueDownGrapple(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Running, bool TargetFaceDown, EDownDirType TargetDownDirType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueDiving(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, bool Kick, bool bGrapple, ESpecialMovesType SpecialType, bool bDown, bool bFaceUp, bool FromCorner, bool FromBarricade, bool FromLadder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueCornerSpringboard(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bToOutRing, bool bToApron, bool bFront, bool Kick, bool bGrapple, ESpecialMovesType SpecialType, bool bDown, bool bFaceUp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueChainStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, bool Kick, bool bStrong, EStickinputDir InputDir, bool CornerChain, bool bRopeChain, bool bRingToApron, bool bApronToRing, bool bInputLookAtRing, bool bTagWait, EChainWrestlingAttackType ChainWrestlingAttackType, EChainWrestlingPoseType ChainWrestlingPoseType, bool bKickCatchThrow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueChainGrapple(int32& Value, bool& bDoneEnvironmentAttack, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, bool bStrong, EStickinputDir InputDir, bool CornerChain, bool bRopeChain, bool bRingToApron, bool bApronToRing, bool bInputLookAtRing, bool bTagWait, EEnvironmentGroggy EnvironmentGroggy, EChainWrestlingAttackType ChainWrestlingAttackType, EChainWrestlingPoseType ChainWrestlingPoseType, bool bKickCatchThrow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueApronToApron(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bGrapple, bool bRun, bool bMiddleRope);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueApronStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Kick, bool bFromApron, bool bToTagWait, bool bGrapple, bool bRun, bool bFromOutside, bool bFront, ESpecialMovesType SpecialType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableValueApronSpringboard(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bToOutRing, bool bToCorner, bool bFront, bool Kick, bool bGrapple, ESpecialMovesType SpecialType, bool bDown, bool bFaceUp);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMovesTableChainWrestling(const FELMoves& TargetMoves, FString& MovesCategoryName, bool bFront, EStickinputDir InputDir, EChainWrestlingAttackType ChainWrestlingAttackType, EChainWrestlingPoseType ChainWrestlingPoseType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesTableBarricadeLeanAgainst(int32& Value, bool& bDoneRunningAttack, const FELMoves& TargetMoves, FString& MovesCategoryName, bool bRunning, bool Kick, bool bGrapple, EEnvironmentLeanAgainst TargetBarricadeLeanAgainst);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMovesParentMenuName(const TArray<FMovesTestMenuStructDefine>& _MenuData, const FMovesTestMenuStructDefine& _CrrentMenu, TArray<FText>& _ParentMenuNames, bool _WithCurrent);
    
    UFUNCTION(BlueprintCallable)
    static void GetMovesMenuMap(UDataTable* MenuTable, TMap<int32, FMovesTestMenuStructDefine>& _OutMenu);
    
    UFUNCTION(BlueprintCallable)
    static void GetMovesCurrentPathName(const TArray<FMovesTestMenuStructDefine>& _MenuData, const FMovesTestMenuStructDefine& _CrrentMenu, FText& _PathNames, bool _WithCurrent);
    
    UFUNCTION(BlueprintCallable)
    static void GetMovesChildrenMenuList(const TArray<FMovesTestMenuStructDefine>& _MenuData, const FMovesTestMenuStructDefine& _TopMenu, TArray<FMovesTestMenuStructDefine>& _OutMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMoves_CornerGroggyStrike(int32& Value, const FELMoves& TargetMoves, FString& MovesCategoryName, bool Front, bool Kick, bool Grapple, EStickinputDir InputDir, bool Running, bool OverTheTopRopeRule);
    
    UFUNCTION(BlueprintCallable)
    static void GetFinisherMatchMenuData(bool bFinisher, const TMap<int32, FMovesTestMenuStructDefine>& _OutMenu, const FMovesSituation& _MovesSituation, const FELMoves_Finisher& _Finisher, const FWrestlingSkillParam& _SkillParam, TArray<FMovesTestMenuStructDefine>& MENU);
    
    UFUNCTION(BlueprintCallable)
    static void GetFinisher_SettingData(UDataTable* DetailTable, const TMap<int32, FMovesTestMenuStructDefine>& _Menu, const FELMoves_Finisher_Part& Finisher, TArray<FMovesTestMenuStructDefine>& _OutArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetActionSkillNo(const TMap<int32, FMovesTestMenuStructDefine>& _OutMenu, const FMovesTestMenuStructDefine& _Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatCurrentPathName(const FText& Left, const FText& Right);
    
};

