#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EquipmentHandlingAction.h"
#include "WaterBottleAction.generated.h"

class UAnimMontage;
class AHero;
class AWaterPool;
class UItemWaterBottle;

UCLASS(Blueprintable)
class ASHEN_API AWaterBottleAction : public AEquipmentHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemWaterBottle* Waterbottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWaterPool* WaterPool;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemWaterBottle> WaterBottleClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
public:
    AWaterBottleAction();
};

