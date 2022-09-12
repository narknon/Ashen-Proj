#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chest.generated.h"

class UItemTable;

UCLASS(Blueprintable)
class ASHEN_API AChest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemTable* ChestTable;
    
    AChest();
    UFUNCTION(BlueprintCallable)
    void ClearEntireChest();
    
};

