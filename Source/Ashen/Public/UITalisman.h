#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UITalisman.generated.h"

class UItemTalismanBase;
class UImage;
class UUITalismans;
class UButton;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUITalisman : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemTalismanBase* AttachedTalisman;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUITalismans* OwnerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TalismanIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MajorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanShowActiveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActiveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockedStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetEmptyLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetEmptyLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* WidgetButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetLockIcon;
    
    UUITalisman();
    UFUNCTION(BlueprintCallable)
    void SetTalisman(UItemTalismanBase* Talisman, bool Animate);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool Selected);
    
    UFUNCTION(BlueprintCallable)
    void SetFill(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySetTalismanAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRemoveTalismanAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFocusAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDeFocusAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnClick();
    
    UFUNCTION(BlueprintCallable)
    void ConfigureWidgetsButton(UImage* Empty, UImage* EmptyLocked, UImage* EmptyLock, UImage* Equipped, UImage* Icon, UImage* Selected, UImage* Fill, UButton* Button, UImage* Lock);
    
};

