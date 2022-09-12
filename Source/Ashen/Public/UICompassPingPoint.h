#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "ECompassPointType.h"
#include "UObject/NoExportTypes.h"
#include "UICompassPingPoint.generated.h"

class AActor;
class UUICompass;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUICompassPingPoint : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUICompass* CompassRefrence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompassPointType PointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompassPointType NextPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompassPointAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompassPointEdgeAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WorldLocationOveride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocationToUse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UImage* ImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PingingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InTutorial;
    
public:
    UUICompassPingPoint();
    UFUNCTION(BlueprintCallable)
    void UpdateFunction(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeoutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAddAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeOverType();
    
};

