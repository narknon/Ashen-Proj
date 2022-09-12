#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "LootAction.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASHEN_API ALootAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentLootActor;
    
    ALootAction();
};

