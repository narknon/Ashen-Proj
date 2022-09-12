#include "ItemTableChangedAshenEventData.h"

class UItemTable;

bool UItemTableChangedAshenEventData::WasRemoved() {
    return false;
}

bool UItemTableChangedAshenEventData::WasAdded() {
    return false;
}

UItemTable* UItemTableChangedAshenEventData::GetTable() {
    return NULL;
}

UItemTableChangedAshenEventData::UItemTableChangedAshenEventData() {
    this->Table = NULL;
}

