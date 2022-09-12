#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenID.generated.h"

UENUM(BlueprintType)
enum LoadingScreenID {
    LoadingScreen_LoadMenu_Intro,
    LoadingScreen_LoadMenu_NoIntro,
    LoadingScreen_LoadTutorial,
    LoadingScreen_LoadGameFromTutorial,
    LoadingScreen_LoadGame,
    LoadingScreen_BlackSpinner,
    LoadingScreen_None,
    LoadingScreen_MAX UMETA(Hidden),
};

