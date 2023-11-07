#pragma once
#include "CoreMinimal.h"
#include "EAttireExPartsType.h"
#include "AttireExApplyDispatcherDelegate.h"
#include "AttireExResetDispatcherDelegate.h"
#include "CAW_DebugDelegateDelegate.h"
#include "YCreate_DebugMenuBase.h"
#include "YCAW_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYCAW_DebugMenu : public UYCreate_DebugMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAW_DebugDelegate CreateAllSaveData_DebugDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAW_DebugDelegate CreateHeavyCharacter_DebugDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAW_DebugDelegate DeleteAllSaveData_DebugDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputFileSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAW_DebugDelegate OutputFile_DebugDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReadFileSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAW_DebugDelegate ReadFile_DebugDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireExApplyDispatcher AttireExApplyDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireExResetDispatcher AttireExResetDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToLeftEye;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToRightEye;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDarkSkinModeToHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDarkSkinModeToSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDarkSkinModeToAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyPatternTextureToAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttireExPartsType, bool> PartsApplyList;
    
    UYCAW_DebugMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SaveFile_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void ReadFile(int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    void OutputFile(int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableOutputFile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableMaxCAW();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableHeavyCAW();
    
};

