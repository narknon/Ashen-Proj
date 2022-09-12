#pragma once
#include "CoreMinimal.h"
#include "AshenAIContextBase.h"
#include "AshenAIContext_Camping.generated.h"

class AAIContextMarker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenAIContext_Camping : public UAshenAIContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIContextMarker*> CampFireMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIContextMarker*> SitMarkers;
    
    UAshenAIContext_Camping();
};

