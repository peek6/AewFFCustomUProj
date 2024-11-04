#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELDebugMenuRootBase.h"
#include "YAutoPlay_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYAutoPlay_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYAutoPlay_DebugMenu();
    UFUNCTION(BlueprintCallable)
    void SetStopAutoPlay(bool _bStop);
    
    UFUNCTION(BlueprintCallable)
    void SetStartRecPadInfo(bool _bStart);
    
    UFUNCTION(BlueprintCallable)
    void SetStartAutoPlay(bool _bStart);
    
    UFUNCTION(BlueprintCallable)
    void SetResultText(const FString& _text);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseAutoPlay(bool _bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayKeyInterval(FDateTime _time);
    
    UFUNCTION(BlueprintCallable)
    bool SetAutoPlayInfoArray();
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayDTFileIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void PushStopButtonUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PushStartButtonUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PushRecStartUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PushRecEndUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PushPauseButtonUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool IsStopAutoPlay();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartRecPadInfo();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartAutoPlay();
    
    UFUNCTION(BlueprintCallable)
    bool IsPauseAutoPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTableName();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetSelectedByPlayDTFileNameList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetResultText() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMultiPlayNoInfo(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    FDateTime GetAutoPlayKeyInterval();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAutoPlayDTFileIndex();
    
    UFUNCTION(BlueprintCallable)
    void AddResultText(const FString& _text);
    
};

