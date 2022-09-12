#pragma once
#include "CoreMinimal.h"
#include "AshenWeaponHitPair.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAshenWeaponHitPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* FromActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HitActorRef;
    
    ASHEN_API FAshenWeaponHitPair();
};

