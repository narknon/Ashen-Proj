#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EInputControllerType.h"
#include "InputCoreTypes.h"
#include "EKeyboardLayout.h"
#include "InputKeyData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct ASHEN_API FInputKeyData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputControllerType SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* NormalButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseNameOverKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKeyboardLayout, FText> KeyNames;
    
    FInputKeyData();
};

