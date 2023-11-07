#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraStartDispatcherDelegate.h"
#include "CameraStopDispatcherDelegate.h"
#include "ChangeCPUWorkingDispatcherDelegate.h"
#include "ChangeCameraDispatcherDelegate.h"
#include "CheckQuizTextDispatcherDelegate.h"
#include "CheckTextureDispatcherDelegate.h"
#include "ChipRequestDispatcherDelegate.h"
#include "DamageChallengeShowAnnounceTimeDelegate.h"
#include "DispCorrectDispatcherDelegate.h"
#include "HideCorrectDispatcherDelegate.h"
#include "OneShotDestroyDispatcherDelegate.h"
#include "PauseEventDispatcherDelegate.h"
#include "RestartDispatcherDelegate.h"
#include "SkipToResultDispatcherDelegate.h"
#include "SlothSlingDispInputInfoDelegate.h"
#include "SlothSlingDispLandPointDelegate.h"
#include "SlothSlingDispScoreDelegate.h"
#include "SlothSlingObjectsResetDelegate.h"
#include "SlothSlingThrowUnlimitedDispatcherDelegate.h"
#include "SlothSlingTimeUnlimitedDispatcherDelegate.h"
#include "StartTimerDispatcherDelegate.h"
#include "StopTimerDispatcherDelegate.h"
#include "TranslationDispatcherDelegate.h"
#include "UnpauseEventDispatcherDelegate.h"
#include "YMiniGameOptions_MenuSettings.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYMiniGameOptions_MenuSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPauseEventDispatcher pauseDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnpauseEventDispatcher unpauseDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkipToResultDispatcher skipToResultDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestartDispatcher restartDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTranslationDispatcher translationDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDispCorrectDispatcher dispCorrectDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHideCorrectDispatcher hideCorrectDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeCameraDispatcher changeCameraDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeCPUWorkingDispatcher changeCpuWorkingDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartTimerDispatcher startTimerDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStopTimerDispatcher stopTimerDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChipRequestDispatcher chipRequestDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneShotDestroyDispatcher oneShotDestroyDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckQuizTextDispatcher checkQuizTextDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraStartDispatcher cameraStartDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraStopDispatcher cameraStopDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckTextureDispatcher checkTextureDispathcer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlothSlingThrowUnlimitedDispatcher throwUnlimitedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlothSlingTimeUnlimitedDispatcher timeUnlimitedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlothSlingObjectsReset objectResetDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlothSlingDispInputInfo inputInfoDisplayDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlothSlingDispScore scoreDisplayDispathcer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlothSlingDispLandPoint landPointDisplayDispathcer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageChallengeShowAnnounceTime showAnnounceTimeDispatcher;
    
    UYMiniGameOptions_MenuSettings();
};

