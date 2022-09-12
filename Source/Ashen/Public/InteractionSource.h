#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionSource.generated.h"

class UInteraction;
class ACreature;
class UObject;

UINTERFACE(Blueprintable)
class ASHEN_API UInteractionSource : public UInterface {
    GENERATED_BODY()
};

class ASHEN_API IInteractionSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UInteraction*> GetInteractions(ACreature* Target, UObject* Context);
    
};

