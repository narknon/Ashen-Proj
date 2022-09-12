#include "GefnsBlessingRelic.h"

class AHero;

void UGefnsBlessingRelic::UpdateMaterials_Implementation() {
}

void UGefnsBlessingRelic::OnMaskStageBuiltFX_Implementation(AHero* Player, int32 NewStage) {
}

void UGefnsBlessingRelic::OnMaskBrokenFX_Implementation(AHero* Player) {
}

void UGefnsBlessingRelic::OnHeroDamageRecieved(const FAshenDamage& Damage) {
}

void UGefnsBlessingRelic::ModifyHitDamageTaken(FAshenDamage& Damage) {
}

float UGefnsBlessingRelic::GetMaterialFadePercent() const {
    return 0.0f;
}

TArray<FUIStatBarData> UGefnsBlessingRelic::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UGefnsBlessingRelic::UGefnsBlessingRelic() {
    this->StageOneDamageTakenMultiplier = 0.90f;
    this->StageTwoDamageTakenMultiplier = 0.50f;
    this->StageThreeDamageTakenMultiplier = 0.00f;
    this->StageOneRebuildTime = 300.00f;
    this->StageTwoRebuildTime = 300.00f;
    this->StageThreeRebuildTime = 300.00f;
    this->RafetSpawnerClass = NULL;
    this->MaskMeshStageOne = NULL;
    this->MaskMeshStageTwo = NULL;
    this->MaskMeshStageThree = NULL;
    this->MaskAttachSocketName = TEXT("HairSocket");
    this->GefnMaskItem = NULL;
    this->RafetSpawner = NULL;
    this->FxMaterialFadeCurrent = 0.00f;
    this->MeshDynamicMaterialInstance = NULL;
    this->FxMaskBuild = NULL;
    this->SpawnedMaskEmitter = NULL;
}

