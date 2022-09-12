#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AshenUserWidget.h"
#include "MapTextureAddon.h"
#include "UIMapWindow.generated.h"

class UUIMapAreasWidget;
class UUIDynamicMenuTab;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIMapWindow : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIMapAreasWidget* CurrentMapAreaWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIMapAreasWidget> MapAreasWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIDynamicMenuTab* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanApplyAdditionalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapTextureAdditionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapTextureAddon> MapTextureAdditions;
    
    UUIMapWindow();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UUIMapAreasWidget> OnGetMapAreasWidget();
    
};

