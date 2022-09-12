#pragma once
#include "CoreMinimal.h"
#include "AINpcFollower.h"
#include "Amara_SoG.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AAmara_SoG : public AAINpcFollower {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoGDamageReduction;
    
    AAmara_SoG();
};

