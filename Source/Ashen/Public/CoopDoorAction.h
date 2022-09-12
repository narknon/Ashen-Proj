#pragma once
#include "CoreMinimal.h"
#include "EquipmentHandlingAction.h"
#include "ECoopDoorActionState.h"
#include "CoopDoorAction.generated.h"

class AAshenGameMode;
class ACooperativeDoor;
class ULevelStreaming;

UCLASS(Blueprintable)
class ASHEN_API ACoopDoorAction : public AEquipmentHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACooperativeDoor* CoopDoor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameMode* GameMode;
    
public:
    ACoopDoorAction();
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelShown(ULevelStreaming* StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHidden(ULevelStreaming* StreamingLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    ECoopDoorActionState GetCoopActionState();
    
};

