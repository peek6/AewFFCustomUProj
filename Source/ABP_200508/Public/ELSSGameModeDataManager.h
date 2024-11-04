#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWrestlerID_N.h"
#include "YGS2SSPlayerData.h"
#include "ESSWrestlerType.h"
#include "SSGameDataUpdateEventDelegate.h"
#include "SSLastPlayRecord.h"
#include "SSLoadoutSettings.h"
#include "SSPlayerEquipSettings.h"
#include "SSPlayerRankParam.h"
#include "SSStampedeRankParam.h"
#include "SSWrestlerSettings.h"
#include "ELSSGameModeDataManager.generated.h"

class UELSSUserData;
class USSMenuWrestlerSelectData;

UCLASS(Blueprintable)
class ABP_200508_API UELSSGameModeDataManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSGameDataUpdateEvent onSSDataUpdateEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSUserData* ssUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMenuWrestlerSelectData* selectWrestlerData;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLoadoutSettings LoadoutSettings[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerSettings WrestlerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLastPlayRecord LastPlayRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerEquipSettings equipSettings;
    
public:
    UELSSGameModeDataManager();
    UFUNCTION(BlueprintCallable)
    void SetSSUserDataToDummy();
    
    UFUNCTION(BlueprintCallable)
    void SetSSUserData(const FYGS2SSPlayerData& dat);
    
    UFUNCTION(BlueprintCallable)
    void SetSSTempPlayerNetworkID(const FString& pid);
    
    UFUNCTION(BlueprintCallable)
    void SetSSRankingData(int32 InRank);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerEquipSettings(const FSSPlayerEquipSettings& inEquipData);
    
    UFUNCTION(BlueprintCallable)
    UELSSUserData* GetSSUserData();
    
    UFUNCTION(BlueprintCallable)
    FString GetSSTempPlayerNetworkID();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSSStampedeRankParam> GetSSStampedeRankTable();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSSPlayerRankParam> GetSSPlayerRankTable();
    
    UFUNCTION(BlueprintCallable)
    USSMenuWrestlerSelectData* GetSSMenuWrestlerSelectData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetSelectedWrestlerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSWrestlerType GetSelectedEditWrestlerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerEquipSettings(FSSPlayerEquipSettings& outEquipData) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckSelectedWrestlerIsValid(bool inUGCLimit);
    
};

