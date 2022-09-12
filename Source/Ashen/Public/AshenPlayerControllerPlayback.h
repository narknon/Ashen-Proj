#pragma once
#include "CoreMinimal.h"
#include "AshenPlayerController.h"
#include "PlayerControllerPlaybackStamp.h"
#include "AshenPlayerControllerPlayback.generated.h"

class UPlaybackSaveGame;
class AActor;

UCLASS(Blueprintable)
class ASHEN_API AAshenPlayerControllerPlayback : public AAshenPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerControllerPlaybackStamp> CachedStamps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StampFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaybackSaveGame* SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwningPlayer;
    
    AAshenPlayerControllerPlayback();
    UFUNCTION(BlueprintCallable)
    void RecordTick(float Time);
    
    UFUNCTION(BlueprintCallable)
    void ProcessPlayback(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void PlaybackTick(float Time);
    
    UFUNCTION(BlueprintCallable)
    void CreateBindings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenUsePlaybackController();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenStopRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenStartRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSaveRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenPlaySavedRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenPlayRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenLoadCachedStampBank3();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenLoadCachedStampBank2();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenLoadCachedStampBank1();
    
};

