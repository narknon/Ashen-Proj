#pragma once
#include "CoreMinimal.h"
#include "CraftingComponent.h"
#include "EItemType.h"
#include "UpgradeCraftingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UUpgradeCraftingComponent : public UCraftingComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> UpgradableTypes;
    
public:
    UUpgradeCraftingComponent();
};

