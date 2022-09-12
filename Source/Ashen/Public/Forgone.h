#pragma once
#include "CoreMinimal.h"
#include "AIHumanoid.h"
#include "Forgone.generated.h"

class ACreature;
class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AForgone : public AAIHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> SpawnAmbushMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> SpawnAmbushEarlyEndMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AshCoverCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AshCoverMatParaName;
    
    AForgone();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeLockedOnto(const ACreature* Observer) const;
    
};

