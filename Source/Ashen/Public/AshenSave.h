#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AshenSave.generated.h"

UCLASS(Abstract, Blueprintable)
class ASHEN_API UAshenSave : public UObject {
    GENERATED_BODY()
public:
    UAshenSave();
};

