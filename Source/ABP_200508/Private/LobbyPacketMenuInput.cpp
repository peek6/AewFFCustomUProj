#include "LobbyPacketMenuInput.h"

ELobbyPacketMenuInputSendType ULobbyPacketMenuInput::GetSendType() const {
    return ELobbyPacketMenuInputSendType::Request;
}

int32 ULobbyPacketMenuInput::GetPlayerIndex() const {
    return 0;
}

ELobbyPacketMenuInputType ULobbyPacketMenuInput::GetInputValue() const {
    return ELobbyPacketMenuInputType::NONE;
}

ULobbyPacketMenuInput::ULobbyPacketMenuInput() {
    this->PlayerIndex = 0;
    this->InputValue = ELobbyPacketMenuInputType::NONE;
    this->SendType = ELobbyPacketMenuInputSendType::Request;
}

