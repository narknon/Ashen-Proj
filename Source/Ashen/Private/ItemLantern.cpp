#include "ItemLantern.h"

class ACreature;
class AActor;
class UPrimitiveComponent;

void UItemLantern::UpdateValuesFromRaiden() {
}

void UItemLantern::UpdateLanternVisibility() {
}

void UItemLantern::SetVolumeIntensityMultiply(float Multiply) {
}

void UItemLantern::SetVolumeIntensity() {
}

void UItemLantern::SetLanternEnabled(bool State) {
}

void UItemLantern::SetIntensityOverrideMultiplier(float Intensity) {
}

void UItemLantern::ReturnGroundLanternToPlayer() {
}

void UItemLantern::RefillLantern() {
}


void UItemLantern::OnLanternDrain_Implementation(ACreature* Source) {
}

void UItemLantern::OnActorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UItemLantern::OnActorBeginOverlap(UPrimitiveComponent* ThisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UItemLantern::IsLanternEnabled() {
    return false;
}

float UItemLantern::GetSecondsOfLifeRemaining() {
    return 0.0f;
}

TArray<FUIStatBarData> UItemLantern::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

void UItemLantern::CheckDynamicMaterialInstances() {
}

UItemLantern::UItemLantern() {
    this->HeroOwner = NULL;
    this->bIsE3Lantern = false;
    this->bWasDrawnState = false;
    this->MaxCapacity = 10.00f;
    this->SecondsPerConsumptionUnit = 30.00f;
    this->GameplayRadius = 1000.00f;
    this->IntensityRecoverRate = 2.00f;
    this->DrainTrackSource = NULL;
    this->Current = 10.00f;
    this->LanternEnabled = false;
    this->bIsGroundLantern = false;
    this->RayMatA = NULL;
    this->RayMatB = NULL;
    this->RayMatC = NULL;
    this->Sphere1Mat = NULL;
    this->UseSideRays = true;
    this->UIAshLumanRating = 350;
    this->QuadLightIntensity = 10000.00f;
    this->VolumeIntensity = 0.25f;
    this->FillIntensityMultiplier = 1.00f;
    this->FillAttenuationMultiplier = 1.00f;
    this->MaxGroundDistanceFromPlayer = 1500.00f;
}

