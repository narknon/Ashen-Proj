#pragma once
#include "CoreMinimal.h"
#include "DialogueDelegateDelegate.generated.h"

class UDialogueComponent;
class AHero;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueDelegate, UDialogueComponent*, DialogueComponent, AHero*, Hero);

