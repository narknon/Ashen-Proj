#pragma once
#include "CoreMinimal.h"
#include "AICombatTargetFilter.h"
#include "AI_CTF_Follower.generated.h"

class AAIHeroFollower;

UCLASS(Blueprintable)
class ASHEN_API UAI_CTF_Follower : public UAICombatTargetFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIHeroFollower* MyFollower;
    
public:
    UAI_CTF_Follower();
};

