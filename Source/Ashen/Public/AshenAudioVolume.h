#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "QuestConditionalAkPair.h"
#include "QuestConditionalAkTrigger.h"
#include "Engine/EngineTypes.h"
#include "AshenAudioVolume.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASHEN_API AAshenAudioVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestConditionalAkPair> AkStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestConditionalAkPair> AkSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestConditionalAkTrigger> AkTriggers;
    
public:
    AAshenAudioVolume();
private:
    UFUNCTION(BlueprintCallable)
    void OnBrushEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBrushBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

