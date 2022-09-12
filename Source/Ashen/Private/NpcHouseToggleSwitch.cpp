#include "NpcHouseToggleSwitch.h"

class UAshenEventData;
class UInteraction;
class ACreature;
class UObject;

void ANpcHouseToggleSwitch::ZoneStreamingEvent(UAshenEventData* EventData) {
}

void ANpcHouseToggleSwitch::OnLevelShown() {
}

void ANpcHouseToggleSwitch::OnInteract(UInteraction* Source, ACreature* Target) {
}

TArray<UInteraction*> ANpcHouseToggleSwitch::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}

ANpcHouseToggleSwitch::ANpcHouseToggleSwitch() {
    this->HouseOwner = ENpcType::None;
    this->bIsLoading = false;
    this->CurrentState = ETownBuildingState::Unbuilt;
    this->Interaction = NULL;
    this->TownBuildingType = ETownBuildingType::None;
    this->NpcManager = NULL;
    this->LoadingLevel = NULL;
}

