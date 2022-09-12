#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StoryNPCTravelMarker.generated.h"

class USceneComponent;
class UTextRenderComponent;
class ACreature;
class UArrowComponent;

UCLASS(Blueprintable)
class ASHEN_API AStoryNPCTravelMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* NameRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* MarkerArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Identifier;
    
    AStoryNPCTravelMarker();
    UFUNCTION(BlueprintCallable)
    void TeleportToMarker(ACreature* _Creature);
    
};

