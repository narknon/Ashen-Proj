#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "AreaData.h"
#include "AreaEnteredEventData.generated.h"

class AHero;

UCLASS(Blueprintable)
class ASHEN_API UAreaEnteredEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AHero> Hero;
    
public:
    UAreaEnteredEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewlyDiscovered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeroLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetHero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAreaName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAreaData GetAreaData();
    
};

