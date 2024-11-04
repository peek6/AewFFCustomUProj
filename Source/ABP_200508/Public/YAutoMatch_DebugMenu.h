#pragma once
#include "CoreMinimal.h"
#include "AutoMatchSettings.h"
#include "ELDebugMenuRootBase.h"
#include "YAutoMatch_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYAutoMatch_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYAutoMatch_DebugMenu();
    UFUNCTION(BlueprintCallable)
    void Setup(const FAutoMatchSettings& _stSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetStopMatch(bool _stop);
    
    UFUNCTION(BlueprintCallable)
    void SetResultText(const FString& _text);
    
    UFUNCTION(BlueprintCallable)
    void SetPreEndAutoMatch(bool _bEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineType(const FString& _type);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlinePlayerNo(int32 _No);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineMode(bool _Online);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineIdentificationNum(int32 _num);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineHost(bool _Host);
    
    UFUNCTION(BlueprintCallable)
    void SetErrorCheck(bool _Error);
    
    UFUNCTION(BlueprintCallable)
    void SetEndAutoMatch(bool _bEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVictorySceneMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreEndAutoMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsErrorCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndAutoMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTableName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetResultText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOnlineType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnlinePlayerNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnlineIdentificationNum() const;
    
    UFUNCTION(BlueprintCallable)
    void AddResultText(const FString& _text);
    
};

