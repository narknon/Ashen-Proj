#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AshenBasePlayerController.h"
#include "AshenMainMenuController.generated.h"

class UUIStartGameScreen;
class UUIOptionsMenu;

UCLASS(Blueprintable)
class ASHEN_API AAshenMainMenuController : public AAshenBasePlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIStartGameScreen> StartScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIOptionsMenu> MainMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIStartGameScreen* StartGameScreen;
    
public:
    AAshenMainMenuController();
};

