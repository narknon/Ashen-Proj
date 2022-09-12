#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "EPlayState.h"
#include "AimAction.generated.h"

class UItemThrownWeapon;
class AHero;
class AAshenPlayerController;

UCLASS(Blueprintable)
class ASHEN_API AAimAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemThrownWeapon* ThrownWeapon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenPlayerController* AshenController;
    
public:
    AAimAction();
    UFUNCTION(BlueprintCallable)
    void Throw();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayStateChanged(EPlayState OldState, EPlayState NewState);
    
    UFUNCTION(BlueprintCallable)
    void EndAim();
    
};

