#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "AttackTransitionRules.h"
#include "AttackSetTransitionMetaData.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASHEN_API UAttackSetTransitionMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackTransitionRules> TransitionRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AttackSetMontage;
    
    UAttackSetTransitionMetaData();
    UFUNCTION(BlueprintCallable)
    void RefreshTransitionRules() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetTranstionRulesWithSubStr(const FString& SubStr, TArray<FAttackTransitionRules>& Container) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetNumTranstionRulesWithSubStr(const FString& SubStr) const;
    
};

