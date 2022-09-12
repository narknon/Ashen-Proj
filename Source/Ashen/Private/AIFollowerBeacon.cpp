#include "AIFollowerBeacon.h"
#include "Components/BillboardComponent.h"

AAIFollowerBeacon::AAIFollowerBeacon() {
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardVisual"));
    this->OverrideBehaviorTree = NULL;
    this->BeaconRadius = 30.00f;
    this->bSnapToGround = true;
    this->bRestOnGround = true;
    this->bForceDrawDebugInEditor = true;
    this->bForceDrawDebugInPIE = false;
    this->bIgnoreMenuSetting = false;
    this->bWhitelistRequireAll = false;
    this->bBlacklistRequireAll = false;
    this->bNeverDespawn = false;
    this->bIgnoreWeaponPool = false;
    this->bNoWaterBottle = false;
    this->SpawnManager = NULL;
    this->GameState = NULL;
}

