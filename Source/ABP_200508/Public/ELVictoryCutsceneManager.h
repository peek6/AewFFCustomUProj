#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EStickinputDir.h"
#include "EWrestlerID_N.h"
#include "ELInteractiveVictoryCutsceneSpecialSceneParam.h"
#include "ELVictoryCutsceneManagerCore.h"
#include "ELVictoryCutsceneManager.generated.h"

class AActor;
class AELCharacter_Native;
class UAtomComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELVictoryCutsceneManager : public AELVictoryCutsceneManagerCore {
    GENERATED_BODY()
public:
    AELVictoryCutsceneManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSpecialScene(const FELInteractiveVictoryCutsceneSpecialSceneParam& SpecialSceneParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartObserveBreakOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartInteractiveWinscene();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupPlayer(AELCharacter_Native* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCameraLocationAndRotation_Impl(FVector Location, FRotator Rotation);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetAtomComponent(UAtomComponent* _AtomComponent, AActor* _RAManager);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SceneCaptureWithTransform_Impl(FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SceneCapture_Impl();
    
    UFUNCTION(BlueprintCallable)
    void OnTakeControlBtn(const AELCharacter_Native* AtkPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayNormalTauntEvent(EStickinputDir InputDir);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedEvent_Taunt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedEvent_OverDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedEvent_EnterEntrance(AELCharacter_Native* EnterPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndSpecialScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndInteractiveWinscene();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageHPEvent(const AELCharacter_Native* AtkPlayer, float DamageHead, float DamageArm, float DamageBody, float DamageLeg);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelTimerEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetMatchRecord_Team(EWrestlerID_N WrestlerID_0, FGuid UID_0, EWrestlerID_N WrestlerID_1, FGuid UID_1, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord);
    
    UFUNCTION(BlueprintCallable)
    void GetMatchRecord_TagTeam(EWrestlerID_N WrestlerID_0, FGuid UID_0, EWrestlerID_N WrestlerID_1, FGuid UID_1, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord);
    
    UFUNCTION(BlueprintCallable)
    void GetMatchRecord_Tag(EWrestlerID_N WrestlerID, FGuid UID, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord);
    
    UFUNCTION(BlueprintCallable)
    void GetMatchRecord_Single(EWrestlerID_N WrestlerID, FGuid UID, int32& Win, int32& Lose, int32& Draw, bool& IsCareerRecord);
    
};

