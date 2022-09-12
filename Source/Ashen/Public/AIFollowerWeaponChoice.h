#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIFollowerWeaponChoice.generated.h"

class UItemWeapon;

USTRUCT(BlueprintType)
struct ASHEN_API FAIFollowerWeaponChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlayerMaxHealthRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTwoHanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UItemWeapon> WeaponClass;
    
    FAIFollowerWeaponChoice();
};

