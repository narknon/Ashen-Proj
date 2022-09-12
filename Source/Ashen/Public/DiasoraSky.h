#pragma once
#include "CoreMinimal.h"
#include "DiasoraBase.h"
#include "EDiasoraWorldState.h"
#include "DiasoraSky.generated.h"

class ADiasoraTrigger;
class USkeletalMeshComponent;
class UAshenAnimNotify;

UCLASS(Blueprintable)
class ASHEN_API ADiasoraSky : public ADiasoraBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADiasoraTrigger*> AreaTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SafeToFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FadeOutWhenPossible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DiasoraMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiasoraWorldState FlyingState;
    
public:
    ADiasoraSky();
    UFUNCTION(BlueprintCallable)
    void SetDiasoraSkyState(EDiasoraWorldState State);
    
    UFUNCTION(BlueprintCallable)
    void Notify(const UAshenAnimNotify* AshenNotify);
    
    UFUNCTION(BlueprintCallable)
    EDiasoraWorldState GetDiasoraSkyState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiasoraRemove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiasoraFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiasoraFadeIn();
    
};

