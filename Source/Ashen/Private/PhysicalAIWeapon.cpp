#include "PhysicalAIWeapon.h"
#include "Components/SceneComponent.h"

void APhysicalAIWeapon::OnExplodeWeapon_Implementation() {
}

APhysicalAIWeapon::APhysicalAIWeapon() {
    this->EquippedCollisionRoot = CreateDefaultSubobject<USceneComponent>(TEXT("EquippedCollisionRoot"));
}

