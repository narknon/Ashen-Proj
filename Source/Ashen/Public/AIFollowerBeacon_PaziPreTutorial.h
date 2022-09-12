#pragma once
#include "CoreMinimal.h"
#include "AIFollowerBeacon.h"
#include "AIFollowerBeacon_PaziPreTutorial.generated.h"

class AAIContextMarker;
class UAnimMontage;
class AAIHeroFollower;

UCLASS(Blueprintable)
class ASHEN_API AAIFollowerBeacon_PaziPreTutorial : public AAIFollowerBeacon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroSitLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroSitEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIContextMarker* WatchHornMovePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIContextMarker* WatchHornMovePlaneTrigger;
    
    AAIFollowerBeacon_PaziPreTutorial();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowQuestMarker(AAIHeroFollower* Pazi);
    
};

