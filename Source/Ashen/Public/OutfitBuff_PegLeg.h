#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "OutfitBuff_PegLeg.generated.h"

UCLASS(Blueprintable)
class UOutfitBuff_PegLeg : public UBuffEffect {
    GENERATED_BODY()
public:
    UOutfitBuff_PegLeg();
private:
    UFUNCTION(BlueprintCallable)
    void OnInflictDamage(FAshenDamage& AshenDamage);
    
};

