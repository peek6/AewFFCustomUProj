#include "ELMenuOperationalWidgetManagerBase.h"

void AELMenuOperationalWidgetManagerBase::SetManagedMenuWidget(UELOperationalWidgetBase* MenuWidget, yEnMenuWidgetType Type) {
}

void AELMenuOperationalWidgetManagerBase::SetCurrentWidget(yEnMenuWidgetType Type) {
}

UELOperationalWidgetBase* AELMenuOperationalWidgetManagerBase::GetWidget(yEnMenuWidgetType eMenuWidgetType) const {
    return NULL;
}

TArray<UELOperationalWidgetBase*> AELMenuOperationalWidgetManagerBase::GetMenuWidgetArray() const {
    return TArray<UELOperationalWidgetBase*>();
}

yEnMenuWidgetType AELMenuOperationalWidgetManagerBase::GetCurrentWidgetType() const {
    return yEnMenuWidgetType::None;
}

UELOperationalWidgetBase* AELMenuOperationalWidgetManagerBase::GetCurrentWidget() const {
    return NULL;
}

void AELMenuOperationalWidgetManagerBase::CloseAllWidgets() {
}

AELMenuOperationalWidgetManagerBase::AELMenuOperationalWidgetManagerBase() {
    this->IsEnableInput1P = true;
    this->IsChangeBrother = false;
    this->IsUpdateKeyConfig = false;
    this->MenuWidgetArray.AddDefaulted(70);
}

