#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UIMapAreaName.generated.h"

class UUserWidget;
class UTextBlock;
class UAshenStateSave;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIMapAreaName : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* NewImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* AreaTextRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* AreaText2Ref;
    
    UUIMapAreaName();
    UFUNCTION(BlueprintCallable)
    void SetText(FText AreaText);
    
    UFUNCTION(BlueprintCallable)
    void SetNewAndVisiblity(FName AreaName, UAshenStateSave* StateData, bool Clear, bool Invisible);
    
};

