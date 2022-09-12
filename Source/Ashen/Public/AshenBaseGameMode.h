#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/GameMode.h"
#include "UObject/NoExportTypes.h"
#include "AshenPhysicsProperties.h"
#include "Engine/DataTable.h"
#include "AshenBaseGameMode.generated.h"

class AAshenBaseGameState;
class UAshenGameInstance;
class UAshenUserWidget;
class UUIMapAreasWidget;
class UAISpawnManager;
class UCinematicManager;

UCLASS(Blueprintable, NonTransient)
class ASHEN_API AAshenBaseGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* AshenBaseGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenUserWidget* InventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenPhysicsProperties PhysicsConstants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginalMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIMapAreasWidget> WorldMapOverrideClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid DefaultMapSpawnPointGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DlcCreatureEfffectsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISpawnManager> AISpawnManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISpawnManager* AISpawnManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCinematicManager> CinematicManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicManager* CinematicManager;
    
public:
    AAshenBaseGameMode();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOffline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected();
    
    UFUNCTION(BlueprintCallable)
    UCinematicManager* GetCinematicManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAshenGameInstance* GetAshenGameInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAshenBaseGameState* GetAshenBaseGameState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAISpawnManager* GetAISpawnManager();
    
};

