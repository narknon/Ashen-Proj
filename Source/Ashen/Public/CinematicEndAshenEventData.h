#pragma once
#include "CoreMinimal.h"
#include "ECinematicName.h"
#include "AshenEventData.h"
#include "ECinematicEndType.h"
#include "CinematicEndAshenEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UCinematicEndAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECinematicName CinematicName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECinematicEndType EndType;
    
    UCinematicEndAshenEventData();
};

