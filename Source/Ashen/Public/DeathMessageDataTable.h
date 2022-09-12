#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EAshenDamageType.h"
#include "Engine/DataTable.h"
#include "ELightLevel.h"
#include "DeathMessageDataTable.generated.h"

class ACreature;

USTRUCT(BlueprintType)
struct ASHEN_API FDeathMessageDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACreature> CreatureIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAshenDamageType RequiredDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELightLevel RequiredLightLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    FDeathMessageDataTable();
};

