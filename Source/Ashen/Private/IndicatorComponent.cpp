#include "IndicatorComponent.h"

void UIndicatorComponent::UpdateIcon(bool ClearCurrentType) {
}

void UIndicatorComponent::SetIconType(EIndicatorIconType Type) {
}

void UIndicatorComponent::PlayOpacityCurveLerp() {
}


void UIndicatorComponent::PermenantlyHide(bool PermHide) {
}

EIndicatorIconType UIndicatorComponent::GetQuestRelevantObjectIcon() {
    return EIndicatorIconType::None;
}

EIndicatorIconType UIndicatorComponent::GetQuestRelevantCreatureIcon() {
    return EIndicatorIconType::None;
}

EIndicatorIconType UIndicatorComponent::GetNPCIcon() {
    return EIndicatorIconType::None;
}

EIndicatorIconType UIndicatorComponent::GetLootIcon(bool DisplayEmptyAsIcon) {
    return EIndicatorIconType::None;
}

EIndicatorIconType UIndicatorComponent::GetHeroIcon() {
    return EIndicatorIconType::None;
}


EIndicatorIconType UIndicatorComponent::GetCraftingTableIcon() {
    return EIndicatorIconType::None;
}

UIndicatorComponent::UIndicatorComponent() {
    this->AshenGameState = NULL;
    this->StateData = NULL;
    this->AshenGameInstance = NULL;
    this->QuestRelevantObjectQuestLine = NULL;
    this->IndicatorType = EIndicatorType::None;
    this->CurrentIconType = EIndicatorIconType::None;
    this->IndicatorMaterial_Loot = NULL;
    this->IndicatorMaterial_QuestRelevant = NULL;
    this->IndicatorMaterial_QuestGive = NULL;
    this->IndicatorMaterial_QuestRecap = NULL;
    this->IndicatorMaterial_Downed = NULL;
    this->IndicatorMaterial_Player = NULL;
    this->FadeCurveFloat = NULL;
    this->FadeDuration = 0.00f;
    this->ForceQuestRelivent = false;
    this->PermHidden = false;
    this->UIEnabled = true;
    this->QuestUIEnabled = true;
    this->HumanoidOwner = NULL;
}

