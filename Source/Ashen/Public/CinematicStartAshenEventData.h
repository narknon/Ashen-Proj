#pragma once
#include "CoreMinimal.h"
#include "ECinematicName.h"
#include "AshenEventData.h"
#include "CinematicStartAshenEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UCinematicStartAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECinematicName CinematicName;
    
    UCinematicStartAshenEventData();
};

