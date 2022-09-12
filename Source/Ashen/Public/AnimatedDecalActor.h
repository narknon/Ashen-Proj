#pragma once
#include "CoreMinimal.h"
#include "Engine/DecalActor.h"
#include "AnimatedDecalActor.generated.h"

class UCurveFloat;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable)
class ASHEN_API AAnimatedDecalActor : public ADecalActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSizeLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSizeHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DecalMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDecalFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AdjustmentParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDynamicFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AnimationCurve;
    
    AAnimatedDecalActor();
    UFUNCTION(BlueprintCallable)
    void UpdateMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    void SetRandomSize(float Low, float High);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalSpreadFalloff(float MaxValue, float CurrentValue);
    
    UFUNCTION(BlueprintCallable)
    void ProcessTransitionOut(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void ProcessTransitionIn(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostInstanceInit();
    
    UFUNCTION(BlueprintCallable)
    void DynamicFade(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureSpawned(UCurveFloat* SetCurve, UMaterialInterface* SetMaterialInterface, FName SetAdjustmentValue);
    
};

