#pragma once
#include "CoreMinimal.h"
#include "ItemWeaponBase.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "ItemAIWeapon.generated.h"

class UAIEvade;
class UAnimMontage;
class APhysicalItem;
class UAIWeaponAttack;

UCLASS(Blueprintable)
class ASHEN_API UItemAIWeapon : public UItemWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AvailableAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AvailableEvasions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadMontage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMeleeWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRangedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RangeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIWeaponAttack*> Attacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIEvade*> Evades;
    
public:
    UItemAIWeapon();
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APhysicalItem* MakePhysicalItem();
    
    UFUNCTION(BlueprintCallable)
    void EnableWeaponCollision(const FString& ColliderKey);
    
    UFUNCTION(BlueprintCallable)
    void DisableWeaponCollision(const FString& ColliderKey);
    
};

