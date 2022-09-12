#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemCaptureObject.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASHEN_API AItemCaptureObject : public AActor {
    GENERATED_BODY()
public:
    AItemCaptureObject();
    UFUNCTION(BlueprintCallable)
    void ForceQualityTextureStreaming(UStaticMeshComponent* MeshRef, bool ForceIt);
    
};

