#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnBase.h"
#include "AshenDamage.h"
#include "AISpawnSoGAmara.generated.h"

class UAnimMontage;
class AAINpcFollower;
class AAITrigger;
class AAISpawnShadowOfGod;
class AAIContextMarker;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnSoGAmara : public AAISpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAINpcFollower> AIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAISpawnShadowOfGod* ShadowOfGodLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIContextMarker* IntroMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAITrigger* IntroTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SpawnIdleLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistFromFollowHeroBeforeRemovingHealthBar;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAINpcFollower> AIClassRef;
    
public:
    AAISpawnSoGAmara();
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FAshenDamage& Damage);
    
};

