#pragma once
#include "CoreMinimal.h"
#include "yEnDialogBoxType.generated.h"

UENUM(BlueprintType)
enum class yEnDialogBoxType : uint8 {
    MessageDialog,
    TextEntryDialog,
    SinglePictureAndTextDialog,
    ThreePictureAndTextDialog,
    OnlyPictureDialog,
    OnlyTextDialog,
    SingleItemGetDialog,
    TutorialDialog,
    DisconnectedGamepadDialog,
    OnlineNewsDialog,
    None,
};

