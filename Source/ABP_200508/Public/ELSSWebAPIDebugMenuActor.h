#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EEOSTitleStorageEvent.h"
#include "EOSTitleStorageProgress.h"
#include "EYGS2ErrorType.h"
#include "ELSSWebAPIDebugMenuActor.generated.h"

class UEOSTitleStorageBase;
class UYGS2RequestBase;

UCLASS(Blueprintable)
class ABP_200508_API AELSSWebAPIDebugMenuActor : public AActor {
    GENERATED_BODY()
public:
    AELSSWebAPIDebugMenuActor();
private:
    UFUNCTION(BlueprintCallable)
    void onSetSSSessionResultIngest(EYGS2ErrorType enYGS2ErrorType, UYGS2RequestBase* pcYGS2RequestBase);
    
    UFUNCTION(BlueprintCallable)
    void onSetSSGameStartIngest(EYGS2ErrorType enYGS2ErrorType, UYGS2RequestBase* pcYGS2RequestBase);
    
    UFUNCTION(BlueprintCallable)
    void onSetSSGameResultIngest(EYGS2ErrorType enYGS2ErrorType, UYGS2RequestBase* pcYGS2RequestBase);
    
    UFUNCTION(BlueprintCallable)
    void OnReadTitleStorage(EEOSTitleStorageEvent Event, UEOSTitleStorageBase* titleStorage, const FEOSTitleStorageProgress& Progress);
    
    UFUNCTION(BlueprintCallable)
    void onGetSSPlayerDataIngest(EYGS2ErrorType enYGS2ErrorType, UYGS2RequestBase* pcYGS2RequestBase);
    
    UFUNCTION(BlueprintCallable)
    void onGetSSMasterDataIngest(EYGS2ErrorType enYGS2ErrorType, UYGS2RequestBase* pcYGS2RequestBase);
    
    UFUNCTION(BlueprintCallable)
    void onGetSSInfoIngest(EYGS2ErrorType enYGS2ErrorType, UYGS2RequestBase* pcYGS2RequestBase);
    
};

