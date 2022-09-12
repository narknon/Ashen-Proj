#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFeedbackInput.h"
#include "HeroFeedbackComponent.generated.h"

class UDataTable;
class UForceFeedbackEffect;
class UCurveVector;
class AAshenPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UHeroFeedbackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ForceFeedbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveVector* lastCameraShakeVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* lastForceFeedbackAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenPlayerController* PlayerController;
    
public:
    UHeroFeedbackComponent();
    UFUNCTION(BlueprintCallable)
    void FeedbackImpulseManual(UCurveVector* CameraShakeVector, UForceFeedbackEffect* ForceFeedbackAsset);
    
    UFUNCTION(BlueprintCallable)
    void FeedbackImpulse(EFeedbackInput FeedbackInput);
    
};

