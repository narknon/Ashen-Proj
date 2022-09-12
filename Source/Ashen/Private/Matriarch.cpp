#include "Matriarch.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/BoxComponent.h"

bool AMatriarch::TryTriggerStageTwoMusic() {
    return false;
}

bool AMatriarch::TryTriggerStageThreeMusic() {
    return false;
}

bool AMatriarch::TryTriggerStageOneMusic() {
    return false;
}




void AMatriarch::SpawnFootSlamEffectActorAtSocketLocation(FName _LocationSocket) {
}

void AMatriarch::SpawnFootSlamEffectActor(FVector _Location) {
}

void AMatriarch::SpawnBoneBleedAbility() {
}

void AMatriarch::SetIsInPhaseTwo(bool NewValue) {
}

void AMatriarch::SetHasBoneWeaponEquipped(bool NewValue) {
}

void AMatriarch::SetFightState(EMatriarchFightState NewValue) {
}

void AMatriarch::ServerOnClientAttackedBone_Implementation(float Damage) {
}
bool AMatriarch::ServerOnClientAttackedBone_Validate(float Damage) {
    return true;
}


void AMatriarch::OnBoneKilled_Implementation() {
}

void AMatriarch::OnBoneDamaged_Implementation() {
}

EMatriarchFightState AMatriarch::GetFightState() const {
    return EMatriarchFightState::Uninitialised;
}

FVector AMatriarch::GetBoneWeaponCenterLocation() const {
    return FVector{};
}

void AMatriarch::ClientSpawnBoneBleed_Implementation() {
}

void AMatriarch::ClientOnBoneLanded_Implementation(FVector Location) {
}

void AMatriarch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMatriarch, BoneWeaponHealth);
    DOREPLIFETIME(AMatriarch, bIsBoneBeingAttacked);
    DOREPLIFETIME(AMatriarch, bHasBoneEquipped);
    DOREPLIFETIME(AMatriarch, bIsInPhaseTwo);
    DOREPLIFETIME(AMatriarch, bIsBoneDead);
}

AMatriarch::AMatriarch() {
    this->MatriarchSpawner = NULL;
    this->ScalingLockOnDistance = 0.00f;
    this->ScalingLockOnLimit = 1.00f;
    this->FootPlantEffectActor = NULL;
    this->StageTwoMusicHealthThreshold = 0.40f;
    this->StageThreeMusicHealthThreshold = 0.25f;
    this->StaffWeapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("StaffWeapon"));
    this->BoneWeapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BoneWeapon"));
    this->BoneWeaponMeshSwap = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("BoneWeaponMeshSwap"));
    this->LeftLegMovementCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftLegMovementCollider"));
    this->LeftUpperLegMovementCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftUpperLegMovementCollider"));
    this->RightLegMovementCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightLegMovementCollider"));
    this->RightUpperLegMovementCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightUpperLegMovementCollider"));
    this->HeadCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HeadCollider"));
    this->BodyCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BodyCollider"));
    this->LeftArmCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftArmCollider"));
    this->RightArmCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightArmCollider"));
    this->LeftUpperArmCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftUpperArmCollider"));
    this->RightUpperArmCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightUpperArmCollider"));
    this->BoneWeaponAttackableCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BoneWeaponAttackableCollider"));
    this->ChargeCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ChargeCollider"));
    this->LeftFootCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftFootCollider"));
    this->RightFootCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("RightFootCollider"));
    this->BoneWeaponCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoneWeaponCollider"));
    this->StaffWeaponCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("StaffWeaponCollider"));
    this->IntroSitIdleLoopUnawareMontage = NULL;
    this->IntroSitIdleExitMontage = NULL;
    this->IntroSitIdleLoopAwareMontage = NULL;
    this->DesireWeightGainPerSecond = 0.05f;
    this->DesireWeightDecayPerSecond = 0.20f;
    this->MaxDistanceFromFeet = 600.00f;
    this->MaxDistanceFromBone = 2500.00f;
    this->MaxTimeBeforeBonePickup = 1500.00f;
    this->BaseActionTurnToRate = 1.00f;
    this->HeadDamageTakenMultiplier = 1.00f;
    this->ArmsDamageTakenMultiplier = 1.00f;
    this->BodyDamageTakenMultiplier = 1.00f;
    this->LegsDamageTakenMultiplier = 1.00f;
    this->PhaseOneDamageReductionMultiplier = 1.00f;
    this->InitialBoneThrowSpeed = 1500.00f;
    this->MaxAngleForBackstepping = 170.00f;
    this->MaxBoneThrowDistance = 0.00f;
    this->BoneWeaponMaxHealth = 400.00f;
    this->BonePickupCorrectionLerpSpeed = 10.00f;
    this->TimeBetweenBleeds = 1.00f;
    this->BleedTimeVariance = 0.25f;
    this->BoneBleedDist = 1000.00f;
    this->BoneBleedActor = NULL;
    this->BoneLerpCurve = NULL;
    this->BoneWeaponHealth = 0.00f;
    this->bIsBoneBeingAttacked = false;
    this->bHasBoneEquipped = true;
    this->bIsInPhaseTwo = false;
    this->bIsBoneDead = false;
    this->bWantsToRun = false;
    this->bDrawDebugOverride = false;
    this->DeathSequence = NULL;
}

