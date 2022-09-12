#pragma once
#include "CoreMinimal.h"
#include "CreatureAshenEventData.h"
#include "CreatureDeathAshenEventData.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASHEN_API UCreatureDeathAshenEventData : public UCreatureAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Source;
    
public:
    UCreatureDeathAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSource();
    
};

