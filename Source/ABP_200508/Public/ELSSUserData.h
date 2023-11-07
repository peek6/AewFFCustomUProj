#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YGS2SSPlayerData.h"
#include "ELSSGameRankData.h"
#include "ELSSUserDataParam.h"
#include "ELSSUserData.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSUserData : public UObject {
    GENERATED_BODY()
public:
    UELSSUserData();
    UFUNCTION(BlueprintCallable)
    void SetSSUserData(const FYGS2SSPlayerData& dat);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUserExp();
    
    UFUNCTION(BlueprintCallable)
    FELSSUserDataParam GetUserDataPrev();
    
    UFUNCTION(BlueprintCallable)
    FELSSUserDataParam GetUserDataNow();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStampedeRankExp();
    
    UFUNCTION(BlueprintCallable)
    FYGS2SSPlayerData GetSSUserData();
    
    UFUNCTION(BlueprintCallable)
    FELSSGameRankData GetSSRankData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPrevPlayerRank();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerRankExp();
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintDiff();
    
};

