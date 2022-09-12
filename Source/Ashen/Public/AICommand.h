#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "AICommand.generated.h"

class UAshenAICommanderComponent;

UCLASS(Blueprintable)
class ASHEN_API UAICommand : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenAICommanderComponent* ParentComponent;
    
public:
    UAICommand();
};

