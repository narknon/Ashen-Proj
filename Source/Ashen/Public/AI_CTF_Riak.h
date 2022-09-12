#pragma once
#include "CoreMinimal.h"
#include "AICombatTargetFilter.h"
#include "AI_CTF_Riak.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAI_CTF_Riak : public UAICombatTargetFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngleSeperation;
    
    UAI_CTF_Riak();
};

