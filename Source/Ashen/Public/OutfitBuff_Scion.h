#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "OutfitBuff_Scion.generated.h"

UCLASS(Blueprintable)
class UOutfitBuff_Scion : public UBuffEffect {
    GENERATED_BODY()
public:
    UOutfitBuff_Scion();
private:
    UFUNCTION(BlueprintCallable)
    void OnInflictDamage(FAshenDamage& AshenDamage, bool& TestSample);
    
};

