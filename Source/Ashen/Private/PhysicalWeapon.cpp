#include "PhysicalWeapon.h"
#include "Components/BoxComponent.h"
#include "Components/MaterialBillboardComponent.h"

APhysicalWeapon::APhysicalWeapon() {
    this->EquippedCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("EquippedCollision"));
    this->ChargeUpParticleEffect = NULL;
    this->ChargeUpIconMaterial = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("ChargeUpIconMaterial"));
}

