#pragma once
#include "CoreMinimal.h"
#include "CreatureAshenEventData.h"
#include "ComponentDestroyedAshenEventData.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASHEN_API UComponentDestroyedAshenEventData : public UCreatureAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
public:
    UComponentDestroyedAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetComponent();
    
};

