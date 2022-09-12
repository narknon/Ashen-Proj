#pragma once
#include "CoreMinimal.h"
#include "ItemAshenEventData.h"
#include "ItemTableChangedAshenEventData.generated.h"

class UItemTable;

UCLASS(Blueprintable)
class ASHEN_API UItemTableChangedAshenEventData : public UItemAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemTable* Table;
    
public:
    UItemTableChangedAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemTable* GetTable();
    
};

