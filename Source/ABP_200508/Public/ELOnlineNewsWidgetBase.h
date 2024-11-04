#pragma once
#include "CoreMinimal.h"
#include "ELUserWidget.h"
#include "ELOnlineNewsWidgetBase.generated.h"

class UELOnlineNewsData;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UELOnlineNewsWidgetBase : public UELUserWidget {
    GENERATED_BODY()
public:
    UELOnlineNewsWidgetBase();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UELOnlineNewsData* GetDisplayOnlineNewsData(const UObject* WorldContextObject);
    
};

