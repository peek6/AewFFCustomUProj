#include "SessionSerializedData.h"

bool USessionSerializedData::SetObject(UObject* Object, int32 Index) {
    return false;
}

int32 USessionSerializedData::GetSerializedDataSize() const {
    return 0;
}

bool USessionSerializedData::GetObject(UObject* Object) {
    return false;
}

UObject* USessionSerializedData::CreateObject(UObject* Outer) {
    return NULL;
}

USessionSerializedData::USessionSerializedData() {
    this->SerializedData.AddDefaulted(8);
}

