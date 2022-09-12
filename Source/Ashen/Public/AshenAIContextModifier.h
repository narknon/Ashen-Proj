#pragma once
#include "CoreMinimal.h"
#include "EAIContextDesire.h"
#include "Components/ActorComponent.h"
#include "AIContextAnimSet.h"
#include "AshenAIContextModifier.generated.h"

class AAIContextMarker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenAIContextModifier : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIContextMarker*> AvailableContextMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAIContextDesire> PreferredDesires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIContextDesire, FAIContextAnimSet> OverrideIdleAnims;
    
    UAshenAIContextModifier();
};

