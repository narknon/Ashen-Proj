#pragma once
#include "CoreMinimal.h"
#include "StoryHumanoid.h"
#include "Scion_SoG.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AScion_SoG : public AStoryHumanoid {
    GENERATED_BODY()
public:
    AScion_SoG();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMissleHitSoG();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFleaEchoRaised();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFireMissleAtSoG();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFightOver();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChargeMissiles();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreakShield();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoRaiseFleaEcho();
    
};

