#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "ItemTalismanRecluse.generated.h"

class AAshenGameState;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanRecluse : public UItemTalismanBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameState* GameState;
    
public:
    UItemTalismanRecluse();
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerActionAttempt(bool& bCanSolo);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

