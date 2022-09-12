#pragma once
#include "CoreMinimal.h"
#include "AIHumanoid.h"
#include "ENpcType.h"
#include "QuestStateTag.h"
#include "StoryHumanoid.generated.h"

class UDialogueComponent;
class UIndicatorComponent;
class AActor;
class UVitalAttributes;

UCLASS(Blueprintable)
class ASHEN_API AStoryHumanoid : public AAIHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDialogueComponent* DialogueComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UIndicatorComponent* IndicatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStateTag> NewQuestTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStateTag> IconBlacklistTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType NpcType;
    
    AStoryHumanoid();
    UFUNCTION(BlueprintCallable)
    void StoryHumanoidDeath(AActor* Parent, UVitalAttributes* Source);
    
};

