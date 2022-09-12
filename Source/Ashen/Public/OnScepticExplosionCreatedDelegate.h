#pragma once
#include "CoreMinimal.h"
#include "AshenDamage.h"
#include "OnScepticExplosionCreatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScepticExplosionCreated, FAshenDamage&, ExplosionDamage);

