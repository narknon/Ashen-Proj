#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemDescription.h"
#include "ConsumableTable.generated.h"

class UParticleSystem;
class UStaticMesh;
class USoundCue;
class UAnimMontage;
class AAction;

USTRUCT(BlueprintType)
struct ASHEN_API FConsumableTable : public FItemDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticEquippedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ConsumeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ConsumeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAction> AnimAction;
    
    FConsumableTable();
};

