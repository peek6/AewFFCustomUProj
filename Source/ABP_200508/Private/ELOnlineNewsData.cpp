#include "ELOnlineNewsData.h"

FString UELOnlineNewsData::ToJson(bool PlatformSwitch) {
    return TEXT("");
}

void UELOnlineNewsData::SetParam(const FELOnlineNewsDataParam& _Param) {
}

void UELOnlineNewsData::SetOnlineNewsTexture(UTexture2D* _Image) {
}

int32 UELOnlineNewsData::GetOnlineNewsVersion() {
    return 0;
}

UTexture2D* UELOnlineNewsData::GetOnlineNewsTexture() {
    return NULL;
}

void UELOnlineNewsData::GetOnlineNewsDataParam(FELOnlineNewsDataParam& OutOnlineNewsDataParam) {
}

bool UELOnlineNewsData::FromJson(const FString& _JsonData) {
    return false;
}

UELOnlineNewsData::UELOnlineNewsData() {
}

