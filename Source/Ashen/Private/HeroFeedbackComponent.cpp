#include "HeroFeedbackComponent.h"

class UForceFeedbackEffect;
class UCurveVector;

void UHeroFeedbackComponent::FeedbackImpulseManual(UCurveVector* CameraShakeVector, UForceFeedbackEffect* ForceFeedbackAsset) {
}

void UHeroFeedbackComponent::FeedbackImpulse(EFeedbackInput FeedbackInput) {
}

UHeroFeedbackComponent::UHeroFeedbackComponent() {
    this->ForceFeedbackData = NULL;
    this->lastCameraShakeVector = NULL;
    this->lastForceFeedbackAsset = NULL;
    this->PlayerController = NULL;
}

