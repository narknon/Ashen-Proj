#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "AIProxy_ElderDark_Arena.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAIProxy_ElderDark_Arena : public USphereComponent {
    GENERATED_BODY()
public:
    UAIProxy_ElderDark_Arena();
};

