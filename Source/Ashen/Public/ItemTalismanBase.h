#pragma once
#include "CoreMinimal.h"
#include "ItemBase.h"
#include "ETalismanType.h"
#include "ETalismanTier.h"
#include "UIStatBarData.h"
#include "ItemTalismanBase.generated.h"

class AHero;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanBase : public UItemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETalismanTier TalismanTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETalismanType TalismanType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DebugOutput;
    
public:
    UItemTalismanBase();
    UFUNCTION(BlueprintCallable)
    void TalismanUnequipped();
    
    UFUNCTION(BlueprintCallable)
    void TalismanInternalStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void TalismanEquipped(AHero* _Hero);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTalismanUnequipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTalismanEquipped();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsTalismanEquiped();
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

