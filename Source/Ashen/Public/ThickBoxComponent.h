#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ThickBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UThickBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoxThickness;
    
    UThickBoxComponent();
};

