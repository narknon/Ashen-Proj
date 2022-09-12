#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemConsumable.h"
#include "ItemTravelAsh.generated.h"

class UQuestLine;
class UQuestState;

UCLASS(Blueprintable)
class ASHEN_API UItemTravelAsh : public UItemConsumable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* RequiredQuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestState> RequiredQueststate;
    
public:
    UItemTravelAsh();
};

