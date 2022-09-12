#pragma once
#include "CoreMinimal.h"
#include "StaticLootActor.h"
#include "SkeletonLoot.generated.h"

class UDestructibleComponent;

UCLASS(Blueprintable)
class ASHEN_API ASkeletonLoot : public AStaticLootActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDestructibleComponent* DestructibleMeshComponent;
    
    ASkeletonLoot();
};

