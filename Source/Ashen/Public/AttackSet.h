#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttackEntry.h"
#include "AttackSet.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAttackSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackEntry> LightAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackEntry> HeavyAttacks;
    
    UAttackSet();
};

