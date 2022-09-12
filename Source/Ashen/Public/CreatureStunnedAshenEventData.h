#pragma once
#include "CoreMinimal.h"
#include "CreatureAshenEventData.h"
#include "EMaxStunEffect.h"
#include "CreatureStunnedAshenEventData.generated.h"

class ACreature;

UCLASS(Blueprintable)
class ASHEN_API UCreatureStunnedAshenEventData : public UCreatureAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaxStunEffect StunEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* SourceOfStun;
    
public:
    UCreatureStunnedAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACreature* GetStunSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMaxStunEffect GetStunEffectType() const;
    
};

