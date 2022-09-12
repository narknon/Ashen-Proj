#include "UIDynamicSpawningMenu.h"

class ACreature;

void UUIDynamicSpawningMenu::OnClassesLoadedCallback() {
}

int32 UUIDynamicSpawningMenu::DerivedClasses(TSoftClassPtr<ACreature> ClassRef) {
    return 0;
}

UUIDynamicSpawningMenu::UUIDynamicSpawningMenu() {
    this->IsClassLoadAsyncInProgress = false;
}

