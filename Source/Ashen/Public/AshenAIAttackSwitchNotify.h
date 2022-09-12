#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/DataTable.h"
#include "AshenAIAttackSwitchNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ASHEN_API UAshenAIAttackSwitchNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> PossibleAttacks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NotifyTriggerWeight;
    
public:
    UAshenAIAttackSwitchNotify();
};

