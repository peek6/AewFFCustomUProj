#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELPopup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELPopup : public UUserWidget {
    GENERATED_BODY()
public:
    UELPopup();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartChallengeCompletedPopup(int32 ChallengeId);
    
};

