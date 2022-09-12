#pragma once
#include "CoreMinimal.h"
#include "Creature.h"
#include "Critter.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class ASHEN_API ACritter : public ACreature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnDeathAudioEvent;
    
    ACritter();
};

