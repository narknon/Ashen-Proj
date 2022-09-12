#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "AISkyZoneProxy.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAISkyZoneProxy : public UBoxComponent {
    GENERATED_BODY()
public:
    UAISkyZoneProxy();
};

