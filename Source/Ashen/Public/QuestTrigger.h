#pragma once
#include "CoreMinimal.h"
#include "ThickBoxTrigger.h"
#include "Engine/EngineTypes.h"
#include "QuestTrigger.generated.h"

class AHero;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASHEN_API AQuestTrigger : public AThickBoxTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 QuestTriggerByte;
    
    AQuestTrigger();
    UFUNCTION(BlueprintCallable)
    void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeroBeginOverlap(AHero* Hero);
    
};

