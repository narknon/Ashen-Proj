#pragma once
#include "CoreMinimal.h"
#include "LootActor.h"
#include "UObject/NoExportTypes.h"
#include "StaticLootActor.generated.h"

class UItemBase;
class UItemTable;

UCLASS(Blueprintable)
class ASHEN_API AStaticLootActor : public ALootActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AshenGuid;
    
public:
    AStaticLootActor();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateStateData(UItemTable* Source, UItemBase* Item);
    
};

