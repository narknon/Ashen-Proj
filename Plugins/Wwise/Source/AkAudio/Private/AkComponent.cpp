#include "AkComponent.h"

class UAkAuxBus;
class UAkComponent;
class UAkAudioEvent;

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes) {
}

void UAkComponent::UseEarlyReflections(UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName) {
}

void UAkComponent::Stop() {
}

void UAkComponent::SetSwitch(const FString& SwitchGroup, const FString& SwitchState) {
}

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed) {
}

void UAkComponent::SetRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs) {
}

void UAkComponent::SetOutputBusVolume(float BusVolume) {
}

void UAkComponent::SetListeners(const TArray<UAkComponent*>& Listeners) {
}

void UAkComponent::SetAttenuationScalingFactor(float Value) {
}

void UAkComponent::PostTrigger(const FString& Trigger) {
}

int32 UAkComponent::PostAssociatedAkEvent() {
    return 0;
}

int32 UAkComponent::PostAkEventByName(const FString& in_EventName) {
    return 0;
}

int32 UAkComponent::PostAkEvent(UAkAudioEvent* AkEvent, const FString& in_EventName) {
    return 0;
}

float UAkComponent::GetAttenuationRadius() const {
    return 0.0f;
}

UAkComponent::UAkComponent() {
    this->EarlyReflectionAuxBus = NULL;
    this->EarlyReflectionOrder = 1;
    this->EarlyReflectionBusSendGain = 1.00f;
    this->EarlyReflectionMaxPathLength = 100000.00f;
    this->OcclusionObstructionMaxRadius = 10000.00f;
    this->OcclusionCollisionChannel = ECC_Visibility;
    this->EnableSpotReflectors = false;
    this->DrawFirstOrderReflections = false;
    this->DrawSecondOrderReflections = false;
    this->DrawHigherOrderReflections = false;
    this->DrawSoundPropagation = false;
    this->StopWhenOwnerDestroyed = true;
    this->AttenuationScalingFactor = 1.00f;
    this->OcclusionRefreshInterval = 0.20f;
    this->AkAudioEvent = NULL;
}

