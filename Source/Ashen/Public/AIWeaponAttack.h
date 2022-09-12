#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "AIWeaponAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAIWeaponAttack : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Description;
    
public:
    UAIWeaponAttack();
};

