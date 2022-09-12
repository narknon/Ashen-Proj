#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Engine/DataTable.h"
#include "QuestAreaChange.h"
#include "Engine/EngineTypes.h"
#include "AreaTrigger.generated.h"

class UArrowComponent;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASHEN_API AAreaTrigger : public ATriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AreaRowHandleForwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AreaRowHandleBackwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestAreaChange> QuestAreaUI_ChangesOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    AAreaTrigger();
    UFUNCTION(BlueprintCallable)
    void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

