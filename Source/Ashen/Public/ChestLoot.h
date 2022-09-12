#pragma once
#include "CoreMinimal.h"
#include "StaticLootActor.h"
#include "ChestLoot.generated.h"

class USkeletalMeshComponent;
class UAnimationAsset;

UCLASS(Blueprintable)
class ASHEN_API AChestLoot : public AStaticLootActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LootSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* ChestOpenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* ChestCloseAnim;
    
    AChestLoot();
};

