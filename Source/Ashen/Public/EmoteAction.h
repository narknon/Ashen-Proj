#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "EEmoteType.h"
#include "EmoteAction.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AEmoteAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EquipWeaponOnFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmoteType EmoteType;
    
    AEmoteAction();
};

