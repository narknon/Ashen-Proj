#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EAudioNotify.h"
#include "UObject/NoExportTypes.h"
#include "AshenAudioNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ASHEN_API UAshenAudioNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioNotify Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VectorParameter;
    
    UAshenAudioNotify();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotify() const;
    
};

