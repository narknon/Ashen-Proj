#pragma once
#include "CoreMinimal.h"
#include "PhysicalWeaponBase.h"
#include "PhysicalAIWeapon.generated.h"

class USceneComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class ASHEN_API APhysicalAIWeapon : public APhysicalWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* EquippedCollisionRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> EquippedCollisionBoxes;
    
    APhysicalAIWeapon();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExplodeWeapon();
    
};

