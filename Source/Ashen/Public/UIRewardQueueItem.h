#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AshenUserWidget.h"
#include "ERewardType.h"
#include "UObject/NoExportTypes.h"
#include "UIRewardQueueItem.generated.h"

class UPaperSprite;
class UItemBase;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIRewardQueueItem : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* RewardItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemBase> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayTextAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayTextItemPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayTextItemSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERewardType, FText> RewardTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERewardType, FText> RewardTextsAlternatives;
    
    UUIRewardQueueItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetPosition(FVector2D RelativePosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDataFinalised();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetItemIcon() const;
    
};

