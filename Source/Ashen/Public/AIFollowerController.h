#pragma once
#include "CoreMinimal.h"
#include "AshenAIControllerBase.h"
#include "AIFollowerController.generated.h"

class AAIHeroFollower;

UCLASS(Blueprintable)
class ASHEN_API AAIFollowerController : public AAshenAIControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIHeroFollower* AIFollower;
    
public:
    AAIFollowerController();
};

