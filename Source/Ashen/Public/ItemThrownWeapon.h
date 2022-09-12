#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemWeapon.h"
#include "UIStatBarData.h"
#include "ItemThrownWeapon.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ASHEN_API UItemThrownWeapon : public UItemWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* AimingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCharges;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousChargeAmount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimSocketOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PendingDelete;
    
public:
    UItemThrownWeapon();
    UFUNCTION(BlueprintCallable)
    bool SetupAndCheckRecentChargesChange();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUIStackAmountInternal();
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanWeaponAttack(bool& _b);
    
};

