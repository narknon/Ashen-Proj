#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/BoxComponent.h"
#include "InteractionSource.h"
#include "ECraftingResult.h"
#include "Recipe.h"
#include "IngredientDetails.h"
#include "UIStatBarData.h"
#include "CraftingComponent.generated.h"

class UUIPhase2MenuTab;
class UAshenUserWidget;
class AHero;
class UAkAudioEvent;
class UInteraction;
class ACreature;
class UObject;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UCraftingComponent : public UBoxComponent, public IInteractionSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> CraftingTabTitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> CraftingMenuClass;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AHero> HeroRef;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIPhase2MenuTab> InventoryTabToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InventoryMenuNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenUserWidget* CraftingMenu;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomInteractPromptMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomInteractMessageKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CraftSuccessAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Interaction;
    
public:
    UCraftingComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECraftingResult TryPerformCraft(UItemBase* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    ECraftingResult TryCraftItem(UItemBase* Item, const FRecipe& Recipe, bool TestAbleToCraft);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool TalismanRemovalType(UItemBase* Item, bool& TalismanType, bool& AbleToUnequip);
    
public:
    UFUNCTION(BlueprintCallable)
    UAshenUserWidget* OpenCraftingMenuUI(AHero* Hero);
    
private:
    UFUNCTION(BlueprintCallable)
    void InteractionCallback(UInteraction* Source, ACreature* Target);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRecipe GetRecipe(UItemBase* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TSubclassOf<UItemBase>> GetListOfNewItemClasses();
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetInteractions_Implementation(ACreature* Target, UObject* Context);
    
public:
    UFUNCTION(BlueprintCallable)
    FIngredientDetails GetIngredientDetails(TSubclassOf<UItemBase> Ingredient);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FUIStatBarData> GetCraftingStats(UItemBase* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UItemBase*> GetCraftableItems(int32 TabIndex);
    
    UFUNCTION(BlueprintCallable)
    void CloseCraftingMenuUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanCraft(UItemBase* Item);
    
    
    // Fix for true pure virtual functions not being implemented
};

