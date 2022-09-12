#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "TravelPointAshenEventData.generated.h"

class AActor;
class AHero;
class AWorldTravelPoint;

UCLASS(Blueprintable)
class ASHEN_API UTravelPointAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldTravelPoint* TravelPointUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* UsingHero;
    
public:
    UTravelPointAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetUsedTravelPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetHero();
    
};

