#include "QuestPoint.h"

class AActor;
class UPrimitiveComponent;
class UAshenEventData;
class AQuestPoint;

void AQuestPoint::SetShattered(bool _Shattered, float RelitiveShatterHeight) {
}

void AQuestPoint::OnNPCOrQuestChanged(UAshenEventData* EventData) {
}

void AQuestPoint::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AQuestPoint::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AQuestPoint::GetShattered() {
    return false;
}

AQuestPoint* AQuestPoint::GetMapPosition(bool bForCompass) {
    return NULL;
}

bool AQuestPoint::CouldBeActiveForNPC(ENpcType Type) {
    return false;
}

AQuestPoint::AQuestPoint() {
    this->bIgnoreMapPositionOverrideForCompass = false;
    this->AreaRadius = 4000.00f;
    this->TownCompassDisplay = false;
    this->bMakesQuestZone = true;
    this->ShatterEffect = NULL;
    this->ShatterParticleSystem = NULL;
    this->Shattered = false;
    this->ActivePoint = false;
    this->ActiveNPCQuestline = NULL;
}

