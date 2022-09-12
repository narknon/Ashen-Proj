#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NetworkPointerCache.h"
#include "MultiplayerManager.generated.h"

class AAshenGameState;
class UAshenGameInstance;
class AAshenGameMode;
class UMatchmakingManager;
class UAISpawnManager;
class APeerConnection;
class UNetworkComponent;

UCLASS(Blueprintable, Config=Game)
class ASHEN_API UMultiplayerManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncingTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipMultiplayerFinalize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenGameInstance* AshenGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameMode* AshenGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameState* AshenGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatchmakingManager* MatchmakingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISpawnManager* aiManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APeerConnection* authorityConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APeerConnection* remoteConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkPointerCache NetworkPointerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UNetworkComponent*> registeredNetworkComponents;
    
public:
    UMultiplayerManager();
    UFUNCTION(BlueprintCallable)
    void SetSkipFinalizeLogic(bool bSkiped);
    
};

