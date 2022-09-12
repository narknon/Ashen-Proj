#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "ECinematicName.h"
#include "EndCinematicDelegateDelegate.h"
#include "ECinematicCreatureType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EItemType.h"
#include "Engine/DataTable.h"
#include "CinematicManager.generated.h"

class AAshenBaseGameMode;
class AAshenBaseGameState;
class UUIPhase2OverlayTab;
class UItemEquipment;
class ULevelSequencePlayer;
class UUserWidget;
class USubtitleWidget;
class UStringTable;
class UAkAudioEvent;
class UAnimMontage;
class AAction;
class AWorldTravelPoint;

UCLASS(Blueprintable)
class ASHEN_API UCinematicManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemEquipment*> SpawnedEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* AshenBaseGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameMode* AshenBaseGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2OverlayTab* DialogueOverlayTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartingGodMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FadeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USubtitleWidget* SubtitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USubtitleWidget> SubtitleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> SubtitleStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> DisplayedWidgets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideSpeakersName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartupAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CleanupAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SkippedCleanupAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SkipCalledAudioEvent;
    
    UCinematicManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasCinematicSkipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WaitingForRemotePlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void StartCinematic(ECinematicName CinematicName, FEndCinematicDelegate EndCinematicDelegate, bool bIsUnskippable, bool bEndMultiplayer);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEquipment(ECinematicCreatureType Target, TSubclassOf<UItemEquipment> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    void SetTransform(ECinematicCreatureType Target, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetPostCinematicTransform(ECinematicCreatureType Target, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetHidden(ECinematicCreatureType Target, bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipmentHolstered(ECinematicCreatureType Target);
    
    UFUNCTION(BlueprintCallable)
    bool SetEquipmentDrawn(ECinematicCreatureType Target, EItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RemotePlayerWaitingForLocal() const;
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(ECinematicCreatureType Target, FVector Location, FRotator Rotation, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void PlayAction(ECinematicCreatureType Target, FVector Location, FRotator Rotation, UAnimMontage* Montage, TSubclassOf<AAction> ActionClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAssetLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadZone(const FDataTableRowHandle& ZoneRowHandle, bool bUnloadCurrentZones);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCinematicPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void EndCinematicTravel(AWorldTravelPoint* TravelPoint, bool ViaDiasora);
    
    UFUNCTION(BlueprintCallable)
    void EndCinematicLoading(const FString& Level);
    
    UFUNCTION(BlueprintCallable)
    void EndCinematic();
    
    UFUNCTION(BlueprintCallable)
    void EnableHeroIK(ECinematicCreatureType Target, float BlendIn);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* DisplayWidget(TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void DisplaySubtitle(const FString& InKey);
    
    UFUNCTION(BlueprintCallable)
    void DisplayDialogue(FText Dialogue, FText WhomIsSpeaking, float DisplayTime, bool HideWhom);
    
};

