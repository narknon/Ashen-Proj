#include "CraftingComponent.h"
#include "Templates/SubclassOf.h"

class AHero;
class UAshenUserWidget;
class UItemBase;
class UInteraction;
class UObject;
class ACreature;

ECraftingResult UCraftingComponent::TryPerformCraft_Implementation(UItemBase* Item) {
    return ECraftingResult::FailedNoIngredients;
}

ECraftingResult UCraftingComponent::TryCraftItem(UItemBase* Item, const FRecipe& Recipe, bool TestAbleToCraft) {
    return ECraftingResult::FailedNoIngredients;
}

bool UCraftingComponent::TalismanRemovalType(UItemBase* Item, bool& TalismanType, bool& AbleToUnequip) {
    return false;
}

UAshenUserWidget* UCraftingComponent::OpenCraftingMenuUI(AHero* Hero) {
    return NULL;
}

void UCraftingComponent::InteractionCallback(UInteraction* Source, ACreature* Target) {
}

FRecipe UCraftingComponent::GetRecipe_Implementation(UItemBase* Item) {
    return FRecipe{};
}

TArray<TSubclassOf<UItemBase>> UCraftingComponent::GetListOfNewItemClasses_Implementation() {
    return TArray<TSubclassOf<UItemBase>>();
}

TArray<UInteraction*> UCraftingComponent::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}

FIngredientDetails UCraftingComponent::GetIngredientDetails(TSubclassOf<UItemBase> Ingredient) {
    return FIngredientDetails{};
}

TArray<FUIStatBarData> UCraftingComponent::GetCraftingStats_Implementation(UItemBase* Item) {
    return TArray<FUIStatBarData>();
}

TArray<UItemBase*> UCraftingComponent::GetCraftableItems_Implementation(int32 TabIndex) {
    return TArray<UItemBase*>();
}

void UCraftingComponent::CloseCraftingMenuUI() {
}

bool UCraftingComponent::CanCraft_Implementation(UItemBase* Item) {
    return false;
}

UCraftingComponent::UCraftingComponent() {
    this->CraftingTabTitles.AddDefaulted(1);
    this->CraftingMenuClass = NULL;
    this->InventoryTabToOpen = NULL;
    this->InventoryMenuNumber = 0;
    this->CraftingMenu = NULL;
    this->bDisableInteraction = false;
    this->bUseCustomInteractPromptMessage = false;
    this->CraftSuccessAudioEvent = NULL;
    this->Interaction = NULL;
}

