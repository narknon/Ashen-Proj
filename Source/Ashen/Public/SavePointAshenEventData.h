#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "SavePointAshenEventData.generated.h"

class ASavePoint;

UCLASS(Abstract, Blueprintable)
class ASHEN_API USavePointAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASavePoint* SavePoint;
    
public:
    USavePointAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASavePoint* GetSavePoint();
    
};

