#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELEOSTitleStorageDownloadProgress.generated.h"

UCLASS(Blueprintable)
class UELEOSTitleStorageDownloadProgress : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> FileDownloadProgress;
    
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
        UObject* OnCompleteDownloadFilesDelegate;
    //FOnCompleteDownloadFiles OnCompleteDownloadFilesDelegate;
    
    UELEOSTitleStorageDownloadProgress();
};

