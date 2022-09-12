#include "AudioSpline.h"
#include "Components/SplineComponent.h"
#include "AkComponent.h"

void AAudioSpline::UpdateAudioComponentPosition(const FVector& ListenerLocation) {
}

AAudioSpline::AAudioSpline() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->AudioStopEvent = NULL;
    this->DisplacementThreshold = 200.00f;
}

