#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "AnimatedImage.generated.h"

class UPaperFlipbook;

UCLASS(Blueprintable)
class UAnimatedImage : public UImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperFlipbook* flipbook;
    
public:
    UAnimatedImage();
    UFUNCTION(BlueprintCallable)
    void TimerTick();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
};

