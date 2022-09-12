#pragma once
#include "CoreMinimal.h"
#include "HeroBaseOverlapEventData.h"
#include "HeroEndOverlapEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UHeroEndOverlapEventData : public UHeroBaseOverlapEventData {
    GENERATED_BODY()
public:
    UHeroEndOverlapEventData();
};

