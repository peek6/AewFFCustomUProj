#pragma once
#include "CoreMinimal.h"
#include "ELUserWidget.h"
#include "ChallengeProgressDetailInfo.h"
#include "EELMatchScore_MatchType.h"
#include "ELMatchScore_StarData.h"
#include "ELMatchResultMenuBase.generated.h"

class AELMatchResultMenuFlowControllerBase;
class UDataTable;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELMatchResultMenuBase : public UELUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCallCustomEvent, const FString&, EventName);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> EvaluationTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EvaluationParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCallCustomEvent OnCallCustomEvent;
    
    UELMatchResultMenuBase();
    UFUNCTION(BlueprintCallable)
    void StartDelay(float InDelayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetFlowController(AELMatchResultMenuFlowControllerBase* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressUp(bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressSkipButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressRight(bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressR2(bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressR1(bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressLeft(bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressL2(bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressL1(bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressDown(bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressCancelButton();
    
    UFUNCTION(BlueprintCallable)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDelayFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 MoveChallengeCursor(int32 Current, int32 Add, int32 Max) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FChallengeProgressDetailInfo> MakeChallengeList();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTimeEvaluationTexture(EELMatchScore_MatchType MatchType, int32 Time);
    
    UFUNCTION(BlueprintCallable)
    bool GetStarEvaluation(float MatchTotalScore, FELMatchScore_StarData& OutStarData);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetMovesEvaluationTexture(EELMatchScore_MatchType MatchType, int32 MovesPoint);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetMatchEvaluationTexture(EELMatchScore_MatchType MatchType, int32 MatchEvaluation);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetHPEvaluationTexture(EELMatchScore_MatchType MatchType, int32 HPRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELMatchResultMenuFlowControllerBase* GetFlowController() const;
    
    UFUNCTION(BlueprintCallable)
    void CallCustomEvent(const FString& EventName);
    
};

