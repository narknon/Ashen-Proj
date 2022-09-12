#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathToMemory.generated.h"

class AAshenAIControllerBase;
class UAshenAICombatComponent;
class ACreature;
class UAIAshenPathMoveRequest;
class AAIHumanoid;
class UAshenMovementComponent;
class UAshenAIPerceptionComponent;
class AAction;
class UAIMovementManoeuvre;
class UAIWeaponAttack;

USTRUCT(BlueprintType)
struct FBTT_AshenPathToMemory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UAIAshenPathMoveRequest> MoveRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* Creature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIHumanoid* Humanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAICombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenMovementComponent* MoveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAshenAIControllerBase* ThisController;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AAction> MovementAction;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UAIMovementManoeuvre> MovementManoeuvre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* TargetCreatureSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIWeaponAttack* DesiredAttackSnapshot;
    
    ASHEN_API FBTT_AshenPathToMemory();
};

