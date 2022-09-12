#pragma once
#include "CoreMinimal.h"
#include "UIPhase2Menu.h"
#include "EItemType.h"
#include "UObject/NoExportTypes.h"
#include "EItemQuality.h"
#include "UIInventoryMenu.generated.h"

class UCraftingComponent;
class UUIStatusLootBox;
class ULootBoxComponent;
class UItemTable;
class UItemBase;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIInventoryMenu : public UUIPhase2Menu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInLootBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCraftingComponent* CraftingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemQuality, FLinearColor> TierColours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULootBoxComponent* LootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIStatusLootBox* LootUIRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemTable*> LootBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> ItemTypes;
    
    UUIInventoryMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetItemTextColour(UItemBase* Item);
    
};

