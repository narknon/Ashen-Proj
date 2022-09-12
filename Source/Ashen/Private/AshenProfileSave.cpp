#include "AshenProfileSave.h"

class UAshenGameInstance;

void UAshenProfileSave::UnlockHardcoreMode() {
}

void UAshenProfileSave::SetMenuSetting(EMenuSettingValue SettingType, float Value) {
}

void UAshenProfileSave::SetGraphicsSetting(const FString& SettingName, float Value, bool MakeChoicePerminent) {
}

void UAshenProfileSave::SetDefualtProfileSettings() {
}

void UAshenProfileSave::SetCultureSetting(const FString& Culture) {
}

void UAshenProfileSave::NewGameResets() {
}

bool UAshenProfileSave::IsHardcoreModeUnlocked() {
    return false;
}

float UAshenProfileSave::GetMenuSetting(EMenuSettingValue SettingType) const {
    return 0.0f;
}

FString UAshenProfileSave::GetLastLoadedSlot() const {
    return TEXT("");
}

float UAshenProfileSave::GetGraphicsSetting(const FString& SettingName, bool& HadField, UAshenGameInstance* GameInstance_ForGettingDefualtValue, bool LastPerminentChoice) {
    return 0.0f;
}

bool UAshenProfileSave::GetDefualtUISettingValue(EUIOnOffSetting Setting) const {
    return false;
}

float UAshenProfileSave::GetDefualtMenuSettingValue(EMenuSettingValue Setting) const {
    return 0.0f;
}

FString UAshenProfileSave::GetCultureSetting() const {
    return TEXT("");
}

UAshenProfileSave::UAshenProfileSave() {
}

