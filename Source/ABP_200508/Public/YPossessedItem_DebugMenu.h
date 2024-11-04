#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "YPossessedItem_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYPossessedItem_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYPossessedItem_DebugMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePossessedItemQuantity(bool Result);
    
};

