#include "AshenGameplayStatics.h"
#include "Templates/SubclassOf.h"

class UAshenStateSave;
class UObject;
class UAshenGameInstance;
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

void UAshenGameplayStatics::SetMusicSwitch(FName SwitchGroup, FName SwitchState, UObject* WorldContextObject) {
}

void UAshenGameplayStatics::SetMusicRTPCValue(FName RTPC, float Value, int32 InterpolationTimeMs, UObject* WorldContextObject) {
}

void UAshenGameplayStatics::RemoveAshenEventListener(UObject* WorldContextObject, EAshenEventType EventType, const FAshenEventDelegate& EventDelegate) {
}

void UAshenGameplayStatics::QueueAshenEvent(UObject* WorldContextObject, UAshenEventData* EventData) {
}

void UAshenGameplayStatics::PostMusicTrigger(FName Trigger, UObject* WorldContextObject) {
}

void UAshenGameplayStatics::PostMusicEvent(UAkAudioEvent* AudioEvent, UObject* WorldContextObject) {
}

void UAshenGameplayStatics::PlayCinematicAsynch(UObject* WorldContextObject, TSoftObjectPtr<ULevelSequence> Sequence) {
}

void UAshenGameplayStatics::PlayCinematic(UObject* WorldContextObject, ULevelSequence* Sequence) {
}

void UAshenGameplayStatics::Log(const FString& String) {
}

FVector2D UAshenGameplayStatics::GetSizeOfText(FText Text, FSlateFontInfo TextFont) {
    return FVector2D{};
}

TArray<FIntPoint> UAshenGameplayStatics::GetResolutionOptions(UAshenGameInstance* GameInstance, TArray<FText>& AsText, int32& CurrentResolutionIndex, int32& SavedResolutionIndex) {
    return TArray<FIntPoint>();
}

AAshenRaidenController* UAshenGameplayStatics::GetRaidenController(UObject* WorldContextObject) {
    return NULL;
}

AHero* UAshenGameplayStatics::GetHero(UObject* WorldContextObject) {
    return NULL;
}

TArray<FGraphicsOptionDescription> UAshenGameplayStatics::GetGraphicsOptions(UAshenGameInstance* GameInstance, const UDataTable* Source, EGraphicsMenuGroup MenuGroup) {
    return TArray<FGraphicsOptionDescription>();
}

UCinematicManager* UAshenGameplayStatics::GetCinematicManager(UObject* WorldContextObject) {
    return NULL;
}

UAshenStateSave* UAshenGameplayStatics::GetAshenStateDataFromWorld(UWorld* WorldObject) {
    return NULL;
}

UAshenStateSave* UAshenGameplayStatics::GetAshenStateData(UObject* WorldContextObject) {
    return NULL;
}

AAshenMenuState* UAshenGameplayStatics::GetAshenMenuState(UObject* WorldContextObject) {
    return NULL;
}

AAshenGameState* UAshenGameplayStatics::GetAshenGameState(UObject* WorldContextObject) {
    return NULL;
}

AAshenGameMode* UAshenGameplayStatics::GetAshenGameMode(UObject* WorldContextObject) {
    return NULL;
}

UAshenGameInstance* UAshenGameplayStatics::GetAshenGameInstance(UObject* WorldContextObject) {
    return NULL;
}

AAshenPlayerCameraManager* UAshenGameplayStatics::GetAshenCameraManager(UObject* WorldContextObject) {
    return NULL;
}

AAshenBaseGameState* UAshenGameplayStatics::GetAshenBaseGameState(UObject* WorldContextObject) {
    return NULL;
}

AAshenBaseGameMode* UAshenGameplayStatics::GetAshenBaseGameMode(UObject* WorldContextObject) {
    return NULL;
}

EActionType UAshenGameplayStatics::GetActionTypeSafe(const AAction* Action) {
    return EActionType::None;
}

void UAshenGameplayStatics::FireAshenEvent(UObject* WorldContextObject, UAshenEventData* EventData) {
}

UActorComponent* UAshenGameplayStatics::FindDefaultComponentByClass(const TSubclassOf<AActor> InActorClass, const TSubclassOf<UActorComponent> InComponentClass) {
    return NULL;
}

void UAshenGameplayStatics::DebugPlayCinematic(UObject* WorldContextObject, ULevelSequence* LevelSequence, FName LevelName, ETravelPointName TravelPointName) {
}

void UAshenGameplayStatics::DamageAllDestructiblesInRadius(UWorld* World, FVector Origin, float Radius, float Impulse) {
}

void UAshenGameplayStatics::CopyStringToOSClipboard(const FString& ToCopy) {
}

void UAshenGameplayStatics::AddAshenEventListener(UObject* WorldContextObject, EAshenEventType EventType, const FAshenEventDelegate& EventDelegate) {
}

UAshenGameplayStatics::UAshenGameplayStatics() {
}

