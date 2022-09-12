#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Action.h"
#include "ConsumeItemAction.generated.h"

class UItemEquipment;
class UItemConsumable;
class UAnimMontage;
class APhysicalItem;

UCLASS(Blueprintable)
class ASHEN_API AConsumeItemAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemConsumable* Consumable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhysicalItem> PhysicalItemClass;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UItemEquipment> LeftHandEquipment;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhysicalItem* PhysicalItem;
    
public:
    AConsumeItemAction();
};

