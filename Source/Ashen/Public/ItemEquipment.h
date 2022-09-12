#pragma once
#include "CoreMinimal.h"
#include "ItemBase.h"
#include "EEquipmentState.h"
#include "UIStatBarData.h"
#include "ItemEquipment.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API UItemEquipment : public UItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquippedSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnequippedSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UnequipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesTwoHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentState CurrentState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGhostState;
    
public:
    UItemEquipment();
    UFUNCTION(BlueprintCallable)
    void SetState(EEquipmentState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnequip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStore();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHolstered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEquipmentStateChange(EEquipmentState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipmentState GetState();
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

