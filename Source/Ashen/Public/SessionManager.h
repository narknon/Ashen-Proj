#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SessionManager.generated.h"

class AAshenGameMode;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class ASHEN_API ASessionManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecureAssociationPortOne;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecureAssociationPortTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameMode* GameMode;
    
    ASessionManager();
};

