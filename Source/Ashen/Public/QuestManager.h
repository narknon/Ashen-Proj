#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "QuestProgress.h"
#include "UObject/Object.h"
#include "TrackedItems.h"
#include "TrackedCreatures.h"
#include "QuestPointArray.h"
#include "EQuestItem.h"
#include "GameplayTagContainer.h"
#include "QuestStateTag.h"
#include "UObject/NoExportTypes.h"
#include "ENpcType.h"
#include "QuestZoneArray.h"
#include "UObject/NoExportTypes.h"
#include "EUIMapMarkerType.h"
#include "QuestManager.generated.h"

class AAshenBaseGameState;
class UQuestState;
class AQuestPoint;
class UQuestLine;
class AQuestPathfindingPoint;
class ACreature;
class AStoryHumanoid;

UCLASS(Blueprintable)
class ASHEN_API UQuestManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UQuestState*, FTrackedItems> TrackedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UQuestState*, FTrackedCreatures> TrackedCreatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ShatteredQuestMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UQuestLine*, FQuestProgress> QuestLineProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AQuestPoint*> QuestLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AQuestPathfindingPoint*> QuestPathfindingPoints;
    
public:
    UQuestManager();
    UFUNCTION(BlueprintCallable)
    void RemoveTrackedItem(UQuestState* OwningTracker, EQuestItem Item);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrackedCreature(UQuestState* OwningTracker, FGameplayTag CreatureType);
    
    UFUNCTION(BlueprintCallable)
    void ProgressState(UQuestState* QuestState, int32 BranchIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestLineAtTag(UQuestLine* QuestLine, FQuestStateTag QuestStateTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestLineAtAnyTag_ReturnTag(UQuestLine* QuestLine, const TArray<FQuestStateTag>& QuestStateTags, FQuestStateTag& TagFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestLineAtAnyTag(UQuestLine* QuestLine, const TArray<FQuestStateTag>& QuestStateTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestLineAtAny_StringRef(UQuestLine* QuestLine, const TArray<FSoftClassPath>& QuestStateClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestLineAtAny(UQuestLine* QuestLine, const TArray<TSubclassOf<UQuestState>>& QuestStateClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestLineAt_StringRef(UQuestLine* QuestLine, const FSoftClassPath& QuestStateClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestLineAt(UQuestLine* QuestLine, TSubclassOf<UQuestState> QuestStateClass) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsItemBeingTracked(EQuestItem ItemToCheck, ENpcType SpecificNPC);
    
    UFUNCTION(BlueprintCallable)
    bool IsCreatureBeingTracked(ACreature* CreatureToCheck, ENpcType SpecificNPC);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyItemBeingTracked(TArray<EQuestItem> ItemsToCheck, ENpcType SpecificNPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftClassPtr<AStoryHumanoid>> HasNewQuestToGive(UQuestLine* QuestLine);
    
    UFUNCTION(BlueprintCallable)
    TMap<ENpcType, FQuestZoneArray> GetQuestZones();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UQuestState>> GetQuestStates(UQuestLine* QuestLine) const;
    
    UFUNCTION(BlueprintCallable)
    void GetQuestPoints(TSubclassOf<AQuestPoint> PointClass);
    
    UFUNCTION(BlueprintCallable)
    TMap<ENpcType, FQuestPointArray> GetQuestLocations();
    
    UFUNCTION(BlueprintCallable)
    AQuestPoint* GetQuestLocation(FName QuestAreaRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActiveStates(UQuestLine* QuestLine) const;
    
    UFUNCTION(BlueprintCallable)
    AQuestPoint* GetMiddleOfQuestSet(TArray<AQuestPoint*> Set);
    
    UFUNCTION(BlueprintCallable)
    AQuestPoint* GetLargestOfQuestSet(TArray<AQuestPoint*> Set, int32& Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAshenBaseGameState* GetGameState() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AQuestPoint*> GetClosestOfActiveQuestZonesForNPC(ENpcType NPC_Type, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    TArray<AQuestPoint*> GetClosestActiveQuestMarkers(int32 MaxLocations, FVector Point, float ExcludeIfCloserThen, float ResetShatterAtDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UQuestLine*, FQuestProgress> GetAllQuestLineProgress() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AQuestPoint*> GetActiveTownQuests();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQuestStateTag> GetActiveTags(UQuestLine* QuestLine) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FQuestPointArray> GetActiveQuestZonesForNPC(ENpcType NPC_Type);
    
    UFUNCTION(BlueprintCallable)
    TArray<AQuestPoint*> GetActiveQuestLocations();
    
    UFUNCTION(BlueprintCallable)
    AQuestPoint* GetActiveQuestLocation(ENpcType NPC_Type);
    
    UFUNCTION(BlueprintCallable)
    TArray<AQuestPoint*> GetActiveNPCQuestLocations(ENpcType NPC_Type);
    
    UFUNCTION(BlueprintCallable)
    TArray<AQuestPoint*> GetActiveMarkerLocations(EUIMapMarkerType Type);
    
    UFUNCTION(BlueprintCallable)
    void AddTrackedItems(UQuestState* OwningTracker, TArray<EQuestItem> Items);
    
    UFUNCTION(BlueprintCallable)
    void AddTrackedCreatures(UQuestState* OwningTracker, TArray<FGameplayTag> CreatureTypes);
    
};

