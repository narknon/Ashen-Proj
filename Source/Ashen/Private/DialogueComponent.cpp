#include "DialogueComponent.h"

class UAkAudioEvent;
class ACreature;
class UPrimitiveComponent;
class UUIPhase2MenuTab;
class AActor;
class UInteraction;
class UVitalAttributes;
class AHero;
class UObject;

bool UDialogueComponent::PlayAudioEvent(UAkAudioEvent* EventRef, bool CareAboutActiveEvents) {
    return false;
}

void UDialogueComponent::OnOwningCreaturePlayerRelationChange(ACreature* Parent, EAIRelationship NewRelationship) {
}

void UDialogueComponent::OnOwningCreatureDestroy(AActor* _Parent) {
}

void UDialogueComponent::OnOwningCreatureDeath(AActor* _Parent, UVitalAttributes* _Source) {
}

void UDialogueComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UDialogueComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UDialogueComponent::InteractionCallback(UInteraction* Source, ACreature* Target) {
}

void UDialogueComponent::HandleDialogue_Implementation(AHero* Hero) {
}

bool UDialogueComponent::HandleCraftingDialogue(AHero* Hero) {
    return false;
}

TArray<UInteraction*> UDialogueComponent::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}

void UDialogueComponent::DisplayDialogue(FText Text, FLatentActionInfo LatentInfo, bool bPlayTalkingAnimation) {
}

void UDialogueComponent::DialogueClosedCallback(UUIPhase2MenuTab* tabRef, EInputUIEventTypes ButtonPressed) {
}

UDialogueComponent::UDialogueComponent() {
    this->OwningCreature = NULL;
    this->GameState = NULL;
    this->CloseCalled = false;
    this->bUseCustomInteractPromptMessage = false;
    this->CompleteAudioEvent = NULL;
    this->BackoutAudioEvent = NULL;
    this->Interaction = NULL;
    this->bIsInteractionDirectional = true;
    this->MaxInteractionAngleDegrees = 45.00f;
    this->bDisableInteraction = false;
    this->bQuestStatesHandleDialogue = true;
    this->CachedAshenHUD = NULL;
    this->DialogueOverlayTab = NULL;
    this->TalkingAction = NULL;
    this->MainQuestLine = NULL;
    this->DefaultTalkingAudioEvent = NULL;
    this->PositiveTalkingAudioEvent = NULL;
    this->NegativeTalkingAudioEvent = NULL;
    this->bHandleDialogueOnOverlap = false;
}

