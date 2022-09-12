#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAICombatDesire.h"
#include "BTD_HasCombatDesire.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasCombatDesire : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAICombatDesire CombatDesire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAICombatDesire> OrCombatDesire;
    
    UBTD_HasCombatDesire();
};

