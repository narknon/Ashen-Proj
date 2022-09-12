#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UISelectableMenuSlot.generated.h"

class UUIPhase2MenuTab;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUISelectableMenuSlot : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2MenuTab* OwningMenuTab;
    
    UUISelectableMenuSlot();
    UFUNCTION(BlueprintCallable)
    void ManuallyOverrideMenuTabParent(UUIPhase2MenuTab* ParentOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesOwningMenuTabHaveFocus() const;
    
};

