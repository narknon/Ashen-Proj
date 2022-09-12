#include "ItemRiakRelic.h"




void UItemRiakRelic::OnDamageDealt(const FAshenDamage& Damage) {
}


UItemRiakRelic::UItemRiakRelic() {
    this->MaskItem = NULL;
    this->MaskAttachSocketName = TEXT("HairSocket");
    this->MaskMesh = NULL;
    this->LifeStealWeaponFx = NULL;
    this->BuffEffectClass = NULL;
    this->ActiveBuffEffect = NULL;
    this->OnHitSoundEffect = NULL;
}

