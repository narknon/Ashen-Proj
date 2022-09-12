#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "InteractionSource.h"
#include "DialogueDelegateDelegate.h"
#include "Engine/LatentActionManager.h"
#include "EAIRelationship.h"
#include "EInputUIEventTypes.h"
#include "Engine/EngineTypes.h"
#include "DialogueComponent.generated.h"

class ACreature;
class UAnimMontage;
class AAshenBaseGameState;
class UAkAudioEvent;
class UInteraction;
class UUIPhase2OverlayMenu;
class UUIPhase2OverlayTab;
class AStoryAction;
class UQuestLine;
class UUIPhase2MenuTab;
class AActor;
class UVitalAttributes;
class UPrimitiveComponent;
class AHero;
class UObject;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UDialogueComponent : public UBoxComponent, public IInteractionSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* OwningCreature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CloseCalled;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueDelegate OnDefaultDialogue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueDelegate OnCraftingDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomInteractPromptMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomInteractMessageKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CompleteAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BackoutAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInteractionDirectional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInteractionAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestStatesHandleDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2OverlayMenu* CachedAshenHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2OverlayTab* DialogueOverlayTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStoryAction* TalkingAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> TalkingAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* MainQuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WhomIsSpeaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultTalkingAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PositiveTalkingAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NegativeTalkingAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleDialogueOnOverlap;
    
public:
    UDialogueComponent();
    UFUNCTION(BlueprintCallable)
    bool PlayAudioEvent(UAkAudioEvent* EventRef, bool CareAboutActiveEvents);
    
    UFUNCTION(BlueprintCallable)
    void OnOwningCreaturePlayerRelationChange(ACreature* Parent, EAIRelationship NewRelationship);
    
    UFUNCTION(BlueprintCallable)
    void OnOwningCreatureDestroy(AActor* _Parent);
    
    UFUNCTION(BlueprintCallable)
    void OnOwningCreatureDeath(AActor* _Parent, UVitalAttributes* _Source);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void InteractionCallback(UInteraction* Source, ACreature* Target);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDialogue(AHero* Hero);
    
    UFUNCTION(BlueprintCallable)
    bool HandleCraftingDialogue(AHero* Hero);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetInteractions_Implementation(ACreature* Target, UObject* Context);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplayDialogue(FText Text, FLatentActionInfo LatentInfo, bool bPlayTalkingAnimation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DialogueClosedCallback(UUIPhase2MenuTab* tabRef, EInputUIEventTypes ButtonPressed);
    
    
    // Fix for true pure virtual functions not being implemented
};

