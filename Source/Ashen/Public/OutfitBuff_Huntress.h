#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "OutfitBuff_Huntress.generated.h"

UCLASS(Blueprintable)
class UOutfitBuff_Huntress : public UBuffEffect {
    GENERATED_BODY()
public:
    UOutfitBuff_Huntress();
private:
    UFUNCTION(BlueprintCallable)
    void OnInflictDamage(FAshenDamage& AshenDamage, bool& TestSample);
    
};

