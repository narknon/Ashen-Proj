#pragma once
#include "CoreMinimal.h"
#include "AICombatTargetFilter.h"
#include "AI_CTF_Riak_Weighted.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAI_CTF_Riak_Weighted : public UAICombatTargetFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngleSeperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleWeighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceForWeighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceWeighting;
    
    UAI_CTF_Riak_Weighted();
};

