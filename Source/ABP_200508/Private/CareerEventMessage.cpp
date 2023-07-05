#include "CareerEventMessage.h"

FCareerEventMessage::FCareerEventMessage() {
    this->ScreenEffect = ECareerScreenEffect::None;
    this->MemA_Prop = ECareerProp::None;
    this->MemA_Yaw = 0.00f;
    this->MemA_Target = ECareerEventTarget::NONE;
    this->MemB_Prop = ECareerProp::None;
    this->MemB_Yaw = 0.00f;
    this->MemB_Target = ECareerEventTarget::NONE;
    this->MemC_Prop = ECareerProp::None;
    this->MemC_Yaw = 0.00f;
    this->MemC_Target = ECareerEventTarget::NONE;
    this->MemD_Prop = ECareerProp::None;
    this->MemD_Yaw = 0.00f;
    this->MemD_Target = ECareerEventTarget::NONE;
    this->Act0_SE = ECareerSEType::NONE;
    this->Act0_BGM = ECareerBGMType::Dummy;
    this->Act0_ScreenEffect = ECareerScreenEffect::None;
    this->Act0_TalkMem = ECareerEventActionMember::NONE;
    this->Act0_MemA_Yaw = 0.00f;
    this->Act0_MemB_Yaw = 0.00f;
    this->Act0_MemC_Yaw = 0.00f;
    this->Act0_MemD_Yaw = 0.00f;
    this->Act0_MemA_Prop = ECareerProp::None;
    this->Act0_MemB_Prop = ECareerProp::None;
    this->Act0_MemC_Prop = ECareerProp::None;
    this->Act0_MemD_Prop = ECareerProp::None;
    this->Act0_MemA_Target = ECareerEventTarget::NONE;
    this->Act0_MemB_Target = ECareerEventTarget::NONE;
    this->Act0_MemC_Target = ECareerEventTarget::NONE;
    this->Act0_MemD_Target = ECareerEventTarget::NONE;
    this->Act0_MemA_Disp = ECareerEventDisp::NONE;
    this->Act0_MemB_Disp = ECareerEventDisp::NONE;
    this->Act0_MemC_Disp = ECareerEventDisp::NONE;
    this->Act0_MemD_Disp = ECareerEventDisp::NONE;
    this->Act1_SE = ECareerSEType::NONE;
    this->Act1_BGM = ECareerBGMType::Dummy;
    this->Act1_ScreenEffect = ECareerScreenEffect::None;
    this->Act1_TalkMem = ECareerEventActionMember::NONE;
    this->Act1_MemA_Yaw = 0.00f;
    this->Act1_MemB_Yaw = 0.00f;
    this->Act1_MemC_Yaw = 0.00f;
    this->Act1_MemD_Yaw = 0.00f;
    this->Act1_MemA_Prop = ECareerProp::None;
    this->Act1_MemB_Prop = ECareerProp::None;
    this->Act1_MemC_Prop = ECareerProp::None;
    this->Act1_MemD_Prop = ECareerProp::None;
    this->Act1_MemA_Target = ECareerEventTarget::NONE;
    this->Act1_MemB_Target = ECareerEventTarget::NONE;
    this->Act1_MemC_Target = ECareerEventTarget::NONE;
    this->Act1_MemD_Target = ECareerEventTarget::NONE;
    this->Act1_MemA_Disp = ECareerEventDisp::NONE;
    this->Act1_MemB_Disp = ECareerEventDisp::NONE;
    this->Act1_MemC_Disp = ECareerEventDisp::NONE;
    this->Act1_MemD_Disp = ECareerEventDisp::NONE;
    this->Act2_SE = ECareerSEType::NONE;
    this->Act2_BGM = ECareerBGMType::Dummy;
    this->Act2_ScreenEffect = ECareerScreenEffect::None;
    this->Act2_TalkMem = ECareerEventActionMember::NONE;
    this->Act2_MemA_Yaw = 0.00f;
    this->Act2_MemB_Yaw = 0.00f;
    this->Act2_MemC_Yaw = 0.00f;
    this->Act2_MemD_Yaw = 0.00f;
    this->Act2_MemA_Prop = ECareerProp::None;
    this->Act2_MemB_Prop = ECareerProp::None;
    this->Act2_MemC_Prop = ECareerProp::None;
    this->Act2_MemD_Prop = ECareerProp::None;
    this->Act2_MemA_Target = ECareerEventTarget::NONE;
    this->Act2_MemB_Target = ECareerEventTarget::NONE;
    this->Act2_MemC_Target = ECareerEventTarget::NONE;
    this->Act2_MemD_Target = ECareerEventTarget::NONE;
    this->Act2_MemA_Disp = ECareerEventDisp::NONE;
    this->Act2_MemB_Disp = ECareerEventDisp::NONE;
    this->Act2_MemC_Disp = ECareerEventDisp::NONE;
    this->Act2_MemD_Disp = ECareerEventDisp::NONE;
    this->Act3_SE = ECareerSEType::NONE;
    this->Act3_BGM = ECareerBGMType::Dummy;
    this->Act3_ScreenEffect = ECareerScreenEffect::None;
    this->Act3_TalkMem = ECareerEventActionMember::NONE;
    this->Act3_MemA_Yaw = 0.00f;
    this->Act3_MemB_Yaw = 0.00f;
    this->Act3_MemC_Yaw = 0.00f;
    this->Act3_MemD_Yaw = 0.00f;
    this->Act3_MemA_Prop = ECareerProp::None;
    this->Act3_MemB_Prop = ECareerProp::None;
    this->Act3_MemC_Prop = ECareerProp::None;
    this->Act3_MemD_Prop = ECareerProp::None;
    this->Act3_MemA_Target = ECareerEventTarget::NONE;
    this->Act3_MemB_Target = ECareerEventTarget::NONE;
    this->Act3_MemC_Target = ECareerEventTarget::NONE;
    this->Act3_MemD_Target = ECareerEventTarget::NONE;
    this->Act3_MemA_Disp = ECareerEventDisp::NONE;
    this->Act3_MemB_Disp = ECareerEventDisp::NONE;
    this->Act3_MemC_Disp = ECareerEventDisp::NONE;
    this->Act3_MemD_Disp = ECareerEventDisp::NONE;
    this->Act4_SE = ECareerSEType::NONE;
    this->Act4_BGM = ECareerBGMType::Dummy;
    this->Act4_ScreenEffect = ECareerScreenEffect::None;
    this->Act4_TalkMem = ECareerEventActionMember::NONE;
    this->Act4_MemA_Yaw = 0.00f;
    this->Act4_MemB_Yaw = 0.00f;
    this->Act4_MemC_Yaw = 0.00f;
    this->Act4_MemD_Yaw = 0.00f;
    this->Act4_MemA_Prop = ECareerProp::None;
    this->Act4_MemB_Prop = ECareerProp::None;
    this->Act4_MemC_Prop = ECareerProp::None;
    this->Act4_MemD_Prop = ECareerProp::None;
    this->Act4_MemA_Target = ECareerEventTarget::NONE;
    this->Act4_MemB_Target = ECareerEventTarget::NONE;
    this->Act4_MemC_Target = ECareerEventTarget::NONE;
    this->Act4_MemD_Target = ECareerEventTarget::NONE;
    this->Act4_MemA_Disp = ECareerEventDisp::NONE;
    this->Act4_MemB_Disp = ECareerEventDisp::NONE;
    this->Act4_MemC_Disp = ECareerEventDisp::NONE;
    this->Act4_MemD_Disp = ECareerEventDisp::NONE;
    this->Act5_SE = ECareerSEType::NONE;
    this->Act5_BGM = ECareerBGMType::Dummy;
    this->Act5_ScreenEffect = ECareerScreenEffect::None;
    this->Act5_TalkMem = ECareerEventActionMember::NONE;
    this->Act5_MemA_Yaw = 0.00f;
    this->Act5_MemB_Yaw = 0.00f;
    this->Act5_MemC_Yaw = 0.00f;
    this->Act5_MemD_Yaw = 0.00f;
    this->Act5_MemA_Prop = ECareerProp::None;
    this->Act5_MemB_Prop = ECareerProp::None;
    this->Act5_MemC_Prop = ECareerProp::None;
    this->Act5_MemD_Prop = ECareerProp::None;
    this->Act5_MemA_Target = ECareerEventTarget::NONE;
    this->Act5_MemB_Target = ECareerEventTarget::NONE;
    this->Act5_MemC_Target = ECareerEventTarget::NONE;
    this->Act5_MemD_Target = ECareerEventTarget::NONE;
    this->Act5_MemA_Disp = ECareerEventDisp::NONE;
    this->Act5_MemB_Disp = ECareerEventDisp::NONE;
    this->Act5_MemC_Disp = ECareerEventDisp::NONE;
    this->Act5_MemD_Disp = ECareerEventDisp::NONE;
    this->Act6_SE = ECareerSEType::NONE;
    this->Act6_BGM = ECareerBGMType::Dummy;
    this->Act6_ScreenEffect = ECareerScreenEffect::None;
    this->Act6_TalkMem = ECareerEventActionMember::NONE;
    this->Act6_MemA_Yaw = 0.00f;
    this->Act6_MemB_Yaw = 0.00f;
    this->Act6_MemC_Yaw = 0.00f;
    this->Act6_MemD_Yaw = 0.00f;
    this->Act6_MemA_Prop = ECareerProp::None;
    this->Act6_MemB_Prop = ECareerProp::None;
    this->Act6_MemC_Prop = ECareerProp::None;
    this->Act6_MemD_Prop = ECareerProp::None;
    this->Act6_MemA_Target = ECareerEventTarget::NONE;
    this->Act6_MemB_Target = ECareerEventTarget::NONE;
    this->Act6_MemC_Target = ECareerEventTarget::NONE;
    this->Act6_MemD_Target = ECareerEventTarget::NONE;
    this->Act6_MemA_Disp = ECareerEventDisp::NONE;
    this->Act6_MemB_Disp = ECareerEventDisp::NONE;
    this->Act6_MemC_Disp = ECareerEventDisp::NONE;
    this->Act6_MemD_Disp = ECareerEventDisp::NONE;
    this->Act7_SE = ECareerSEType::NONE;
    this->Act7_BGM = ECareerBGMType::Dummy;
    this->Act7_ScreenEffect = ECareerScreenEffect::None;
    this->Act7_TalkMem = ECareerEventActionMember::NONE;
    this->Act7_MemA_Yaw = 0.00f;
    this->Act7_MemB_Yaw = 0.00f;
    this->Act7_MemC_Yaw = 0.00f;
    this->Act7_MemD_Yaw = 0.00f;
    this->Act7_MemA_Prop = ECareerProp::None;
    this->Act7_MemB_Prop = ECareerProp::None;
    this->Act7_MemC_Prop = ECareerProp::None;
    this->Act7_MemD_Prop = ECareerProp::None;
    this->Act7_MemA_Target = ECareerEventTarget::NONE;
    this->Act7_MemB_Target = ECareerEventTarget::NONE;
    this->Act7_MemC_Target = ECareerEventTarget::NONE;
    this->Act7_MemD_Target = ECareerEventTarget::NONE;
    this->Act7_MemA_Disp = ECareerEventDisp::NONE;
    this->Act7_MemB_Disp = ECareerEventDisp::NONE;
    this->Act7_MemC_Disp = ECareerEventDisp::NONE;
    this->Act7_MemD_Disp = ECareerEventDisp::NONE;
    this->Act8_SE = ECareerSEType::NONE;
    this->Act8_BGM = ECareerBGMType::Dummy;
    this->Act8_ScreenEffect = ECareerScreenEffect::None;
    this->Act8_TalkMem = ECareerEventActionMember::NONE;
    this->Act8_MemA_Yaw = 0.00f;
    this->Act8_MemB_Yaw = 0.00f;
    this->Act8_MemC_Yaw = 0.00f;
    this->Act8_MemD_Yaw = 0.00f;
    this->Act8_MemA_Prop = ECareerProp::None;
    this->Act8_MemB_Prop = ECareerProp::None;
    this->Act8_MemC_Prop = ECareerProp::None;
    this->Act8_MemD_Prop = ECareerProp::None;
    this->Act8_MemA_Target = ECareerEventTarget::NONE;
    this->Act8_MemB_Target = ECareerEventTarget::NONE;
    this->Act8_MemC_Target = ECareerEventTarget::NONE;
    this->Act8_MemD_Target = ECareerEventTarget::NONE;
    this->Act8_MemA_Disp = ECareerEventDisp::NONE;
    this->Act8_MemB_Disp = ECareerEventDisp::NONE;
    this->Act8_MemC_Disp = ECareerEventDisp::NONE;
    this->Act8_MemD_Disp = ECareerEventDisp::NONE;
    this->Act9_SE = ECareerSEType::NONE;
    this->Act9_BGM = ECareerBGMType::Dummy;
    this->Act9_ScreenEffect = ECareerScreenEffect::None;
    this->Act9_TalkMem = ECareerEventActionMember::NONE;
    this->Act9_MemA_Yaw = 0.00f;
    this->Act9_MemB_Yaw = 0.00f;
    this->Act9_MemC_Yaw = 0.00f;
    this->Act9_MemD_Yaw = 0.00f;
    this->Act9_MemA_Prop = ECareerProp::None;
    this->Act9_MemB_Prop = ECareerProp::None;
    this->Act9_MemC_Prop = ECareerProp::None;
    this->Act9_MemD_Prop = ECareerProp::None;
    this->Act9_MemA_Target = ECareerEventTarget::NONE;
    this->Act9_MemB_Target = ECareerEventTarget::NONE;
    this->Act9_MemC_Target = ECareerEventTarget::NONE;
    this->Act9_MemD_Target = ECareerEventTarget::NONE;
    this->Act9_MemA_Disp = ECareerEventDisp::NONE;
    this->Act9_MemB_Disp = ECareerEventDisp::NONE;
    this->Act9_MemC_Disp = ECareerEventDisp::NONE;
    this->Act9_MemD_Disp = ECareerEventDisp::NONE;
    this->SaveSelectionResult = ECareerChoicesSelectionResult::NONE;
    this->EventResult = ECareerStoryResultCondition::NONE;
}
