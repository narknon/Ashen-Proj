#include "AISpawnSoGAmara.h"

void AAISpawnSoGAmara::OnDamageTaken(const FAshenDamage& Damage) {
}

AAISpawnSoGAmara::AAISpawnSoGAmara() {
    this->ShadowOfGodLink = NULL;
    this->IntroMarker = NULL;
    this->IntroTrigger = NULL;
    this->SpawnIdleLoop = NULL;
    this->DistFromFollowHeroBeforeRemovingHealthBar = 1500.00f;
    this->AIClassRef = NULL;
}

