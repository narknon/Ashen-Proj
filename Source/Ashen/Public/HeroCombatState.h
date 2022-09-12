#pragma once
#include "CoreMinimal.h"
#include "HeroCombatState.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FHeroCombatState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEngagedInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatEngagedAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombatFirstBlood;
    
    FHeroCombatState();
};

