#pragma once
#include "CoreMinimal.h"
#include "TableRowName.generated.h"

USTRUCT(BlueprintType)
struct ELITE_CORE_API FTableRowName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FTableRowName();

    FTableRowName(const FTableRowName& Other);

    bool operator==(const  FTableRowName& Other) const;

    bool operator!=(const  FTableRowName& Other) const;

    bool Equals(const  FTableRowName& Other) const;

};

FORCEINLINE uint32 GetTypeHash(const  FTableRowName& This)
{
    const uint32 Hash = FCrc::MemCrc32(&This, sizeof(FTableRowName));
    return Hash;
}
