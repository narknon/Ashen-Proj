#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "CraftingMenuOpenedAshenEventData.generated.h"

class UCraftingComponent;

UCLASS(Blueprintable)
class ASHEN_API UCraftingMenuOpenedAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UCraftingComponent> CraftingComponent;
    
public:
    UCraftingMenuOpenedAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCraftingComponent* GetCraftingComponent();
    
};

