#pragma once
#include "CoreMinimal.h"
#include "StPassiveSkillData_EffectDamage.h"
#include "ELTournamentRoundInfo.generated.h"

USTRUCT(BlueprintType)
struct FELTournamentRoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPostMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MatchUpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchUpRingAnnounceQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStPassiveSkillData_EffectDamage AttackEffectDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStPassiveSkillData_EffectDamage DefenceEffectDamage;
    
    ABP_200508_API FELTournamentRoundInfo();
};

