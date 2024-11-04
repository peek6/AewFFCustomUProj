#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ESSAttentionReason.h"
#include "ELSSWidgetHUD_AttentionGauge.generated.h"

class UELSSWidgetHUD_AttentionPoint;
class UMaterialInstanceDynamic;
class UVerticalBox;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_AttentionGauge : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FeverEndAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FeverStartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FeverLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BuffInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BuffOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> AttentionDenominator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> AttentionNumerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* PtsVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> AttentionDenominatorWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> AttentionNumeratorWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_AttentionPoint*> PointArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AddValueStackArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSAttentionReason> AttentionReasonStackArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFeverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBoostTextShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttentionElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAttentionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttentionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttentionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealAttentionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseDigits;
    
public:
    UELSSWidgetHUD_AttentionGauge();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAttentionValue(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleFeverEffect(bool inIsVisible, bool InPlayStartSE, bool InPlayEndSE);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAttentionPointToStack(int32 InAddValue, ESSAttentionReason InActType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetAttentionGauge();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartFeverAnim(bool InPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void OnEndFeverAnim(bool InPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void MovePointArray();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBoostText(float InAttentionBoostValue);
    
    UFUNCTION(BlueprintCallable)
    void GetAttentionPointFromStack();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyMaxAttentionValue(int32 InMaxAttentionValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyBoostText(const FString& InAttentionBoostText);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyAttentionValue(int32 InAttentionValue, int32 InAddValue, ESSAttentionReason InActType, bool InGaugeTransition);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyAttentionPts(int32 InAttentionValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyAttentionBoostValue(float InAttentionBoostValue);
    
};

