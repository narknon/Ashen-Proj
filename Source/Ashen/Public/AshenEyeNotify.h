#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EAshenEyeNotifyType.h"
#include "AshenEyeNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ASHEN_API UAshenEyeNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAshenEyeNotifyType Type;
    
    UAshenEyeNotify();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotify() const;
    
};

