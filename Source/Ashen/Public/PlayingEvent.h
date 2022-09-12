#pragma once
#include "CoreMinimal.h"
#include "PlayingEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPlayingEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpeakingActor;
    
    ASHEN_API FPlayingEvent();
};

