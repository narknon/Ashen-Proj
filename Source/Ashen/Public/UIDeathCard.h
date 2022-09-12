#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UIDeathCard.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIDeathCard : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC_DeathScreenCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AllowDisolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DisolveAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DisolveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AllowDisolveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LoadDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LoadStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeathMessage;
    
public:
    UUIDeathCard();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDeathMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInDeathMessage();
    
};

