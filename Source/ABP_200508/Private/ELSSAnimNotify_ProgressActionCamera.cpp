#include "ELSSAnimNotify_ProgressActionCamera.h"

void UELSSAnimNotify_ProgressActionCamera::Notify(USkeletalMeshComponent* inMeshComp, UAnimSequenceBase* InAnimation) const {
}

UELSSAnimNotify_ProgressActionCamera::UELSSAnimNotify_ProgressActionCamera() {
    this->ActionCameraID = ESSActionCameraID::None;
    this->NewStep = 0;
}

