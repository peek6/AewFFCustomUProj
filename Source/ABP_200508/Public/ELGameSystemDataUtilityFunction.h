#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELGameSystemDataUtilityFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELGameSystemDataUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELGameSystemDataUtilityFunction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetSystem_NewsLatestVersion(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetSystem_GameTitleVersionName(const FString& _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetSSModeRegion_MatchMakeArea(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetRegion_PhysicalUnit(int32 _unitType, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetRegion_MatchMakeArea(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetRegion_Language(int32 _language, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetPAD_Vibration(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetPAD_LongPressTime(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMouse_IgnorePADInput(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMenuOption_AutoLoadTransitionMode(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_ValidEntranceHUD(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_UseFaceButtonsToCounter(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_Submission(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_SSModeGuideHUD(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_RopeBreak(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_RefereeType(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_PlayerIndicator(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_Pin(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_ManualTarget(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_Interference(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_GuideHUD(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_ExplosionType(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_DQ(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_CountOut(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_CasualMode(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_CameraNoShake(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_Blood(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_AssistEffect(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetMatch_AIDifficulty(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetDisplay_XeSS_OptionIndex(int32 Index, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetDisplay_FpsValueIndex(int32 _Index, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetDisplay_DLSS_OptionIndex(int32 Index, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_VoiceVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_VoiceChatVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_VoiceChatNotifySFX(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_VoiceChat(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_Subtitle(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_SoundEffectVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_RingAnnounceVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_OnlineGameJukeboxVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_OfflineGameJukeboxVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_MenuSoundEffectVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_MenuJukeBoxVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_MasterVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_EntVicMusicVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAudio_CrowdVolume(int32 _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAccount_HideProfanity(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetAccount_DisableCrossPlay(bool _value, UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SaveRequestSystemData(UObject* _pWorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetSystem_NewsLatestVersion(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static FString GetSystem_GameTitleVersionName(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetSSModeRegion_MatchMakeArea(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetRegion_PhysicalUnit(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetRegion_MatchMakeArea(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetRegion_Language(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetPAD_Vibration(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetPAD_LongPressTime(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMouse_IgnorePADInput(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMenuOption_AutoLoadTransitionMode(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_ValidEntranceHUD(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_UseFaceButtonsToCounter(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_Submission(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_SSModeGuideHUD(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_RopeBreak(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetMatch_RefereeType(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_PlayerIndicator(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_Pin(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_ManualTarget(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_Interference(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_GuideHUD(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetMatch_ExplosionType(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_DQ(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetMatch_CountOut(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_CasualMode(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_CameraNoShake(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_Blood(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetMatch_AssistEffect(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetMatch_AIDifficulty(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetDisplay_XeSS_OptionIndex(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetDisplay_FpsValueIndex(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetDisplay_DLSS_OptionIndex(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_VoiceVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_VoiceChatVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static bool GetAudio_VoiceChatNotifySFX(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetAudio_VoiceChat(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetAudio_Subtitle(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_SoundEffectVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_RingAnnounceVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_OnlineGameJukeboxVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_OfflineGameJukeboxVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_MenuSoundEffectVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_MenuJukeBoxVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_MasterVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_EntVicMusicVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetAudio_CrowdVolume(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetAccount_HideProfanity(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool GetAccount_DisableCrossPlay(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static bool ApplyTmpSystemDataToSaveData(UObject* _pWorldContextObject, uint8 _saveDataAccessFlag);
    
};

