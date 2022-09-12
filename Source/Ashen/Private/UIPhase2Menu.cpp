#include "UIPhase2Menu.h"
#include "Templates/SubclassOf.h"

class UUIPhase2MenuTab;
class AHero;


void UUIPhase2Menu::SetLastUsedFocusValue(UClass* Class, int32 Value) {
}


void UUIPhase2Menu::RecieveInteractionInput(const AHero* Hero, EInputUIEventTypes PressEvent, EInputPressType PressType) {
}

void UUIPhase2Menu::RecieveControlInput(const FVector2D& Input) {
}


int32 UUIPhase2Menu::GetLastUsedFocusValue(UClass* Class, bool& HadValue) {
    return 0;
}

UUIPhase2MenuTab* UUIPhase2Menu::GetLastOpenTabOfClass(TSubclassOf<UUIPhase2MenuTab> Class) {
    return NULL;
}

UUIPhase2Menu::UUIPhase2Menu() {
    this->LateralFadeinDistance = 0.00f;
    this->LateralBaseTabDisplacement = 0.00f;
    this->LerpInTime = 0.00f;
    this->OverlapAlpha = 0.00f;
    this->TabScaleSize = 0.00f;
    this->PauseTabFadeins = false;
    this->PositionBlendFromClosed = NULL;
    this->PositionBlendToClosed = NULL;
    this->AlphaBlendFromClosed = NULL;
    this->AlphaBlendToClosed = NULL;
    this->AlphaBlendTempFadeOut = NULL;
    this->AlphaBlendTempFadeIn = NULL;
    this->bSwitchedFromMenuOnConstruct = false;
}

