#pragma once
#include "CoreMinimal.h"
#include "AIWeaponAttackDescription.h"
#include "EPhaseRequirement.h"
#include "MatriarchAttackDescription.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FMatriarchAttackDescription : public FAIWeaponAttackDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhaseRequirement PhaseRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhaseOneWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhaseTwoWeight;
    
    FMatriarchAttackDescription();
};

