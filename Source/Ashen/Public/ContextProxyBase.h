#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "ContextProxyBase.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UContextProxyBase : public USphereComponent {
    GENERATED_BODY()
public:
    UContextProxyBase();
};

