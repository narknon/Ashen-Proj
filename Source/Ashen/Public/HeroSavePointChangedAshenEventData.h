#pragma once
#include "CoreMinimal.h"
#include "SavePointAshenEventData.h"
#include "HeroSavePointChangedAshenEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UHeroSavePointChangedAshenEventData : public USavePointAshenEventData {
    GENERATED_BODY()
public:
    UHeroSavePointChangedAshenEventData();
};

