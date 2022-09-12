#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAshenEventType.h"
#include "AshenEventData.generated.h"

UCLASS(Abstract, Blueprintable)
class ASHEN_API UAshenEventData : public UObject {
    GENERATED_BODY()
public:
    UAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAshenEventType GetType() const;
    
};

