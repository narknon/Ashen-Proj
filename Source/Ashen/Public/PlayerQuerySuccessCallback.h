#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "PlayerQuerySuccessCallback.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UPlayerQuerySuccessCallback : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QueryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnSavedType;
    
public:
    UPlayerQuerySuccessCallback();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValueNow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQueryName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnsavedType();
    
};

