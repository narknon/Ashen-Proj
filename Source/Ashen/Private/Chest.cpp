#include "Chest.h"
#include "ItemTable.h"

void AChest::ClearEntireChest() {
}

AChest::AChest() {
    this->ChestTable = CreateDefaultSubobject<UItemTable>(TEXT("EquipmentTable"));
}

