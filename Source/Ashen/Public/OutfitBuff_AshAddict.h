#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "OutfitBuff_AshAddict.generated.h"

UCLASS(Blueprintable)
class UOutfitBuff_AshAddict : public UBuffEffect {
    GENERATED_BODY()
public:
    UOutfitBuff_AshAddict();
private:
    UFUNCTION(BlueprintCallable)
    void OnInflictDamage(FAshenDamage& AshenDamage, bool& TestSample);
    
};

