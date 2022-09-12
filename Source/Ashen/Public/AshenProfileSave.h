#pragma once
#include "CoreMinimal.h"
#include "AshenSave.h"
#include "EMenuSettingValue.h"
#include "EUIOnOffSetting.h"
#include "AshenProfileSave.generated.h"

class UAshenGameInstance;

UCLASS(Blueprintable)
class ASHEN_API UAshenProfileSave : public UAshenSave {
    GENERATED_BODY()
public:
    UAshenProfileSave();
    UFUNCTION(BlueprintCallable)
    void UnlockHardcoreMode();
    
    UFUNCTION(BlueprintCallable)
    void SetMenuSetting(EMenuSettingValue SettingType, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphicsSetting(const FString& SettingName, float Value, bool MakeChoicePerminent);
    
    UFUNCTION(BlueprintCallable)
    void SetDefualtProfileSettings();
    
    UFUNCTION(BlueprintCallable)
    void SetCultureSetting(const FString& Culture);
    
    UFUNCTION(BlueprintCallable)
    void NewGameResets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHardcoreModeUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMenuSetting(EMenuSettingValue SettingType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLastLoadedSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGraphicsSetting(const FString& SettingName, bool& HadField, UAshenGameInstance* GameInstance_ForGettingDefualtValue, bool LastPerminentChoice);
    
    UFUNCTION(BlueprintCallable)
    bool GetDefualtUISettingValue(EUIOnOffSetting Setting) const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefualtMenuSettingValue(EMenuSettingValue Setting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCultureSetting() const;
    
};

