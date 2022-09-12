#pragma once
#include "CoreMinimal.h"
#include "CraftingComponent.h"
#include "ENpcType.h"
#include "CreationCraftingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UCreationCraftingComponent : public UCraftingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType NpcType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTradeComponent;
    
public:
    UCreationCraftingComponent();
};

