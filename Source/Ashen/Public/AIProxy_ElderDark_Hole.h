#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "AIProxy_ElderDark_Hole.generated.h"

class ABralHole;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAIProxy_ElderDark_Hole : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABralHole* HoleParent;
    
public:
    UAIProxy_ElderDark_Hole();
};

