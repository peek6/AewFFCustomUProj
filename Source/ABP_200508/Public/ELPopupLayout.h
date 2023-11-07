#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELPopupLayout.generated.h"

class UELPopup;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELPopupLayout : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELPopup* Popup_N;
    
public:
    UELPopupLayout();
};

