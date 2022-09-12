#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EAshenEventType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Fonts/SlateFontInfo.h"
#include "AshenEventDelegateDelegate.h"
#include "GraphicsOptionDescription.h"
#include "EGraphicsMenuGroup.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EActionType.h"
#include "ETravelPointName.h"
#include "UObject/NoExportTypes.h"
#include "AshenGameplayStatics.generated.h"

class UAshenGameInstance;
class UAshenStateSave;
class UObject;
class UWorld;
class UAshenEventData;
class ULevelSequence;
class UAkAudioEvent;
class UActorComponent;
class AAshenRaidenController;
class AHero;
class AAshenMenuState;
class UDataTable;
class UCinematicManager;
class AAshenGameState;
class AAshenGameMode;
class AAshenPlayerCameraManager;
class AAshenBaseGameState;
class AAshenBaseGameMode;
class AAction;
class AActor;

UCLASS(Blueprintable)
class ASHEN_API UAshenGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAshenGameplayStatics();
    UFUNCTION(BlueprintCallable)
    static void SetMusicSwitch(FName SwitchGroup, FName SwitchState, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetMusicRTPCValue(FName RTPC, float Value, int32 InterpolationTimeMs, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAshenEventListener(UObject* WorldContextObject, EAshenEventType EventType, const FAshenEventDelegate& EventDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void QueueAshenEvent(UObject* WorldContextObject, UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    static void PostMusicTrigger(FName Trigger, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PostMusicEvent(UAkAudioEvent* AudioEvent, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PlayCinematicAsynch(UObject* WorldContextObject, TSoftObjectPtr<ULevelSequence> Sequence);
    
    UFUNCTION(BlueprintCallable)
    static void PlayCinematic(UObject* WorldContextObject, ULevelSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static void Log(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetSizeOfText(FText Text, FSlateFontInfo TextFont);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIntPoint> GetResolutionOptions(UAshenGameInstance* GameInstance, TArray<FText>& AsText, int32& CurrentResolutionIndex, int32& SavedResolutionIndex);
    
    UFUNCTION(BlueprintCallable)
    static AAshenRaidenController* GetRaidenController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AHero* GetHero(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGraphicsOptionDescription> GetGraphicsOptions(UAshenGameInstance* GameInstance, const UDataTable* Source, EGraphicsMenuGroup MenuGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCinematicManager* GetCinematicManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAshenStateSave* GetAshenStateDataFromWorld(UWorld* WorldObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAshenStateSave* GetAshenStateData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAshenMenuState* GetAshenMenuState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAshenGameState* GetAshenGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAshenGameMode* GetAshenGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAshenGameInstance* GetAshenGameInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AAshenPlayerCameraManager* GetAshenCameraManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAshenBaseGameState* GetAshenBaseGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAshenBaseGameMode* GetAshenBaseGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EActionType GetActionTypeSafe(const AAction* Action);
    
    UFUNCTION(BlueprintCallable)
    static void FireAshenEvent(UObject* WorldContextObject, UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* FindDefaultComponentByClass(const TSubclassOf<AActor> InActorClass, const TSubclassOf<UActorComponent> InComponentClass);
    
    UFUNCTION(BlueprintCallable)
    static void DebugPlayCinematic(UObject* WorldContextObject, ULevelSequence* LevelSequence, FName LevelName, ETravelPointName TravelPointName);
    
    UFUNCTION(BlueprintCallable)
    static void DamageAllDestructiblesInRadius(UWorld* World, FVector Origin, float Radius, float Impulse);
    
    UFUNCTION(BlueprintCallable)
    static void CopyStringToOSClipboard(const FString& ToCopy);
    
    UFUNCTION(BlueprintCallable)
    static void AddAshenEventListener(UObject* WorldContextObject, EAshenEventType EventType, const FAshenEventDelegate& EventDelegate);
    
};

