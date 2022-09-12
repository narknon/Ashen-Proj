#pragma once
#include "CoreMinimal.h"
#include "SpearProjectile.h"
#include "HeroSpearProjectile.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AHeroSpearProjectile : public ASpearProjectile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityStartDistance;
    
public:
    AHeroSpearProjectile();
};

