#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "BlueprintAshenEventData.generated.h"

UCLASS(Abstract, Blueprintable)
class ASHEN_API UBlueprintAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BlueprintEventType;
    
public:
    UBlueprintAshenEventData();
};

