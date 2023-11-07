#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFinisher_RS_Direction.h"
#include "EFinisher_Type.h"
#include "ELMoves_Finisher_Part.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMoves_Finisher_Part : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFinisher_Type Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFinisher_RS_Direction RSDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovesIndex;
    
    FELMoves_Finisher_Part();

    FELMoves_Finisher_Part(const FELMoves_Finisher_Part& Other);

    bool operator==(const  FELMoves_Finisher_Part& Other) const;

    bool operator!=(const  FELMoves_Finisher_Part& Other) const;

    bool Equals(const  FELMoves_Finisher_Part& Other) const;

};

FORCEINLINE uint32 GetTypeHash(const  FELMoves_Finisher_Part& This)
{
    const uint32 Hash = FCrc::MemCrc32(&This, sizeof(FELMoves_Finisher_Part));
    return Hash;
}


