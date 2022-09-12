#pragma once
#include "CoreMinimal.h"
#include "ContextProxyBase.h"
#include "CampFireProxy.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UCampFireProxy : public UContextProxyBase {
    GENERATED_BODY()
public:
    UCampFireProxy();
};

