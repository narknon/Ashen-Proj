#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EMontageNotify.h"
#include "UObject/NoExportTypes.h"
#include "AshenAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ASHEN_API UAshenAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMontageNotify Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VectorParameter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NotifyTriggerWeight;
    
public:
    UAshenAnimNotify();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotify() const;
    
};

