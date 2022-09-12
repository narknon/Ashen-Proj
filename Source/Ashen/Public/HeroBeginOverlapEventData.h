#pragma once
#include "CoreMinimal.h"
#include "HeroBaseOverlapEventData.h"
#include "HeroBeginOverlapEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UHeroBeginOverlapEventData : public UHeroBaseOverlapEventData {
    GENERATED_BODY()
public:
    UHeroBeginOverlapEventData();
};

