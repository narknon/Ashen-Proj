#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SetPieceEquipment.generated.h"

class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASHEN_API ASetPieceEquipment : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* ItemRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    ASetPieceEquipment();
};

