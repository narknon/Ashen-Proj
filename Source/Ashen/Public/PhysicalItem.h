#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhysicalItem.generated.h"

class UItemBase;
class USceneComponent;

UCLASS(Blueprintable)
class ASHEN_API APhysicalItem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* OwningItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* ItemRoot;
    
    APhysicalItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreated();
    
};

