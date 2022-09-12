#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_VectorBase.h"
#include "EnvQueryItemType_SceneComponent.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UEnvQueryItemType_SceneComponent : public UEnvQueryItemType_VectorBase {
    GENERATED_BODY()
public:
    UEnvQueryItemType_SceneComponent();
};

