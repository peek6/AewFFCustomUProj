#include "ELOSSLocalPlayer.h"

void UELOSSLocalPlayer::UnlockOSSAchievement(const FName AchievementName) {
}

void UELOSSLocalPlayer::ShowLoginUI(const int32 _controllerIndex) {
}

void UELOSSLocalPlayer::SetOSSStats(const FName StatsName, int32 Value) {
}

void UELOSSLocalPlayer::SetOSSRichPresence(const FString& PresenceString) {
}

void UELOSSLocalPlayer::ResetOSSFirstLoggedin() {
}

void UELOSSLocalPlayer::RefreshPlayOnlinePrivilege() {
}

void UELOSSLocalPlayer::ReadOSSFriendsList() {
}

bool UELOSSLocalPlayer::QueryBlockedPlayersWithDelegate(const FOnQueryBlockedListUpdated& OnQueryBlockedListUpdated) {
    return false;
}

bool UELOSSLocalPlayer::QueryBlockedPlayers() {
    return false;
}

void UELOSSLocalPlayer::OnWindowFocusChanged(bool _bIsFocused) {
}

void UELOSSLocalPlayer::OnEOSEvent(EELEOSEventType EventType, EELEOSEventResult EventResult) {
}

bool UELOSSLocalPlayer::IsPlatformLoggedIn() const {
    return false;
}

bool UELOSSLocalPlayer::IsOSSFirstLoggedin() const {
    return false;
}

bool UELOSSLocalPlayer::IsBlockedUser(const FString& ProductID) {
    return false;
}

bool UELOSSLocalPlayer::HasRequiredPatch() const {
    return false;
}

bool UELOSSLocalPlayer::HasOnlineAgeRestriction() const {
    return false;
}

bool UELOSSLocalPlayer::HasCanUseUserCrossPlayPrivilegeError() {
    return false;
}

bool UELOSSLocalPlayer::HasCanUseUserCrossPlayPrivilege(const bool ShowWarningUI) {
    return false;
}

bool UELOSSLocalPlayer::HasCanUseUGCPrivilegeError() {
    return false;
}

bool UELOSSLocalPlayer::HasCanUseUGCPrivilege(const bool ShowWarningUI) {
    return false;
}

bool UELOSSLocalPlayer::HasCanPlayPrivilege() {
    return false;
}

bool UELOSSLocalPlayer::HasCanPlayOnlinePrivilegeError() {
    return false;
}

bool UELOSSLocalPlayer::HasCanPlayOnlinePrivilege(const bool ShowWarningUI) {
    return false;
}

bool UELOSSLocalPlayer::HasCanJoinPartyPrivilege(const bool ShowWarningUI) {
    return false;
}

bool UELOSSLocalPlayer::HasCanCommunicateOnlinePrivilegeError() {
    return false;
}

bool UELOSSLocalPlayer::HasCanCommunicateOnlinePrivilege(const bool ShowWarningUI) {
    return false;
}

bool UELOSSLocalPlayer::HasCanAccessOnlinePrivilege() const {
    return false;
}

bool UELOSSLocalPlayer::HasAnyPrivilegeError() {
    return false;
}

ELOSSFriendStatus UELOSSLocalPlayer::GetOSSFriendStatusByProductUserId(const FString& ProductUserID) {
    return ELOSSFriendStatus::Unknown;
}

void UELOSSLocalPlayer::GetOSSFriendsProductUserIdList(TArray<FString>& OutFriendArray) {
}

void UELOSSLocalPlayer::GetOSSFriendsList(TArray<FELFriendInfo>& OutFriendArray, EELFriendsListType FriendsListType, int32 SortFlag) {
}

bool UELOSSLocalPlayer::GetOSSFriendNameByProductUserId(const FString& ProductUserID, FString& FriendName) {
    return false;
}

FString UELOSSLocalPlayer::GetOSSAccountNickName() {
    return TEXT("");
}

bool UELOSSLocalPlayer::GetBlockedPlayers(TMap<FString, FString>& OutBlockedMap) {
    return false;
}

void UELOSSLocalPlayer::AsyncReadOSSFriendsList(const FOnReadOSSFriendsList& OnReadOSSFriendsList) {
}

void UELOSSLocalPlayer::AsyncQueryUserPrivileges(const FOnQueryPrivileges& OnQueryUserPrivileges, EUserPrivilegeBit UserPrivilegeBit) {
}

void UELOSSLocalPlayer::AsyncQueryCanOnlinePlayPrivilege(const FOnQueryPrivilege& OnQueryPrivilege, bool CheckPSPlus) {
}

void UELOSSLocalPlayer::AsyncHasCanPlayOnlinePrivilege(const FOnCanPlayOnlinePrivilege& OnCanPlayOnlinePrivilege, const bool ShowWarningUI) {
}

void UELOSSLocalPlayer::AsyncHasCanCommunicateOnlinePrivilege(const FOnCanPlayOnlinePrivilege& OnCanCommunicateOnlinePrivilege) {
}

UELOSSLocalPlayer::UELOSSLocalPlayer() {
}

