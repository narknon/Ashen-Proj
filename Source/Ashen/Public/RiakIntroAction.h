#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "RiakIntroAction.generated.h"

class ARiak;

UCLASS(Blueprintable)
class ASHEN_API ARiakIntroAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARiak* Riak;
    
public:
    ARiakIntroAction();
};

