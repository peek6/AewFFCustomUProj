#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELOnlineNews.generated.h"

class UELOnlineNewsData;

UCLASS(Blueprintable)
class UELOnlineNews : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELOnlineNewsData* CurrentOnlineNewsData;
    
public:
    UELOnlineNews();
    UFUNCTION(BlueprintCallable)
    UELOnlineNewsData* GetCurrentOnlineNewsData();
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentOnlineNewData();
    
};

