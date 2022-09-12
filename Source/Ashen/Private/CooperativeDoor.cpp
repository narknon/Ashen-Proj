#include "CooperativeDoor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"

class UInteraction;
class ACreature;
class UObject;

void ACooperativeDoor::SynchronizeRemote_Implementation(uint8 HostSwitch, bool bIsOpen) {
}

void ACooperativeDoor::SwitchCallback(UInteraction* Source, ACreature* Target) {
}

void ACooperativeDoor::StartOpenDoorClient_Implementation(FGuid _Guid) {
}

void ACooperativeDoor::ResetDoorClient_Implementation(uint8 TriggerID) {
}

void ACooperativeDoor::ResetDoorAuthority_Implementation(uint8 TriggerID) {
}
bool ACooperativeDoor::ResetDoorAuthority_Validate(uint8 TriggerID) {
    return true;
}

void ACooperativeDoor::RemoteSwitchEnabled_Implementation(uint8 SwitchNumber, bool Enabled) {
}

void ACooperativeDoor::RemoteOpenDoor_Implementation() {
}

void ACooperativeDoor::RemoteCloseDoor_Implementation() {
}

void ACooperativeDoor::OpenThroughQuest() {
}

void ACooperativeDoor::OpenDoorSolo() {
}

void ACooperativeDoor::InitiateOpenLogic() {
}

TArray<UInteraction*> ACooperativeDoor::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}




void ACooperativeDoor::CheckForSwitchActionInteruption() {
}

void ACooperativeDoor::CancelActionClient_Implementation(FGuid _Guid) {
}

void ACooperativeDoor::AuthoritySwitchTriggeredGuid_Implementation(uint8 SwitchNumber, FGuid Guid) {
}
bool ACooperativeDoor::AuthoritySwitchTriggeredGuid_Validate(uint8 SwitchNumber, FGuid Guid) {
    return true;
}

ACooperativeDoor::ACooperativeDoor() {
    this->bOpen = false;
    this->SeperationDistInMetersToClose = 0.00f;
    this->InternalDistInMetersToClose = 0.00f;
    this->ExternalDistInMetersToClose = 0.00f;
    this->SwitchOneInteraction = NULL;
    this->SwitchTwoInteraction = NULL;
    this->DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrame"));
    this->DoorSlider = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DoorSlider"));
    this->SwitchOneTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("SwitchOneTrigger"));
    this->SwitchOneMontageOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("SwitchOneMontageOrigin"));
    this->SwitchTwoTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("SwitchTwoTrigger"));
    this->SwitchTwoMontageOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("SwitchTwoMontageOrigin"));
    this->InternalTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("InternalTrigger"));
    this->ExternalTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ExternalTrigger"));
    this->OpenAnimation = NULL;
    this->CloseAnimation = NULL;
    this->DoorNavBlocker = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorNavBlocker"));
    this->SwitchOneHero = NULL;
    this->SwitchTwoHero = NULL;
    this->LocalSwitchUser = NULL;
    this->bDebugSinglePlayerActivation = false;
}

