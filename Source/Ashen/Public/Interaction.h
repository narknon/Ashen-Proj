#pragma once
#include "CoreMinimal.h"
#include "InteractionDelegateDelegate.h"
#include "UObject/Object.h"
#include "EInteractionType.h"
#include "Interaction.generated.h"

class AActor;
class ACreature;
class UInteraction;

UCLASS(Blueprintable)
class ASHEN_API UInteraction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlertColours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionType Type;
    
    UInteraction();
    UFUNCTION(BlueprintCallable)
    void Interact(ACreature* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMessageText(FText& _Left, FText& _Icon, FText& _Right);
    
    UFUNCTION(BlueprintCallable)
    static UInteraction* CreateBlueprintInteraction(AActor* NewOwner, FText Text);
    
};

