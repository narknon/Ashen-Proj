#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerInput.h"
#include "EInputUIEventTypes.h"
#include "GameFramework/PlayerInput.h"
#include "EInputContext.h"
#include "EInputEventNames.h"
#include "InputEventImages.h"
#include "InputKeyData.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputBindingDataSet.h"
#include "InputKeyImage.h"
#include "RebindingError.h"
#include "UObject/NoExportTypes.h"
#include "EUIWidgetUnlockFX.h"
#include "AshenBasePlayerController.generated.h"

class UAshenUserWidget;
class AAshenBaseGameMode;
class AAshenGameMode;
class AAshenBaseState;
class UAshenGameInstance;
class UAshenProfileSave;
class AAshenHUD;
class AAshenPlayerCameraManager;

UCLASS(Blueprintable)
class ASHEN_API AAshenBasePlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PredefinedInputSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefualtFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharCreatorFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MainMenuFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> OriginalInputMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> OriginalAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputEventNames, FName> InputEnumToInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EInputEventNames> InputNameToInputEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> InputNameToLocalizedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertControllerHorizontalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertControllerVerticalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertMouseVerticalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverteMouseHorizontalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerSensitivitiy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpearAimSensitivitiy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowMouseTargetSwitching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoubleTapDodgingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InputRebindingPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CinematicSkipButtonNeeded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ThumbsticksFlipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MenusFlipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockingMenusForTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey LastPressedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputContext LastPressedInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputContext TrueLastPressedInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUseUIMouseScrollNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputEventNames, FInputEventImages> KeyboardMouseInputEventIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputEventNames, FInputEventImages> GamepadInputEventIcons;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> SystemMessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> PlayerHUDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D UiInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D UiCameraInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CameraInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LockonDeadzoneCameraInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonDeadzoneSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonDeadzoneRecenterRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameMode* AshenGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseState* BaseState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenGameInstance* AshenGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenProfileSave* AshenProfileSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenHUD* AshenHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenUserWidget* PlayerHUD;
    
    AAshenBasePlayerController();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool XboxXRDiscardInput(FKey InputKey) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateInputEventImages();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateCameraValueForMouseLockon(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UnBindInputKeyCategory(FName RebindEventName);
    
    UFUNCTION(BlueprintCallable)
    void UnBindInputAxisCategory(FName RebindEventName);
    
    UFUNCTION(BlueprintCallable)
    void UnBindAllKeyCategorys();
    
    UFUNCTION(BlueprintCallable)
    void UnBindAllInputAxisCategorys();
    
    UFUNCTION(BlueprintCallable)
    void SummonPlayerHUD(bool bSetIntializedLocally);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseMouseScrollNavigation() const;
    
    UFUNCTION(BlueprintCallable)
    void SetupInputs(bool KeyboardLayoutChange);
    
    UFUNCTION(BlueprintCallable)
    void SetThumbsticksSwitched(bool Switched, bool UseSavedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldUseMouseScrollNavigation(bool Use);
    
    UFUNCTION(BlueprintCallable)
    void SetMousePosition(float LocationX, float LocationY);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuButtonSwitched(bool Switched, bool UseSavedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLastPressedKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void SetInputRebindingPending(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaveBoundInputMaps(bool Reset) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetToOriginalInputMappings();
    
    UFUNCTION(BlueprintCallable)
    void ResetOrderedInputMappings();
    
    UFUNCTION(BlueprintCallable)
    void ResetCategoryToOriginalInputMappings(FName RebindEventName);
    
    UFUNCTION(BlueprintCallable)
    void RebuildMappings(bool NavigationOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LastPressedInputChanged(EInputContext Context);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnConsole() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsApplicationInFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputUIEventTypes GetUIEventFromInputEvent(EInputEventNames EventName) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetSavedControllerInputIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetOriginalKeyMappings(FName RebindEventName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputAxisKeyMapping> GetOriginalAxisMappings(FName RebindEventName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetLastPressedKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputContext GetLastPressedInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetKeysMappedToAction(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable)
    FText GetKeyName(FInputKeyData KeyRow);
    
    UFUNCTION(BlueprintCallable)
    FInputBindingDataSet GetInputPreset(bool& DefualtValue);
    
    UFUNCTION(BlueprintCallable)
    TArray<FKey> GetChangedActionMappingKeys();
    
    UFUNCTION(BlueprintCallable)
    FInputKeyImage GetButtonImageForKeyBinding(FInputActionKeyMapping KeyBinding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputKeyImage GetButtonImageForEvent(EInputEventNames Event, FKey PrioritiseThisKey) const;
    
    UFUNCTION(BlueprintCallable)
    FInputKeyImage GetButtonImageForAxisBinding(FInputAxisKeyMapping AxisBinding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetBoundKeyMap(bool GetOrderedSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputAxisKeyMapping> GetBoundAxisMap() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FRebindingError> GetBindingIssues(TArray<FInputActionKeyMapping> Keys, TArray<FInputAxisKeyMapping> Axies, bool GamepadType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAshenPlayerCameraManager* GetAshenPlayerCameraManager() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAndSetMappingsFromDefaults();
    
    UFUNCTION(BlueprintCallable)
    void DisplaySystemMessage(FText Message, float DispTime, bool AlternateStyle, bool HasColourOverride, FLinearColor ColourOverride, EUIWidgetUnlockFX LockReleaseFX);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DiscardInput(FKey InputKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DiscardAxisInput() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CurserShouldGiveUIFocus();
    
    UFUNCTION(BlueprintCallable)
    void BindInputKey(FInputActionKeyMapping EventKey);
    
    UFUNCTION(BlueprintCallable)
    void BindInputAxis(FInputAxisKeyMapping EventKey);
    
};

