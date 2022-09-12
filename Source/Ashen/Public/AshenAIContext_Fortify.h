#pragma once
#include "CoreMinimal.h"
#include "AshenAIContextBase.h"
#include "AshenAIContext_Fortify.generated.h"

class AAIContextMarker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenAIContext_Fortify : public UAshenAIContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIContextMarker*> DefendPointMarkers;
    
    UAshenAIContext_Fortify();
};

