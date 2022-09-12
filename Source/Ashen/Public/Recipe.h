#pragma once
#include "CoreMinimal.h"

#include "Templates/SubclassOf.h"
#include "Recipe.generated.h"

class UItemBase;

USTRUCT(BlueprintType)
struct ASHEN_API FRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemBase> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UItemBase>, int32> RecipeComponents;
    
    FRecipe();
};

