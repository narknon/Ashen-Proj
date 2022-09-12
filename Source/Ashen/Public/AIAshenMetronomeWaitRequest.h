#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIAshenMetronomeWaitRequest.generated.h"

class ACreature;
class UAshenAnimMetronomeNotify;

UCLASS(Blueprintable)
class ASHEN_API UAIAshenMetronomeWaitRequest : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* CreatureOwner;
    
public:
    UAIAshenMetronomeWaitRequest();
private:
    UFUNCTION(BlueprintCallable)
    void OnMetronome(ACreature* Source, const UAshenAnimMetronomeNotify* Notify);
    
};

