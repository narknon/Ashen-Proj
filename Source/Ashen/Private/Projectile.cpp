#include "Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"

class UParticleSystem;
class AActor;
class UPrimitiveComponent;
class ACreature;

void AProjectile::PlayTrailEffect(UParticleSystem* EffectsSystem) {
}

void AProjectile::PlayBloodTrailEffect(UParticleSystem* EffectsSystem) {
}

void AProjectile::OnSkeletalMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AProjectile::OnProjectileStop(const FHitResult& HitResult) {
}

void AProjectile::OnFadeOutComplete_Implementation() {
}

void AProjectile::OnEmbedded_Implementation(ACreature* Creature) {
}

void AProjectile::AddIgnoreActor(AActor* IgnoreActor) {
}

AProjectile::AProjectile() {
    this->BloodTrailEffect = NULL;
    this->ProjectileBreakEffect = NULL;
    this->AttackTrailAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("AttackTrailAttachment"));
    this->FlyingTrailAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("FlyingTrailAttachment"));
    this->ProjectileTrailEffectRef = NULL;
    this->ProjectileTrailEffect = NULL;
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->BrokenSkeletalMesh = NULL;
    this->GravityFalloffCurve = NULL;
    this->bIsDamagingActive = true;
    this->bIsFadingOut = false;
    this->FadeOutTime = 1.00f;
    this->TimeSpentFadingOut = 0.00f;
    this->BleedEffectTime = 3.00f;
    this->TimeSpentBleeding = 0.00f;
    this->FadeOutAlpha = 1.00f;
    this->FadeOutCurve = NULL;
    this->EmbedLength = 70.00f;
    this->bCanEmbed = true;
    this->BrokenBoneName = TEXT("Broken");
    this->WaterTraceDistance = 500.00f;
    this->OnStopNoiseRadius = 1000.00f;
    this->bHasStopped = false;
    this->HitEffect = NULL;
    this->AkAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    this->PhysicalMaterialDataTable = NULL;
    this->AkMaterialSwitchGroup = TEXT("Material");
    this->ImpactAudioEvent = NULL;
    this->StartFlyingAudioEvent = NULL;
    this->StopFlyingAudioEvent = NULL;
}

