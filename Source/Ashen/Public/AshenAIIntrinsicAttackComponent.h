#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "AshenAIIntrinsicAttackComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenAIIntrinsicAttackComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponGroupName;
    
    UAshenAIIntrinsicAttackComponent();
};

