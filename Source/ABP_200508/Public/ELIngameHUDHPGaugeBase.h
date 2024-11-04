#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESpecialMovesType.h"
#include "CareerActionSkillData.h"
#include "ELIngameHUDBase.h"
#include "StPassiveSkillData.h"
#include "ELIngameHUDHPGaugeBase.generated.h"

class AELCharacter_Native;
class UCanvasPanel;
class UDataTable;
class UELGaugeFire;
class UELGaugeRoster;
class UELGaugeStatusIcon;
class UImage;
class UTexture2D;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELIngameHUDHPGaugeBase : public UELIngameHUDBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsGuageMaxStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsGuageMaxLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsGuageMaxStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsSpecialStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsSpecialLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsSpecialStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsDangerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsDangerLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsDangerStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsRingTimeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsRingTimeLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationsRingTimeStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NormalGaugeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MaxGaugeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SpecialGaugeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DangerGaugeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* KOGaugeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnerPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> InjuryIconWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> InjuryAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> PlayerColorWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParameterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeAnimation_DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeAnimation_AnimationSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTagActiveIcon_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseEliminateCount_N;
    
public:
    UELIngameHUDHPGaugeBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGaugeColor_Native(UImage* HUDGauge, UImage* HUDGaugeDiff, UImage* SpecialTex, UImage* RingtimeTex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDynamicParam_N();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBattleRoyale_Impl();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update_BP(AELCharacter_Native* Player, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCharacterNative(AELCharacter_Native* Character, float InStatusInAnimTime, float InStatusOutAnimTime, float InActionSkillAnimTime, float InDamagePartAnimTime, float InReversalAnimTime, float InMeterValuePenaltyAnimTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetNativeParam(UELGaugeRoster* CurrentHUDRoster, UELGaugeStatusIcon* StatusIcon, UELGaugeFire* GaugeFire, UCanvasPanel* GaugeMain, UCanvasPanel* GaugeDiff, UImage* HUDgaugeTex, UImage* HUDgaugeDiffTex, UImage* SpecialTex, UImage* RingtimeTex, UWidgetAnimation* ColorDefault, UWidgetAnimation* ColorGrayout, const FVector2D& GaugeMainDefaultSize, const FVector2D& GaugeDiffDefaultSize);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReverseDirection(bool InReverse);
    
    UFUNCTION(BlueprintCallable)
    void OnReversal(bool Reversal, ESpecialMovesType SpecialMovesType);
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveGloveBuff(float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayPassiveSkillEffect(const FStPassiveSkillData& PassiveSkillData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMomentumUpAnimation_BP(float MeterRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationRingTime_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationReverseDirection_BP(bool InReverse, float LoopTime, bool Restart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationReversal_BP(bool Reversal, ESpecialMovesType SpecialMovesType, float LoopTime, bool Restart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationRemoveGlove_BP(float LoopTime, bool Restart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationPassiveSkill_BP(const FStPassiveSkillData& PassiveSkillData, float LoopTime, bool Restart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationPartDamage_BP(FLinearColor PartsColor, uint8 LimbHPType, float LoopTime, bool Restart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationMeterValuePenalty_BP(float PenaltyRate, float LoopTime, bool Restart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationCurseEvent_BP(float LoopTime, bool Restart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationActionSkill_BP(const FCareerActionSkillData& ActionSkillData, float LoopTime, bool Restart);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayActionSkill(int32 ActionSkillNo);
    
    UFUNCTION(BlueprintCallable)
    void OnMeterValuePenalty(float PenaltyRate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoopAnimationStartEvent_Special();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoopAnimationStartEvent_GuageMax();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoopAnimationStartEvent_Danger();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedAnimation_StatusText();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCurseEvent(float InDuration);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSpecialState(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeRollOutDownState(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeExciteState(bool Enable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangedTouchLeaveRingFlag(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDangerState(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCanOperateDownPinchMove(bool Enable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinishedEvent_SpecialStart();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinishedEvent_RingTime();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinishedEvent_GuageMaxStart();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinishedEvent_DangerStart();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExciteState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDangerState() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetGaugeTexture(bool NewIsExciteState, bool NewIsSpecialState, bool NewIsDangerState, bool IsKo);
    
    UFUNCTION(BlueprintCallable)
    void GetGaugeMaterialParameter(float& MainParam, float& DiffParam, bool& IsPlus);
    
};

