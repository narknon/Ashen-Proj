#pragma once
#include "CoreMinimal.h"
#include "AttackActionRoot.h"
#include "AshenWeaponHitPair.h"
#include "Engine/DataTable.h"
#include "AIAttackDifficulty.h"
#include "Engine/EngineTypes.h"
#include "AIAttackActionBase.generated.h"

class AActor;
class UPrimitiveComponent;
class UItemAIWeapon;
class UItemAIShield;

UCLASS(Blueprintable)
class ASHEN_API AAIAttackActionBase : public AAttackActionRoot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAshenWeaponHitPair> EnabledWeaponHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGeoReboundEnabled;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 AttackMontagesPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AttackDescriptionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIAttackDifficulty AttackDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemAIWeapon* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemAIWeapon* OffHandWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemAIShield* OffHandShield;
    
public:
    AAIAttackActionBase();
    UFUNCTION(BlueprintCallable)
    void OnWeaponBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

