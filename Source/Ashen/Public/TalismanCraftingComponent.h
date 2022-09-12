#pragma once
#include "CoreMinimal.h"
#include "CreationCraftingComponent.h"
#include "TalismanCraftingComponent.generated.h"

class UItemTalismanBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UTalismanCraftingComponent : public UCreationCraftingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UItemTalismanBase>> AdditionalDlcTalismanReferences;
    
public:
    UTalismanCraftingComponent();
};

