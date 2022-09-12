#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "ConsumeAshChunkAction.generated.h"

class UItemAshChunk;

UCLASS(Blueprintable)
class ASHEN_API AConsumeAshChunkAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemAshChunk* AshChunk;
    
    AConsumeAshChunkAction();
};

