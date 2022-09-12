#pragma once
#include "CoreMinimal.h"
#include "UIDynamicMenuOption.h"
#include "UIDebugSpawnMenuOption.generated.h"

class ACreature;
class UImage;
class UHorizontalBox;
class AAISpawnBase;
class UTextBlock;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIDebugSpawnMenuOption : public UUIDynamicMenuOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACreature> SpawnedClassTypeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAISpawnBase> SpawnerClassRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ACreature>> CreaturesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpawnedClassTypeRefAsName;
    
    UUIDebugSpawnMenuOption();
    UFUNCTION(BlueprintCallable)
    void SetupComponents(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UUserWidget* _GlowComponent, UImage* _HoverHighlight, UImage* _PressHighlight);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool Selected);
    
    UFUNCTION(BlueprintCallable)
    void SetPressed(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void SetGlow(bool Visible);
    
};

