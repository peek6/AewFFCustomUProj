#pragma once
#include "CoreMinimal.h"
#include "SaveData_StatData.generated.h"

USTRUCT(BlueprintType)
struct FSaveData_StatData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_KeyHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 m_KeyName[56];
    
    ABP_200508_API FSaveData_StatData();
};

