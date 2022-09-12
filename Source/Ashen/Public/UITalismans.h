#pragma once
#include "CoreMinimal.h"
#include "UIStatus.h"
#include "UITalismans.generated.h"

class UUIItemGridSlot;
class UImage;
class AHero;
class UUITalisman;
class UButton;
class UItemTalismanBase;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUITalismans : public UUIStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUITalisman* CurrentSlot;
    
    UPROPERTY(EditAnywhere)
    uint8 CurrentTalismanSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UImage*> WidgetIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UButton*> TalismanButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UButton*> PrimaryTalismanButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUITalisman*> TalismanSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* WidgetTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* WidgetDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
    UUITalismans();
    UFUNCTION(BlueprintCallable)
    void SelectTalisman(UUITalisman* TalismanSlot);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTalismanFromSlot(UUITalisman* SlotData);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTalisman(UItemTalismanBase* Talisman);
    
    UFUNCTION(BlueprintCallable)
    void PostConstruct();
    
    UFUNCTION(BlueprintCallable)
    void PopulateTalismanSlots(bool Animate);
    
    UFUNCTION(BlueprintCallable)
    void PopulateTalismanPrimarySlots(TArray<UImage*> SlotImages);
    
    UFUNCTION(BlueprintCallable)
    bool HasTalisman(UItemTalismanBase* Talisman);
    
    UFUNCTION(BlueprintCallable)
    UUITalisman* GetFreeSlot(UItemTalismanBase* Talisman);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Exit();
    
    UFUNCTION(BlueprintCallable)
    bool AddTalismanToSlot(UUITalisman* SlotData, UItemTalismanBase* Talisman);
    
    UFUNCTION(BlueprintCallable)
    void ActionGridSlot(UUIItemGridSlot* SlotData, bool bActionSlot);
    
};

