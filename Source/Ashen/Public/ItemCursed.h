#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemBase.h"
#include "UIStatBarData.h"
#include "ItemCursed.generated.h"

class UBuffEffect;

UCLASS(Blueprintable)
class UItemCursed : public UItemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UBuffEffect>> BuffEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBuffEffect*> AppliedBuffEffects;
    
public:
    UItemCursed();
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

