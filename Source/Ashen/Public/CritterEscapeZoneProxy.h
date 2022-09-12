#pragma once
#include "CoreMinimal.h"
#include "ActionProxy.h"
#include "CritterEscapeZoneProxy.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UCritterEscapeZoneProxy : public UActionProxy {
    GENERATED_BODY()
public:
    UCritterEscapeZoneProxy();
};

