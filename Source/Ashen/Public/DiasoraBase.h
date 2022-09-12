#pragma once
#include "CoreMinimal.h"
#include "NetworkActor.h"
#include "DiasoraBase.generated.h"

class UAshenAnimNotify;

UCLASS(Blueprintable)
class ASHEN_API ADiasoraBase : public ANetworkActor {
    GENERATED_BODY()
public:
    ADiasoraBase();
    UFUNCTION(BlueprintCallable)
    void Notify(const UAshenAnimNotify* AshenNotify);
    
};

