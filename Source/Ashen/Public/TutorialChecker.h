#pragma once
#include "CoreMinimal.h"
#include "EventAndStateChecker.h"
#include "ECheckerCategory.h"
#include "UITutorialData.h"
#include "TutorialData.h"
#include "TutorialChecker.generated.h"

class UAshenTutorialManager;
class AAshenBaseGameState;

UCLASS(Blueprintable)
class ASHEN_API UTutorialChecker : public UEventAndStateChecker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenTutorialManager* TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUITutorialData UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialData StandardData;
    
public:
    UTutorialChecker();
    UFUNCTION(BlueprintCallable)
    void Setup(AAshenBaseGameState* BaseState, ECheckerCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool _Active);
    
    UFUNCTION(BlueprintCallable)
    bool IsUIType();
    
    UFUNCTION(BlueprintCallable)
    FUITutorialData GetUIData();
    
    UFUNCTION(BlueprintCallable)
    FTutorialData GetSTDData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetProgress(bool& ShouldShow, int32& ProgressMade, int32& TotalProgress);
    
    UFUNCTION(BlueprintCallable)
    void Complete();
    
    UFUNCTION(BlueprintCallable)
    void CleanUp();
    
};

