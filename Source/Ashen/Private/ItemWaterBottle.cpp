#include "ItemWaterBottle.h"
#include "Net/UnrealNetwork.h"

class AAction;

void UItemWaterBottle::TryRefillWaterAction() {
}

void UItemWaterBottle::TryReceiveWaterAction(const FVector& LerpLocation, const FVector& LerpDirection) {
}

void UItemWaterBottle::TryOfferWaterAction(bool bTimeoutEnabled, float TimeoutSecs) {
}

AAction* UItemWaterBottle::TryDirectionalRefillWaterAction(FVector Direction, bool bFromGround, bool bAutoStart) {
    return NULL;
}

void UItemWaterBottle::TryAddWaterAction() {
}

void UItemWaterBottle::ResetCharges() {
}

void UItemWaterBottle::OnOwnerReplenishedAtSaveStone(bool& bPlayEffects) {
}

void UItemWaterBottle::IncreaseMaxChargesPermanently(int32 NumExtraCharges) {
}

void UItemWaterBottle::IncreaseMaxCharges(int32 NumExtraCharges) {
}

void UItemWaterBottle::IncreaseHealingLevelPermanently(float ExtraHealingAmount) {
}

int32 UItemWaterBottle::GetUIStackAmountInternal() {
    return 0;
}

int32 UItemWaterBottle::GetNumberOfDrinksRemaining() {
    return 0;
}

TArray<FUIStatBarData> UItemWaterBottle::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

int32 UItemWaterBottle::GetDrinkCapacity() {
    return 0;
}

void UItemWaterBottle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UItemWaterBottle, CurrentCharge);
}

UItemWaterBottle::UItemWaterBottle() {
    this->MaxCharges = 3;
    this->DefaultHealingAmount = 0.00f;
    this->BuffEffect = NULL;
    this->MaxConsumptionsPerAction = 3;
    this->DrinkFailSoundEffect = NULL;
    this->RefillScreenFlashDuration = 0.00f;
    this->RefillScreenFlashOpacity = 0.00f;
    this->MaxCurrentCharges = 3;
    this->CurrentCharge = 3;
    this->HeroOwner = NULL;
}

