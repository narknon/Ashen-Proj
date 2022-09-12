#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AshenCameraSequenceComponent.generated.h"

class ALevelSequenceActor;
class ACameraActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenCameraSequenceComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* SequenceCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendLength;
    
public:
    UAshenCameraSequenceComponent();
};

