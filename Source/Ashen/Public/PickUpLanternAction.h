#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "PickUpLanternAction.generated.h"

class UItemLantern;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API APickUpLanternAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemLantern* Lantern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
    APickUpLanternAction();
};

