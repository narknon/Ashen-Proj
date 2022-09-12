#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAIRelationship.h"
#include "AISpawnerStateResolution.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAISpawnerStateResolution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SpawnerGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship Relationship;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 ResolutionFlags;
    
public:
    FAISpawnerStateResolution();
};

