#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELMoves_Finisher.h"
#include "ELMoves_Finisher_Part.h"
#include "EMovesDataTable_Type.h"
#include "EMovesTag_AttackIndex.h"
#include "EMovesTag_DamagePartIndex.h"
#include "EMovesTag_FunctionIndex.h"
#include "EMovesTag_MovesIndex.h"
#include "MovesOutputData.h"
#include "MovesSituation.h"
#include "MovesSituationUtility.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class CREATION_API UMovesSituationUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovesSituationUtility();
    UFUNCTION(BlueprintCallable)
    static void SearchDataArray_DataTable(TArray<FMovesSituation>& OutKeys, UDataTable* inSituationTable, UDataTable* inTable);
    
    UFUNCTION(BlueprintCallable)
    static void SaveMovesSituationData(UDataTable* UpdateTable, const FMovesSituation& _MovesSituation, const FName& RowName);
    
    UFUNCTION(BlueprintCallable)
    static void OutPutDataArray(UPARAM(Ref) TArray<FMovesOutputData>& OutputData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMovesTagArray(const TArray<bool>& _OutMovesTagArray, EMovesTag_MovesIndex _MovesIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFunctionTagArray(const TArray<bool>& _OutFunctionTagArray, EMovesTag_FunctionIndex _FunctionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDamagePartTagArray(const TArray<bool>& _OutDamagePartTagArray, EMovesTag_DamagePartIndex _DamagePartIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAttackTagArray(const TArray<bool>& _OutAttackTagArray, EMovesTag_AttackIndex _AttackIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetSituationMovesName(FString& outName, EMovesDataTable_Type TableType, int32 DT_ID);
    
    UFUNCTION(BlueprintCallable)
    static void GetMovesTagArray(TArray<bool>& _OutMovesTagArray, const FMovesSituation& _MovesSituation);
    
    UFUNCTION(BlueprintCallable)
    static void GetFunctionTagArray(TArray<bool>& _OutFunctionTagArray, const FMovesSituation& _MovesSituation);
    
    UFUNCTION(BlueprintCallable)
        static void GetEnableFinisherList(TMap<FELMoves_Finisher_Part, FMovesSituation>& _outList, const TMap<FELMoves_Finisher_Part, FMovesSituation>& _BaseList, const FELMoves_Finisher& FinisherData, const FELMoves_Finisher_Part& CurrentFinisher);
    //static void GetEnableFinisherList(TMap<int, FMovesSituation>& _outList, const TMap<int, FMovesSituation>& _BaseList, const FELMoves_Finisher& FinisherData, const FELMoves_Finisher_Part& CurrentFinisher);
    //static void GetEnableFinisherList(TMap<UObject*, UObject*>& _outList, const TMap<FTableRowBase, FTableRowBase>& _BaseList, const FELMoves_Finisher& FinisherData, const FELMoves_Finisher_Part& CurrentFinisher);

    UFUNCTION(BlueprintCallable)
    static void GetDamagePartTagArray(TArray<bool>& _OutDamagePartTagArray, const FMovesSituation& _MovesSituation);
    
    UFUNCTION(BlueprintCallable)
    static void GetAttackTagArray(TArray<bool>& _OutAttackTagArray, const FMovesSituation& _MovesSituation);
    
    UFUNCTION(BlueprintCallable)
    static void FindSituationDataName(int32& OutIndex, const UDataTable* UpdateTable, int32 DT_ID);
    
};

