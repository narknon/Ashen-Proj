#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Engine/DataTable.h"
#include "StreamingZoneTrigger.generated.h"

class AAshenGameMode;
class AActor;

UCLASS(Blueprintable)
class ASHEN_API AStreamingZoneTrigger : public ATriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ZoneRowHandle;
    
public:
    AStreamingZoneTrigger();
private:
    UFUNCTION(BlueprintCallable)
    void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

