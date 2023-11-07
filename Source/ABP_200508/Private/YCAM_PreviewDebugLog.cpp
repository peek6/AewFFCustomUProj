#include "YCAM_PreviewDebugLog.h"

void UYCAM_PreviewDebugLog::Uninit_Implementation() {
}

void UYCAM_PreviewDebugLog::SetDebugStartTime(FDateTime In_StartTime) {
}

void UYCAM_PreviewDebugLog::SetDebugEndTime(FDateTime In_EndTime) {
}

bool UYCAM_PreviewDebugLog::IsDuplicateLog(const FAnimErrInfo& In_AnimErrInfo) {
    return false;
}

void UYCAM_PreviewDebugLog::Init() {
}

void UYCAM_PreviewDebugLog::ExportErrorLog() {
}

FString UYCAM_PreviewDebugLog::ErrTypeToString(EAnimErrType In_ErrType) {
    return TEXT("");
}

bool UYCAM_PreviewDebugLog::ErrTypeToIsScreenShot(EAnimErrType In_ErrType) {
    return false;
}

bool UYCAM_PreviewDebugLog::ErrStringToDistanceOffsetInfo(FAnimErrInfo& Out_ErrInfo, const FString& In_LogDateTime) {
    return false;
}

FString UYCAM_PreviewDebugLog::ErrInfoToString(const FAnimErrInfo& In_ErrInfo) {
    return TEXT("");
}

void UYCAM_PreviewDebugLog::AddErrorLog(const FAnimErrInfo& In_AnimErrInfo) {
}

UYCAM_PreviewDebugLog::UYCAM_PreviewDebugLog() {
    this->ErrAnimLogHeader = TEXT("DataIndex,MontageID,MovesName,UnlockID,CategoryID,DTName,DTIndex,ErrorInfo,PreviewIndex,DateTime,DistanceOffset,AllOffset,RecordTime");
    this->ErrAnimLogFileTitle = TEXT("MovesAnimDebugLog.csv");
    this->ErrAnimLogMovesLogPath = TEXT("C:/Users/Gabriel/AppData/Local/AEWFightForever/Saved/MovesLog/");
    this->isPrintOutputLog = true;
    this->isPoolLog = true;
    this->isScreenShot = false;
}

