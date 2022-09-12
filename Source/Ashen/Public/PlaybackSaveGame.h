#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlayerControllerPlaybackStamp.h"
#include "PlaybackSaveGame.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UPlaybackSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerControllerPlaybackStamp> Stamps;
    
    UPlaybackSaveGame();
};

