#pragma once
#include "CoreMinimal.h"
#include "UIPhase2Menu.h"
#include "UObject/NoExportTypes.h"
#include "UIOptionsMenu.generated.h"

class USoundClass;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIOptionsMenu : public UUIPhase2Menu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScaleGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StartLerpPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FinalLerpPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpInTimer;
    
    UUIOptionsMenu();
    UFUNCTION(BlueprintCallable)
    void SetSoundClassVolumeValue(USoundClass* TargetClass, float VolumeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasMultiDirectionalTabSwitching() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSoundClassVolumeValue(USoundClass* TargetClass);
    
};

