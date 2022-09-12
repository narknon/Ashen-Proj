#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EMetronomeNotify.h"
#include "EMetronomeSignature.h"
#include "AshenAnimMetronomeNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ASHEN_API UAshenAnimMetronomeNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetronomeNotify Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetronomeSignature Signature;
    
    UAshenAnimMetronomeNotify();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotify() const;
    
};

