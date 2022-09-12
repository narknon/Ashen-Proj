#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "BralHole.generated.h"

class AHero;
class UAudioComponent;
class UArrowComponent;
class USoundCue;

UCLASS(Blueprintable)
class ASHEN_API ABralHole : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullLightValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFullHoleLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMakeFullLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* LightRecieverPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookActivationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightIncreaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightDecreaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LanternLooseLightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LanternEffectorRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid HoleGuid;
    
    UPROPERTY(EditAnywhere)
    uint8 CurrentTriangle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceFailedDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceThreshold1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceThreshold2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriangleDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* HoleSubTriangle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* HoleSequenceComplete;
    
    ABralHole();
    UFUNCTION(BlueprintCallable)
    void PulseFullLight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartFlushOccupant();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSequenceFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSequenceComplete(uint8 SequenceIndex, AHero* Activator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPillarFallen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccupied() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHeroLookingAtHole(AHero* CheckHero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlushingOccupant() const;
    
    UFUNCTION(BlueprintCallable)
    void DoneFlushingOccupant();
    
};

