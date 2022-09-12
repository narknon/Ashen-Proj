#include "AshenEye.h"
#include "Components/SkeletalMeshComponent.h"

FRotator AAshenEye::GetTrackRotation() const {
    return FRotator{};
}

AAshenEye::AAshenEye() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->EyeBoneName = TEXT("ashen_eye_eyeball");
    this->EyeTrackPitchLimit = 45.00f;
    this->EyeTrackYawLimit = 45.00f;
    this->bForceVisible = false;
    this->EyeRockOverlayMesh = NULL;
    this->TrackTarget = NULL;
}

