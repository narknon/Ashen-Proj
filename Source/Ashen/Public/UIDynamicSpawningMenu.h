#pragma once
#include "CoreMinimal.h"
#include "UIDynamicMenuTab.h"
#include "UIDynamicSpawningMenu.generated.h"

class ACreature;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIDynamicSpawningMenu : public UUIDynamicMenuTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ACreature>> LoadedCreatureClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClassLoadAsyncInProgress;
    
    UUIDynamicSpawningMenu();
    UFUNCTION(BlueprintCallable)
    void OnClassesLoadedCallback();
    
    UFUNCTION(BlueprintCallable)
    int32 DerivedClasses(TSoftClassPtr<ACreature> ClassRef);
    
};

