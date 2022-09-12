#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "SpearProjectile.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class ASHEN_API ASpearProjectile : public AProjectile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* PickUpCollision;
    
public:
    ASpearProjectile();
};

