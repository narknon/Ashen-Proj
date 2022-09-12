#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "AshenSingleton.generated.h"

class UDataTable;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API UAshenSingleton : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NpcDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AreaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GraphicsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestAreaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TownBuildingDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ButtonsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHero> PlayerHeroBlueprint;
    
public:
    UAshenSingleton();
    UFUNCTION(BlueprintCallable)
    void SetWorldContextObject(UObject* NewWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetTownBuildingDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestAreasDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AHero> GetPlayerHeroBlueprintClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetNpcDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetGraphicsDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetButtonsDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetAreasDataTable() const;
    
};

