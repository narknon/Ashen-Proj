#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestActor.generated.h"

class UStaticMeshComponent;
class UDialogueComponent;

UCLASS(Blueprintable)
class ASHEN_API AQuestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDialogueComponent* DialogueComponent;
    
    AQuestActor();
};

