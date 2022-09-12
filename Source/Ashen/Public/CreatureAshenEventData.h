#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "CreatureAshenEventData.generated.h"

class ACreature;

UCLASS(Abstract, Blueprintable)
class ASHEN_API UCreatureAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* Creature;
    
public:
    UCreatureAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACreature* GetCreature();
    
};

