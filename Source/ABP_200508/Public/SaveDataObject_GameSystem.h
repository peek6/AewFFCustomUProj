#pragma once
#include "CoreMinimal.h"
#include "SaveDataObjectBase.h"
#include "SaveDataObject_GameSystem.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObject_GameSystem : public USaveDataObjectBase {
    GENERATED_BODY()
public:
    USaveDataObject_GameSystem();
    UFUNCTION(BlueprintCallable)
    void SetSystem_NewsLatestVersion(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetSystem_GameTitleVersionName(const FString& _value);
    
    UFUNCTION(BlueprintCallable)
    void SetSSModeRegion_MatchMakeArea(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetRegion_PhysicalUnit(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetRegion_MatchMakeArea(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetRegion_Language(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetRegion_BaudrateTolerance(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetPAD_Vibration(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetPAD_LongPressTime(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouse_IgnorePADInput(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuOption_AutoLoadTransitionMode(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_UseFaceButtonsToCounter(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_TNTSkin(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_Submission(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_SSModeGuideHUD(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_RopeBreak(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_RefereeType(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_PlayerIndicator(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_Pin(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_ManualTarget(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_ManipulateTagPartner(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_LimitTimeForExplodingBarbedWireDeathMatch(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_LimitTime(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_Interference(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_GuideHUD(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_FallsCountAnywhere(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_ExplosionType(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_EntranceHUD(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_DQ(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_DisplayShake(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_CountOut(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_CasualMode(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_CardsDesign(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_CameraShake(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_CameraPerformance(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_Blood(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_AssistEffect(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatch_AIDifficulty(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplay_XeSS_OptionIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplay_FpsValueIndex(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplay_DLSS_OptionIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_VoiceVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_VoiceChatVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_VoiceChatNotifySFX(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_VoiceChat(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_Subtitle(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_SoundEffectVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_RingAnnounceVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_OnlineGameJukeboxVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_OfflineGameJukeboxVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_MenuSoundEffectVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_MenuJukeBoxVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_MasterVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_EntVicMusicVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio_CrowdVolume(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAccount_RejectionLeaderBoard(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAccount_RejectionFriendList(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAccount_HideProfanity(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAccount_DisableCrossPlay(bool _value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSystem_NewsLatestVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSystem_GameTitleVersionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSSModeRegion_MatchMakeArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegion_PhysicalUnit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegion_MatchMakeArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegion_Language() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegion_BaudrateTolerance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPAD_Vibration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPAD_LongPressTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouse_IgnorePADInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMenuOption_AutoLoadTransitionMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_UseFaceButtonsToCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatch_TNTSkin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_Submission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_SSModeGuideHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_RopeBreak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatch_RefereeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_PlayerIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_Pin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_ManualTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_ManipulateTagPartner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatch_LimitTimeForExplodingBarbedWireDeathMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatch_LimitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_Interference() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_GuideHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_FallsCountAnywhere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatch_ExplosionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_EntranceHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_DQ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_DisplayShake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatch_CountOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_CasualMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatch_CardsDesign() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_CameraShake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_CameraPerformance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_Blood() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatch_AssistEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatch_AIDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDisplay_XeSS_OptionIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDisplay_FpsValueIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDisplay_DLSS_OptionIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_VoiceVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_VoiceChatVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAudio_VoiceChatNotifySFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAudio_VoiceChat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAudio_Subtitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_SoundEffectVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_RingAnnounceVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_OnlineGameJukeboxVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_OfflineGameJukeboxVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_MenuSoundEffectVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_MenuJukeBoxVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_MasterVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_EntVicMusicVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudio_CrowdVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAccount_RejectionLeaderBoard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAccount_RejectionFriendList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAccount_HideProfanity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAccount_DisableCrossPlay() const;
    
};

