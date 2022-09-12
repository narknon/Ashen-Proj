#pragma once
#include "CoreMinimal.h"
#include "DynamicLootActor.h"
#include "PlayerLootSack.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASHEN_API APlayerLootSack : public ADynamicLootActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LootMesh;
    
    APlayerLootSack();
};

