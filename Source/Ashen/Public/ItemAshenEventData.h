#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "ItemAshenEventData.generated.h"

class UItemBase;

UCLASS(Abstract, Blueprintable)
class ASHEN_API UItemAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* Item;
    
public:
    UItemAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemBase* GetItem();
    
};

