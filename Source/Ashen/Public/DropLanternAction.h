#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "DropLanternAction.generated.h"

class AHero;

UCLASS(Blueprintable)
class ASHEN_API ADropLanternAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
public:
    ADropLanternAction();
};

