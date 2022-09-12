#pragma once
#include "CoreMinimal.h"
#include "ENpcType.h"
#include "ENpcOutfitState.h"
#include "AIFollowerAssetWrapper.generated.h"

class AAIHeroFollower;

USTRUCT(BlueprintType)
struct ASHEN_API FAIFollowerAssetWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType NpcType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcOutfitState OutfitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAIHeroFollower> FollowerClass;
    
    FAIFollowerAssetWrapper();
};

