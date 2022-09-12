#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelEventCallback.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable)
class ASHEN_API ULevelEventCallback : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* StreamingLevel;
    
    ULevelEventCallback();
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelReload();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHidden();
    
};

