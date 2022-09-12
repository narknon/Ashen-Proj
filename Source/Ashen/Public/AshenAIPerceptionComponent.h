#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EAIPerceptionSense.h"
#include "AIPerceptionSenseRules.h"
#include "AshenDamage.h"
#include "AshenAIPerceptionComponent.generated.h"

class AAIHeroFollower;
class UPerceivedCreature;
class UAnimMontage;
class ACreature;
class AActor;
class UVitalAttributes;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenAIPerceptionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LOSConeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LOSConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LOSPeripheralConeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LOSPeripheralConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIPerceptionSense, FAIPerceptionSenseRules> SenseRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetainLostPerceivedTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetainForcedPerceivedTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetainLostPerceivedMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmotingAtUsConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyPerceiveHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyPerceiveAIInMyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPerceiveDeadCreatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSeeThroughWalls;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationMinDistanceForNewLoSCheck;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPerceivedCreature*> PerceivedCreatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* MyCreature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIHeroFollower* MyHeroFollower;
    
public:
    UAshenAIPerceptionComponent();
    UFUNCTION(BlueprintCallable)
    void UpdatePerception();
    
    UFUNCTION(BlueprintCallable)
    bool PeekAtCreature(UPerceivedCreature* PeekCreature, bool bTraceOnly, const FVector& PeekConeDirection, const FVector& PeekOffset, float PeekConeLength, float PeekConeHalfAngle);
    
    UFUNCTION(BlueprintCallable)
    void OnEmotePerceived(ACreature* Creature, UAnimMontage* Emote);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(AActor* Parent, UVitalAttributes* Source);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FAshenDamage& Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnDamagePerceived(const FAshenDamage& Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackPerceived(ACreature* Creature);
    
    UFUNCTION()
    void GetPerceivedHostiles(TArray<TWeakObjectPtr<UPerceivedCreature>>& Hostiles) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UPerceivedCreature*> GetPerceivedCreatures() const;
    
    UFUNCTION()
    TWeakObjectPtr<UPerceivedCreature> GetPerceivedCreature(const ACreature* Creature) const;
    
    UFUNCTION()
    void GetPerceivedAllies(TArray<TWeakObjectPtr<UPerceivedCreature>>& Allies) const;
    
    UFUNCTION(BlueprintCallable)
    bool DoesPerceiveAnyHostileHero() const;
    
};

