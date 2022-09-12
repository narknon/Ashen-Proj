#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "AshenMenuMode.generated.h"

class UAshenGameInstance;

UCLASS(Blueprintable, NonTransient)
class ASHEN_API AAshenMenuMode : public AGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenGameInstance* AshenGameInstance;
    
public:
    AAshenMenuMode();
};

