#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "DiasoraFlyInAshenEventData.generated.h"

class ADiasora;

UCLASS(Blueprintable)
class ASHEN_API UDiasoraFlyInAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADiasora* Diasora_Ref;
    
    UDiasoraFlyInAshenEventData();
};

