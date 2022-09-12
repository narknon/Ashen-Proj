#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TravelPoint.generated.h"

class AHero;
class AWorldTravelPoint;

UCLASS(Blueprintable)
class ATravelPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AWorldTravelPoint> PairedWorldTravelPoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
public:
    ATravelPoint();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTeleportHeroTo(AHero* Hero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGuid() const;
    
};

