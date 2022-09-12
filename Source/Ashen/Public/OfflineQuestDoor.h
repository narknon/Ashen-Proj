#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestStateTagCondition.h"
#include "OfflineQuestDoor.generated.h"

class USkeletalMeshComponent;
class UAnimSequence;

UCLASS(Blueprintable)
class ASHEN_API AOfflineQuestDoor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DoorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DoorOpenSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStateTagCondition OpenDoorQuestTag;
    
    AOfflineQuestDoor();
};

