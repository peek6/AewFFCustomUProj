#pragma once
#include "CoreMinimal.h"
#include "ELSaveGameBase.h"
#include "SaveData_StatData.h"
#include "SaveData_OnlineInfo.generated.h"

UCLASS(Blueprintable)
class USaveData_OnlineInfo : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StatsDataNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveData_StatData m_StatsDataList[1400];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StickerHistory[10];
    
    USaveData_OnlineInfo();
};

